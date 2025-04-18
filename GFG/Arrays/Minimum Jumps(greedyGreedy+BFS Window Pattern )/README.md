# Minimum Jumps to Reach End

This folder contains the solution to the classic "Minimum Jumps to Reach End" problem using a greedy algorithm.

## Problem Statement

Given an array where each element represents the max number of steps you can jump forward, find the minimum number of jumps to reach the end of the array. Return -1 if it's not possible.

## Approach

- Greedy + BFS-style window tracking
- Track `maxReach`, `steps`, and `jumps`
- Only jump when current steps are exhausted

## Flowchart

Here's a visual representation of the algorithm logic:

![Flowchart](./flowchart.png)
