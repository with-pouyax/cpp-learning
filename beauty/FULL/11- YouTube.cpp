#include <iostream>
#include <list>

class YouTubeChannel {
public:
	std::string Name;
	std::string OwnerName;
	int SubscribersCount;
	std::list<std::string> PublishedVideoTitles;
};

int main()
{
	YouTubeChannel ytChannel;
	ytChannel.Name = "with.pouyax";
	ytChannel.OwnerName = "pouya";
	ytChannel.SubscribersCount = 1800;
	ytChannel.PublishedVideoTitles = {"who am I ?", "lets go", "first interview"}; // this is only possible in c++11 and later
	
	std::cout << "Name: " << ytChannel.Name << std::endl;
	std::cout << "Name: " << ytChannel.OwnerName << std::endl;
	std::cout << "Name: " << ytChannel.SubscribersCount << std::endl;
	std::cout << "videos:" << std::endl;
	for(std::string videoTitle : ytChannel.PublishedVideoTitles ) // this is only possible in c++11 and later
		std::cout << videoTitle << std::endl;
}
