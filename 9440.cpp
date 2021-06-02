#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;

bool compare(int a, int b) {
		return a<b; //오름차순
}
int main() {	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	
	int arr[14];
	int N;
	int num; //수의 자릿수
	int A[7],B[7];
	while(1){
		cin >> N;
		if(N ==0){
			break;
		}
		for(int i=0; i<N; i++) {
			cin >> arr[i];
		}
		sort(arr, arr+N, compare);	//오름차순
		num = (N+1)/2;
		int j=0;
		for(int i=0; i<num; i+=2) {
			A[j] = arr[i];
			j++;
		}
		
		j=0;
		for(int i=1; i<num; i+=2) {
			B[j] = arr[i];
			j++;
		}
		for(int i=0; i<num; i++) {
			A
		}
		
	
	
		cout << sum << endl;
		 //arr를 오름차순 정렬
		
		
	}
	return 0;
}

	