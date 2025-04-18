# 🧠 Find the Duplicate Number — Floyd's Cycle Detection

## 🚀 Problem Statement
Given an array `nums` containing `n + 1` integers where each integer is between `1` and `n` (inclusive), return the duplicate number.

- You **must not** modify the array.
- You must use **only constant extra space**.
- Time complexity should be **less than O(n²)**.

---

## ✅ Approach: Floyd's Tortoise and Hare (Cycle Detection)

### 🔍 Why Cycle Detection?
- Since values are from `1 to n` and array size is `n + 1`, there is **guaranteed to be at least one duplicate**.
- If we treat `nums[i]` as a pointer to the next index, we can simulate a **linked list**.
- A duplicate means two indices will point to the same number, forming a **cycle** in this linked list.

### 🛠️ How It Works:
1. Use two pointers:
   - `slow` moves 1 step at a time
   - `fast` moves 2 steps at a time
2. Find where `slow` and `fast` meet (inside the cycle).
3. Reset `slow` to start, and move both `slow` and `fast` one step at a time.
4. When they meet again, it's the **start of the cycle**, i.e., the duplicate.

---



---

## 🔁 Dry Run Example
Given:
```cpp
nums = [3, 1, 3, 4, 2]
```
- Step 1: Detect cycle
  - slow = 3 → 4 → 2 → 3
  - fast = 3 → 2 → 3 → ... (meets at 3)
- Step 2: Reset slow to 0 and move both one step at a time
  - slow = 3, fast = 3 → found duplicate ✅

---

## 🧠 When To Use This Pattern?
- Array has n + 1 elements
- All values are in [1, n]
- Only one duplicate
- No extra space allowed
- Can't modify the array

> 💡 This is a special pattern: **"Cycle detection using array values as pointers."**

---

## 🧩 Related Patterns
- Linked List Cycle Detection
- Find Cycle Start in Linked List
- Find Duplicate Number (Leetcode #287)

---

## 🧠 Memory Hook
> "Use array as a linked list. Detect the loop. Start of loop = duplicate."

Repeat this mental model:
> "slow = nums[slow]; fast = nums[nums[fast]]; when they meet → reset → walk → duplicate"

---

## 🧪 Practice Inputs
```cpp
[1, 3, 4, 2, 2]    // Output: 2
[3, 1, 3, 4, 2]    // Output: 3
[2, 5, 9, 6, 9, 3, 8, 9, 7, 1] // Output: 9
```

---

## ✅ Time & Space Complexity
- Time: `O(n)`
- Space: `O(1)`

---

## 🙌 Author
Crafted while learning by Abhinav 🚀
