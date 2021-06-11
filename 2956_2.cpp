#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;

map<char, int> m;


char M(int i, int j, char** v);

int main() {	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
		
	int N, K;
	cin >> N >> K;

	char **arr;	
	arr = (char**)malloc(sizeof(char*)*N);
	
	char key; int value;
	for(int i=0; i<K; i++){
		cin >> key >> value;
		m.insert(make_pair(key, value));
	}	
	
	int cnt=0;
	map<char,int>::iterator iter = m.begin();
	
	//N-i만큼 j의 크기를 할당 --> i행: j = i~N-i
	
	for(int i=0; i<N; i++){
		
		arr[i] = (char*)malloc(sizeof(char) *(N-i));
		for(int j=0; j<N-i; j++) {
			if(i==j){	//가운데
				cnt = 0;
				while(1){
					if(iter->second!=2){
						arr[i][j]=(iter->first);
						iter->second--;
						break;
					}
					else {
						iter++;
						cnt++;
					}
				}
				if(cnt>0){for(int k=0; k<cnt; k++){
					iter--;
				}}
			}
			
			else if(i!=j){	//대칭 배치 해야할 곳
				cnt = 0;
				while(1){
					if((iter->second)>=2){	//짝수여야 배치 가능
						arr[i][j]=(iter->first);
						
						iter->second -= 2;
						break;
					}
					else {
						iter++;
						cnt++;
					}
				}
				if(cnt>0){for(int k=0; k<cnt; k++){
					iter--;
				}}
				
			}
			
			if(iter->second == 0){//value값을 다 사용함.
				iter++;
			}
		}
	}
	cout << endl;
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++){
			cout << M(i, j, arr);
		}
		cout << endl;
	}
	
	int P;
	cin >> P;
	for(int i=0; i<P; i++){
		cin >> cnt;
		for(int j=0; j<N; j++) {
			cout <<  M(j,cnt-1, arr);
		}
		cout <<  endl;
	}
	return 0;
}


char M(int i, int j, char** v){
	if (i>=j){		//대칭의 삼각형 내부
		return v[i][j-i];
	}		
	else {	//실제 필요한건 j,i의 요소 ->
		return v[j][i-j];
	}
}

// 1 2 3 4 5
//   2 3 4 5
//     3 4 5
// 4 5 
// 5 

