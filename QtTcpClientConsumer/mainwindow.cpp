#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QTextBrowser>
#include <QListWidgetItem>
#include <QString>
#include <vector>
#include "plotter.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  socket = new QTcpSocket(this);
  inicia = true;

  connect(ui->pushButtonConnect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(tcpConnect()));

  connect(ui->pushButtonStart,
          SIGNAL(clicked(bool)),
          this,
          SLOT(start()));

  connect(ui->pushButtonStop,
          SIGNAL(clicked(bool)),
          this,
          SLOT(stop()));

  connect(ui->pushButtonDisconnect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(tcpDisconnect()));

  connect(ui->horizontalSliderSeg,
          SIGNAL(valueChanged(int)),
          ui->lcdNumberSeg,
          SLOT(display(int)));

  connect(ui->horizontalSliderSeg,
          SIGNAL(valueChanged(int)),
          this,
          SLOT(timings(int)));

  connect(ui->pushButtonUpdate,
          SIGNAL(clicked(bool)),
          this,
          SLOT(update()));

}

void MainWindow::tcpConnect()
{
    QString s;
    qDebug() << ui->plainTextEditAdress->toPlainText();
    socket->connectToHost(ui->plainTextEditAdress->toPlainText(),1234);
    if(socket->waitForConnected(3000)){
        s = "Connected";
        ui->statusBar->showMessage(s);
        qDebug() << "Connected";
    }
    else{
        s = "Disconnected";
        ui->statusBar->showMessage(s);
        qDebug() << "Disconnected";
    }
}

void MainWindow::tcpDisconnect()
{
    QString s;
    socket->close();
    s = "Disconnected";
    ui->statusBar->showMessage(s);
    qDebug() << "Disconnected";
}

void MainWindow::start()
{
    temporizador = startTimer(sec);
    inicia = true;
}

void MainWindow::stop()
{
    if(inicia){
      killTimer(temporizador);
      inicia = false;
    }
}

void MainWindow::update(){
    QString strList,str;

    if(socket->state() == QAbstractSocket::ConnectedState){
        if(socket->isOpen()){
            strList = "list\r\n";
            socket->write(strList.toStdString().c_str());
            socket->waitForBytesWritten();
            socket->waitForReadyRead();
            qDebug() << socket->bytesAvailable();
            ui->listWidgetAdress->clear();
            while(socket->bytesAvailable()){
                //separa o tempo recebido do servidor do valor dado
                str = socket->readLine().replace("\n","").replace("\r","");

                ui->listWidgetAdress->addItem(str);
           }

        }
    }

}

void MainWindow::timings(int seg)
{
   sec = seg*1000;
}

void MainWindow::timerEvent(QTimerEvent *event){
  QString str, ip;
  QByteArray array;
  QStringList list;
  qint64 thetime;
  QListWidgetItem* item = ui->listWidgetAdress->currentItem();

  vector<qint64> tempo;
  vector<int> valor;

  tempo.clear();
  valor.clear();

  qDebug() << "to get data...";
  if(socket->state() == QAbstractSocket::ConnectedState){
    if(socket->isOpen()){
      qDebug() << "reading...";
      ip = "get " + item->text() + " 30" + "\r\n";
      socket->write(ip.toStdString().c_str());

      socket->waitForBytesWritten();
      socket->waitForReadyRead();

      qDebug() << socket->bytesAvailable();
      while(socket->bytesAvailable()){
        str = socket->readLine().replace("\n","").replace("\r","");
        qDebug() << str;
        list = str.split(" ");
        if(list.size() == 2){
          bool ok;
          str = list.at(0);
          thetime = str.toLongLong(&ok);
          str = list.at(1);
          qDebug() << thetime << ": " << str;

          tempo.push_back(thetime);
          valor.push_back(str.toInt());
        }
        if(tempo.size()==30){
            qDebug() << "Entrei Aqui!";
            ui->widgetPlotter->plotGrafico(tempo,valor);
        }
      }
    }
  }
}
MainWindow::~MainWindow()
{
  delete socket;
  delete ui;
}
