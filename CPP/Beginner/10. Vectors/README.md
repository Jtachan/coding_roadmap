# Exercise 10: Statistical Analysis of Numbers

## Objective
Understanding vectors and getting used to .h files.

## Task
In this exercise, you'll write a program that reads a list of numbers from a file, stores them in a vector, and then calculates and outputs the following statistics:

- Mean (Average)
- Median
- Mode

## Steps

- Reading the Numbers: 
Read all the numbers from a file into a std::vector<int>.
Ensure the file exists and is not empty.
Handle any potential errors (e.g., non-numeric data).

- Calculating the Statistics:
  - Mean: Calculate the average of the numbers.
  - Median: Find the middle value when the numbers are sorted. If there’s an even number of values, the median is the average of the two middle numbers.
  - Mode: Identify the number that appears most frequently. If there is a tie for the most frequent number, return all of them.
- Output the Results:
Display the mean, median, and mode(s) to the user.

# C++ theory