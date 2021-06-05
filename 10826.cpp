#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <array>

using namespace std;

typedef int(*Temp)[2];

int[][] matrixMul(int[][] matrix1, int[][] matrix2);
nt[][] pow(int a[][], int num);

int main() {	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int N;
	cin >> N;
	
	long long int matrix[][] = {{0,1}, {1,1}};
	
	printf("%lld", pow(matrix[][], N)[1][0]);
	
}

int[][] matrixMul(int[][] matrix1, int[][] matrix2) {
	int[][] resultMatrix = new int[2][2];
	for(int j=0; j<2; j++) {
		for(int i=0; i<2; i++) {
			resultMatrix[j][i] = matrix1[j][0]*matrix2[0][i] +matrix1[j][1] * matrix2[1][i];
		}
	}
	
	return resultMatrix;
}

 int[][] pow(int a[][], int num) {
	if (num % 2== 0) {
		if( num>0) {
			num = num/2;
			return pow(matrixMul(a,a), num);
		}
	}
	else {
		num = num/2;
		return matrixMul(pow(matrixMul(a,a),num), a);
	}
}
