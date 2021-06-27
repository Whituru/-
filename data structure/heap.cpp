#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;

typedef char HData;
typedef int Priority; 	//우선 순위

typedef struct _heapElem {
	Priority pr;		
	HData data;
} HeapElem;

typedef struct _heap{
	int numOfData;
	HeapElem heapArr[HEAP_LEN];
} Heap;	//힙을 나타내는 구조체


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	
	
	
	return 0;	
}