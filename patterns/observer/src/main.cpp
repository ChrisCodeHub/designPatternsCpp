#include <iostream>
#include "client.hpp"
#include "subject.hpp"
#include <vector>
#include <functional>

int main (int argc, char** argv)
{
    std::cout << "~~~~~~~~  create 2 client & 1 subject classes ~~~~~~~~~" << std::endl;
    client *client1  = new client(1);
    client *client2  = new client(2);
    subject *subject1  = new subject("I am a subject class");

    std::cout << "~~~~~~~~  register clients with subject1 ~~~~~~~~~" << std::endl;
    client2->registerWithsubject(subject1);
    client1->registerWithsubject(subject1);

    std::cout << "~~~~~~~~  call clients via subject1 ~~~~~~~~~" << std::endl;
    subject1->invokeCallback(45678);
}