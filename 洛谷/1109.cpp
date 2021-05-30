#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int stu[55];

int main() {
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> stu[i];;
        sum += stu[i];
    }
    int l, r;
    cin >> l >> r;
    if (sum > r*n) cout << -1;
    else{
        int a = 0, b = 0;
        for (int i = 0; i < n; i++){
            if (stu[i] > r) b += stu[i]-r;
            if (stu[i] < l) a += l-stu[i];
        }
        cout << max(a, b);
    }
    system("pause");
    return 0;
}