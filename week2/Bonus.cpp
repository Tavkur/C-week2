#include <iostream>
using namespace std;
const int ROW_A = 2;
const int COL_A = 3;
const int ROW_B = 3;
const int COL_B = 2; 
void multiplyMatrices(const int A[][COL_A], const int B[][COL_B], int C[][COL_B]) {
    for (int i = 0; i < ROW_A; i++) {
        for (int j = 0; j < COL_B; j++) {
            C[i][j] = 0;
            for (int k = 0; k < COL_A; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
int main(){
    const int A[ROW_A][COL_A] = {{1, 2, 3}, {4, 5, 6}};
    const int B[ROW_B][COL_B] = {{7, 8}, {9, 10}, {11, 12}};
    int C[ROW_A][COL_B];

    multiplyMatrices(A, B, C);

    for (int i = 0; i < ROW_A; i++) {
        for (int j = 0; j < COL_B; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
