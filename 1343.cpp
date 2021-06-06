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
	string ans;
	
	cin >> str;
	ans = str;
	
	
	int from;
	int cnt =0;
	int tmp =0;
	for(int i=0; i<str.length(); i++) {
		
		if(str[i] == 'X' ) {
			if(cnt==0){
				from = i;
			}
			cnt++;
		}
		if(str[i] == '.'&& cnt>0 ){
			for(int j=from; j<i; j++) {
				if(cnt%2 == 0 && cnt%4 == 0) {
					for(int j=from; j<i; j++){
						ans[j] = 'A';
					}
				}
				else if(cnt%2 ==0 && cnt%4 ==2) {
					for(int j=from; j<i-2; j++) {
						ans[j] = 'A';
					}
					ans[i-2] = 'B';
					ans[i-1] = 'B';
				}
				else if(cnt%2 == 1) {
					tmp =1;
				}
			}
			cnt =0;
		}
		
		else if(i == str.length()-1 && cnt > 0){
			if(cnt%2 == 0 && cnt%4 == 0) {
				for(int j=from; j<str.length(); j++){
					ans[j] = 'A';
				}
			}
			else if(cnt%2 ==0 && cnt%4 ==2) {
				for(int j=from; j<str.length()-2; j++) {
					ans[j] = 'A';
				}
				ans[str.length()-2] = 'B';
				ans[str.length()-1] = 'B';
			}
			else if(cnt%2 == 1) {
				tmp =1;
			}
			
		}
	}
	if(tmp ==0) {
		
		cout << ans << endl;
	}
	else{
		cout << -1 << endl;
	}
	return 0;
}