 #include "../header.h"

class Entity
{
public:
    float x,y;

    // this is the constructor
    Entity()
    {
        x = 5.2f;
        y = 93.2f;
    }
    // I can create many constructors overloaded
    Entity(float X, float Y)
    {
        x = X;
        y = Y;
    }

    void Print()
    {
        printf("x = %f y = %f\n", x, y);
    }
};

 int main()
 {
    Entity e(8.1, 3.2);

    MutiplyAndLog(e.x, e.y);
    e.Print();
 }