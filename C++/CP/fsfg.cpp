#include <iostream>
#include <vector>

using namespace std;

int calculate(const vector<vector<int> >& matrix, const vector<vector<bool> >& grayPositions) {
    int n = matrix.size();
    int sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grayPositions[i][j]) {
                sum += matrix[i][j];
            }
        }
    }

    return sum;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int> > matrix(n, vector<int>(n));
    vector<vector<bool> > grayPositions(n, vector<bool>(n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
            grayPositions[i][j] = (i + j) % 2 == 0; // Закрашенные позиции имеют серый цвет
        }
    }

    int num = calculate(matrix, grayPositions);
    cout << num << endl;

    return 0;
}