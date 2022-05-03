//
//  KnapsackProblem.hpp
//  matrix-chain-muliplication
//
//  Created by Anshumali Karna on 03/05/22.
//

#ifndef KnapsackProblem_hpp
#define KnapsackProblem_hpp

#include <stdio.h>
#include <iostream>

class KnapsackProblem {
    int max(int a, int b);
public:
    int knapSack(int W, int wt[], int val[], int n);
};

#endif /* KnapsackProblem_hpp */
