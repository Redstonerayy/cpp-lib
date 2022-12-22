//
// Created by anton on 12/10/22.
//

#ifndef CPP_ALGOS_DATASTRUCTUREUTILS_HPP
#define CPP_ALGOS_DATASTRUCTUREUTILS_HPP

#include <vector>
#include <iostream>

int GetMax(std::vector<int> &_vector);
int GetMaxRange(std::vector<int> &_vector, int start, int end);
void SwapElements(std::vector<int> &_vector, int index1, int index2);
void PrefixSum(std::vector<int> &_vector);
void PrintVector(std::vector<int> &_vector);

#endif //CPP_ALGOS_DATASTRUCTUREUTILS_HPP