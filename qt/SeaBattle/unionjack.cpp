#include <algorithm>
#include "unionjack.h"

UnionJack::UnionJack() : IShotStrategy()
{
    _lastShot = UNDEFINED;
    _remainingShots.clear();

    //MEMO @myself:
    //repair this shameful part of "code"
    _strategy.push_front(A1);
    _strategy.push_front(B2);
    _strategy.push_front(C3);
    _strategy.push_front(D4);
    _strategy.push_front(E5);
    _strategy.push_front(F6);
    _strategy.push_front(G7);
    _strategy.push_front(H8);
    _strategy.push_front(I9);
    _strategy.push_front(J10);
    _strategy.push_front(A10);
    _strategy.push_front(B9);
    _strategy.push_front(C8);
    _strategy.push_front(D7);
    _strategy.push_front(E6);
    _strategy.push_front(F5);
    _strategy.push_front(G4);
    _strategy.push_front(H3);
    _strategy.push_front(I2);
    _strategy.push_front(J1);
    _strategy.push_front(E1);
    _strategy.push_front(F1);
    _strategy.push_front(E2);
    _strategy.push_front(F2);
    _strategy.push_front(E3);
    _strategy.push_front(F3);
    _strategy.push_front(E4);
    _strategy.push_front(F4);
    _strategy.push_front(E7);
    _strategy.push_front(F7);
    _strategy.push_front(E8);
    _strategy.push_front(F8);
    _strategy.push_front(E9);
    _strategy.push_front(F9);
    _strategy.push_front(E10);
    _strategy.push_front(F10);
    _strategy.push_front(A5);
    _strategy.push_front(A6);
    _strategy.push_front(B5);
    _strategy.push_front(B6);
    _strategy.push_front(C5);
    _strategy.push_front(C6);
    _strategy.push_front(D5);
    _strategy.push_front(D6);
    _strategy.push_front(G5);
    _strategy.push_front(G6);
    _strategy.push_front(H5);
    _strategy.push_front(H6);
    _strategy.push_front(I5);
    _strategy.push_front(I6);
    _strategy.push_front(J5);
    _strategy.push_front(J6);
}

UnionJack::~UnionJack()
{
    _strategy.clear();
    _remainingShots.clear();
}

void UnionJack::init(std::list<ShotTarget> remainingShots)
{
    _remainingShots.clear();
    _remainingShots.merge(remainingShots);
}

ShotTarget UnionJack::getNextShot()
{
    std::list<ShotTarget>::iterator it = _strategy.begin();

    while (it != _strategy.end())
    {
        if (std::find(_remainingShots.begin(), _remainingShots.end(), *it) != _remainingShots.end())
        {
            return *it;
        }
        ++it;
    }
    return UNDEFINED;
}
