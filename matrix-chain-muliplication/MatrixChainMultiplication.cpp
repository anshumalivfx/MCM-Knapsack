//
//  MatrixChainMultiplication.cpp
//  matrix-chain-muliplication
//
//  Created by Anshumali Karna on 03/05/22.
//

#include "MatrixChainMultiplication.hpp"
using namespace std;
void MatrixChainMultiplication::Snapshot(int** s, int i, int j) {
    if (i == j)
        cout << "A" << i - 1;
    else {
        cout << "(";
        Snapshot(s, i, s[i][j]);
        Snapshot(s, s[i][j] + 1, j);
        cout << ")";
    }
}
void MatrixChainMultiplication::MatrixChainOrder(int* p, int n){
    int** m = new int*[n];
    int** s = new int*[n];
    for (int i = 0; i < n; i++) {
        m[i] = new int[n];
        m[i][i] = 0;
        s[i] = new int[n];
    }
    for (int l = 2; l < n; l++)
        for (int i = 1, j = i + l - 1; i < n - l + 1; i++, j = i + l - 1) {
            m[i][j] = 2147483647;
            for (int k = i; k <= j - 1; k++) {
                int q = m[i][k] + m[k + 1][j] + p[i - 1]*p[k]*p[j];
                if (q < m[i][j]) {
                    m[i][j] = q;
                    s[i][j] = k;
                }
            }
        }
    cout << m[1][n - 1] << endl;
    Snapshot(s, 1, n - 1);
    cout << endl;
    for (int i = 0; i < n; i++) {
        delete[] m[i];
        delete[] s[i];
    }
    delete[] m;
    delete[] s;
}



