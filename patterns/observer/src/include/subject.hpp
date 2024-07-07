#pragma once
#include <iostream>
#include <cstdint>
#include <string>
#include <functional>

class subject {

    public:
        subject(void);
        subject(std::string passInString);
        subject(std::function<void(int, int)> func);

        // Method to register the callback
        void registerCallback(const std::function<void(int)>& callback);

        // Method to invoke the callback
        void invokeCallback(int value);
        std::function<void(int, int)> _func;

    private:
        
        std::vector<std::function<void(int)>> _clientsRegistered; // Member to store the callback
        std::string _c2_string;
        uint32_t _c2_num;

};