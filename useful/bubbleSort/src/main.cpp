#include <iostream>
#include "bubblesort.hpp"
#include "quicksort.hpp"
#include <vector>
#include <memory>


int main (int argc, char** argv)
{
    std::cout << "Create a set of random data" << std::endl;
    std::vector<uint32_t> testData{9, 4, 7, 3, 6};
    
    std::cout << "testData  " << std::endl;
    for (auto &x: testData)
    {
        std::cout << x << std::endl;
    }


    std::cout << "call bubble sort on data" << std::endl;   
    std::unique_ptr<BubbleSort>bubbleMe = std::make_unique<BubbleSort>(); //new BubbleSort;

    bubbleMe->shoutOut();
    bubbleMe->sortData(testData);

    std::cout << "call quicksort on the data" << std::endl;
    std::vector<uint32_t> testData2{7, 9, 4, 8, 3, 6, 12, 20, 5, 11, 1};
    std::unique_ptr<QuickSort>quickMe = std::make_unique<QuickSort>();  // new quicksort
    quickMe->shoutOut();
    quickMe->quickSort(testData2);


}