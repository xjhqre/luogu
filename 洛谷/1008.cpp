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
    string s1, s2, s3;
    for (int i = 100; i < 999; i++){
        int flag = 1;
        s1 = to_string(i);
        s2 = to_string(i*2);
        s3 = to_string(i*3);
        string temp = s1+s2+s3;
        if (count(temp.begin(), temp.end(), '0') != 0){
                continue;
        }
        for (int j = 0; j < temp.size(); j++){
            if (count(temp.begin(), temp.end(), temp[j]) != 1){
                flag = 0;
                break;
            }
        }
        if (flag == 1){
            printf("%d %d %d\n", i, i*2, i*3);
        }
    }

    system("pause");
    return 0;
}