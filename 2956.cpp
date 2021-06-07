#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;

char arr[30000][30000];
int main() {	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int N, K;
	cin >> N >> K;
	
	map<char, int> m;
	
	
	char a; int b;
	int cnt =0;	//홀수의 갯수를 세기 위한 변수
	for(int i=0; i< K; i++){
		cin >> a >> b;
		m.insert(make_pair(a, b));
		if (b%2 ==0) {
			cnt++;
		}
	}
	
	
	
	if( N%2==1) { //N이 홀수인 경우
		//value가 홀수인 키가 없다면 impossible
		if(cnt != 1){
			cout << "IMPOSSIBLE" <<endl;
			
		}
	}
	
	
	else if(N%2 == 0){	//N이 짝수인 경우
		//value가 홀수인 키가 있다면 impossible
		if(cnt != K) {
			cout << "IMPOSSIBLE" <<endl;
			
		}
	}
	
	
	int num;
	num = N/2;
	cnt = 0; //최소 입력을 위한 cnt
	int tmp = 0;
	map <char,int>::iterator iter;
	iter = m.begin();
	for(int i=0; i<N; i++) {
		for(int j=0; j<N && iter != m.end(); j++){
			
			if(iter->second < 2){
				iter++;	//다음 문자로 넘어감
			}
			
			
			if(iter-> second >=2){	// 별 상관없는 if문
				iter->second -= 2;	//한번에 두개씩 없어진다.
				arr[i][j] = iter->first;
				arr[j][i] = iter->first;	//반대에 자동 입력
			}
			
			cnt++;
			if(cnt >= num ) {	//입력할 만큼 했으면 탈출
				tmp = 1;
				break;
			}
			
		}
		if(tmp == 1){	//입력할 만큼 했으면 탈출
			break;
		}
	}
	
	

	int P;
	cin >> P;
	for(int i=0; i<P; i++) {
		cin >> tmp;
		for(int j=0; j<N; j++) {
			cout << arr[tmp-1][j];
		}
		cout << endl;
	}
	return 0;
}	