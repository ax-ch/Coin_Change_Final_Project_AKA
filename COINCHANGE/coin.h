#ifndef COIN_H_INCLUDED
#define COIN_H_INCLUDED

#include <vector>

using namespace std;

long long iterativeMethod(const vector<int>& coins, int targetSum);
long long recursiveMethod(const vector<int>& coins, int targetSum, int coinIndex);

#endif // COIN_TIME_H_INCLUDED
