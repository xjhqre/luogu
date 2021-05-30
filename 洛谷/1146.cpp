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
    cout << n << endl;
    int a[n];
    for (int i = 0; i < n; i++){
        a[i] = 1;
    }
    a[0] = 0;
    for (int i = 0; i < n; i++){
        cout << a[i];
    }
    cout << endl;
    for (int i = 1; i < n; i++){
        for (int j = 0; j < n; j++){
            if (j != i){
                a[j] = 1 - a[j];
            }
            else{
                a[j] = a[j];
            }
            cout << a[j];
        }
        cout << endl;
    }
    system("pause");
    return 0;
}