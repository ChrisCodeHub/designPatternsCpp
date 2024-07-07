#pragma once
#include <iostream>
#include <cstdint>
#include <string>
#include <functional>
#include "subject.hpp"

class client {

    public:
        client(void);
        client(uint32_t passInInt);
        client(std::function< void (std::function<void(int, int)>)> testfunc);


        // Member function to be used as the callback
        void callbackFunction(int value);

        // Method to register the callback with subject
        void registerWithsubject(subject *obj);



    private:
        std::string _c1_string;
        uint32_t _clientID;

};