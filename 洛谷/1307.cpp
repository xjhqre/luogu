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
    string n;
    int temp;
    cin >> n;
    if (n[0] == '-'){
        n = n.substr(1);
        reverse(n.begin(), n.end());
        temp = stoi(n);
        cout << temp*(-1);
    }
    else{
        reverse(n.begin(), n.end());
        temp = stoi(n);
        cout << temp;
    }
    
    system("pause");
    return 0;
}