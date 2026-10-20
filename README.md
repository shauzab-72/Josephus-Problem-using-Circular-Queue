# Josephus-Problem-using-Circular-Queue
C++ implementation of the survive function using a circular queue class with parameters n and k where n sets the values from 1 to n and the function sets a loop to remove every k-th person until one 'survivor' is left
## How it works
1. Build a queue of size n and enqueue the numbers 1 to n.
2. Display the starting queue.
3. Loop until only one element remains (while(count != 1)):
   - if counter < k - 1: peek the front, dequeue it, and enqueue it at the back (person is skipped), then increment counter.
   - Otherwise: print "[val] destroyed!", dequeue that person, and reset counter to 0.
4. Return the last remaining element : peek()
