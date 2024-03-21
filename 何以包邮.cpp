#include<iostream>
#include<algorithm>
using namespace std;
long long n, sum = 0, z, a[31], maxdiuqi = 0;
void dfs(int index, int sumdiuqi) {
	if (index == n + 1){
		return; 
	}
	dfs(index + 1, sumdiuqi);
	if(sumdiuqi + a[index] <= sum ){
		if(sumdiuqi  + a[index] > maxdiuqi) maxdiuqi = sumdiuqi  + a[index];
		dfs(index + 1, sumdiuqi + a[index]);
	} 
	
}

int main(){
	cin >> n >> z;
	for(int i = 1 ; i <= n; i++){
		cin >> a[i];
		sum += a[i];
	} 
	sum -= z;
	dfs(1, 0);
	cout << sum - maxdiuqi + z;
	return 0;
}
