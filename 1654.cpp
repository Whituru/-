#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;


vector<long long int> v;
int N, K;

long long int count(long long int mid){
	int res =0;
	if(mid == 0){
		return 0;
	
	}
	for(int i=0; i<v.size(); i++){
		
		res+= v[i] / mid;
	}	
	return res;
}

void binarySearch(long long int start, long long int end) {
	
	long long int ans =0;
	while(end-start>=0){
		long long int mid = (start+end)/2;
		if(count(mid)>=K)	{	//더 길게 잘라도 됨
			start = mid+1;
			if(ans < mid){
				ans = mid;
			}
		}
		else if(count(mid)<K){ //더 짧게 잘라야함.
			end = mid-1;
		}
	}
	cout << ans << "\n";
	return;
	
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	cin >> N >> K;
	
	long long int max =0;
	for(int i=0; i<N; i++){
		long long int num;
		cin >> num;
		v.push_back(num);
		if (num > max) {
			max = num;
		}
	}
	
	binarySearch(1, max);
	
	
	return 0;	
}