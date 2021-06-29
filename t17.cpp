


#include <iostream>
using namespace std;
#include <list>
class YoutubeChannel {
  // all members of the class are private by default
private: // this is a modifier to be public the class
  string Name;
  int subscriberCount;
  list<string> publishedVideosTitles;
protected:
  string OwnerName; // this can be accesed by herence classes
public:
  YoutubeChannel(string name,string ownerName){
    Name = name;
    OwnerName=ownerName;
    subscriberCount=0;
  };
  void PublishVideo(string video){
    publishedVideosTitles.push_back(video);
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
class CookingYoutubeChannel:public YoutubeChannel{
  //public indica lo que sea public en YOutuchannel
  // lo sera en cookingYoutubeChannel
public:  
  CookingYoutubeChannel(string name,string ownerName):YoutubeChannel(name,ownerName){


  };
  void Practice(){
    cout<<"Practicing cooking..."<<endl;
  };
};
int main()
{
  YoutubeChannel ytChannel("Name of channel","name of owner");
  ytChannel.PublishVideo("video 1");
  ytChannel.PublishVideo("video 2");
  ytChannel.PublishVideo("video 3");
  ytChannel.GetInfo();
  YoutubeChannel ytchannel2("Name of channel2","name of owner2");
  ytchannel2.GetInfo();
  
  CookingYoutubeChannel yCookingChannel("Anys kitchen","Any");
  yCookingChannel.PublishVideo("last video");
  yCookingChannel.GetInfo();
  yCookingChannel.Practice();
  

}
