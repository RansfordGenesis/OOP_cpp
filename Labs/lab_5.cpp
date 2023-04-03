#include <iostream>
#include <list>

using namespace std;

class YoutubeChannel
{
    private:
    string Name;
    string OwnerName;
    int SubscriberCount;
    list<string> PublishedVideoTitles;

    YoutubeChannel(): SubscriberCount(0)
    {}

    void Subscribe(){
        SubscriberCount += 1;
    }
    void Unsubscribe(){
        if (SubscriberCount > 0){
            SubscriberCount -= 1;
        }else{
            SubscriberCount = 0;
        }
    }
    void set_name(string name, string ownerName){
        Name = name;
        OwnerName = ownerName;
    }
    string get_name(){
        return Name;
        return OwnerName;
    }
    void PublishVideo(){
        
    }





};