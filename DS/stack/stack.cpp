#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<string> books;
    books.push("C++");
    books.push("Java");
    books.push("Python");

    while(!books.empty()) {
        std::cout << books.top() << " - ";
        books.pop();
    } // Python - Java - C++ -




    return 0;
}