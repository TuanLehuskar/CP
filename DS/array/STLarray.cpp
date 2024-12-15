#include <iostream>
#include <array>
#include <algorithm>
// All STL container are passed by value to function
// So if need to modify value of original STL container,
// We need to pass by reference (using & operator).
void updateArray(std::array<int, 7> &arr, int i, int val ) {
    arr[i] = val;
}

void printArray(std::array<int, 7> &arr) {
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::array<int, 7> arr = {1, 2, 3, 4, 5, 6, 2};
    updateArray(arr, 0, 100);

    //Sort
    std::sort(arr.begin(), arr.end());

    //Fill
    std::array<int, 7> fives;
    fives.fill(5);

    //Print
    printArray(arr);
    printArray(fives);
    return 0;
}