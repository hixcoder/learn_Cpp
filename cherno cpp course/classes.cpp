#include "header.h"

// by default every thing inside the class is private
class Player
{
    public:
        int x;
        int y;
        int speed;
void    Move(int xa, int ya)
{
    x += xa * speed;
    y += ya * speed;
}
};


int main()
{
    int i;
    Player p1;

    p1.x = 0;
    p1.x = 20;
    p1.speed = 10;
    p1.Move(10, 50);
    printf("P1.x = %d\n", p1.x);
}