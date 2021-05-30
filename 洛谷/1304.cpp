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

bool isPrime(int n){
    if (n <=1) return false;
    int sqr = int(sqrt(n * 1.0));
    for (int i = 2; i <= sqr; i++){
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    for (int i = 4; i <= n; i+=2){
        for (int j = 0; j <= i/2; j++){
            if (isPrime(j) && isPrime(i-j)){
                printf("%d=%d+%d\n", i, j, i-j);
                break;
            }
        }
    }
    system("pause");
    return 0;
}