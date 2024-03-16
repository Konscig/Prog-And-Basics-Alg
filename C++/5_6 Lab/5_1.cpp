#include <iostream>
using namespace std;

void initialize(int** arr, int rows, int columns){
    srand((time(nullptr)));
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            arr[i][j] = rand() % 80 - 30;
        }
    }
}

void output(int** arr, int rows, int columns){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            cout.width(3);
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void output_one_size(int rows, int arr[rows]){
    for (int i = 0; i < rows; i++){
        cout << arr[i] << " ";
    }
}

void min(int** arr, int rows, int columns){
    int min_row[rows], min_columns[columns];
    for (int i = 0; i < rows; i++){
        int min_el = arr[i][0];
        for (int j = 0; j < columns; j++){
            if (arr[i][j] < min_el){
                min_el = arr[i][j];
            }
        }
        min_row[i] = min_el;
    }
    for (int i = 0; i < columns; i++){
        int min_el = arr[0][i];
        for (int j = 0; j < rows; j++){
            if (arr[j][i] < min_el){
                min_el = arr[j][i];
            }
        }
        min_columns[i] = min_el;
    }
    cout << "Минимальные элементы строк: ";
    output_one_size(rows, min_row);
    cout << endl << "Минимальные элементы столбцов: ";
    output_one_size(columns, min_columns);
}

int main() {
    int rows, columns;
    cout << "Введите колличество строк и столбцов: ";
    cin >> rows >> columns;

    int** array = new int* [rows];
    for (int i = 0; i < rows; i++){
        array[i] = new int [columns];
    }

    initialize(array, rows, columns);
    output(array, rows, columns);
    cout << endl;
    min(array, rows, columns);
}