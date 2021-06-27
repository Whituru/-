#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;

int n;
struct node{ 	//구조체 노드 -> 왼쪽 오른쪽을 멤버로 가짐
	char left;
	char right;
};
struct node arr[27]; 	//구조체 노드로 이루어진 배열 -> 영문자를 담음



void preOrder(char root) {	//전위 순회
	if(root == '.') 	//말단 노드임
	{
		//skip
	}
	else {
		cout << root;	
		preOrder(arr[root].left);
		preOrder(arr[root].right);
	}
}



void inOrder(char root) {	//중위 순회
	if(root == '.') 	//말단 노드임
	{
		//skip
	}
	else {
		
		inOrder(arr[root].left);
		cout << root;	
		inOrder(arr[root].right);
	}
}

void postOrder(char root) {	//후위 순회
	if(root == '.') 	//말단 노드임
	{
		//skip
	}
	else {
		postOrder(arr[root].left);
		postOrder(arr[root].right);
		
		cout << root;	
	}
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	cin >> n;
	char a,b,c;
	
	for(int i=1; i<=n; i++){	
		cin >> a >> b >> c;	//입력받기
		arr[a].left = b;	//구조체 객체 생성 -> 멤버 할당
		arr[a].right = c;
	}
	
	
	
	preOrder('A');
	cout << "\n";
	
	inOrder('A');
	cout << "\n";
	postOrder('A');
	cout << "\n";
	
	
	return 0;	
}