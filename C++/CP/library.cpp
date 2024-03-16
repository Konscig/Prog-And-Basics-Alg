#include <iostream>

void pointers(int **a, int n, int m) {
    int seed;
    std::cin >> seed;
    for (int i = 0; i < n; i++) {
        for (int* el = a[i]; el < a[i] + m; el++) {
            *el = seed;
        }
    }
}

int main() {
    int n, m;
    std::cin >> n >> m;
    int** arr = new int*[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[m];
    }
    pointers(arr, n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (j == m-1){
                std::cout << arr[i][j];
                continue;
            }
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}