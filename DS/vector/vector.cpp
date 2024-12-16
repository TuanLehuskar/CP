// A vector is dynamic array that can grow in size

#include <vector>
#include <iostream>

using namespace std;

int main() {
    //empty vector constructor
    vector<int> first;

    //Fill Constructor (4 integers with value 20)
    vector<int> second(4, 20);

    //Range Constructor
    int numbers[] = {10, 20, 30, 40};
    vector<int> third(numbers, numbers + 3);

    // for (int a : third) {
    //     cout << a << " "; // 10 20 30
    // }

    //Copy Constructor
    // vector<int> fourth(third);
    // for (int a : fourth) {
    //     cout << a << " "; // 10 20 30
    // }

    //Another way
    vector<int> fifth = {1, 2, 3, 4, 10};

    //Access element by index
    //int i;
    //fifth.at(i);
        // fifth[i];
    
    //Get current size
    //fifth.size();

    //Get capacity (how much memory has been allocated)
    //fifth.capacity();

    //push_back() (O(1))
    fifth.push_back(20);
    for (int a : fifth) {
        cout << a << " "; // 1 2 3 4 10 20
    }
    std::cout << std::endl;

    //pop_back() (O(1))
    // fifth.pop_back();
    // for (int a : fifth) {
    //     cout << a << " "; // 1 2 3 4 10
    // }

    //clear(): remove all elements
    // fifth.clear();

    //erase(): remove specific element
    // fifth.erase(fifth.begin() + 2); //remove 2th elements
    // for (int a : fifth) {
    //     cout << a << " "; // 1 2 4 10 20
    // }

    fifth.erase(fifth.begin() + 1, fifth.begin() + 4);
    for (int a : fifth) {
        cout << a << " "; // 1 10 20
    }



    
    return 0;
}