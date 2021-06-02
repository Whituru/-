#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

int main() {	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	string str;
	cin >> str;
	int cnt =0;
	
	for(int i=1; i<str.size(); i++) {
		if (str[i] != str[i-1]) {
			cnt++;
		}
	}
	if (cnt % 2 == 0) {
		cout << cnt/2 << endl;
	}
	else {
		cout << cnt/2+1 << endl;
	}
	
	return 0;
	
}