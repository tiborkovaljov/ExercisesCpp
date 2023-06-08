#include <iostream>
#include <map>


int onlineCount(const std::map<std::string, std::string>&);


int main()
{
    std::map<std::string, std::string> statuses;
    statuses["Alice"] = "online";
    statuses["Bob"] = "offline";
    statuses["Eve"] = "online";

    int output = onlineCount(statuses);
    std::cout << output;
}


int onlineCount(const std::map<std::string, std::string>& statuses) {
    int count = 0;
    for(const auto& pair: statuses) {
        if(pair.second == "online") {
            count++;
        }
    }
    return count;
}