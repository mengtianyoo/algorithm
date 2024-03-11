#include<iostream>
using namespace std;

int main(){
	int n, num[10001], con = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> num[i];
	}
	for(int i = 0; i < n ; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(num[j] > num[j + 1]){
				int tmp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = tmp;
				con++;
			}
		}
	}
	cout << con;

	return 0;
}
