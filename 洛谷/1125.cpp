#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isprime(int a){
    if (a <= 1) return false;
    int sqr = int(sqrt(a*1.0));
    for (int i = 2; i <= sqr; i++){
        if (a % i == 0) return false;
    }
    return true;
}

int cnt[26];

int main() {
    string n;
    cin >> n;
    for (int i = 0; i < n.size(); i++){
        cnt[n[i] - 'a']++;
    }
    sort(cnt, cnt+26);
    int minn, maxn;
    for (int i = 0; i < 26; i++){
        if (cnt[i] != 0){
            minn = cnt[i];
            break;
        }
    }
    maxn = cnt[25];
    if (isprime(maxn-minn)){
        cout << "Lucky Word" << endl;
        cout << maxn-minn;
    }
    else{
        cout << "No Answer" << endl;
        cout << 0;
    }
    system("pause");
    return 0;
}