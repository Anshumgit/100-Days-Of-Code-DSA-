📅 Day 17 – Rotated Arrays & Binary Tree Path Sum  
100 Days of Code Challenge  

Date: January 18, 2026  

✅ Problems Solved  

🔄 Rotated Sorted Array  

1. Find K Rotation (GeeksforGeeks)  
- Identified the pivot element using Binary Search.  
- Pivot is the index where `arr[mid] > arr[mid + 1]`.  
- Number of rotations = `pivot + 1`.  
- If no pivot is found, the array is not rotated.  

2. Find Minimum in Rotated Sorted Array (LeetCode)  
- Reused the pivot-finding logic.  
- The minimum element lies just after the pivot.  
- If pivot is at the last index, the first element is the minimum.  

🌳 Binary Tree  

3. Sum of the Longest Bloodline of a Tree (GeeksforGeeks)  
- Used DFS recursion to traverse all root-to-leaf paths.  
- Tracked:
  - Current path length  
  - Maximum path length  
  - Sum of nodes along the path  
- Updated the result when:
  - A longer path is found  
  - Path length is equal but sum is greater  

🧠 Concepts Practiced  

- Binary Search in rotated sorted arrays  
- Pivot element identification  
- Binary Search optimization  
- Depth First Search (DFS) in trees  
- Backtracking with recursion  
- Comparing path length vs path sum  

⚙️ Time & Space Complexity  

| Problem | Time Complexity | Space Complexity |
|--------|----------------|-----------------|
| Find K Rotation | O(log n) | O(1) |
| Find Minimum in Rotated Array | O(log n) | O(1) |
| Longest Bloodline Sum | O(n) | O(h) |

(h = height of the tree)

💡 Key Learnings  

- Pivot-based binary search is reusable across multiple rotated-array problems.  
- Rotated array problems often reduce to identifying a single breaking point.  
- In tree problems, base cases can be used to compare and update global answers.  
- Tracking both length and sum simultaneously avoids extra traversals.  

📈 Progress Reflection  

Day 17 reinforced my understanding of rotated-array binary search patterns and recursive tree traversal. Reusing a single pivot-finding strategy across multiple problems made the solutions cleaner and more efficient, while the tree problem strengthened my confidence in handling multiple constraints within recursion.
