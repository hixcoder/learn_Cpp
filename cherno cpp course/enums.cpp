#include "header.h"

enum Colors : int
{
    RED = 150, BLUE, GREEN
};

enum Colors2 : char 
{
    R = 'f', G, Y
};

int A = 0;
int B = 1;
int C = 2;

class Classroom
{
    enum Classes : int  
    {
        class1 = 1,
        class2,
        class3
    };
public: 
    int classes;
private:
    int m_classes = class1;
    
public:
    void SetClass(int classNbr)
    {
        m_classes = classNbr;
        printf("now you are in class %d\n", m_classes);
    }
    void GoToClass(int newClass)
    {
        printf("you go from class %d to class %d\n",m_classes, newClass);
        m_classes = newClass;
    }
};



int main()
{
    Colors colors = GREEN;
    Colors2 colors2 = Y;
    Classroom student;
    // student.classes = 5;
    // student.SetClass(9);
    student.GoToClass(2);
    printf("colors: %d\n", colors);
    printf("colors: %c\n", colors2);
}
