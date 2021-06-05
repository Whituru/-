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
	
	
	for(int i=1; i<= N; i++) {
		cin >> T[i] >> P[i];
	}
	
	int dp[16];
	int max = 0;
	for(int i=1; i<=N; i++) {
		