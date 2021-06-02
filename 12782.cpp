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
	
	int T;
	cin >> T;
	int big, small;
	string str1, str2;
	for(int k=0; k<T; k++){
		int cnt1=0; int cnt2=0;
		cin >> str1 >> str2;
		int N = str1.length();
		
		for(int i=0; i<N; i++) {
			if(str1[i]!=str2[i]) {
				if(str1[i] == '1') {
					cnt1++;
				}
				else if(str1[i] == '0') {
					cnt2++;
				}
			}
		}
		big = cnt1 >= cnt2 ? cnt1:cnt2;
		cout << big <<endl;
	}
	return 0;
	
}