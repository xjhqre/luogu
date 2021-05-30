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

int main() {
    int n, f[1001] = {0};
    cin >> n;
    f[0] = f[1] = 1;
    for (int i = 2; i <= n; i++){
        if (i % 2 == 0){
            f[i] = f[i-1] + f[i/2];
        }
        else f[i] = f[i-1];
    }
    cout << f[n];
    system("pause");
    return 0;
}