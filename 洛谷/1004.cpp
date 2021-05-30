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
    int n;
    cin >> n;
    int sz[n][n];
    memset(sz, 0, sizeof(sz));
    int a, b, c;
    while(cin >> a){
        cin >> b >> c;
        if (a == 0 && b == 0 && c == 0){
            break;
        }
        sz[a - 1][b - 1] = c;
    }
    int f[n][n];
    memset(f, 0, sizeof(f));
    for (int i = 1; i < n; i++){
        for (int j = 1; j < n; j++){
            
        }
    }
    system("pause");
    return 0;
}