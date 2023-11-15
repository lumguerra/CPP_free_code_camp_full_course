#include <iostream>
#include <list>

using namespace std;

class YoutubeChannel {
    private:
        string Name;
        string ChannelName;
        int SubscriberCount;
        list<string> PublishedVideoTitles; 

    public:
        YoutubeChannel(string_view p_Name, string_view p_ChannelName){
            Name = p_Name;
            ChannelName = p_ChannelName;
        }
        void GetInfo(){
            cout << "Name: " << Name << "\n";
            cout << "Channel name: " << ChannelName << "\n";
            cout << "subscriber count: " << SubscriberCount << "\n";
            cout << "Videos: " << "\n";
            for (string videoTitle: PublishedVideoTitles){
                cout << videoTitle << "\n";
            }
        }
};

int main(){

    list<string>Names;

    Names.push_front("lucas");
    Names.push_front("Sarah");
    Names.push_back("Oswaldo");
    Names.push_back("fabio");

    list<string>::iterator itr;
    itr = Names.begin();

    for(itr; itr != Names.end(); itr++ ){
        cout << *itr << "\n"; 
    }

    return 0;
}
