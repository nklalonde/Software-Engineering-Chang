#include "studentview.h"
#include "ui_studentview.h"

StudentView::StudentView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StudentView)
{
    ui->setupUi(this);
}

StudentView::~StudentView()
{
    delete ui;
}
