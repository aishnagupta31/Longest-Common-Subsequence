# Longest Common Subsequence (LCS) - C++ Implementation

This repository contains a simple C++ implementation of the **Longest Common Subsequence (LCS)** algorithm using Dynamic Programming. The LCS problem is a classic computer science problem, commonly used in file comparison, DNA sequence analysis, and diff tools.

## 🔍 Problem Description

Given two sequences, the goal is to find the longest sequence that appears in both of them (not necessarily contiguously). 

For example:
- Sequence 1: `ABCBDAB`
- Sequence 2: `BDCAB`

The LCS is `BCAB` and its length is 4.

## 🚀 Features

- Takes two strings as input from the user.
- Computes the length and the actual longest common subsequence.
- Uses dynamic programming to ensure efficient performance.
- Includes backtracking to reconstruct the LCS string.

## 🛠️ How It Works

1. A 2D `dp` table is created where `dp[i][j]` stores the LCS length of the first `i` characters of string X and first `j` characters of string Y.
2. The table is filled based on character matches or the maximum of previous subsequences.
3. After the table is built, backtracking is done to extract the LCS string.

## 📦 How to Compile & Run

### Requirements
- A C++ compiler (like `g++`)

### Compile
```bash
g++ -o LCS LCS.cpp

🤝 Contributing
Feel free to fork this repository, make improvements, and create pull requests! Suggestions and bug reports are also welcome.

Made with ❤️ in C++
