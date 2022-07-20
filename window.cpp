#include "window.h"

Window::Window(QWidget *parent):QWidget(parent){
    QVBoxLayout* mainLayout = new QVBoxLayout;
    QHBoxLayout* menuLayout=new QHBoxLayout;
    QHBoxLayout* toolbarLayout=new QHBoxLayout;
    QHBoxLayout* containerLayout=new QHBoxLayout;
    containerLayout->addLayout(toolbarLayout);
    mainLayout->addLayout(menuLayout);
    mainLayout->addLayout(containerLayout);
    mainLayout->setSpacing(0);
    setLayout(mainLayout);
    resize(QSize(1280,720));
}
