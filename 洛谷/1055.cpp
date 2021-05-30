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
    string s;
    cin >> s;
    int sum = 0;
    int cnt = 1; //加权数
    for (int i = 0; i < s.size()-1; i++){
        if (isdigit(s[i])){
            sum += (s[i]-'0') * cnt;
            cnt++;
        }
    } 
    int result = sum % 11;
    if (result == 10 && s[s.size()-1] == 'X'){
        cout << "Right";
    }
    else if (result == (s[s.size()-1] - '0')){
        cout << "Right";
    }
    else{
        s.pop_back();
        s += result == 10 ? "X" : to_string(result);
        cout << s;
    }
    system("pause");
    return 0;
}