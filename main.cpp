#include "window.h"
#include <QApplication>

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    Window w;
    w.setWindowIcon(QIcon("logo/trumpet.png"));
    w.show();
    return a.exec();
}
