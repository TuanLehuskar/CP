#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;
    q.push(1);
    q.push(3);
    q.push(4);
    q.push(1);

    while(!q.empty()) {
        std::cout << q.front() << " - ";
        q.pop();
    } // 1 - 3 - 4 - 1 -




    return 0;
}