#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;

template <typename T>
class Tree;

template <typename T>
class TreeNode {
	friend class Tree<T>;
private:
	T data;
	TreeNode* left;
	TreeNode* right;
public:
	TreeNode(T data = 0, TreeNode* left = null, TreeNode* right = null){	//노드를 초기화(기본 생성자)
		this->data = data;
		this->left = left;
		this->right = right;
	}
	friend ostream& operator << (ostream& os, const TreeNode<T>& node){
		os << "[data]" << node.data <<endl;
		if (node.left != null){
			os << "[left]" << node.left->data << endl; 
		}
		if(node.right !=null){
			os << "[right]" << node.right -> data << endl;
		}
		return os;
	}
};

template <typename T>
class Tree {
private:
	TreeNode<T>* root;
public:
	Tree(T data = 0){	//기본 생성자
		root = new TreeNode<T>(data);
	}
	
	void buildSearchTree() {
		insertNode(new TreeNode<int>(3));
	}
	
	void insertNode(TreeNode<T>* node) {
		if(search(root, node->data) == null){
			TreeNode<T>* parent = null;
			TreeNode<T>* current = root;
			
			while(current!=null){
				parent = current;
				if(node -> data < parent -> data){
					current = current ->left;
				}
				else {
					current = current ->right;
				}
				
			}
			if(node ->data < parent -> data) {
				parent -> left = node;
			}
			else {
				parent -> right = node;
			}
			cout << "Inserted " << node -> data << endl;
		}
	}
	
	TreeNode<T>* getRoot() {
		return root;
	}
	
	void preorder(TreeNode<T>* current) {
		if(current != null){
			visit(current);
			preorder(current->left);
			preorder(current->right);
		}
	}
	
	void visit(TreeNode<T>* current) {
		cout << current->data << " ";
	}
	
	TreeNode<T>* search(TreeNode<T>* current, T data){
		if(current==null) return null;
		if(data == current->data) {
			return current;
		}
		else if(data < current -> data){
			search(current->left, data);
		}
		else {
			search(current ->right, data);
		}
	}
};
	
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	Tree<int> tree(8);
	tree.buildSearchTree();

	
	return 0;
}
