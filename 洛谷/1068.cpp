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

struct stuDent
{
    int bh;
    int fs;
    /* data */
}stu[10001];

int cmp(stuDent a, stuDent b){
    if (a.fs != b.fs){
        return a.fs > b.fs;
    }
    else{
        return a.bh < b.bh;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        cin >> stu[i].bh >> stu[i].fs;
    }
    sort(stu, stu+n, cmp);
    m = m * 1.5;
    int temp = m;
    for (int i = temp; i < n; i++){
        if (stu[i].fs == stu[temp-1].fs){
            m++;
        }
    }
    cout << stu[temp-1].fs << ' ' << m << endl;
    for (int i = 0; i < m; i++){
        printf("%04d %d\n", stu[i].bh, stu[i].fs);
    }
    system("pause");
    return 0;
}