#include <fstream>
#include <iostream>

int read_file(std::string file_name) {
    std::cout << "Reading a file to sum all the numbers within it..."
              << std::endl;

    // Opening file (for reading only):
    std::ifstream inFile(file_name);

    if (!inFile) {
        throw std::runtime_error("Could not open the specified file.");
    }
    if (inFile.peek() == std::ifstream::traits_type::eof()) {
        throw std::runtime_error("The given file is empty.");
    }

    // Code here:
    int result = 0;
    int f_number;

    while (inFile >> f_number) {
        result += f_number;
    }

    // Closing file:
    inFile.close();

    return result;
}

void write_file(int value) {
    std::cout << "Writing the result into a new file..." << std::endl;

    // Opening file (for writing only):
    std::ofstream outFile("result.txt");

    if (!outFile) {
        throw std::runtime_error("Could not open the specified file.");
    }

    // Writing the data into the file:
    outFile << value << std::endl;

    // Closing the file:
    outFile.close();
}

int main() {
    try {
        int result = read_file("numbers.txt");
        write_file(result);
    } catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    std::cout << "File 'result.txt' was created with the total sum "
              << "of the numbers within 'numbers.txt'." << std::endl;
    return 0;
}
