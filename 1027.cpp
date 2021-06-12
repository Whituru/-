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
	
	long long int arr[51];
	int dp[51]={0,};
	for(int i=1; i<=N; i++){
		cin >> arr[i];
	}
	
	
	long double  max = (-1)*(long double )arr[1];
	for(int i=2; i<=N; i++){	//우측 빌딩
		
		long double tmp = (long double )(arr[i]-arr[1])/(long double )(i-1);
		if(max < tmp){
			max = tmp;
			dp[1]++;
		}
	}
	int ans = dp[1];
	
	
	for(int i=2; i<N; i++){
		max = (-1)*(long double)arr[i];
		long double tmp;
		for(int j=i+1; j<=N; j++){	//우측 빌딩
			tmp = (long double)(arr[j]-arr[i])/(long double)(j-i);
			if(max < tmp){
				max = tmp;
				dp[i]++;
			}
		}
		
		max = arr[i];
		for(int j=i-1; j>0; j--){	//좌측 빌딩
			tmp = (long double )(arr[j]-arr[i])/(long double )(j-i);
			if(max > tmp){
				max = tmp;
				dp[i]++;
			}
		}
		
		if(dp[i] > ans){ans = dp[i];}
	}

	max = arr[N];
	for(int j=N-1; j>0; j--){	//좌측 빌딩
		long double  tmp = (long double )(arr[j]-arr[N])/(long double )(j-N);
		if(max > tmp){
			max = tmp;
			dp[N]++;
		}
	}
	if(dp[N] > ans){ans = dp[N];}
	
	
	cout << ans <<endl;
	return 0;
	
}