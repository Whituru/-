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
	
	char c;
	int cnt =0;
	char arr[4] = {'U','C','P','C'};
	string str;
	getline(cin,str);
	
	for(int i=0; i<str.length(); i++) {
		if(str[i] == arr[cnt]){
			cnt++;	
		}
	}
		   
	if(cnt==4){
		cout<<"I love UCPC" << endl;
	}
	else {
		cout <<"I hate UCPC"<<endl;
	}
	
	return 0;
}