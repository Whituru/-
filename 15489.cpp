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
	
	int R, C, W;
	cin >> R >> C >> W;

	int dp[31][31];
	fill(&dp[0][0], &dp[R+W][R+W-1], 1);
	
	for(int i=2; i<= R+W-1; i++) {
		for(int j=2; j<=i-1; j++) {
			dp[i][j] = dp[i-1][j] + dp[i-1][j-1];
		}
	}
	int sum=0;
	for(int i=R; i<=R+W-1; i++) {
		for(int j=C; j <= C+i-R; j++) {
			sum += dp[i][j];
		}
	}
	
	cout << sum << endl;
	return 0;
}
	