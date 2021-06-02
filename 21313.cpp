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
	
	int N;
	cin >> N;
	int cnt = 0;
	while(N >0) {
		if(N==1 && cnt%2 == 0) {
			printf("3 ");
			N--;
			continue;
		}
		if(cnt%2 == 0) {
			printf("1 ");
		}
		if(cnt%2 != 0 ) {
			printf("2 ");
		}
		
	
		cnt++;
		N--;
	}
	return 0;
}