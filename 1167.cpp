#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;
const int MAX = 100001;

bool visited[MAX];

void DFS(int start){ //출발 노드
	
	
}

//간선마다 가중치가 있음 
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	memset(visited, false, sizeof(visited)); 
	vector<pair<int,int>> tree[MAX];	//쌍벡터가 요소인 트리 배열
	//first는 연결된 노드 second는 그 노드로의 가중치
	
	
	int V;
	cin >> V;
	
	for(int i=0; i<V; i++){
		int node;
		cin >> node;
		
		while(1){
			int node2, cost;
			cin >> node2; //연결된 노드
			
			if(node2== -1){
				break;
			}
			else{
				cin >> cost;
				tree[node].push_back(make_pair(node2,cost));
			}	
		}
		
	}
	
	DFS(1);
	
	
	
	
	return 0;	
}