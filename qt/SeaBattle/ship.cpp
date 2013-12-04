#include <ship.h>

Ship::Ship()
{

}

void Ship::setPos (int sx, int sy, bool vertical, int length)
{
    _startx = sx;
    _starty = sy;
    _vertical = vertical;
    _length = length;
}

bool Ship::hit(int x, int y)
{
    if (x == _startx && y == _starty)
        return true;
    if (   x == _startx
        && (   _vertical
            && (   y >= _starty
                && y <= _starty + _length)))
        return true;
    if (   y == _starty
        && (   !_vertical
            && (   x >= _startx
                && x <= _startx + _length)))
        return true;
    return false;
}
