#include <algorithm>
#include <iostream>
#include <map>
#include <cstdio>
#include <string>
#include <string.h>
#include <cctype>
#include <math.h>
#include <vector>
using namespace std;

int gcd(int a, int b) {
     return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int n, m, cnt = 0;
    cin >> n >> m;
    for (int i = n; i <= m; i++){
        if ((n*m) % i == 0){
            int j = n*m/i;
            if ((gcd(i, j) == n) && (i*j/n == m)){
                cnt++;
            }
        }
    }
    cout << cnt;
    system("pause");
    return 0;
}