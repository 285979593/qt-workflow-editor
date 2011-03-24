#include <QtGui/QApplication>
#include "WEMain.h"

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    WEMain w;
    w.show();

    return a.exec();
}
