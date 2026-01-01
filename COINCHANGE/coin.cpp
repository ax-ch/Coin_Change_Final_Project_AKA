#include "coin.h"
#include <vector>

using namespace std;

long long iterativeMethod(const vector<int>& coins, int targetSum) {
    int numCoins = coins.size();

    vector<vector<long long>> dp(numCoins + 1, vector<long long>(targetSum + 1, 0));

    for (int i = 0; i <= numCoins; i++) dp[i][0] = 1;

    for (int i = 1; i <= numCoins; i++) {
        for (int j = 1; j <= targetSum; j++) {
            if (coins[i - 1] > j) dp[i][j] = dp[i - 1][j];
            else dp[i][j] = dp[i - 1][j] + dp[i][j - coins[i - 1]];
        }
    }

    return dp[numCoins][targetSum];
}

long long recursiveMethod(const vector<int>& coins, int targetSum, int coinIndex) {
    if (targetSum == 0) {
        return 1;
    } else if (targetSum < 0 || coinIndex < 0) {
        return 0;
    }
    return recursiveMethod(coins, targetSum - coins[coinIndex], coinIndex) +
           recursiveMethod(coins, targetSum, coinIndex - 1);
}
