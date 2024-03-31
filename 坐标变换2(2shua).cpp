#include<iostream>
#include<math.h>
using namespace std;

double num[100003], mun[100003];

int main(){
	num[0] = 1;
	mun[0] = 0;
	long long n, m, id;
	double op;
	cin >> n >> m;
	for(int i  = 1; i <= n; i++){
		cin >> id >> op;
		if (id == 1) {
			num[i] = num[i - 1] * op;
			mun[i] = mun[i - 1];
		} else {
			mun[i] = mun[i - 1] + op;
			num[i] = num[i - 1];
		}
	}
	int i, j;
	double x, y, ansx, ansy, theta, k;
	while(m--){
		cin >> i >> j >> x >> y;
		theta = mun[j] - mun[i - 1];
		k = num[j] / num[i - 1];
		ansx = k * x * cos(theta) - k * y * sin(theta);
		ansy = k * y * cos(theta) + k * x * sin(theta);
		printf("%.5f %.5f\n", ansx, ansy);
	}
	return 0;
} 
