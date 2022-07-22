#include "trumpetButton.h"

void TrumpetButton::enterEvent(QEvent *e){
    emit hovered();
    QPushButton::QWidget::enterEvent(e);
}
