#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int n,m;
	double s[101][21];
	double best = -1;
	cin>>n>>m;
	
	for(int i = 0; i < n; i++){
		double score = 0;
		double min = 11,max = -1;
		for(int j = 0; j < m; j++){
			cin>>s[i][j];
			score += s[i][j];
		}
		for(int j = 0; j < m; j++){
			if(min > s[i][j]) min = s[i][j];
			if(max < s[i][j]) max = s[i][j];
		}
		if((score - min - max) / (m - 2) >= best) best = (score - min - max) / (m - 2);
	}
	
	cout<<fixed<<setprecision(2)<<best;
	return 0;
}
