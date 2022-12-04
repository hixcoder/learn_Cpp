 #include "../header.h"

class Entity
{
public:
    float x,y;

    Entity()
    {
        x = 2.3f;
        y = 9.2f;
    } 

    Entity(float X, float Y)
    {
        x = X;
        y = Y;
    } 
    ~Entity()
    {
        printf("Destroy Entity!\n");
    }
    void    Move(float xa, float ya)
    {
        x += xa;
        y += ya;
    }
    void Print()
    {
        printf("x = %f y = %f\n", x, y);
    }
};

class Player : public Entity
{
public:
    const char *Name;

    void PrintName()
    {
        printf("my name is %s\n", Name);
    }
};

 int main()
 {
    // Entity e;
    Player p;

    p.Name = "salim";
    p.PrintName();
    p.Print();
    p.Move(10, 10);
    p.Print();
 }