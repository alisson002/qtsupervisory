#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QString>
#include <QMessageBox>
#include <QScrollBar>


MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent), ui(new Ui::MainWindow){
  ui->setupUi(this);
  socket = new QTcpSocket(this);

  //connect(ui->pushButtonPut,
          //SIGNAL(clicked(bool)),
         // this,
         // SLOT(putData()));

  connect(ui->pushButtonConnect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(tcpConnect()));

  connect(ui->pushButtonDisconnect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(tcpDisconnect()));

  connect(ui->pushButtonStart,
              SIGNAL(clicked(bool)),
              this,
              SLOT(start()));

  connect(ui->pushButtonStop,
              SIGNAL(clicked(bool)),
              this,
              SLOT(stop()));

  connect(ui->horizontalSliderTimings,
              SIGNAL(valueChanged(int)),
              this,
              SLOT(timings()));
}

void MainWindow::tcpConnect(){

  socket->connectToHost("127.0.0.1",1234);

  if(socket->waitForConnected(3000)){

    qDebug() << "Connected";
    ui->label_4->setText("Conectado");

  }
  else{

      qDebug() << "Desconectado";
      ui->label_4->setText("Desconectado");

}

}

void MainWindow::tcpDisconnect(){

  socket->disconnectFromHost();

    qDebug() << "Disconnected";
    ui->label_4->setText("Desconectado");
    a->stop();

}

void MainWindow::start()
{
    if(socket->waitForConnected(0)){
            a->start(ui->horizontalSliderTimings->value()*1000);
        }
}

void MainWindow::stop()
{
    a->stop();
}

void MainWindow::timings(){
    a->setInterval(ui->horizontalSliderTimings->value()*1000);
}

void MainWindow::putData(){

    int min,max;
if(socket->state() == QAbstractSocket::ConnectedState){
    min = ui->lcdNumberMIN->value();
    max = ui->lcdNumberMAX->value();
    if(max < min){
       int aux = min;
        min = max;
        max = aux;
    }
    QString s;
    qint64 msecdate;

        if(socket->state()== QAbstractSocket::ConnectedState){

                msecdate = QDateTime::currentDateTime().toMSecsSinceEpoch();
                s = "set "+ QString::number(msecdate) + " " + QString::number( (qrand()%(max - min)) + min )+"\r\n";

                d.append(s);
                ui->textBrowser->setText(s);
                QScrollBar *qsb = ui->textBrowser->verticalScrollBar();
                qsb->setValue(qsb->maximum());

                  qDebug() << s;
                  qDebug() << socket->write(s.toStdString().c_str()) << " bytes written";
                  if(socket->waitForBytesWritten(3000)){
                    qDebug() << "wrote";
                  }
              }
}
}

/*void MainWindow::timerEvent(QTimerEvent *event)
{
    QString msg = QString::number((qrand()%(max - min + 1)) + min);
    ui->textBrowser->append(msg);
    qDebug() << msg ;
}*/

MainWindow::~MainWindow(){

  delete socket;
  delete ui;

}
