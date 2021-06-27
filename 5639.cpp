#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

#define MAX 10000
using namespace std;

typedef struct Node {	//노드 구조체 선언
	int data;
	struct Node *left;
	struct Node *right;
	struct Node *parent;
} Node;	 //노드 구조체의 약칭

Node* makeNode(void) {	// Node * (nodename) = makeNode() ; 	와 같은 방식으로 생성, 배열 활용하면 입력갯수에 따라 만들 수 있다. -> 생성자와 같은 역할을 하게 코딩해야함
	Node * nd = (Node*)malloc(sizeof(Node)); //노드 동적 생성
	nd->left = NULL;
	nd->right = NULL; 	
	nd->parent = NULL;
	return nd; 
}

int GetData(Node* bt){
	return bt->data;
}
void SetData(Node *bt, int  data) { 	//노드 초기화
	bt->data = data;
	
	cout << "1" <<endl;
	bt->left = NULL;
	
	cout << "2" <<endl;
	bt->right = NULL;
	cout << "3" <<endl;
	bt->parent =NULL;
}

Node* GetLeftNode(Node *bt) {
	return bt->left;
}
Node* GetRightNode(Node *bt){
	return bt->right;
}
Node* GetParentNode(Node *bt){
	return bt->parent;
}

void MakeLeftNode(Node* main, Node* sub){ 
	if(main->left!= NULL) {
		free(main->left);
	}
	main -> left = sub;
	
}
void MakeRightNode(Node* main, Node* sub){ 
	if(main->right!= NULL) {
		free(main->right);
	}
	main -> right = sub;
}
void MakeParentNode(Node* main, Node* sub){ 
	if(main->parent!= NULL) {
		free(main->parent);
	}
	main -> parent = sub;
}

void AddNode(Node* tmp, Node* sub){
	//tmp의 자식이 NULL인지를 고려해야하는가?
	if(GetData(tmp) > GetData(sub)) //기준 노드보다 데이터가 작음->왼쪽
	{
		tmp->left = sub;
		sub -> parent = tmp;
		tmp = tmp->left;
	}
	else if(GetData(tmp) < GetData(sub)) {	//오른쪽에 와야할 때
		//이런 경우 위치를 특정해야한다.
		while(1){
			if(GetData(tmp) < GetData(sub) && GetData(tmp->parent) < GetData(sub)){
				//사이에 위치할 때
				sub->parent =tmp;
				tmp->right = sub;
				tmp = tmp->parent;	 // 상위 노드로 이동
				break;
			}
			// 루트 노드를 넘어갈때
			if(GetData(tmp->parent) == NULL && GetData(tmp) < GetData(sub)){
				sub->parent =tmp;
				tmp -> right = sub;
				tmp = tmp ->right;
			}
		}
	}
}


void postOrder(Node* bt) {	//후위 순회
	if(GetData(bt)==NULL) 	//말단 노드임
	{
		//skip
	}
	else {
		postOrder(bt->left);
		postOrder(bt->right);
		
		cout << GetData(bt) << endl;	
	}
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int N; int i=1;
	Node* arr[10000];
	Node* tmp;
	
	scanf("%d",&N);
	SetData(arr[0], N);
	
	
	cout << "!" << endl;
	tmp = arr[0];
	
	while(scanf("%d", &N) != EOF)	//끝까지 입력받기
	{
		
		SetData(arr[i], N); 	//노드의 데이터 설정하기
		
		//노드 위치 정해주기 -> 함수로 만들까
		AddNode(tmp, arr[i]);
		i++;
	}
	
	postOrder(arr[0]);
	
	
	return 0;	
}