#ifndef UNIONJACK_H
#define UNIONJACK_H

#include <list>
#include "ishotstrategy.h"

class UnionJack : public IShotStrategy
{
public:
    UnionJack();
    virtual ~UnionJack();
    virtual void init(std::list<ShotTarget> remainingShots);
    virtual ShotTarget getNextShot();
};

#endif // UNIONJACK_H
