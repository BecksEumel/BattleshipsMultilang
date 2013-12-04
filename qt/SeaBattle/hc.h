#ifndef HC_H
#define HC_H

#include <QObject>
#include <communit.h>
#include <mapgenerator.h>

class HC : public QObject
{
    Q_OBJECT

private:
    CommUnit _commUnit;
    MapGenerator _mapGen;
public:
    explicit HC(QObject *parent = 0);
    void initialize ();
    void run();
    
signals:
    
public slots:
    
};

#endif // HC_H
