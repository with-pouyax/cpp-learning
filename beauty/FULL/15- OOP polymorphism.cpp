#include <iostream>
#include <list>

class YouTubeChannel {
private:
	std::string Name;
	int SubscribersCount;
	std::list<std::string> PublishedVideoTitles;
protected:
	std::string OwnerName;
    int ContentQuality;

public:
	YouTubeChannel(std::string name, std::string ownerName){
		name = name;
		ownerName = ownerName;
        ContentQuality = 0;
		SubscribersCount = 0;
	}

	void Subscribe(){
		SubscribersCount++;
	}

	void Unsubscribe(){
		if(SubscribersCount > 0)
			SubscribersCount--;
	}

	void PublishedVideo(std::string title) {
		PublishedVideoTitles.push_back(title);
	}

    void  checkAnalytics(){
	    if (ContentQuality < 5 )
		    std::cout << Name << "has bad quality content" << std::endl;
	    else
		    std::cout << Name << "has good content" << std::endl; 
	}

	void GetInfo()
	{
		std::cout << "Name: " << Name << std::endl;
		std::cout << "Owner: " << OwnerName << std::endl;
		std::cout << "Subscribers Number: " << SubscribersCount << std::endl;
		std::cout << "videos: " << std::endl;
		// for(std::string videoTitle : PublishedVideoTitles ) // this is only possible in c++11 and later
			// std::cout << videoTitle << std::endl;
	}
};


class CookingYouTubeChannel:public YouTubeChannel{
public:
	CookingYouTubeChannel(std::string name, std::string ownerName):YouTubeChannel(name, ownerName){

	}
	void Practice() {
		std::cout << OwnerName <<"practicing cooking, learning new recipes, exploring with spices..." << std::endl;
        ContentQuality++;
    }
};

class SingersYouTubeChannel:public YouTubeChannel{
public:
	SingersYouTubeChannel(std::string name, std::string ownerName):YouTubeChannel(name, ownerName){

	}
	void Practice() {
		std::cout << OwnerName <<"is taking singing classes, learning new songs, learning how to dance..." << std::endl;
        ContentQuality++;
    }
};



int main ()
{
	CookingYouTubeChannel cookingYtChannel("Amy's Kitchen", "Amy");
    SingersYouTubeChannel singersYtChannel("john's sings", "john");
	
	cookingYtChannel.Practice();
	singersYtChannel.Practice();
	singersYtChannel.Practice();
	singersYtChannel.Practice();
	singersYtChannel.Practice();
	singersYtChannel.Practice();
	singersYtChannel.Practice();
	
	YouTubeChannel * yt1 = &cookingYtChannel;
	YouTubeChannel * yt2 = &singersYtChannel;
	
	yt1->checkAnalytics();
	yt2->checkAnalytics();
}
