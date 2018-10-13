#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "studentview.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_Login_clicked();

private:
    Ui::MainWindow *ui;
    StudentView *studentView;
};

#endif // MAINWINDOW_H
