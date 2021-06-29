
// POLIMORF.

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
  int ContentQuality;
public:
  YoutubeChannel(string name,string ownerName){
    Name = name;
    OwnerName=ownerName;
    subscriberCount=0;
    ContentQuality=0;
  };
  void CheckAnalytics(){
    if(ContentQuality<5)
      cout<< Name << " has bad content quality" << endl;
    else
      cout<< Name << " has great content quality" << endl;
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
//////////////////////////////////////////////////////////////////////

class CookingYoutubeChannel:public YoutubeChannel{
  //public indica lo que sea public en YOutuchannel
  // lo sera en cookingYoutubeChannel
public:  
  CookingYoutubeChannel(string name,string ownerName):YoutubeChannel(name,ownerName){};
  void Practice(){
    cout<<OwnerName <<"Practicing cooking..."<<endl;
    ContentQuality++;
  };
};

class SingersYoutubeChannel:public YoutubeChannel{
  //public indica lo que sea public en YOutuchannel
  // lo sera en cookingYoutubeChannel
public:  
  SingersYoutubeChannel(string name,string ownerName):YoutubeChannel(name,ownerName){};
  void Practice(){
    cout<<OwnerName << "Singing new songs ..."<<endl;
    ContentQuality++;
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
  //yCookingChannel.Practice();
  SingersYoutubeChannel singersYChannel("John songs","John");

  yCookingChannel.Practice();
  singersYChannel.Practice();
  yCookingChannel.Practice();
  singersYChannel.Practice();
  singersYChannel.Practice();
  singersYChannel.Practice();
  singersYChannel.Practice();
  singersYChannel.Practice();
  singersYChannel.Practice();
  singersYChannel.Practice();
  singersYChannel.Practice();
  YoutubeChannel* y1 = &yCookingChannel;
  YoutubeChannel* y2= &singersYChannel;

  y1->CheckAnalytics();
  y2->CheckAnalytics();
  
  
  
  
  

}
