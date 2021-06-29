


#include <iostream>
using namespace std;
#include <list>
class YoutubeChannel {
  // all members of the class are private by default
public: // this is a modifier to be public the class
  string Name;
  string OwnerName;
  int subscriberCount;
  list<string> publishedVideosTitles;

  YoutubeChannel(string name,string ownerName){
    Name = name;
    OwnerName=ownerName;

    subscriberCount=0;
  };
  void GetInfo(){
  cout << "Name: " << Name << endl;
  cout << "Owner: " << OwnerName << endl;
  cout << "Count : " << subscriberCount << endl;
  cout << "Videos :"<< endl;
  for(string videoTitle: publishedVideosTitles){
    cout<< videoTitle << endl;
  }  
  };
};

int main()
{
  YoutubeChannel ytChannel("Name of channel","name of owner");
  ytChannel.publishedVideosTitles.push_back("video 1");
  ytChannel.publishedVideosTitles.push_back("video 2");
  ytChannel.publishedVideosTitles.push_back("video 3");
  ytChannel.GetInfo();
  YoutubeChannel ytchannel2("Name of channel2","name of owner2");
  ytchannel2.GetInfo();
  
  
  

}
