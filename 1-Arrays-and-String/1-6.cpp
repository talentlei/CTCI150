#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;
//rotate matrix by 90degree
void rotateMatrix(vector<vector<int> >& matrix){
	if(matrix.size()==0 ||matrix[0].size()==0)
		return;
	int N=matrix.size();
	int i=0;
	while(i<N/2){
		for(int j=i; j<N-i-1; j++){  //j<N-i-1  not j<N-i
			int temp=matrix[i][j];
			matrix[i][j]=matrix[N-j-1][i];
			matrix[N-j-1][i]=matrix[N-i-1][N-j-1];
			matrix[N-i-1][N-j-1]=matrix[j][N-i-1];
			matrix[j][N-i-1]=temp;
		}
		i++;
	}
	return;
}

//a better method.
/*
 第一步交换主对角线两侧的对称元素，第二步交换第i行和第n-1-i行，即得到结果
原图：           第一步操作后：   第二步操作后：
1 2 3 4         1 5 9 13        4 8 12 16
5 6 7 8         2 6 10 14       3 7 11 15
9 10 11 12      3 7 11 15       2 6 10 14
13 14 15 16     4 8 12 16       1 5 9 13
*/
void swap(int &a, int &b){
    int t = a;
    a = b;
    b = t;
}
void transpose(int a[][4], int n){
    for(int i=0; i<n; ++i)
        for(int j=i+1; j<n; ++j)
            swap(a[i][j], a[j][i]);
    for(int i=0; i<n/2; ++i)
        for(int j=0; j<n; ++j)
            swap(a[i][j], a[n-1-i][j]);
}

int main(){
	vector<vector<int> > matrix;
	for(int i=0; i<3; i++){
		vector<int> vec;
		for(int j=0; j<3; j++){
			vec.push_back(i*3+j+1);
		}
		matrix.push_back(vec);
	}
	for(int i=0; i<matrix.size(); i++){
		for(int j=0; j<matrix[i].size(); j++)
			cout << matrix[i][j]<<"\t";
		cout << endl;
	}

	rotateMatrix(matrix);
	cout <<endl;
	for(int i=0; i<matrix.size(); i++){
		for(int j=0; j<matrix[i].size(); j++)
			cout << matrix[i][j]<<"\t";
		cout << endl;
	}
	
}
