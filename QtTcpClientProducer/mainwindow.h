#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <QTimer>
#include <QString>

namespace Ui {

    class MainWindow;

}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:

  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

public slots:
    /**
   * @brief tcpConnect: Realiza a conexão entre cliente produtor e servidor
   */
  void tcpConnect();
  /**
   * @brief tcpDisconnect: Encerra a conexão entre o cliente produtor e servidor
   */
  void tcpDisconnect();
  /**
   * @brief start: Inicia o temporizador
   */
  void start();
  /**
   * @brief stop: Finaliza o temporizador
   */
  void stop();
  /**
   * @brief timings
   */
  void timings();
  /**
   * @brief putData: Faz o envio dos dados aleatórios gerados
   */
  void putData();
 // void timerEvent(QTimerEvent *event);

private:
  /**
   * @brief ui: Ponteiro para o acesso aos componentes da class MainWindow
   */
  Ui::MainWindow *ui;
  /**
   * @brief socket: Ponteiro para o endereço de IP
   */
  QTcpSocket *socket;
  /**
   * @brief min,max: Valores minimos e maximos dos slides horizontais
   */
  int min,max;
  /**
   * @brief a: Temporizador
   */
  QTimer *a = new QTimer(this);
  /**
   * @brief d: Armazena string passada no IP
   */
  QString d;

};

#endif // MAINWINDOW_H
