
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
	
	int T;
	int N;
	cin >> T;
	
	for(int i=0; i<T; i++){	 //TEST CASE 반복

		cin >> N;
		int arr[1000000] = {0,};
		
		for(int j=0; j<N; j++){
			cin >> arr[j]; //주가 입력받기.
		}
		
		long long int ans =0;
		int max=0;
		for(int j=N-1; j>=0; j--){
			if(max < arr[j]){
				max = arr[j];
			}
			else {
				ans += max - arr[j];
			}
			
		}
		cout << ans << endl;
	}
	
	
	return 0;
	
}