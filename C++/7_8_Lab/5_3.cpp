#include <iostream>
using namespace std;

void init(int** arr, int row, int column){
    srand(time(nullptr));
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            arr[i][j] = rand() % 80-41;
        }
    }
}

void output(int** arr, int row, int column){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            cout.width(3);
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void summa(int** arr, int rows, int columns){
    int sum = 0;
    int* sum_ptr = &sum;
    bool flag = false;
    for (int** i = arr; i < arr + rows; i++){
        for (int* j = *arr; j < *arr + columns; j++){
            if (*j % 5 == 0 and *j % 2 != 0){
                (*sum_ptr)++;
            }
        }
    }
    if (*sum_ptr == 0){
        cout << flag << " - Элементы отсутствуют. " << endl;
    } else {
        flag = true;
        cout << flag << " - Элементы есть. " << endl << *sum_ptr;
    }
}

int main(){
    int m, n;
    cout << "Введите количество строк и столбцов матрицы: ";
    cin >> m >> n;

    int** matrix = new int* [m];
    for (int i = 0; i < m; i++){
        matrix[i] = new int [n];
    }
    init(matrix, m, n);
    output(matrix, m, n);
    summa(matrix, m, n);

}