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
	string str;
	int N;
	vector<int> v;
	cin >> N;
	int X;
	for(int i=0; i<N; i++) {
		cin >> str;
		
		if(str == "push"){
			cin>>X;
			v.push_back(X);
		}
		
		else if(str == "pop"){
			if(v.size()==0){
				cout << -1 << endl;
			}
			else {
				cout <<v[v.size()-1]<< endl;		
				v.pop_back();
			}
		}
		
		else if(str == "size") {
			cout << v.size() << endl;
			
		}
		
		else if(str == "empty") {
			if(v.size() == 0) cout << 1 << endl;
			else cout << 0 << endl;
		}
		
		else if(str=="top") {
			if(v.size()==0){
				cout << -1 << endl;
			}
			else {
				cout << v[v.size()-1] << endl;
			}
		}
		
	}
	
	return 0;
}