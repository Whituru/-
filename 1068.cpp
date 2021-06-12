#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;


int arr[50];
int leaf_arr[50];
int N;

void del_node(int K){
	for(int i=0; i<N; i++){
		if(arr[i] == K) {
			if(leaf_arr[i]!=1)	{ //부모노드라면
				del_node(i);	//자식노드도 지운다.
			}
			leaf_arr[i] = 0; //하위노드들은 더이상 리프노드가 아님
		}
	}
	
}



int main() {	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	fill_n(leaf_arr,50, 1);	//기본적으로 리프노드
	
	cin >> N;
	
	if(N>1){
		leaf_arr[0] = 0;
	}
	else {
		leaf_arr[0] = 1;
	}
	
	for(int i=0; i<N; i++){
		cin >> arr[i];
		if(arr[i]!=-1){
			leaf_arr[arr[i]] = 0;	//부모노드는 리프노드가 아니다.
		}
	}
	
	int K;
	cin >> K;

	
	
	
	leaf_arr[K] = 0; //일단 해당 노드는 리프노드가 아님.
	del_node(K);
	
	
	
	for(int i=0; i<N; i++){	//부모는 리프노드인가?
		if( arr[i] == arr[K] && i!= K){
			leaf_arr[arr[K]] = 0;
			break;
		}
		leaf_arr[arr[K]] = 1;	
	}
	
	int cnt =0;	//리프노드 세기
	for(int i=0; i<N; i++){
		if(leaf_arr[i] == 1){
			cnt++;
		}
	}
	cout << cnt <<endl;
	return 0;
}