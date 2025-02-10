#include <iostream>
#include <list>

class YouTubeChannel {
private:
	std::string Name;
	std::string OwnerName;
	int SubscribersCount;
	std::list<std::string> PublishedVideoTitles;
public:
	YouTubeChannel(std::string name, std::string ownerName){
		name = name;
		ownerName = ownerName;
		SubscribersCount = 0;
	}

	void name(std::string name){
		Name = name;
	}

	void owner(std::string name){
		OwnerName = name;
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
		for(std::string videoTitle : PublishedVideoTitles ) // this is only possible in c++11 and later
			std::cout << videoTitle << std::endl;
	}
};



int main()
{
	YouTubeChannel ytChannel("with.pouyax", "pouya");
	ytChannel.name("42");
	ytChannel.owner("Marta");
	ytChannel.Subscribe();
	ytChannel.Subscribe();
	ytChannel.Subscribe();
	ytChannel.Unsubscribe();
	ytChannel.PublishedVideo("hi");
	ytChannel.PublishedVideo("bye");

	
	ytChannel.GetInfo();
}
