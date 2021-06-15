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
	int day=1;
	while(1){
		cin >> N;
		if(N==0){
			break;
		}
		int arr[100][2];
		int tmp[24] = {0,};
		for(int i=0; i<N; i++){
			cin >> arr[i][0] >> arr[i][1];	//시작시간 끝시간
		}
		//파티 시간이 한시간인것. 두시간인것 -> 가능 시간에 횟수 체크
		
		
		
		printf("On day %d Emma can attend as many as %d parties.\n", day ,ans);
		day++;
	}
	return 0;
	
}