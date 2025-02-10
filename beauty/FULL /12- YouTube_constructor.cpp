#include <iostream>
#include <list>

class YouTubeChannel {
public:
	std::string Name;
	std::string OwnerName;
	int SubscribersCount;
	std::list<std::string> PublishedVideoTitles;

	YouTubeChannel(std::string name, std::string ownerName){
		name = name;
		ownerName = ownerName;
		SubscribersCount = 0;
	}

	void GetInfo()
	{
		std::cout << "Name: " << Name << std::endl;
		std::cout << "Name: " << OwnerName << std::endl;
		std::cout << "Name: " << SubscribersCount << std::endl;
		std::cout << "videos:" << std::endl;
		for(std::string videoTitle : PublishedVideoTitles ) // this is only possible in c++11 and later
			std::cout << videoTitle << std::endl;
	}
};



int main()
{
	YouTubeChannel ytChannel("with.pouyax", "pouya");
	
	ytChannel.PublishedVideoTitles.push_back("who am I ?");
	ytChannel.PublishedVideoTitles.push_back("lets go");
	ytChannel.PublishedVideoTitles.push_back("first interview");
	
	ytChannel.GetInfo();
}
