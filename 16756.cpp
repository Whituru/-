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
	long long int arr[100000];
	
	for(int i=0; i<N; i++) {
		cin >> arr[i];
	}
	
	long int min, max;
	long int ans = 1000000000;
	
	for(int i=0; i<N-1; i++) {
		min = arr[i];
		max = arr[i];
		for(int j=i; j<N; j++)
		{
			if(arr[j]>max) {
				max = arr[j];
			}
			if (arr[j] < min) {
				min = arr[j];
			}
		}
		
		if(max - min < ans){
			ans = max - min;
		}
	}
	
	
	cout << ans << endl;
	return 0;
	
}