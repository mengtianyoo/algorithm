#include<iostream>

using namespace std;

int main(){
	int n, i = 1, num[5] = {0};
	cin >> n;
	while(i <= n) {
		if(i % 7 == 0 || i % 10 == 7 || ( i / 10 ) % 10 == 7 || ( i / 100 ) % 10 == 7) {
			num[i % 4]++;
			n++;
			//cout << num[i % 4] << " " << n << " " << i <<endl;
		}
		i++;
	}
	cout << num[1] <<"\n" <<num[2] << "\n" << num[3] << "\n" << num[0];
	return 0;
} 
