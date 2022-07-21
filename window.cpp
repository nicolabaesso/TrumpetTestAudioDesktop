#include "window.h"

Window::Window(QWidget *parent):QWidget(parent){
    QVBoxLayout* mainLayout = new QVBoxLayout;
    QHBoxLayout* menuLayout=new QHBoxLayout;
    QGridLayout* buttonsLayout=new QGridLayout;
    initButtons(buttonsLayout);
    mainLayout->addLayout(menuLayout);
    mainLayout->addLayout(buttonsLayout);
    mainLayout->setSpacing(0);
    setLayout(mainLayout);
    resize(QSize(1280,720));
}

void Window::initButtons(QGridLayout* btL){
    singleAudioTest=new QPushButton("Test your audio here!");
    leftAudioTest=new QPushButton("Test the left channel here!");
    rightAudioTest=new QPushButton("Test the right channel here!");
    doubleAudioTest=new QPushButton("Test your audio in a fancy way here!");
    btL->addWidget(singleAudioTest,0,1);
    btL->addWidget(leftAudioTest,1,1);
    btL->addWidget(rightAudioTest,2,1);
    btL->addWidget(doubleAudioTest,3,1);
}
