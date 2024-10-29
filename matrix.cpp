#include <iostream>

using namespace std;

void transposeMatrix(int matrix[][3], int row, int col) {
    int transposed[3][3]; 

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            transposed[j][i] = matrix[i][j];
        }
    }

    cout << "Transposed matrix:" << endl;
    for (int i = 0; i < col; ++i) {
        for (int j = 0; j < row; ++j) {
            cout << transposed[i][j] << " ";
        }
        cout << endl; 
    }

    cout << "Transposed matrix in linear format: ";
    for (int i = 0; i < col; ++i) {
        for (int j = 0; j < row; ++j) {
            cout << transposed[i][j] << " ";
        }
    }
    cout << endl;
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    transposeMatrix(matrix, 3, 3);

    return 0;
}
