#ifndef MAPGENERATOR_H
#define MAPGENERATOR_H

#include <QObject>
#include <ship.h>
#include <list>

class BattleMap
{
private:
    bool _map[10][10];
//    Ship _bs_bunnythumper;
//    Ship _bc_ss;
//    Ship _bc_fs;
//    Ship _lc_rolb;
//    Ship _lc_mlb;
//    Ship _lc_lolb;
//    Ship _ss_wr;
//    Ship _ss_te;
//    Ship _ss_hb;
//    Ship _ss_fb;
    std::list<Ship> _ships;
public:
    const std::list<Ship>& getShips();
    bool wasAnyShipHit(int x, int y);


    // for debugging only
    std::string toString();
};

class MapGenerator : public QObject
{
    Q_OBJECT

private:


public:
    explicit MapGenerator(QObject *parent = 0);

    const BattleMap& generate ();
    BattleMap& addShip(Ship& ship);

    
signals:
    
public slots:
    
};

#endif // MAPGENERATOR_H
