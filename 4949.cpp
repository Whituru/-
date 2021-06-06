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
	string str;
	while(1) {
		getline(cin, str);
		int cnt =0;
		v.clear();
		if(str[0] == '.'){
			break;
		}
		for(int i=0; i<str.length(); i++){
			if(str[i] == '(') {
				v.push_back(1);
				//cout << "1추가" << endl;
			}
			else if(str[i] == '[') {
				v.push_back(2);
				//cout << "2추가" << endl;
			}
			else if(str[i] == ')' && v.back()==1) {
				v.pop_back();
				//cout << "1삭제" << endl;
			}
			else if(str[i] == ']' && v.back()==2) {
				v.pop_back();
				//cout << "2삭제" << endl;
			}
			else if(str[i] == ')' && v.back()==2) {
				cnt =1;
				break;
			}
			else if(str[i] == ']' && v.back()==1) {
				cnt =1;
				break;
			}
			
			else if ((str[i] == ')'||str[i] == ']')&&(v.size() ==0 )){
				//cout << "감지" <<endl;
				cnt =1;
				break;
			}
		}
		if(cnt==0 && v.size() ==0) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" <<endl;
		}
	}
	return 0;
}

