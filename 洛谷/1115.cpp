#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    int p[n+1] = {0}, dp[n+1] = {0};
    int sum = numeric_limits<int>::min(); // int类型的最小值
    for (int i = 1; i <= n; i++){
        cin >> p[i];
        dp[i] = max(dp[i-1]+p[i], p[i]);
        sum = max(sum, dp[i]);
    }
    cout << sum;
    system("pause");
    return 0;
}