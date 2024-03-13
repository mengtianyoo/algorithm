#include<iostream>
using namespace std; 
int main(){
	int x, y;
	int n, m;
	int xi = 0,yi = 0;
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		int xtmp,ytmp;
		cin >> xtmp >> ytmp;
		xi += xtmp;
		yi += ytmp;
	}
	for(int i = 0; i < m; i++){
		cin >> x >> y;
		cout << x + xi << " " << y + yi <<endl;
	}
	
	
	return 0;
} 
