/*a queue processes data in the order it arrives (FIFO), 
while a stack processes the most recent data first (LIFO).
ex- like in a ticket counter first one comes takes ticket and
remvove then second one comes and the process is going on where as
in stack the last one first comes and remove */

/* 1> FIFO Rule: Always remove the oldest element first.
   2> Two Pointers: Track both front (for removal) and rear (for insertion).
   3> Underflow/Overflow: Check if the queue is empty before removing, or full before adding.
   4> Array Limitation: Linear arrays cause wasted space when elements are dequeued.
   5> Circular Queues: Use modulo arithmetic (rear + 1) % capacity to fix wasted*/

   #include<iostream>
   #include<queue>
   using namespace std;

   int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << q.front() << endl;
    return 0;
   }
