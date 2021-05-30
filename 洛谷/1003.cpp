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

struct Ditan{
    int a,b,x,y;
};

int main() {
    int n, a, b;
    cin >> n;
    Ditan dt[n];
    for (int i = 0; i < n; i++){
        scanf("%d %d %d %d", &dt[i].a, &dt[i].b, &dt[i].x, &dt[i].y);
    }
    cin >> a >> b;
    int i = n - 1, flag = 0;
    while (i >= 0){
        if ((a >= dt[i].a && a <= dt[i].a + dt[i].x) && (b >= dt[i].b && b <= dt[i].b + dt[i].y)){
            cout << i + 1;
            flag = 1;
            break;
        }
        i--;
    }
    if (flag == 0){
        cout << -1;
    }

    system("pause");
    return 0;
}