#include "mainwindow.h"

#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QFile file(":/styles/styles.css");
    file.open(QFile::ReadOnly);
    QString strCSS = QLatin1String(file.readAll());
    qApp->setStyleSheet(strCSS);

    w.show();
    return a.exec();
}
