#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;

int str_to_int(string str){
	int tmp=1;
	int sum=0;
	for(int i=str.length(); i>=0 ;i++) {
		sum+=tmp*(str[i]-'0');
		tmp*=10;
	}
	return sum;
}


string delStrIdx(string str, int idx){
	string :: iterator itr;
	itr = str.begin();
	str.erase(itr+idx, itr+idx+1);
	return str;
}

int main() {	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	string str;
	str = "12345";
	cout << delStrIdx(str, 3) << endl;
	
	char a = '5';
	char b = '9';
	cout << a-'0'+b-'0' << endl;
	return 0;
	
}
