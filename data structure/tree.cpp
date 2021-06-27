#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;

typedef struct _bTreeNode {
	BTData data;
	struct _bTreeNode *left;	//왼쪽 구조체를 가르키는 포인터 노드
	struct _bTreeNode *right;
} BTreeNode;

BTreeNode * MakeBTreeNode(void)	{	//구조체 포인터(노드)를 리턴함
	BTreeNode * nd = (BTreeNode*)malloc(sizeof(BTreeNode));	//노드 동적 생성
	nd -> left = NULL;
	nd -> right = NULL;	//좌우 NULL로 초기화
	return nd;	//노드의 주소 반환
} 

BTData GetData(BTreeNode * bt){
	return bt->data;	//노드 자체의 데이터
}
BTData * GetLeftSubTree(BTreeNode * bt){
	return bt -> left;
}
BTData * GetRightSubTree(BTreeNode * bt){
	return bt -> right;
}

void MakeLeftSubTree(BTreeNode * main, BTreeNode * sub){
	if(main->left != NULL){
		free(main->left);	//노드의 자식이 이미 있다면 삭제 후 할당
	}
	main -> left = sub;
}

void MakeRightSubTree(BTreeNode * main, BTreeNode * sub){
	if(main->right != NULL){
		free(main->right);	//노드의 자식이 이미 있다면 삭제 후 할당
	}
	main -> right = sub;
}


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	BTreeNode * arr[26];
	
	
	int N;
	cin >> N;
	return 0;	
}