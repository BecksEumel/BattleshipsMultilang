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
    virtual void init(std::list<ShotTarget> remainingShots) const = 0;
    virtual ShotTarget getNextShot () const = 0;
};

#endif // ISHOTSTRATEGY_H
