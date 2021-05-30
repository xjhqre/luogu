#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int maxn, n;
    cin >> maxn >> n;
    int p[n] = {0};
    for (int i = 0; i < n; i++){
        cin >> p[i];
    }
    sort(p, p+n);
    int l = 0, r = n-1;
    int cnt = 0;
    while (l <= r){
        if (l == r){
            cnt++;
            break;
        }
        if (p[l] + p[r] <= maxn){
            cnt++;
            l++;
            r--;
        }
        else{
            r--;
            cnt++;
        }
    }
    cout << cnt;
    system("pause");
    return 0;
}