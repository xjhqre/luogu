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
    vector<int> s;
    while (cin >> n){
        if(n == 0) break;
        s.push_back(n);
    }
    reverse(s.begin(), s.end());
    cout << s[0];
    for (int i = 1; i < s.size(); i++){
        cout << ' ' << s[i];
    }
    
    system("pause");
    return 0;
}