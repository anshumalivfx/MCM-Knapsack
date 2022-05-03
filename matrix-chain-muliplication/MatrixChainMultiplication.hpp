//
//  MatrixChainMultiplication.hpp
//  matrix-chain-muliplication
//
//  Created by Anshumali Karna on 03/05/22.
//

#ifndef MatrixChainMultiplication_hpp
#define MatrixChainMultiplication_hpp

#include <stdio.h>
#include <iostream>


class MatrixChainMultiplication {
    void Snapshot(int** s, int i, int j);
    public:
        void MatrixChainOrder(int* p, int n);
};

#endif /* MatrixChainMultiplication_hpp */
