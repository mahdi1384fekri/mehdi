#include "myclient.h"


myclient::myclient(QWidget *parent)
    : QWidget(parent)

{
    mainlayot = new QVBoxLayout();
    pbnConnect = new QPushButton("Connect");
    ted = new QTextEdit("press to connect");
     setLayout(mainlayot);
    mainlayot->addWidget(pbnConnect);
    mainlayot->addWidget(ted);

    connect(pbnConnect,SIGNAL(clicked(bool)),this,SLOT(connectingttoserver()));
}

void myclient::connectingttoserver(){
    clientSocket = new QTcpSocket();
    clientSocket->connectToHost("127.0.0.1", 9000);
    ted->setText("connecting");
    connect(clientSocket, SIGNAL(connected()), this, SLOT(connectedtoserver()));
    connect(clientSocket, SIGNAL(bytesWritten(qint64)), this, SLOT(writingdata()));
    connect(clientSocket, SIGNAL(readyRead()), this, SLOT(readingdata()));
    connect(clientSocket, SIGNAL(disconnected()), this, SLOT(disconnectedfromserver()));


    // if (clientSocket->waitForConnected(3000)){
    //     clientSocket->write("hello \n");
    //     ted->append("sending data");
    //     clientSocket->waitForBytesWritten(2000);
    //     while (clientSocket->waitForReadyRead(-1)){
    //        QByteArray data = clientSocket->readAll();
    //         ted->append(data);
    //     }
    // }
    // else{

    // }
}

void myclient::readingdata(){
    QByteArray data = clientSocket->readAll();
    ted->append(data);
}
void myclient::writingdata(){
    ted->append("written succesfully ");
}
void myclient::connectedtoserver(){
    ted->append("connecting succesfully");
    clientSocket->write("hello \n");
}
void myclient::disconnectedfromserver(){
    ted->append("connection lost");
}
