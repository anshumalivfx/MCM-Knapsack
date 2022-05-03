//
//  main.cpp
//  matrix-chain-muliplication
//
//  Created by Anshumali Karna on 03/05/22.
//

#include "MatrixChainMultiplication.hpp"
#include "KnapsackProblem.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    /// MCM Driver Code

    MatrixChainMultiplication mcm;
    int arraySize;
    cout<<"Enter Size of Array: ";
    cin >> arraySize;
    int* Sequence = new int[arraySize + 1];
    cout<<"Enter Matrix Sequence: ";
    for (int i = 0; i <= arraySize; i++)
        cin >> Sequence[i];
    
    cout<<"Matrix Chain Multiplication: ";
    mcm.MatrixChainOrder(Sequence, arraySize + 1);
    delete [] Sequence;
    
    
    /// Knapsack problem Driver Code
    KnapsackProblem knapsack;
    
    
    int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    cout<<"Knapsack Problem: ";
    cout << knapsack.knapSack(W, wt, val, n);
    return 0;
}
