#include "header.hpp"

// all memebers of my class are private by default

// @ encapsulation:
// it means that all proprties(variables) inside a class should be private, and the only
// way to access them is by using methods. [all variables should be private]
class YoutubeChannel
{
private:
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

int main()
{
    YoutubeChannel ytChannel1("Senko Art", "hix man");
    YoutubeChannel ytChannel2("Senko brother", "makos");
    ytChannel1.Subscribe();
    ytChannel1.Subscribe();
    ytChannel1.Subscribe();
    ytChannel1.GetInfo();
    ytChannel2.Unsubscribe();
    ytChannel2.GetInfo();
}