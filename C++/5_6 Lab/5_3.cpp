#include <iostream>
using namespace std;

void initialize(int** arr, int rows, int columns){
    srand(time(nullptr));
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            arr[i][j] = rand() % 80 - 30;
        }
    }
}

void output(int** arr, int rows, int columns){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void more_than_zero(int** arr, int rows, int columns){
    int mtz = 0;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            if (arr[i][j] > 0){
                mtz++;
            }
        }
    }
    cout << "Элементов, больших нуль: " << mtz << endl;
}

void less_than_zero(int** arr, int rows, int columns){
    int ltz = 0;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            if (arr[i][j] < 0){
                ltz++;
            }
        }
    }
    cout << "Элементов, меньших нуль: " << ltz << endl;
}

void equal_zero(int** arr, int rows, int columns){
    int ez = 0;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            if (arr[i][j] == 0){
                ez++;
            }
        }
    }
    cout << "Элементов, равных нуль: " << ez << endl;
}

int main() {
    int rows, columns;
    cout << "Введите колличество строк и столбцов: ";
    cin >> rows >> columns;

    int** array = new int* [rows];
    for (int i = 0; i < rows; i++) {
        array[i] = new int [columns];
    }

    initialize(array, rows, columns);
    output(array, rows, columns);
    more_than_zero(array, rows, columns);
    less_than_zero(array, rows, columns);
    equal_zero(array, rows, columns);
}