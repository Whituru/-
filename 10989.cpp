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
	int arr[100001] = {0,};
	
	cin >> N;
	
	for(int i=1;i<=N; i++){
		int tmp;
		scanf("%d",&tmp);
		arr[tmp]++;
	}
	
	for(int i=1; i<=10000; i++){
		for(int j=0; j<arr[i]; j++) printf("%d\n",i);
	}
	
	return 0;
	
}