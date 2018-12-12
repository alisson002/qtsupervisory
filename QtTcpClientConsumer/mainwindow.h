#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>

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
  void tcpConnect();
  /**
   * @brief DisconnectAdress Classe para se desconectar do endereço
   */
  void tcpDisconnect();

  /**
   * @brief start Classe para começar a produzir os dados
   */
  void start();
  /**
   * @brief stop Classe para parar de produzir os dados
   */
  void stop();
  /**
   * @brief PegaSeg: Set o tempo entre uma chamada e outra
   * @param sec parametro do valor do segundo
   */
  void timings(int sec);
  /**
   * @brief update: Atualiza a lista de endereços possiveis para acessar
   */
  void update();
  void timerEvent(QTimerEvent *event);
private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
  bool inicia;
  int temporizador;
  int sec;
};

#endif // MAINWINDOW_H
