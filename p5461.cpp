#include<iostream>
using namespace std;
int pt[1024][1024] = {1};
int mi(int n){
    int ans = 1;
    if(n == 0) return 1;
    else {
        for(int i = 1; i <= n; i++) ans *= 2;
        return ans;
    }
}

void shemian(int l, int m, int x){
    if(x == 2){
    	pt[l][m] = 0;
    	return;
	}
    for(int i = l; i < l + x/2; i++){
        for(int j = m; j < m + x/2; j++){
            pt[i][j] = 0;
        }
    }
    shemian(l + x/2, m, x/2);
    shemian(l, m + x/2, x/2);
    shemian(l + x/2, m + x/2, x/2);
}

int main(){
    int n;
    cin >> n;
    int m = mi(n);
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            pt[i][j] = 1;
        }
    }
	shemian(0, 0, m);
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m-1; j++){
            cout << pt[i][j] << " ";
        }
        cout << pt[i][m-1] << endl;
    }
    return 0;
}

