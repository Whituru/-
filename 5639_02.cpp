#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;

typedef struct Node {	//노드 구조체 선언
	int data;
	struct Node *left;
	struct Node *right;
} Node;	 //노드 구조체의 약칭

Node* insert(Node* node, int data){
	if(node == NULL){
		node = new Node();
		node->data = data;
		node ->left = node ->right =NULL;
	}
	else if(data <= node->data)
		node->left = insert(node->left , data);
	else 
		node->right = insert(node->right, data);
	return node;
}


void postOrder(Node* node) {
	if(node->left != NULL)
		postOrder(node->left);
	if(node->right != NULL)
		postOrder(node->right);
	cout << node->data << "\n";
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	Node* root =NULL;
	int val;
	while(cin>>val) {
		if(val == EOF) break;
		root = insert(root, val);
	}
	postOrder(root);
	
	return 0;	
}