#include "WEMain.h"
#include "ui_WEMain.h"

WEMain::WEMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WEMain){
    ui->setupUi(this);
}

WEMain::~WEMain(){
    delete ui;
}
