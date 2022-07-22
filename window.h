#ifndef VIEW_H
#define VIEW_H
#include <QWidget>
#include <QMenu>
#include <QMenuBar>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QFrame>
#include "trumpetButton.h"
#include <QSound>
#include <iostream>

class Window: public QWidget{
  Q_OBJECT
private:
    QMenu* file;
    QMenu* edit;
    QMenu* chart;
    QMenu* about;
    TrumpetButton* singleAudioTest;
    TrumpetButton* leftAudioTest;
    TrumpetButton* rightAudioTest;
    TrumpetButton* doubleAudioTest;

    void initButtons(QGridLayout *btL);
public:
    Window(QWidget *parent=nullptr);
private slots:
    void singleTest();
    void hoverSingle();
    void hoverLeft();
    void hoverRight();
    void hoverDouble();
    void leftTest();
    void rightTest();
    void doubleTest();
};
#endif // VIEW_H
