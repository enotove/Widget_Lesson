#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_progressBar_valueChanged(int value);

private:
    Ui::MainWindow *ui;
    uint valueProgressBar = 0;
    uint maxValueProgressBar = 10;
};
#endif // MAINWINDOW_H
