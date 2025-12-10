#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

const int arr[3][4] = {
    {3, 7, 1, 9},
    {2, 5, 0, 8},
    {6, 4, 2, 3}
};


void printArrayWithIds(const int arr[3][4]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cout << "ID(" << i << "," << j << "): " << arr[i][j] << std::endl;
        }
    }
}

std::vector<int> flattenArray(const int arr[3][4]) {
    std::vector<int> flat;
    flat.reserve(3 * 4);
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            flat.push_back(arr[i][j]);
        }
    }
    return flat;
}

int main() {
    printArrayWithIds(arr);
    std::vector<int> flat = flattenArray(arr);
    std::cout << "Flattened array: ";
    for (int val : flat) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    return 0;
}
