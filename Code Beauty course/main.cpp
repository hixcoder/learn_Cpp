#include "header.hpp"

// all memebers of my class are private by default

// @ encapsulation:
// it means that all proprties(variables) inside a class should be private, and the only
// way to access them is by using methods. [all variables should be private]


// @ Inheritance:
// the YoutubeChannel class called the base class
// and the CookingYoutubeChannel class will be called a sub class because it inherite from the base class.


// @ polymorphism:
// describes the ability of an object to have multiple forms.
// that means that you could have two objects that inherite from the same base class
// those objects can have a method with the same name but defferent implementations(different behviors)

class YoutubeChannel
{
protected:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
    int contentQuality;

public:
    YoutubeChannel()
    {
        Name = "name";
        OwnerName = "ownerName";
        SubscribersCount = 0;
        contentQuality = 0;
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
        cout << "Subscribers: " << SubscribersCount << endl; 
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

    void CheckAnalytics()
    {
        if (contentQuality < 5)
            cout << OwnerName << "has bad quality content." << endl;
        else
            cout << OwnerName << "has good quality content." << endl;
    }
};

class CookingYoutubeChannel: public YoutubeChannel
{
public:
    CookingYoutubeChannel(string name, string ownerName): YoutubeChannel(name, ownerName){}
    void Practice()
    {
        cout << "Practice cooking with " << OwnerName << endl << endl;
        contentQuality++;
    }
};

class SingerYoutubeChannel: public YoutubeChannel
{
public:
    SingerYoutubeChannel(string name, string ownerName): YoutubeChannel(name, ownerName){}
    void Practice()
    {
        cout << "Practice Singing with " << OwnerName << endl << endl;
        contentQuality++;
    }
};

int main()
{
    YoutubeChannel *yt1, *yt2;
    CookingYoutubeChannel ytChannel1("Senko Art", "hix man");
    SingerYoutubeChannel ytChannel2("Samadi sings", "samadi rabie");

    ytChannel1.Subscribe();
    ytChannel1.Subscribe();
    ytChannel1.Subscribe();
    ytChannel1.GetInfo();
    ytChannel1.Practice();
    ytChannel1.Practice();
    ytChannel1.Practice();
    ytChannel1.Practice();
    ytChannel1.Practice();

    yt1 = &ytChannel1;
    yt2 = &ytChannel2;

    yt1->CheckAnalytics();
    yt2->CheckAnalytics();
}