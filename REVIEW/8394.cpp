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
	
	int dp[10000000][2];
	
	dp[0][0] = 1;
	dp[0][1] = 1;
	
	for(int i=1; i<N-1; i++) {
		dp[i][0] = (dp[i-1][0] + dp[i-1][1])%10;
		dp[i][1] = (dp[i-1][0])%10;
	}
	int ans = (dp[N-2][0]+dp[N-2][1])%10;
	
	cout << ans;
	return 0;
}