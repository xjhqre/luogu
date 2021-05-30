#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sz[n];
    for (int i = 0; i < n; i++){
        cin >> sz[i];
    }
    sort(sz, sz+n);
    int cnt = 1;
    for (int i = 0; i < n-1; i++){
        if (sz[i] != sz[i+1]){
            cout << sz[i] << ' ' << cnt << endl;
            cnt = 1;
        }
        else{
            cnt++;
        }
    }
    cout << sz[n-1] << ' ' << cnt;
    system("pause");
    return 0;
}