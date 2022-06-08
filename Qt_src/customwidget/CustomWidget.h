#ifndef __CUSTOM_WIDGET__
#define __CUSTOM_WIDGET__

#include <QWidget>

class CustomWidget : public QWidget {
    Q_OBJECT
  public:
      CustomWidget(QWidget *parent = 0);
public slots: // slot function shold be here
      void processClick();
signals:
      void widgetClick();
};

#endif // __CUSTOM_WIDGET__
