#ifndef ROCORDS_H
#define ROCORDS_H
#include <QString>


class rocords
{
    QString _NN;
    int _LL;
    int _SS;

public:
    rocords();
    rocords(QString n,int l,int s){
        _NN=n;
        _LL=l;
        _SS=s;
    }

    QString NN();
    int LL();
    int SS();

};

#endif
