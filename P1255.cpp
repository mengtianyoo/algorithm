#include <iostream>

using namespace std;
int n, con = 0;

void dfs(int f){
	if(f == n) {
		con++;
		return;
	} 
	else if(n - f == 1){
		dfs(f + 1);
	}else{
		dfs(f + 1);
		dfs(f + 2);
	}
}

int main(){
	cin >> n;
	dfs(0);
	cout << con;
	return 0;
}
