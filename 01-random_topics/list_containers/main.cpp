#include <iostream>
#include <list>

using namespace std;

class YoutubeChannel {
    private:
        string Name;
        string ChannelName;
        int SubscriberCount {0};
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

class CookingYoutubeChannel: YoutubeChannel{
    CookingYoutubeChannel(string_view p_name ,string_view p_channel):YoutubeChannel(p_name, p_channel);
};

int main(){

    YoutubeChannel Yt1("Jonny", "Coookers");
    Yt1.GetInfo();
    CookingYoutubeChannel Cy1("Lucas", "Lucas Cooker");
    Cy1.GetInfo();


    return 0;
}
