#include "../header.h"

class Instrument
{
public:
// virtual function says : hey if there is implementation of this function in the sub class 
// please excute it , if no then use the implementation here.
    virtual void MakeSound()
    {
        printf("Instrument playing...\n");
    }
};

class Piano : public Instrument
{
public:
    void MakeSound()
    {
        printf("Piano playing...\n");
    }
};

int main()
{
    Instrument *i1 = new Piano();
    i1->MakeSound();
}