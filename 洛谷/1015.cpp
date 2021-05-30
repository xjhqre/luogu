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

char mapp[20] = "0123456789ABCDEF";

string add(string s, int n){
    string s2 = s, result;
    int jin = 0; // 是否进位
    reverse(s2.begin(), s2.end());
    for (int i = s.size()-1; i >=0; i--){
        int t1, t2;
        if (isalpha(s[i])) t1 = s[i] - 'A' + 10; // 判断s[i]是否为ABCDEF，将其转化为int整数
        else t1 = s[i] - '0';
        if (isalpha(s2[i])) t2 = s2[i] - 'A' + 10; // 同上
        else t2 = s2[i] - '0';
        if (t1 + t2 + jin >= n){ // 判断t1+t2是否大于等于进制n, 
            result = mapp[(t1 + t2 + jin) % n] + result;
            jin = 1; //进位
        }
        else{
            result = mapp[(t1 + t2 + jin) % n] + result;
            jin = 0; //不进位
        }
    }
    if (jin == 1) result = '1' + result; // 若最后两位数相加大于进制n，则进1
    return result; // 返回相加1次后的结果
}

int main() {
    int n; //进制
    int cnt = 0; // 记录步数
    string m;
    cin >> n >> m;
    while (1){
        string m2 = m;
        reverse(m2.begin(), m2.end());
        if (m2 == m) break;
        if (cnt > 30){
            cout << "Impossible!";
            break;
        }
        m = add(m, n);
        cnt++;
    }
    if (cnt <= 30) cout << "STEP=" << cnt;
    system("pause");
    return 0;
}