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

int f[31][20001]; //以 i 个物品为前提，当容量为 j 时所能包含的最大重量
int w[31]; // 物品的重量

int main() {
    int v, n;
    cin >> v;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> w[i];
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= v; j++){
            if (w[i] <= j){
                f[i][j] = max(f[i-1][j], f[i-1][j - w[i]] + w[i]);
            }
            else{
                f[i][j] = f[i-1][j];
            }
        }
    }
    cout << v - f[n][v];
    system("pause");
    return 0;
}