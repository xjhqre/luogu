#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Birthday
{
    string name;
    int y, m, d;
    int order;
    /* data */
}stu[105];

int cmp(Birthday a, Birthday b){
    if (a.y != b.y) return a.y < b.y;
    else if (a.m != b.m) return a.m < b.m;
    else if (a.d != b.d) return a.d < b.d;
    else return a.order > b.order;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> stu[i].name >> stu[i].y >> stu[i].m >> stu[i].d;
        stu[i].order = i+1;
    }
    sort(stu, stu+n, cmp);
    for(int i = 0; i < n; i++){
        cout << stu[i].name << endl;
    }

    system("pause");
    return 0;
}