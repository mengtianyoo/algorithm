#include<iostream>
#include<vector>

using namespace std;

int n, ans = 0, boom[21], lujing[21][21];
vector<int> path, best_path;

void dfs(int no, int num){
    path.push_back(no);
    if(num > ans){
        ans = num;
        best_path = path;
    }
    for(int i = no + 1; i <= n; i++){
        if(lujing[no][i] == 1){
            dfs(i, num + boom[i]);
        }
    }
    path.pop_back();
    return;
}

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> boom[i];
    for(int i = 1; i <= n; i++) lujing[0][i] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            cin >> lujing[i][j];
            lujing[j][i] = lujing[i][j];
        }
    }
    dfs(0, 0);
    for(size_t i = 0; i < best_path.size() - 1; ++i) {
        if(best_path[i] != 0)
            cout << best_path[i] << " ";
    }
    cout << best_path[best_path.size() - 1] <<endl;
    cout << ans;
    return 0;
}

