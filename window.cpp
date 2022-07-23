#include "window.h"

Window::Window(QWidget *parent):QWidget(parent){
    QVBoxLayout* mainLayout = new QVBoxLayout;
    QHBoxLayout* menuLayout=new QHBoxLayout;
    QGridLayout* buttonsLayout=new QGridLayout;
    setMouseTracking(true);
    initMenu(mainLayout);
    initButtons(buttonsLayout);
    mainLayout->addLayout(menuLayout);
    mainLayout->addLayout(buttonsLayout);
    mainLayout->setSpacing(0);
    setLayout(mainLayout);
    resize(QSize(1280,720));
}

void Window::initButtons(QGridLayout* btL){
    singleAudioTest=new TrumpetButton("Test your audio here!");
    leftAudioTest=new TrumpetButton("Test the left channel here!");
    rightAudioTest=new TrumpetButton("Test the right channel here!");
    doubleAudioTest=new TrumpetButton("Test your audio in a fancy way here!");
    connect(singleAudioTest,SIGNAL(clicked()),this,SLOT(singleTest()));
    connect(leftAudioTest,SIGNAL(clicked()),this,SLOT(leftTest()));
    connect(rightAudioTest,SIGNAL(clicked()),this,SLOT(rightTest()));
    connect(doubleAudioTest,SIGNAL(clicked()),this,SLOT(doubleTest()));
    connect(singleAudioTest,SIGNAL(hovered()),this,SLOT(hoverSingle()));
    connect(leftAudioTest,SIGNAL(hovered()),this,SLOT(hoverLeft()));
    connect(rightAudioTest,SIGNAL(hovered()),this,SLOT(hoverRight()));
    connect(doubleAudioTest,SIGNAL(hovered()),this,SLOT(hoverDouble()));
    btL->addWidget(singleAudioTest,0,1);
    btL->addWidget(leftAudioTest,1,1);
    btL->addWidget(rightAudioTest,2,1);
    btL->addWidget(doubleAudioTest,3,1);
    btL->setColumnStretch(0,1);
    btL->setColumnStretch(2,1);
}

void Window::singleTest(){
    QSound::play("./audio/trumpet.wav");
}

void Window::leftTest(){
    QSound::play("./audio/trumpetSX.wav");
}

void Window::rightTest(){
    QSound::play("./audio/trumpetDX.wav");
}

void Window::doubleTest(){
    QSound::play("./audio/trumpetHarmonised.wav");
}

void Window::hoverSingle(){
    singleAudioTest->setDisabled(false);
    leftAudioTest->setDisabled(true);
    rightAudioTest->setDisabled(true);
    doubleAudioTest->setDisabled(true);
}

void Window::hoverLeft(){
    singleAudioTest->setDisabled(true);
    leftAudioTest->setDisabled(false);
    rightAudioTest->setDisabled(true);
    doubleAudioTest->setDisabled(true);
}

void Window::hoverRight(){
    singleAudioTest->setDisabled(true);
    leftAudioTest->setDisabled(true);
    rightAudioTest->setDisabled(false);
    doubleAudioTest->setDisabled(true);
}

void Window::hoverDouble(){
    singleAudioTest->setDisabled(true);
    leftAudioTest->setDisabled(true);
    rightAudioTest->setDisabled(true);
    doubleAudioTest->setDisabled(false);
}

void Window::initMenu(QVBoxLayout* mL){
    QMenuBar* menuBar = new QMenuBar(this);
    about=new QMenu("About...",menuBar);
    about->addAction(new QAction("About Trumpet Test Audio...",about));
    connect(about->actions().at(0),SIGNAL(triggered()),this,SLOT(showAboutDialog()));
    menuBar->addMenu(about);
    mL->addWidget(menuBar);
}

void Window::showAboutDialog(){
    QMessageBox::about(this,"Trumpet Test Audio","Utility software for testing the device's audio. Developed with Qt 5.9.5");
}
