#include <iostream>
#include <list>

class YouTubeChannel {
private:
	std::string Name;
	int SubscribersCount;
	std::list<std::string> PublishedVideoTitles;
protected:
	std::string OwnerName;
public:
	YouTubeChannel(std::string name, std::string ownerName){
		name = name;
		ownerName = ownerName;
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


class CookingYoutubeChannel:public YouTubeChannel{
public:
	CookingYoutubeChannel(std::string name, std::string ownerName):YouTubeChannel(name, ownerName){

	}
	void Practice() {
		std::cout << OwnerName <<"practicing cooking, learning new recipes, exploring with spices..." << std::endl;
	}
};



int main()
{
	CookingYoutubeChannel CookingYtChannel("amy's kitchen", "Amy");
	CookingYoutubeChannel CookingYtChannel2("johny's kitchen", "johny");

	// CookingYtChannel.PublishedVideo("Apple pie");
	// CookingYtChannel.PublishedVideo("Choclate key");
	CookingYtChannel.Subscribe();
	CookingYtChannel.Subscribe();
	CookingYtChannel.GetInfo();
	CookingYtChannel.Practice();
	CookingYtChannel2.Practice();

}
