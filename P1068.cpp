#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

struct info{
	int no;
	int grade;
} num[5001];

bool cmp(info a, info b){
	return a.grade == b.grade ? a.no < b.no : a.grade > b.grade;
}
int main(){
	int n, m, p;
	cin >> n >> m;
	p = floor(m * 1.5);
	for(int i = 0; i < n; i++){
		cin >> num[i].no >> num[i].grade;
	}
	sort(num, num + n, cmp);
	int j = 0;
	for( ; ; j++){
		if(j < p){
			//cout << num[j].no << " " << num[j].grade << endl;
		} 
		else if(j >= p &&  num[j].grade ==  num[j - 1].grade){
			//cout << num[j].no << " " << "** "<<p<<"**" << num[j].grade << endl;
		} 
		else break;
	}
	cout << num[j - 1].grade << " " << j <<endl;
	for(int i = 0; i < j; i++){
		cout << num[i].no << " " << num[i].grade << endl;
	}
	return 0;
}
