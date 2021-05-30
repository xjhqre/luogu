#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll sz[200005];
map<ll, ll> m;

int main() {
    int n;
    ll c;
    cin >> n >> c;
    for (int i = 0; i < n; i++){
        cin >> sz[i];
        m[sz[i]]++;
    }
    system("pause");
    return 0;
}