#include<iostream>

using namespace std;

int main(){
	int n, b, a, ansmax = 0, ansmin = 0, tmp = -1;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> b;
		ansmax += b;
		if(b > tmp) ansmin += b;
		tmp = b;
	}
	cout << ansmax <<"\n" << ansmin;
	return 0;
	
} 
