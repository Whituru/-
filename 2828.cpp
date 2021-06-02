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
	
	
	int N, M;
	cin >> N >> M;
	int J;
	cin >> J;
	
	int apple[20];
	
	int start = 1;
	int end = M;
	int move;
	int cnt=0;
	for(int i=0; i<J; i++) {
		cin >> apple[i];
		if( start<=apple[i] && apple[i] <= end ) {
			cnt += 0; //이동의 필요가 없음
		}
		else {
			if(apple[i] < start) {
				move = start - apple[i];
				start -= move;
				end -= move;
				cnt += move;
			}
			else if(apple[i] > end) {
				move = apple[i] - end;
				start += move;
				end += move;
				cnt+=move;
			}
		}
	}
	cout << cnt << endl;
	
	
	return 0;	
}
	