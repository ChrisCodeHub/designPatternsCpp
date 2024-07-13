#pragma once
#include <vector>
#include <cstdint>

class QuickSort {

    public:
        void shoutOut(void);
        void printData(std::vector<uint32_t>& testData);
        void quickSort(std::vector<uint32_t>& testData);
        void sortSection(uint32_t startPoint, uint32_t endPoint, std::vector<uint32_t>& testData);
};