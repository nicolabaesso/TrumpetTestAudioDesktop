#ifndef VIEW_H
#define VIEW_H
#include <QWidget>
#include <QMenu>
#include <QMenuBar>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QFrame>
#include <QMessageBox>
#include "trumpetButton.h"
#include <QSound>
#include <iostream>
#include <QIcon>

class Window: public QWidget{
  Q_OBJECT
private:
    QMenu* about;
    TrumpetButton* singleAudioTest;
    TrumpetButton* leftAudioTest;
    TrumpetButton* rightAudioTest;
    TrumpetButton* doubleAudioTest;

    void initButtons(QGridLayout *btL);
    void initMenu(QVBoxLayout* mL);
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
    void showAboutDialog();
};
#endif // VIEW_H
