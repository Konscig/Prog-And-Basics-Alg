#include <iostream>
#include <vector>

using namespace std;

class Matrix {
private:
    int rows;
    int cols;
    vector<vector<double> > data;

public:
    Matrix(int rows, int cols) : rows(rows), cols(cols), data(rows, vector<double>(cols)) {}

    void print() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    void set(int row, int col, double value) {
        data[row][col] = value;
    }

    double get(int row, int col) {
        return data[row][col];
    }

    Matrix operator+(const Matrix& other) const {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.set(i, j, data[i][j] + other.data[i][j]);
            }
        }
        return result;
    }

    Matrix operator-(const Matrix& other) const {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.set(i, j, data[i][j] - other.data[i][j]);
            }
        }
        return result;
    }

    Matrix operator+(double scalar) const {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.set(i, j, data[i][j] + scalar);
            }
        }
        return result;
    }

    Matrix operator-(double scalar) const {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.set(i, j, data[i][j] - scalar);
            }
        }
        return result;
    }

    bool operator==(const Matrix& other) const {
        if (rows != other.rows || cols != other.cols) {
            return false;
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (data[i][j] != other.data[i][j]) {
                    return false;
                }
            }
        }
        return true;
    }

    bool operator!=(const Matrix& other) const {
        return !(*this == other);
    }

    Matrix transpose() const {
        Matrix result(cols, rows);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.set(j, i, data[i][j]);
            }
        }
        return result;
    }

    Matrix inverse() const {
        if (rows != cols) {
            cerr << "Error: matrix is not square" << endl;
            return Matrix(rows, cols);
        }

        Matrix result(rows, cols*2);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.set(i, j, data[i][j]);
            }
            result.set(i, i+cols, 1.0);
        }

        for (int i = 0; i < rows; i++) {
            if (result.get(i, i) == 0.0) {
                cerr << "Error: matrix is not invertible" << endl;
                return Matrix(rows, cols);
            }

            double pivot = result.get(i, i);
            for (int j = 0; j < cols*2; j++) {
                result.set(i, j, result.get(i, j) / pivot);
            }

            for (int j = 0; j < rows; j++) {
                if (j == i) {
                    continue;
                }

                double factor = result.get(j, i);
                for (int k = 0; k < cols*2; k++) {
                    result.set(j, k, result.get(j, k) - factor * result.get(i, k));
                }
            }
        }

        Matrix inverse(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                inverse.set(i, j, result.get(i, j+cols));
            }
        }

        return inverse;
    }
};

int main() {
    Matrix m(2, 3);
    m.set(0, 0, 1.0);
    m.set(0, 1, 2.0);
    m.set(0, 2, 3.0);
    m.set(1, 0, 4.0);
    m.set(1, 1, 5.0);
    m.set(1, 2, 6.0);

    cout << "Matrix m:" << endl;
    m.print();

    Matrix n(2, 3);
    n.set(0, 0, 2.0);
    n.set(0, 1, 4.0);
    n.set(0, 2, 6.0);
    n.set(1, 0, 8.0);
    n.set(1, 1, 10.0);
    n.set(1, 2, 12.0);

    cout << "Matrix n:" << endl;
    n.print();

    Matrix sum = m + n;
    cout << "m + n:" << endl;
    sum.print();

    Matrix difference = m - n;
    cout << "m - n:" << endl;
    difference.print();

    Matrix scalarSum = m + 2.0;
    cout << "m + 2:" << endl;
    scalarSum.print();

    Matrix scalarDifference = m - 2.0;
    cout << "m - 2:" << endl;
    scalarDifference.print();

    Matrix transposeM = m.transpose();
    cout << "Transpose of m:" << endl;
    transposeM.print();

    Matrix inverseM = m.inverse();
    cout << "Inverse of m:" << endl;
    inverseM.print();

    bool isEqual = m == n;
    cout << "m == n: " << isEqual << endl;

    bool isNotEqual = m != n;
    cout << "m != n: " << isNotEqual << endl;

    return 0;
}
