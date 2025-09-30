/**
 * Here are contained the declaration and docstrings of the functions to use.
 */

#ifndef STATISTICS_H
#define STATISTICS_H

#include <vector>

/**
 * @brief Calculates the mean (average) of a sequence of numbers.
 *
 * This function takes a vector of integers and calculates the mean of it.
 *
 * @param numbers The vector of integers for which to calculate the mean.
 * @return double The mean of the numbers.
 */
double calculate_mean(const std::vector<int>& numbers);

/**
 * @brief Calculates the median of a sequence of numbers.
 *
 * This function takes a vector of integers and calculates the median value. If
 * the vector has an even number of elements, the median is the average of the
 * two middle numbers. Note that the input vector may be modified as this
 * function sorts the vector to determine the median.
 *
 * @param numbers The vector of integers for which to calculate the median.
 * @return double The median of the numbers.
 */
double calculate_median(std::vector<int>& numbers);

/**
 * @brief Calculates the mode(s) of a list of numbers.
 *
 * This function takes a vector of integers and finds the mode(s), which is the
 * most frequently occurring number(s) in the list. It returns a vector
 * containing all modes (in case of a tie).
 *
 * @param numbers The vector of integers for which to calculate the mode(s).
 * @return std::vector<int> A vector containing the mode(s) of the numbers.
 */
std::vector<int> calculate_mode(const std::vector<int>& numbers);

#endif
