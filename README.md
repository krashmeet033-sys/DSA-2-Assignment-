
# DSA-II Assignment 1: Two-Pointer Technique

A comparative implementation of two array problems using reference, brute-force, and optimized approaches in **Python, Java, and C++17**.

## 📌 Project Overview

This repository contains the solutions for **DSA-II Programming Assignment 1**, focused on understanding and applying the **Two-Pointer Technique** to solve array-based problems efficiently.

The assignment demonstrates the difference between straightforward approaches and optimized algorithms through implementations, test cases, dry runs, and time and auxiliary-space complexity analysis.

## 🎯 Problems Covered

### 1. Remove Duplicates from a Sorted Array

Given a sorted array, remove duplicate values so that each unique element appears only once.

**Approaches implemented:**

- **Reference Approach:** Uses a separate result list/vector to store unique elements.
- **Optimized Approach:** Uses slow and fast pointers to remove duplicates in-place.

**Example:**

```text
Input:        [1, 1, 2, 2, 2, 3, 4, 4]
Unique Prefix: [1, 2, 3, 4]
Unique Count:  4
```

The optimized solution modifies the array in-place and returns the number of unique elements. The valid result is contained in the first `k` positions.

### 2. Pair Sum in a Sorted Array

Given a sorted array and a target value, find two distinct elements whose sum equals the target.

**Approaches implemented:**

- **Brute-Force Approach:** Checks pairs using nested loops.
- **Optimized Approach:** Uses two pointers starting from opposite ends of the sorted array.

**Example:**

```text
Input:         [1, 2, 4, 7, 11, 15]
Target:        15
Output Indices: (2, 4)
Pair Values:    4 + 11 = 15
```

If no valid pair exists, the program returns `(-1, -1)`.

## 💻 Languages and Technologies

- **Python**
- **Java**
- **C++17**
- **Git and GitHub**

## 📂 Repository Structure

```text
DSA-2-Assignment-/
│
├── TwoPointerAssignment.py
├── TwoPointerAssignment.java
├── TwoPointerAssignment.class
├── TwoPointerAssignment.cpp
├── TwoPointerAssignment
└── README.md
```

| File | Description |
|---|---|
| `TwoPointerAssignment.py` | Python implementation of both problems and approaches |
| `TwoPointerAssignment.java` | Java implementation of both problems and approaches |
| `TwoPointerAssignment.class` | Compiled Java class file |
| `TwoPointerAssignment.cpp` | C++17 implementation of both problems and approaches |
| `TwoPointerAssignment` | Compiled C++ executable for macOS |
| `README.md` | Project overview, instructions, test cases, and documentation |

## ⚙️ Algorithms Implemented

| Problem | Approach | Technique |
|---|---|---|
| Remove Duplicates | Reference | Separate result list/vector |
| Remove Duplicates | Optimized | Slow and fast pointers |
| Pair Sum | Brute Force | Nested loops |
| Pair Sum | Optimized | Opposite-end two pointers |

## 🧪 Test Cases

### Part A: Remove Duplicates

| Input Array | Expected Unique Count | Expected Unique Prefix |
|---|---:|---|
| `[1, 1, 2, 2, 2, 3, 4, 4]` | 4 | `[1, 2, 3, 4]` |
| `[5]` | 1 | `[5]` |
| `[]` | 0 | `[]` |
| `[-3, -3, -1, 0, 0]` | 3 | `[-3, -1, 0]` |

### Part B: Pair Sum

| Input Array | Target | Expected Result |
|---|---:|---|
| `[1, 2, 4, 7, 11, 15]` | 15 | `(2, 4)` |
| `[1, 3, 5, 8]` | 7 | `(-1, -1)` |
| `[2, 4, 6]` | 20 | `(-1, -1)` |
| `[1, 2, 2, 3]` | 4 | `(0, 3)` |
| `[1, 3, 5, 8]` | 6 | `(0, 2)` |

**Important test-case note:** For `[1, 3, 5, 8]` with target `7`, no two elements sum to 7, so the correct result is `(-1, -1)`. The pair at indices `(0, 2)` is valid for target `6`, because `1 + 5 = 6`.

## 📊 Complexity Analysis

Let:

- `n` be the number of elements in the input array.
- `k` be the number of unique elements.

| Problem | Approach | Time Complexity | Auxiliary Space |
|---|---|---:|---:|
| Remove Duplicates | Reference | `O(n²)` | `O(k)` |
| Remove Duplicates | Optimized | `O(n)` | `O(1)` |
| Pair Sum | Brute Force | `O(n²)` | `O(1)` |
| Pair Sum | Optimized | `O(n)` | `O(1)` |

The optimized duplicate-removal approach scans the array once and modifies it in-place. The optimized pair-sum approach uses the sorted order to decide which pointer to move, avoiding unnecessary pair comparisons.

## ▶️ How to Run

Run the commands from the repository directory.

### Python

```bash
python3 TwoPointerAssignment.py
```

### Java

Compile:

```bash
javac TwoPointerAssignment.java
```

Run:

```bash
java TwoPointerAssignment
```

### C++17

Compile:

```bash
g++ -std=c++17 TwoPointerAssignment.cpp -o TwoPointerAssignment
```

Run on macOS/Linux:

```bash
./TwoPointerAssignment
```

The compiled C++ executable included in this repository was built for macOS. For other operating systems, compile the `.cpp` source file using the appropriate compiler.

## 🧠 Understanding the Two-Pointer Technique

The Two-Pointer Technique uses two indices or pointers to traverse a data structure, often reducing the need for nested loops.

This assignment applies the technique in two ways:

- **Slow and Fast Pointers:** Used to remove duplicates from a sorted array in-place.
- **Opposite-End Pointers:** Used to find a pair with a target sum in a sorted array.

Because the arrays are sorted, pointer movement can be determined by comparing values, allowing the optimized solutions to run in linear time.

## 🔍 Algorithm Comparison

| Algorithm | Main Idea | Advantage |
|---|---|---|
| Duplicate Removal – Reference | Store unique values in a separate list/vector | Simple and easy to understand |
| Duplicate Removal – Optimized | Use slow and fast pointers to overwrite duplicates | In-place with constant auxiliary space |
| Pair Sum – Brute Force | Check every possible pair | Straightforward baseline solution |
| Pair Sum – Two Pointers | Move pointers based on the current sum | Efficient linear-time solution |

## ✅ Verification

The implementations were executed and tested in all three languages:

- Python
- Java
- C++17

The test suite includes:

- Arrays containing duplicates
- Empty and single-element arrays
- Negative and zero values
- Valid pair-sum cases
- Cases where no valid pair exists
- Duplicate values in pair-sum input
- An additional test to verify the correct target-sum result

The Python, Java, and C++ implementations produced matching results for the included test cases.

## 📁 Project Deliverables

The repository includes:

- Python source code
- Java source code
- Compiled Java class file
- C++17 source code
- Compiled C++ executable for macOS
- Test cases for both problems
- Reference and optimized algorithm implementations
- Assignment report with algorithm explanations, dry runs, test results, and complexity analysis

## 📖 Key Learning Outcomes

- Understanding the Two-Pointer Technique for sorted arrays
- Comparing reference and optimized algorithmic approaches
- Applying slow/fast pointers for in-place array modification
- Applying opposite-end pointers for pair-sum problems
- Understanding how sorted order improves algorithm efficiency
- Analyzing time and auxiliary-space complexity
- Testing algorithms with normal, edge, and no-solution cases
- Implementing the same algorithms in Python, Java, and C++

## 🚀 Future Improvements

Possible extensions to this assignment include:

- Accepting custom input from the user
- Adding automated unit tests
- Measuring execution time for larger input sizes
- Extending the technique to other sorted-array problems
- Adding a visual step-by-step pointer movement demonstration

## 📚 References

- DSA-II course materials and assignment instructions
- Algorithm analysis concepts covered in the course
- Official Python documentation: [python.org](https://www.python.org/)
- Official Java documentation: [Oracle Java](https://docs.oracle.com/en/java/)
- C++ reference: [cppreference.com](https://en.cppreference.com/)

## 👩‍🎓 Academic Information

| Detail | Information |
|---|---|
| Student Name | Rashmeet Kaur Nanade |
| Roll Number | 150096725165 |
| Institution | ITM Skills University |
| Programme | B.Tech – Computer Science Engineering |
| College / Academic Unit | School of Future Tech |
| Cohort | Demis Hassabis |
| Subject | DSA-II |
| Assignment | Programming Assignment 1 |
| Academic Year | 2026–2027 |

## 📄 Assignment Report

The accompanying assignment report provides detailed explanations of:

- Problem statements and interpretations
- Algorithm pseudocode
- Pointer initialization, movement, and termination
- Dry-run tables for optimized approaches
- Test cases with expected and actual results
- Time and auxiliary-space complexity analysis
- Compilation and execution instructions

## 👩‍💻 Author

**Rashmeet Kaur Nanade**  
B.Tech – Computer Science Engineering  
ITM Skills University

GitHub: [@krashmeet033-sys](https://github.com/krashmeet033-sys)

---

*This repository was created as part of DSA-II Programming Assignment 1 for the academic year 2026–2027.*
