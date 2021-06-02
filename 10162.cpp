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
	
	int A = 300; int B = 60; int C = 10;
	int cnt1=0; int cnt2=0; int cnt3=0; 
	
	if(T/A >0) {
		cnt1 += T/A;
		T = T%A;
	}
	if(T/B>0) {
		cnt2 += T/B;
		T = T%B;
	}
	if(T/C>0) {
		cnt3 += T/C;
		T = T%C;
	}
	if( T >0) {
		cout << -1 << endl;
	}
	else {
		printf("%d %d %d\n", cnt1, cnt2, cnt3);
	}
	
	
	
	return 0;	
}
	