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
    string s[n], result;
    for (int i = 0; i < n; i++){
        cin >> s[i];
    }
    for (int i = 0; i < n-1; i++){
        for (int j = i + 1; j < n; j++){
            if (s[i] + s[j] < s[j] + s[i]){
                swap(s[i], s[j]);
            }
        }
    }
    for (int i = 0; i < n; i++){
        cout << s[i];
    }

    system("pause");
    return 0;
}