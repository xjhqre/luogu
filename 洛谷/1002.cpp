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

#define ll long long

const int fx[] = {0, -2, -1, 1, 2, 2, 1, -1, -2};
const int fy[] = {0, 1, 2, 2, 1, -1, -2, -2, -1};

ll f[40][40]; //走到i, j处的道路数目
bool pd[40][40]; //判断是否有马拦着

int main() {
    int bx, by, mx, my;
    cin >> bx >> by >> mx >> my;
    bx+=2; by+=2; mx+=2, my+=2; //防止马越界
    f[2][2] = 1; f[1][2] = 1; //初始化
    for (int i = 0; i <= 8; i++){
        pd[mx+fx[i]][my+fy[i]] = 1;
    }
    for (int i = 2; i <= bx; i++){
        for (int j = 2; j <= by; j++){
            if (pd[i][j] == 1) continue;
            f[i][j] = f[i-1][j] + f[i][j-1];
        }
    }
    cout << f[bx][by];
    system("pause");
    return 0;
}