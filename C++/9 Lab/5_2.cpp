#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string filename;
    std::cout << "Enter the file name: ";
    std::cin >> filename;

    std::ifstream input(filename);

    if (!input.is_open()) {
        std::cerr << "File opening error!" << std::endl;
        return 1;
    }

    int count = 0;
    int positive_count = 0;
    int min_number = INT_MAX;
    int max_number = INT_MIN;
    int sum = 0;
    double average = 0.0;

    int number;
    while (input >> number) {
        ++count;
        if (number > 0) {
            ++positive_count;
        }
        if (number < min_number) {
            min_number = number;
        }
        if (number > max_number) {
            max_number = number;
        }
        sum += number;
    }

    input.close();

    if (count > 0) {
        average = static_cast<double>(sum) / count;
    }

    std::cout << count << std::endl;
    std::cout << positive_count << std::endl;
    std::cout << min_number << std::endl;
    std::cout << max_number << std::endl;
    std::cout << sum << std::endl;
    std::cout.precision(2);
    std::cout << std::fixed << average << std::endl;

    return 0;
}
