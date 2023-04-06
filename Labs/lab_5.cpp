#include <iostream>
#include <list>

using namespace std;

class YoutubeChannel{
    private:
        string Name;
        string OwnerName;
        int SubscriberCount;
        list<string> PublishedVideoTitles;

    public: 
        
        YoutubeChannel(string name, string ownerName){
        Name = name;
        OwnerName = ownerName;
        SubscriberCount = 0;
        }
        
        void Subscribe(){
            SubscriberCount += 1;
        }
        
        void Unsubscribe(){
            if (SubscriberCount > 1)    SubscriberCount -= 1;
        }
        
        void set_name(string name){
            Name = name;
        }

        void get_name(){
            cout << "Youtube channel name is: " << Name << endl;
        }

        void set_Ownername(string ownerName){
            OwnerName = ownerName;
        }

        void get_Ownername(){
            cout << "Youtuber name is: " << OwnerName << endl;
        }

        void PublishVideo(string VideoTitle){
            PublishedVideoTitles.push_back(VideoTitle);
        }

        void GetInfo() {
            cout << "Name: " << Name << endl;
            cout << "Owner Name: " << OwnerName <<endl;
            cout << "Number of Subscribers: " <<SubscriberCount <<endl;
        }

};

int main()
{
    YoutubeChannel ytChannel("Tutorials", "Genesis");
    ytChannel.PublishVideo("Tutorial 1");
    ytChannel.Unsubscribe();

    for (int i = 0; i < 20; i++) {
        ytChannel.Subscribe();
    }

    ytChannel.GetInfo();

    return 0;
}