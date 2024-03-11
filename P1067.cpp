#include<iostream>

using namespace std;

int main(){
	int n, a[101];
	cin >> n;

 	for(int i = 0; i <= n; i++){
		cin >> a[i];
		if(n == 0) cout << a[0]; 
		else if(a[i] > 0 && a[i] != 1){
			if(i == 0) cout << a[i] << "x^" << n - i;
			else if(n - i == 1) cout << "+" << a[i] << "x";
			else if(i == n) cout << "+" << a[i];
			else cout << "+" << a[i] << "x^" << n - i;
		}
		else if(a[i] < 0 && a[i] != -1){
			if(i == n ) cout <<  a[i];
			else if(n - i == 1) cout << a[i] << "x";
			else cout << a[i] << "x^" << n - i;
		}
		else if(a[i] == -1){
			if(i == n) cout <<  a[i];
			else if(n - i == 1) cout << a[i] << "x";
			else cout << "-x^" << n - i;
		}
		else if(a[i] == 1){
			if(i == 0) cout << "x^" << n - i;
			else if(i == n) cout << "+" << a[i];
			else if(n - i == 1) cout << "+" << "x";
			else cout << "+x^" << n - i;
		}
		else continue;
	}
	return 0;
} 
