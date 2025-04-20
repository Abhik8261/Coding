# Next Permutation - C++ Implementation

This project provides a C++ implementation of the **Next Permutation** algorithm. Given an array of integers, the algorithm rearranges the elements into the **next lexicographically greater permutation**. If no such permutation exists (i.e., the array is sorted in descending order), the algorithm rearranges it into the **lowest possible order** (sorted in ascending order).

---

## 🔍 Problem Description

A permutation of an array of integers is a rearrangement of its elements. The **next permutation** is the one that follows the current arrangement in lexicographic order.

### Examples

- Input: `[1, 2, 3]` → Output: `[1, 3, 2]`
- Input: `[3, 2, 1]` → Output: `[1, 2, 3]`
- Input: `[1, 1, 5]` → Output: `[1, 5, 1]`

---

## ✅ Solution Explanation

The algorithm follows these steps:

1. **Find the Breakpoint**:  
   Traverse the array from the end and find the first index `i` such that `arr[i] < arr[i+1]`. This is the breakpoint.

2. **No Breakpoint?**  
   If no such index is found, the array is the last permutation. Reverse it to get the first permutation.

3. **Find the Next Greater Element**:  
   Traverse from the end and find the smallest element greater than `arr[index]` and swap it.

4. **Reverse the Suffix**:  
   Reverse the portion of the array after the index to get the next permutation.

---



# C++ STL Library also provide 
next_permutation(arr.begin(), arr.end());
This function modifies the array in-place to the next lexicographically greater permutation (if possible), or to the first permutation if the current one is the last.

