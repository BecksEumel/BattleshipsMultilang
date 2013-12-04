#include "mapgenerator.h"

MapGenerator::MapGenerator(QObject *parent) :
    QObject(parent)
{
}

bool BattleMap::wasAnyShipHit(int x, int y)
{
    bool result = false;
    std::list<Ship>::iterator it = _ships.begin();
    while (it != _ships.end())
    {
        result |= (*it).hit(x,y);
    }

    return result;
}
