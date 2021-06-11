#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <stack>

using namespace std;

int str_to_int(string str){
	int tmp=1;
	int sum=0;
	for(int i=str.length()-1; i>=0 ;i--) {
		sum+=tmp*(str[i]-'0');
		tmp*=10;
	}
	return sum;
}

string delStrIdx(string str, int idx){
	string :: iterator itr;
	itr = str.begin();
	str.erase(itr+idx, itr+idx+1);
	return str;
}


int main() {	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	string num_str;
	string del_str;
	getline(cin, num_str);
	getline(cin, del_str);
	
	int cnt =0;
	for(int i=0; i<del_str.length(); i++){
		
	
		int max=0; int idx=0;	//지우게 될 자리의 인덱스
		for(int j=0; j<num_str.length(); j++){
			
			if(del_str[i] == num_str[j]){//지울 자리
				string tmp = delStrIdx(num_str, j);
			
				if(str_to_int(tmp) >= max){
					max = str_to_int(tmp);
					
					idx = j;
				}
			}	
		}
		num_str = delStrIdx(num_str, idx);
	}
	int ans = str_to_int(num_str);
	cout << ans << endl;
	
	
	
	
	
	return 0;
}