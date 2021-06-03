#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;

long long int dp[36] = {0,};

void F(int N) {
	if(dp[N] == 0 ){
		
	
		long long int sum=0;
		for(int i=0; i<=N-1; i++) {
			sum += dp[i]*dp[N-1-i];
		}
		dp[N] = sum;
	}
	
}

int main() {	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int N;
	cin >> N;
	
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 5;
	for(int i=4; i<= N; i++) {
		F(i);
	}
	
	
	cout << dp[N] << endl;
	return 0;
}