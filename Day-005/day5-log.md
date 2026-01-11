Day 5: Advanced Data Structures – K Stacks & K Queues

Date: January 6, 2026

📝 Daily Summary
Day 5 of the #100DaysOfCode challenge was focused on solving hard-level data structure problems that emphasize efficient memory utilization. I implemented both K Stacks and K Queues using a single array, reinforcing deep understanding of index manipulation and space optimization.

💻 What I Did Today

Solved 2 hard difficulty problems

Implemented K Stacks in a Single Array

Used arr[], top[], and next[] arrays

Managed free indices using a freespot pointer

Achieved O(1) push and pop operations

Implemented K Queues in a Single Array

Maintained separate front[] and rear[] for each queue

Used next[] to link queue elements and free slots

Supported efficient enqueue and dequeue in O(1) time

Pushed complete and optimized C++ solutions to GitHub

💡 Key Learnings

A single array can dynamically support multiple stacks or queues without wasted space

The next[] array is the backbone for:

Linking elements within data structures

Tracking available free positions

Proper handling of edge cases (overflow & underflow) is crucial

These problems significantly improve pointer logic and low-level DSA intuition

🚩 Challenges Overcome

Managing free space after pop/dequeue operations

Correctly updating front and rear in multi-queue implementation

Avoiding index mismanagement across multiple stacks/queues

Debugging logic errors common in space-optimized structures
