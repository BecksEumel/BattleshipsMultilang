#ifndef SHIP_H
#define SHIP_H

class Ship
{
private:
    int _length;
    int _startx;
    int _starty;
    bool _vertical;

public:
    explicit Ship();
    void setPos (int sx, int sy, bool vertical, int length);
    bool hit (int x, int y);
};
#endif // SHIP_H
