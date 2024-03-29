#include<iostream>
#include<algorithm>

using namespace std;
int num[500005] = {0}, ans[10003] = {0};
int main(){
	long long n, maxs = -1, anss = 0, tmp = 0;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> num[i];
		if(maxs < num[i]) maxs = num[i];
 	}
 	n = unique(num, num + n + 2) - num;
 	for(int i = 1; i < n; i++){
 		if(num[i] > num[i - 1] && num[i] > num[i + 1]) ans[num[i]]++;
 		if(num[i] < num[i - 1] && num[i] < num[i + 1]) ans[num[i]]--;
	}
	for(int i = maxs; i > 0; i--) {
		tmp += ans[i];
		//cout <<  ans[i] << endl;
		anss = max(anss,tmp);
	}
	cout << anss;
 	return 0;
} 
