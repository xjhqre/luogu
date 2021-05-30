#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, k;
    cin >> n >> k;
    set<int> s;
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        s.insert(temp);
    }
    vector<int> a(s.begin(), s.end());
    if (k > a.size()) cout << "NO RESULT";
    else cout << a[k-1];
    system("pause");
    return 0;
}