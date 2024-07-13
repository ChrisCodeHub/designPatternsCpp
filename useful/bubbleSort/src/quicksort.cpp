#include <iostream>
#include <vector>
#include "quicksort.hpp"


void QuickSort::printData(std::vector<uint32_t>& testData)
{
        for (auto & x: testData)
        {
            std::cout<< x << " ";
        }
        std::cout<<std::endl;

}

void QuickSort::shoutOut(void)
{
    std::cout<< "hello from Quick Sort" << std::endl;
}


// sorts a section = 
// form a pivot (entry 0)
// < to the left, > the right
// all in place and then return
void QuickSort::sortSection(uint32_t startPoint, uint32_t endPoint, std::vector<uint32_t>& testData)
{

    uint32_t pivotPosition = startPoint;
    uint32_t pivot = testData[pivotPosition];
    
    if (startPoint == endPoint) return;
    
    auto numberOfPoints = endPoint - startPoint;
    auto originalEndOfDataSet = endPoint;

    auto entry{startPoint+1};
    //std::cout<< std::endl << "pivot " << pivot <<  " start " << startPoint << " " << " for " << numberOfPoints << " || ";
    
    while (numberOfPoints > 0)
    {       
        //std::cout<< " " << testData[entry] ; 
        if (testData[entry] < pivot)
        {
            std::swap(testData[pivotPosition], testData[entry]);
            pivotPosition = entry;
            entry++;
        }
        else
        {
            std::swap(testData[endPoint], testData[entry]);
            endPoint--;
        }
        numberOfPoints--;
    }

   // std::cout<< "  final pivot pos " << pivotPosition << " end " << originalEndOfDataSet << std::endl;
   // printData(testData);

    
    // // sort bottom sections (ie left of pivot)
    if (pivotPosition > 1)
        sortSection(0, pivotPosition-1,testData);

    // sort top sections (ie right of pivot)
    if (pivotPosition < originalEndOfDataSet-1)
         sortSection(pivotPosition+1, originalEndOfDataSet, testData);

}

void QuickSort::quickSort(std::vector<uint32_t>& testData)
{
    std::cout<< " ~~ entered the quicksort ~~ here be demons" << std::endl;
    std::cout<<"Data at input ";
    printData(testData);

    // basic process is to arrange data around a pivot
    // pick a pivot, numbers less to the left, greater to the right
    // then iterate on each section until length is 1. then return up

    uint32_t startPoint{0};
    uint32_t endPoint{testData.size() - 1};    

    sortSection(startPoint, endPoint, testData);

    std::cout<<"Data when sorted ";
    printData(testData);


}
