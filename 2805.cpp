#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;

	vector<long long int> v;
	int N, M;
long long int solve(int mid){
	long long int res = 0;
	for(int i=0; i<v.size(); i++){
		if(v[i] > mid){
			res+=v[i]-mid;
		}
		else {
			res+=0;
		}
	}
	return res;
}

void binarySearch(long long int start, long long int end) {
	
	long long int ans =0;
	while(end-start>=0){
		long long int mid = (start+end)/2;
		if(solve(mid)>= M){	//덜 잘라도 됨
			start = mid+1;
			if(mid > ans){
				ans = mid;
			}
		}
		else if(solve(mid) < M){	//더 잘라야함
			end = mid -1;
		}
	}
	cout << ans << "\n";
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	cin >> N >> M;
	
	long long int max =0;
	for(int i=0; i<N; i++){
		long long int num;
		cin >> num;
		v.push_back(num);
		if(num > max ) {
			max = num;
		}
	}
	
	binarySearch(1, max);
	
	return 0;	
}