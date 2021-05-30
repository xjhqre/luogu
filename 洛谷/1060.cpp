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

int f[30][30005]; // 物品与价格与重要度的乘机

int v[30];
int w[30];

int main() {
    int money, n;
    cin >> money >> n;
    for (int i = 1; i <= n; i++){
        cin >> v[i] >> w[i];
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= money; j++){
            if (v[i] <= j){
                f[i][j] = max(f[i-1][j], f[i-1][j-v[i]]+v[i]*w[i]);
            }
            else{
                f[i][j] = f[i-1][j];
            }
        }
    }
    cout << f[n][money];
    system("pause");
    return 0;
}