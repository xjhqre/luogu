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
    int xh;
    int yw;
    int sx;
    int yy;
    int zf;
    /* data */
}stu[305];

int cmp(stuDent a, stuDent b){
    if (a.zf != b.zf) return a.zf > b.zf;
    else if (a.yw != b.yw) return a.yw > b.yw;
    else return a.xh < b.xh;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> stu[i].yw >> stu[i].sx >> stu[i].yy;
        stu[i].zf = stu[i].yw + stu[i].sx + stu[i].yy;
        stu[i].xh = i+1;
    }
    sort(stu, stu+n, cmp);
    for (int i = 0; i < 5; i++){
        cout << stu[i].xh << ' ' << stu[i].zf << endl;
    }
    system("pause");
    return 0;
}