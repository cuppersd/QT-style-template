#include "mainwindow.h"
#include "quiwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
#if (QT_VERSION >= QT_VERSION_CHECK(5,6,0))
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QApplication a(argc, argv);
    a.setFont(QFont("Microsoft Yahei", 9));


    QUIWidget qui;
    qui.setStyle(QUIWidget::Style_PSBlack);
    MainWindow w;
    qui.setMainWidget(&w);
    qui.setTitle("图像标注");
    qui.setAlignment(Qt::AlignCenter);
    qui.setVisible(QUIWidget::BtnMenu,true);
    qui.show();



//    MainWindow w;
//    w.show();
    return a.exec();
}
