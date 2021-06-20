#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>
//구슬 탈출 2
using namespace std;
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

class Pt{
public: 
	int x;
	int y;
	
	Pt(){};	//기본 생성자
	Pt(int x, int y){x(x), y(y)} 	//기본생성자2, 인자를 받으면 그 값을 좌표로
	
	setPt(int x, int y){
		this -> x = x;
		this -> y = y;
	}
};
const x_move


char arr[10][10];	
int N, M;

int solve(int L, Pt R, Pt B, Pt O){ 	//L은 ~번째 시도인지를 나타낸다. 세가지 점의 객체를 매개변수로.
	//4가지 방향에 대해서 실행. -> 각 방향에 대해서 DFS 실행(만약 움직임 변화 없음 or 구멍에 빠짐) -> return;
	
	
	
	
	//	
	
	
	
	
}



int main() {
	cin >> N >> M;
	for(int i=0; i<N; i++) {
		for(int j=0; j<M; j++){
			cin >> arr[i][j];		
			if(arr[i][j] == 'R'){
				arr[i][j] = '.';
				R.setPt(i,j);
			}
			else if(arr[i][j] == 'B'){
				arr[i][j] = '.';
				B.setPt(i, j);
			}
			else if(arr[i][j] == 'O'){
				arr[i][j] = '.';
				O.setPt(i, j);
			}
		}
	}
	
	
	int res = solve(1,);
	
	

	return 0;
}