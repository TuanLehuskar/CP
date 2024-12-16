// Deque: Double-ended queue is sequence containers with dynamic sizes that can be expanded or contracted on both ends (front or back)
// Deque is not guaranteed to store all its elements in contiguous storage locations: accessing elements in a deque by offsetting a pointer to another element
// causes undefined behavior.
// Elements of a deque can be scattered in different chunks of storage
// Popular methods: [], back(), clear(), front(), pop_back(), pop_front(), push_back(), push_front(), size()

#include <deque>
using namespace std;

int main() {

    deque<int> first;                                   //empty init
    deque<int> second(4, 100);                          //four elements init with value 100
    deque<int> third(second.begin(), second.end());     //iterating through second
    deque<int> fourth(third);                           //Copy deque

    int myInts[] = {16, 2, 77, 29};
    int n = sizeof(myInts) / sizeof(int);
    deque<int> fifth(myInts, myInts + n);               //copy arrays

    first.push_back(20);
    first.pop_back();
    first.push_front(10);
    first.pop_front();
    first.size();
    
    first.front();                                      //get reference to front
    first.back();                                       //get reference to back


    
    return 0;
}