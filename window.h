#ifndef VIEW_H
#define VIEW_H
#include <QWidget>
#include <QMenu>
#include <QMenuBar>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QFrame>
#include <QPushButton>

class Controller;

class Window: public QWidget{
  Q_OBJECT
private:
    QMenu* file;
    QMenu* edit;
    QMenu* chart;
    QMenu* about;
    QPushButton* singleAudioTest;
    QPushButton* leftAudioTest;
    QPushButton* rightAudioTest;
    QPushButton* doubleAudioTest;

    void initButtons(QGridLayout *btL);
public:
    Window(QWidget *parent=nullptr);

private slots:

};
#endif // VIEW_H
