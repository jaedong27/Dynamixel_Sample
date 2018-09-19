#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSerialPort>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QSerialPort _serial_port;
    unsigned short update_crc(unsigned short crc_accum, unsigned char *data_blk_ptr, unsigned short data_blk_size);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushReboot_clicked();

    void on_pushButton_3_clicked();

    void on_horizontalSlider_actionTriggered(int action);

    void on_numspinbox_valueChanged(int arg1);

    void on_horizontalSlider_valueChanged(int value);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
