#pragma once

#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QTimer>
#include <QVector>

class ChartView : public QChartView {
    Q_OBJECT
public:
    ChartView(QWidget* parent = nullptr);
    void startSortAnimation();

private:
    QBarSeries* series;
    QVector<int> data;
    QTimer timer;
    int currentIndex;

private slots:
    void sortStep();
};