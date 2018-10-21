#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "studentview.h"
//#include <QPixmap>

// THIS IS MY RANDOM COMMENT
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("D:/FullGator.png");
    int w = ui->label_pic->width();
    int h = ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Login_clicked()
{
    QString username = ui->lineEdit_Username->text();
    QString password = ui->lineEdit_Password->text();

     // We need to varify usernames and passwords at this point

    if(username == "test" && password == "test")
    {

        //QMessageBox::information(this, "Login", "Username and Password is correct.");  //not needed
        hide();  // Hides the Login box
       studentView = new StudentView(this);
        studentView->show();  // opens student view
     }

    else
    {
        QMessageBox::warning (this, "Login", "Username and Password is not correct.");
        // Need a loop to return to Login after warning is issued
    }
}
