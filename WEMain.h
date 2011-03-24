#ifndef WEMAIN_H
#define WEMAIN_H

#include <QMainWindow>

namespace Ui {
    class WEMain;
}

class WEMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit WEMain(QWidget *parent = 0);
    ~WEMain();

private:
    Ui::WEMain *ui;
};

#endif // WEMAIN_H
