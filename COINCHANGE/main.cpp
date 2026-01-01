#include <iostream>
#include <vector>
#include <chrono>
#include "coin.h"

using namespace std;

int main() {
    vector<int> coins = {1, 2, 5, 10, 20, 50};
    int targetSum;

    cout << "Available Coins: {1, 2, 5, 10, 20, 50}" << endl;
    cout << "Enter target sum: ";
    cin >> targetSum;
    cout << "\n------------- Coin Change Benchmarking -------------" << endl;

    auto startIter = chrono::high_resolution_clock::now();
    long long iterResult = iterativeMethod(coins, targetSum);
    auto endIter = chrono::high_resolution_clock::now();
    chrono::duration<double, micro> timeIter = endIter - startIter;

    cout << "Iterative Result: " << iterResult << endl;
    cout << "Iterative Time:   " << timeIter.count() << " microseconds" << endl << endl;

    auto startRecur = chrono::high_resolution_clock::now();
    long long recurResult = recursiveMethod(coins, targetSum, coins.size() - 1);
    auto endRecur = chrono::high_resolution_clock::now();
    chrono::duration<double, micro> timeRecur = endRecur - startRecur;

    cout << "Recursive Result: " << recurResult << endl;
    cout << "Recursive Time:   " << timeRecur.count() << " microseconds" << endl;

    cout << "----------------------------------------------------" << endl;

    return 0;
}
