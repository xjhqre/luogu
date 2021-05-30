#include<bits/stdc++.h>
using namespace std;

int used[10] = {0};
vector<int> path;

void backtracking(int n, int used[]){
    if (path.size() == n){
        for (int i = 0; i < n; i++){
            cout << "    " << path[i];
        }
        cout << endl;
        return;
    }
    for (int i = 0; i < n; i++){
        if (used[i] == 1) continue;
        used[i] = 1;
        path.push_back(i+1);
        backtracking(n, used);
        path.pop_back();
        used[i] = 0;
    }
}

int main() {
    int n;
    cin >> n;
    backtracking(n, used);
    system("pause");
    return 0;
}