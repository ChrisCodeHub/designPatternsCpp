#include <iostream>
#include "client.hpp"

client::client():
        _c1_string{"no info"}, 
        _clientID(0)
{ 
    std::cout << " created client with clientId " << _clientID << std::endl;
}

client::client(uint32_t passInInt):
        _c1_string{"no info"}, 
        _clientID(passInInt)
{ 
    std::cout << " created client with clientId " << _clientID << std::endl;
}

client::client(std::function< void (std::function<void(int, int)>)> testfunc)
{

}



// Member function to be used as the callback
void client::callbackFunction(int value) 
{
    std::cout << "Client " << _clientID << " callback called with value: " << value << std::endl;
}

// Method to register the callback with subject
void client::registerWithsubject(subject* obj) 
{
    // Create a std::function wrapping the member function
    std::function<void(int)> func = std::bind(&client::callbackFunction, this, std::placeholders::_1);
    // Register the callback with subject
    std::cout<< "registering client "<< _clientID << std::endl;
    obj->registerCallback(func);
}
