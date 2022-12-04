#include "header.hpp"

// all memebers of my class are private by default

// @ encapsulation:
// it means that all proprties(variables) inside a class should be private, and the only
// way to access them is by using methods. [all variables should be private]


// @ Inheritance:
// the YoutubeChannel class called the base class
// and the CookingYoutubeChannel class will be called a sub class because it inherite from the base class.

class YoutubeChannel
{
protected:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

public:
    YoutubeChannel()
    {
        Name = "name";
        OwnerName = "ownerName";
        SubscribersCount = 0;
    }
    YoutubeChannel(string name, string ownerName)
    {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
    }

    void GetInfo()
    {
        cout << "Name : " << Name << endl; 
        cout << "Owner: " << OwnerName << endl; 
        cout << "Subscribers: " << SubscribersCount << endl << endl; 
    }

    void Subscribe()
    {
        SubscribersCount++;
    }

     void Unsubscribe()
    {
        if (SubscribersCount > 0)
            SubscribersCount--;
        else
            SubscribersCount = 0;
    }
};

class CookingYoutubeChannel: public YoutubeChannel
{
public:
    CookingYoutubeChannel(string name, string ownerName): YoutubeChannel(name, ownerName){}
    void Practice()
    {
        cout << "Practice cooking with " << OwnerName << endl;
    }
};

int main()
{
    CookingYoutubeChannel ytChannel1("Senko Art", "hix man");
    ytChannel1.Subscribe();
    ytChannel1.Subscribe();
    ytChannel1.Subscribe();
    ytChannel1.GetInfo();
    ytChannel1.Practice();
}