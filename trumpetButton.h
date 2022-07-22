#ifndef TRUMPETBUTTON_H
#define TRUMPETBUTTON_H
#include <QPushButton>
class TrumpetButton: public QPushButton{
  Q_OBJECT
public:
    using QPushButton::QPushButton;
signals:
    void hovered();
protected:
    void enterEvent(QEvent* e);
};
#endif // TRUMPETBUTTON_H
