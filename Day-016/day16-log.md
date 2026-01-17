📅 Day 16 – Matrix Search, Tree Views & Binary Search on Answer

100 Days of Code Challenge

Date: January 16, 2026

✅ Problems Solved
🔍 Matrix Search

Search in a Row-wise and Column-wise Sorted Matrix

Used the staircase search technique.

Started from the top-right corner to eliminate rows or columns in each step.

Achieved efficient search without scanning the entire matrix.

🌳 Binary Tree Views

Left View of Binary Tree (GeeksforGeeks)

Used DFS with recursion.

Tracked the current level.

Added the first node encountered at each level (left-first traversal).

Right View of Binary Tree (GeeksforGeeks)

Similar DFS approach.

Changed traversal order to right-first.

Captured the rightmost visible node at each level.

🔢 Binary Search on Answer

Split Array Largest Sum (LeetCode)

Applied binary search on the answer space.

Lower bound → maximum element in array.

Upper bound → sum of all elements.

Used greedy splitting to check feasibility for a given mid value.

🧠 Concepts Practiced

Staircase search in 2D matrices

Row-wise and column-wise sorted matrix properties

Depth First Search (DFS)

Tree level tracking using recursion

Left view vs Right view logic

Binary Search on constraints

Greedy partitioning strategy

⚙️ Time & Space Complexity
Problem	Time Complexity	Space Complexity
Matrix Staircase Search	O(n + m)	O(1)
Left View of Binary Tree	O(n)	O(h)
Right View of Binary Tree	O(n)	O(h)
Split Array Largest Sum	O(n log S)	O(1)

(h = height of tree, S = sum of array)

💡 Key Learnings

Starting position in matrix search can drastically reduce time complexity.

Tree “views” problems depend heavily on traversal order.

The condition level == ans.size() is a clean way to capture first occurrences per level.

Binary search is not limited to indices—it works effectively on answer ranges.

Greedy checks are powerful when combined with binary search.

📈 Progress Reflection

Day 16 helped solidify my understanding of search optimization techniques across different data structures. Combining matrix logic, recursive tree traversal, and binary search on answers made today’s practice highly interview-oriented and confidence-building.
