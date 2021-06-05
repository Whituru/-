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
	
	int N, K;
	
	cin >> N >> K;
	int H; 
	H = K*(K+1)/2;
	
	int min = 1;
	int max = K;
	
	int A = N-H;
	if (H > N){
		printf("-1\n");
		return 0;
	}
	else {
		
		while(1) {
			if((float)A/(float)K < 1) {
				if((float)A/(float)K > 0){
					max++;	
				}
				
				break;
			}
			else {
				A = A%K;
				}
		}
		cout << max-min<<endl;
	}
	return 0;
}

	