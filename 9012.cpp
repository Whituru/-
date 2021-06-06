#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;

int main() {	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	vector<int> v;
	int N;
	int T;
	cin >> T;
	
	string str;
	int cnt;
	for(int i=0; i<T; i++) {
		v.clear();
		cnt =0;
		cin >> str;
		
		for(int j=0; j<str.length(); j++){
			if(str[j]=='(') {
				v.push_back(1);
			}
			else if(v.size()>0) {
				v.pop_back();
			}
			else {
				cnt =1 ;
				break;
			}
		}
		if(cnt ==0 && v.size() == 0){
			cout <<"YES" << endl;
		}
		else {
			cout <<"NO" << endl;
		}
		
	}
	return 0;
}