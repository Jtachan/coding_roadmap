/**
 * Here is contained the code of the functions to use.
 * When compiling, the file that imports this module must be compiled and linked with it:
 * 
 * g++ main.cpp statistics.cpp -o my_program
 */

#include <algorithm>
#include <map>
#include <vector>

double calculate_mean(const std::vector<int>& numbers) {
    double sum = 0;
    for (int num : numbers) {
        sum += num;
    }
    return sum / numbers.size();
}

double calculate_median(std::vector<int>& numbers) {
    std::sort(numbers.begin(), numbers.end());
    int nof_digits = numbers.size();

    if (nof_digits % 2 == 0) {
        return (numbers[nof_digits / 2 - 1] + numbers[nof_digits / 2]) / 2.0;
    } else {
        return numbers[nof_digits / 2];
    }
}

std::vector<int> calculate_mode(const std::vector<int>& numbers) {
    // Mappint which defines the count of each number.
    std::map<int, int> frequency;
    for (int num : numbers) {
        frequency[num]++;
    }

    int max_count = 0;
    for (const auto& [num, count] : frequency) {
        if (count > max_count) {
            max_count = count;
        }
    }

    std::vector<int> modes;
    for (const auto& [num, count] : frequency) {
        if (count == max_count) {
            modes.push_back(num);
        }
    }

    return modes;
}
