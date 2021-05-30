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
    int pg[10], xm, cnt = 0;
    for (int i = 0; i < 10; i++){
        cin >> pg[i];
    }
    cin >> xm;
    for (int i = 0; i < 10; i++){
        if (pg[i] <= xm + 30){
            cnt++;
        }
    }
    cout << cnt;
    system("pause");
    return 0;
}