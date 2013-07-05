#include <QCoreApplication>
#include <QStringList>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    
    QStringList List;
    QString Line = "a,b,c,d,e,f,g";
    List = Line.split(",");
    List.replaceInStrings("b","batman");
   QString after =  List.join(",");
            qDebug ()<< after;
//    foreach(QString itm,List)
//    {
//        qDebug()<<itm;
//    }after

    return a.exec();
}
