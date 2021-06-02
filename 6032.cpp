#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;

bool cmp(int a, int b) {
	return a > b;
}

int main() {	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int N;
	cin >> N;
	
	
	int J[25000], P[25000];
	float M[25000],TMP[25000];
	
	for(int i=0; i< N; i++) {
		cin >> J[i] >> P[i];
	
		M[i] = (float)J[i] / (float)P[i];
		TMP[i] = M[i];
	}
	
	sort(M, M+25000, cmp); // 내림차순
	
	int cnt =0;
	int sum = 0;
	int ans[3];
	
	for(int i=0 ;i < 3; i++) {
		for(int j=0; j<N; j++){
			if(TMP[j] == M[i]){
				
				ans[cnt] = j+1;
				sum+= P[j];
				cnt++;
				TMP[j] = -1;
				}
			}
			
		}
	}
	
	cout << sum << endl;
	cout << ans[0] << endl;
	cout << ans[1] << endl;
	cout << ans[2] << endl;
	
	return 0;
}
