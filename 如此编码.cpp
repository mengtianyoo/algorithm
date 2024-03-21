#include<iostream> 
#include<math.h>
using namespace std;

int  main(){
	int n;
	long long m, as[21] = {1}, c[21] = {1}, b[21];
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> as[i];
		c[i] = as[i-1] * c[i-1];
	}
	for(int i = n; i >= 1; i--){
		long tmp;
		tmp = m;
		m = m %c[i];
		b[i] = (tmp - m) / c[i];
	}
	for(int i = 1; i <= n; i++){
		cout << b[i] << " ";
	}
	
	return 0;
}
