#include <iostream>
#include <cstdint>
#include <vector>
#include "bubblesort.hpp"


void BubbleSort::shoutOut(void)
{
    std::cout<<"I'm goimg to bubbleSort the data" << std::endl;
}



void BubbleSort::sortData(std::vector<uint32_t>& inputData)
{

    uint32_t dataLength = inputData.size();   // number of elemnts to sort

    if (dataLength < 2)
    {
        std::cout << "input data was only " << dataLength << std::endl;
        return;
    }

    std::cout << "input data length " << dataLength << std::endl;
    
    std::cout << "input data : ";
    for (auto &x: inputData)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    auto endOfArrayToSort = dataLength-1;

    bool swapped{false};
    for (auto elements = 0 ; elements < dataLength; elements++)
    {
        swapped = false;
        for (int i=0; i <= endOfArrayToSort-1; i++)
        {
            if (inputData[i] > inputData[i+1])
            {
                std::swap(inputData[i], inputData[i+1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            std::cout << "clean run so already sorted, break early "<< std::endl;        
            break;
        }
    }

    for (auto &x: inputData)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

}