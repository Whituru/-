#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;

int main() {	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int N;
	cin >> N;
	
	if(N%2 == 0) {
		printf("CY\n");
	}
	else {
		printf("SK\n");
	}
	return 0;
}