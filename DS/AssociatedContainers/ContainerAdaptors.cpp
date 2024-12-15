Stack: Implements a Last-In-First-Out (LIFO) data Structure
Key Operations:

- push(): Add an element to the top.
- pop(): Remove the element from the top.
- top(): Access the top element without removing it.
- empty(): Check if the stack is empty.
- size(): Get the number of elements in the stack.

Queue: Implements a First-In-First-Out (FIFO) data structure.
Key Operations:

- push(): Add an element to the back of the queue.
- pop(): Remove an element from the front of the queue.
- front(): Access the front element without removing it.
- back(): Access the back element without removing it.
- empty(): Check if the queue is empty.
- size(): Get the number of elements in the queue.

Priority Queue: uses Heap data structure, where elements are served according to their highest priority
Key Operations:

- push(): Add an element with a specified priority.
- pop(): Remove the element with the highest priority.
- top(): Access the element with the highest priority without removing it.
- empty(): Check if the priority queue is empty.
- size(): Get the number of elements in the priority queue.
  Priority Queue with Custom Comparison:
  struct Compare {
    bool operator()(int a, int b) {
        return a > b; // Min-heap (smallest element has the highest priority)
    }
  };

int main() {
    std::priority_queue<int, std::vector<int>, Compare> pq;
    pq.push(10);
    pq.push(5);
    pq.push(20);
    std::cout << pq.top(); // Outputs 5 (highest priority in min-heap)
    pq.pop(); // Removes 5
}
