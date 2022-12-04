 #include "../header.h"

class Entity
{
public:
    float x,y;

    Entity()
    {
        x = 5.2f;
        y = 93.2f;
        Log("Create Entity!");
    }

    Entity(float X, float Y)
    {
        x = X;
        y = Y;
    }

    // used when the class instance is gone
    // to clean or unitialize things that you allocate or initialize in the constructor 
    ~Entity()
    {
        Log("Destroy Entity!");
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