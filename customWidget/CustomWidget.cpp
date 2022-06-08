#include <QApplication>
#include <QPushButton>

#include "CustomWidget.h"

CustomWidget::CustomWidget(QWidget* parent) : QWidget(parent){
	QPushButton *button = new QPushButton("Quit", this); // button belongs to this widget
	button->resize(120, 35);

	this->resize(200, 60); // widget resize 200,60
	move(300, 300);

	connect(button, SIGNAL(clicked()), qApp, SLOT(quit())); // qApp functions interface of QApplication
}
