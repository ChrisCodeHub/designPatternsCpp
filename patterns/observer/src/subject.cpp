#include <iostream>
#include "subject.hpp"
#include <functional> 

subject::subject():
        _c2_string{"no info"}, 
        _c2_num(0)
{ 
    std::cout << " inside a class 2" << std::endl;
}

subject::subject(std::string passInString):
        _c2_string{"passInString"}, 
        _c2_num(0)
{ 
    std::cout << " inside subject2 construction " << std::endl;
}

subject::subject(std::function<void(int, int)> func) : 
        _func(func) 
{
        std::cout << " ~~~ about to call func from class 2 ~~~~" << std::endl;
        _func(134, 2456);
        std::cout << " ~~~ finsihed func from class 2 ~~~~" << std::endl;
}



// Method to register the callback
void subject::registerCallback(const std::function<void(int)>& callback) 
{
    std::cout<< "someone registered in subject" << std::endl;
    _clientsRegistered.push_back(callback);
}

// Method to invoke the callback
void subject::invokeCallback(int value) 
{
    if (_clientsRegistered.size() != 0)
    {
        for (auto &client : _clientsRegistered)
        {
            client(value);
        }
    }
}