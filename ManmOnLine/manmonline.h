#ifndef MANMONLINE_H
#define MANMONLINE_H

#include <QtWidgets/QWidget>
#include "ui_manmonline.h"

class ManmOnLine : public QWidget
{
	Q_OBJECT

public:
	ManmOnLine(QWidget *parent = 0);
	~ManmOnLine();

private:
	Ui::ManmOnLineClass ui;
};

#endif // MANMONLINE_H
