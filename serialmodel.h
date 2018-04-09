#ifndef SERIALMODEL_H
#define SERIALMODEL_H

#include <QDebug>
#include <QObject>
#include <QSerialPort>

#define DEV_PATH1 "/dev/ttySAC1"

class SerialModel: public QObject
{
    Q_OBJECT
public:
    SerialModel(QObject *parent = 0);
    ~SerialModel();
    void rfid_write(int i);
private slots:
    void read_data();
signals:
    void rfid_data(QByteArray  data);
private:
    unsigned char CalBCC(unsigned char * buf, int n);
    QSerialPort *mSerial;
    unsigned char data[16];
};

#endif // SERIALMODEL_H
