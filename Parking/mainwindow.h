#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QtSerialPort/QSerialPort>
#include <QMessageBox>
#include <QDebug>
//#include <QTimer>
//#include <QPaintEvent>
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void lectureDonnees();
    void on_pushButton_clicked();   //Bouton Envoyer
    void on_pushButton_2_clicked(); //Bouton Open
    void on_pushButton_3_clicked(); //Bouton Close
    void on_pushButton_4_clicked(); //Bouton Effacer
    void on_pushButton_5_clicked();

private:
    Ui::MainWindow *ui;     //interface utilisateur
    QSerialPort *serial;
    QByteArray lire;
//    QTimer *timer;
};

#endif // MAINWINDOW_H
