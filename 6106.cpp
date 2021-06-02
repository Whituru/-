#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;
bool cmp(int a, int b) {
	return a > b;
}

int main() {	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int N;
	cin >> N;
	int arr[100001];
	for(int i=0; i<N; i++) {
		cin >> arr[i];
	}
	int tmp =0;
	int cnt=N;
	int sum1=0;
	int sum2=0;
	int j;
	for(int i=0; i<N ; i++) { //이동하면서
		if (arr[i] > 0) {
			sum1 += arr[i]; //빌리는건 빠르게
		}
		
		if (arr[i] < 0) {
			sum2 += arr[i];
			if(tmp ==0) {
				tmp = 1;
				j = i;
			}
		}

		if (sum1 + sum2 >=0 &&sum2 <0) {
			cnt += (i-j) * 2;
			tmp = 0;
			sum1 += sum2;
			sum2 =0;
		}
		
	}
	cout << cnt <<endl;
	return 0;
	
}