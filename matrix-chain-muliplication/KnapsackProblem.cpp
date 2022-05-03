//
//  KnapsackProblem.cpp
//  matrix-chain-muliplication
//
//  Created by Anshumali Karna on 03/05/22.
//

#include "KnapsackProblem.hpp"

int KnapsackProblem::max(int a, int b){
    return (a > b) ? a : b;
}

int KnapsackProblem::knapSack(int W, int *wt, int *val, int n) {
    if (n == 0 || W == 0)
        return 0;
    if (wt[n - 1] > W)
        return knapSack(W, wt, val, n - 1);
    else
        return max(
            val[n - 1]
                + knapSack(W - wt[n - 1],
                           wt, val, n - 1),
            knapSack(W, wt, val, n - 1));
}
