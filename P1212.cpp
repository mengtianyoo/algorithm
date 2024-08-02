#include<iostream>
#include<algorithm>
using namespace std;

int r, num[1001][1001];

int main(){
	cin >> r;
	for(int i = 1; i <= r; i++)
		for(int j = 1; j <= i; j++)
			cin >> num[i][j];
		
	for(int i = r - 1; i >= 1; i--)
		for(int j = 1; j <= i; j++)
			num[i][j] = max(num[i + 1][j] + num[i][j],num[i + 1][j + 1] + num[i][j]);
		
	cout << num[1][1];
	return 0;
}
