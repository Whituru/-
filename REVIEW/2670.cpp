#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>
#include <cmath>

using namespace std;
double max(double a, double b) {
	if( a >= b) {
		return a;
	}
	else {
		return b;
	}
}

int main() {	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int N;
	cin >> N;
	double arr[10000];
	double dp[10000];
	
	for(int i=0; i<N; i++) {
		cin >> arr[i];
	}
	double ans;
	dp[0] = arr[0];
	for(int i=1; i<N; i++){
		dp[i] = max(dp[i-1]*arr[i], arr[i]);
		ans = max(ans, dp[i]);
	}
	
	printf("%.3f\n", (float)round(ans*1000)/1000); //C에서 소수점 반올림 방법.
	return 0;
}