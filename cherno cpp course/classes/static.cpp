#include "../header.h"

// when you use the static keyword inside a class 
//  with variables : means that this variable will be shared with all instances of this class
// and the same with methods, and you can also access those variables and methods without an instance.
class Message
{
public:
    static const char *message;
    const char *mes;

private:
    const char *m_message = mes;

public:
    static void    EnterName(char *str)
    {
        printf("hello %s\n", str);
    }
    void    EnterName2(char *str)
    {
        printf("hello %s ==> mes = %s\n", str, mes);
    }
};



// use static when you do not want to share the function outside this file
static void sayHello()
{
    printf("hello \n");
}
int main()
{
    Message mes;

    mes.mes = "how are you?";
    mes.EnterName2("higo");
    Message::EnterName("jiday");
    sayHello();
}