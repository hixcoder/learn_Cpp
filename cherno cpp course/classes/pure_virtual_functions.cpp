#include "../header.h"

// if you make the MakeSound() function equal to 0 , it becomes a pure virtual function
// and the Instrument class becomes an abstract class
// @definition :
//      * abstract class: is a class that have at least one pure virtual function.

class Instrument
{
public:
// now, any class that inherite the Instrument class must provide its own implementation
// of the MakeSound() function.
    virtual void MakeSound() = 0;
};

class Piano : public Instrument
{
public:
    void MakeSound()
    {
        printf("Piano playing...\n");
    }
};

class Gitar : public Instrument
{
public:
    void MakeSound()
    {
        printf("Gitar playing...\n");
    }
};

int main()
{
    Piano i1;
    Gitar i2;
    i1.MakeSound();
    i2.MakeSound();
}