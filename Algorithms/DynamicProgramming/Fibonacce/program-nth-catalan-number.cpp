#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;
using namespace std;
cpp_int findCatalan(int n) 
    {
        cpp_int dp[n + 1];
        dp[0] = dp[1] = 1;
        for (int i = 2; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                 dp[i] += dp[j] * dp[i - j - 1];
             }
        }
        return dp[n];
    } 
int main()
{
    for (int i = 0; i < 10; i++)
        cout << findCatalan(i) << " ";
    return 0;
}
