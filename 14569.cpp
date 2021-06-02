#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	
	int N;
	cin >> N;
	int arr[30001];
	int cnt[30001]={0,};
	for(int i=0; i<N; i++) {
		cin >> arr[i];
	}
	int max=0;
	for(int i=0; i<N-1; i++) {
		for(int j=i+1; j<N; j++) {
			if(arr[i] > arr[j]) {
				cnt[i]++;
			} else{
				break;
			}
		}
		if(cnt[i] > max) {
			max = cnt[i];
		}
	}
	cout << max << endl;
	return 0;
}
