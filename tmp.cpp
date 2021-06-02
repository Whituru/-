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
	
	string str1, str2;
	while(cin >> str1 >> str2) {
		int L1 = str1.length();
		int L2 = str2.length();

		int k=0;
		for(int i=0; i<L2; i++) {
			if(str2[i] == str1[k]) {
				k++;
			}
		}

		if(k==L1) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
	return 0;
}
