#ifndef MYCLIENT_H
#define MYCLIENT_H

#include <QWidget>
#include <QTextEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QTcpSocket>
#include <QTcpServer>

QT_BEGIN_NAMESPACE
namespace Ui {
class myclient;
}
QT_END_NAMESPACE

class myclient : public QWidget
{
    Q_OBJECT

public:
    myclient(QWidget *parent = nullptr);


private:
    QTextEdit * ted;
    QPushButton *pbnConnect;
    QVBoxLayout *mainlayot;
    QTcpSocket *clientSocket;

public slots:
    void connectingttoserver();
    void readingdata();
    void writingdata();
    void connectedtoserver();
    void disconnectedfromserver();


};
#endif // MYCLIENT_H
