#include "header.hpp"

// all memebers of my class are private by default
class YoutubeChannel
{
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

    YoutubeChannel(string name, string ownerName)
    {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
    }
};

int main()
{
    YoutubeChannel ytChannel1("Senko Art", "hix man");
    YoutubeChannel ytChannel2("Senko brother", "makos");

    ytChannel1.SubscribersCount = 20000;

    cout << "Name: " << ytChannel1.Name << endl; 
    cout << "Owner: " << ytChannel1.OwnerName << endl << endl; 

    cout << "Name: " << ytChannel2.Name << endl; 
    cout << "Owner: " << ytChannel2.OwnerName << endl; 
}