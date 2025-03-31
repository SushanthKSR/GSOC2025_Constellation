#pragma once
#include <QMainWindow>
#include <QPushButton>
#include "chartview.h"

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget* parent = nullptr);
private slots:
    void onSortClicked();
private:
    ChartView* chart;
};