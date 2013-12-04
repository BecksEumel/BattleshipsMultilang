#ifndef ISHOTSTRATEGY_H
#define ISHOTSTRATEGY_H

#include <list>
#include "shottarget.h"

class IShotStrategy
{
protected:
    ShotTarget _lastShot;
    std::list<ShotTarget> _remainingShots;
    std::list<ShotTarget> _strategy;
public:
    virtual ~IShotStrategy(){}
    virtual void init(std::list<ShotTarget> remainingShots);
    virtual ShotTarget getNextShot ();
};

#endif // ISHOTSTRATEGY_H
