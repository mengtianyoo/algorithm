#include<iostream>
#include<algorithm>
using namespace std;
struct grade{
	int no;
	int yuwen;
	int shuxue;
	int yingyu;
	int sum = yuwen + shuxue + yingyu;
}stu[310];

bool cmp(grade a, grade b){
	if(a.sum > b.sum) return 1;
	else if(a.sum < b.sum) return 0;
	else{
		if(a.yuwen > b.yuwen) return 1;
		else if(a.yuwen < b.yuwen) return 0;
		else {
			if(a.no < b.no) return 1;
			else return 0;
		}
	}
}
int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> stu[i].yuwen >> stu[i].shuxue >> stu[i].yingyu;
		stu[i].no = i + 1;
		stu[i].sum = stu[i].yuwen + stu[i].shuxue + stu[i].yingyu;
	}
	sort(stu, stu + n, cmp);
	
	for(int i = 0; i < 5; i++){
		cout << stu[i].no << " " << stu[i].sum <<endl;
	}
	return 0;
}
