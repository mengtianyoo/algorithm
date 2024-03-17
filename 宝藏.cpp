#include<iostream>
#include<vector>

using namespace std;

struct mat{
	int v;
	int x11, x12, x21, x22;
};
vector<mat> q;

int main(){
	int nv, mv, n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> nv;
		mat tmp;
		if( nv != 3){
			cin >> tmp.v >> tmp.x11 >> tmp.x12 >> tmp.x21 >> tmp.x22;
			q.push_back(tmp);
		}

		
	}
	
	

	
	return 0; 
}
