//P1786
#include<iostream> 
#include<string>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;
struct info{
	int id;
	string name;
	string staff;
	int banggong;
	int grade;
};

map<string, int> level;

vector<info> num;

bool cmp1(info a, info b){
	if( a.banggong == b.banggong) return a.id < b.id;
	return a.banggong > b.banggong;
}

bool cmp2(info a, info b){
	if(a.staff == b.staff){
		if(a.grade == b.grade) {
			return a.id < b.id;
		}else return a.grade > b.grade;
	}else return level[a.staff] < level[b.staff];
}

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		info tmp;
		cin >> tmp.name >> tmp.staff >> tmp.banggong >> tmp.grade;
		tmp.id = i;
		num.push_back(tmp);
	}
	level["BangZhu"] = 0;
	level["FuBangZhu"] = 1;
	level["HuFa"] = 2;
	level["ZhangLao"] = 3;
	level["TangZhu"] = 4;
	level["JingYing"] = 5;
	level["BangZhong"] = 6;
	sort(num.begin() + 3, num.end(), cmp1);
	for(int i = 0; i < n; i++){
		if(i == 0) num[i].staff = "BangZhu";
		else if(i >= 1 && i <= 2) num[i].staff = "FuBangZhu";
		else if(i >= 3 && i <= 4) num[i].staff = "HuFa";
		else if(i >= 5 && i <= 8) num[i].staff = "ZhangLao";
		else if(i >= 9 && i <= 15) num[i].staff = "TangZhu";
		else if(i >= 16 && i <= 40) num[i].staff = "JingYing";
		else num[i].staff = "BangZhong";
	}
	sort(num.begin(), num.end(), cmp2);
    for (int i = 0; i < n; i++) {
        cout << num[i].name << " " << num[i].staff
             << " " << num[i].grade << endl;
    }
	return 0;
}
