#include "mainwindow.h"
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent) {
    auto* widget = new QWidget;
    auto* layout = new QVBoxLayout(widget);

    auto* button = new QPushButton("Sort");
    chart = new ChartView();

    layout->addWidget(chart);
    layout->addWidget(button);

    connect(button, &QPushButton::clicked, this, &MainWindow::onSortClicked);

    setCentralWidget(widget);
}

void MainWindow::onSortClicked() {
    chart->startSortAnimation();
}