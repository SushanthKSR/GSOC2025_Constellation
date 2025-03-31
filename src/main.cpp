/* This setup provides a visual to demonstrate how sorting
 * algorithms work in real time.
 */
#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[]) {
    
    // Initializing the Qt application with command-line arguments
    QApplication app(argc, argv);

    // Instance of the main app window
    MainWindow window;

    window.show();

    return app.exec();
}