#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;

bool dec_num(long long int i) {
	
	string str = to_string(i);
	char tmp = str[str.length()-1];
	for(int k=str.length()-2; k>=0; k--) {
		if (tmp < str[k]) {
			continue;
		}
		else { return false;}
	}
	return true;
	
}
	
	

int main() {	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int N;
	cin >> N;
	
	
	unsigned long long int i=1;
	int cnt = 0;
	
	if(N==0){
		cout << 0 << endl;
		return 0;
	}
	

	while(1){
		if(dec_num(i)){
			cnt++;
		}
		if(cnt == N){
			break;
		}
		i++;
	}
	if (cnt > 0){
		cout << i << endl;
	}
	else {
		cout << -1 << endl;
	}
	return 0;
	
}