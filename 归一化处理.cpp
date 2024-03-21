#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int n;
	double num[10002], a = 0, d = 0;
	
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> num[i];
		a += num[i];
	} 
	a /= n;
	for(int i = 1; i <= n; i++){
		d += (num[i] - a) * (num[i] - a);
	}
	d /=n;
	for(int i = 1; i <= n; i++){
		cout << (num[i] - a) / sqrt(d) << endl;
	}
	
	
	
	
	return 0;
}
