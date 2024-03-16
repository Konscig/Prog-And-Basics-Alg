#include <iostream>
#include <vector>
#include <cmath>

double calculateGeometricMean(const std::vector<int>& numbers) {
    double product = 1.0;
    int count = 0;

    for (int number : numbers) {
        if (number < 0 && number % 2 == 0) {
            product *= number;
            count++;
        }
    }

    if (count == 0) {
        return -1.0;
    }

    return std::pow(product, 1.0 / count);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> numbers(n);

    for (int i = 0; i < n; i++) {
        std::cin >> numbers[i];
    }

    double geometricMean = calculateGeometricMean(numbers);

    if (geometricMean >= 0.0) {
        std::cout << geometricMean << std::endl;
    } else {
        std::vector<int> numbers_7;
        int max_el = 0;
        for (int i = 0; i < n; i++){
            if (i%7 == 0){
                numbers_7.push_back(numbers[i-1]);

            }
        }
        for (int i = 0; i <= numbers_7.size(); i++){
            if (numbers_7[i] > max_el){
                max_el = numbers_7[i];
            }
        }

        std::cout << max_el << std::endl;
    }

    return 0;
}