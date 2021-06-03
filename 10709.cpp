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
	
	int H, W;
	cin >> H >> W;
	char arr[101][101];
	int dp[101][101];
	for(int i=1; i<=H; i++){
		for(int j=1; j<=W; j++) {
			cin >> arr[i][j];
		}
		
	}
	for(int i=1; i<=H; i++){
		for(int j=1; j<=W; j++){
			if(arr[i][j] == 'c') {
				dp[i][j] = 0;
			}
			
			else if(arr[i][j] == '.') {
				if( j>=2 && dp[i][j-1] >= 0) {
					dp[i][j] = dp[i][j-1] + 1;
				}
				else {
					dp[i][j] = -1;
				}
			}
			
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}