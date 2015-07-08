#include <iostream>
#include <vector>
#include <set>



using namespace std;
//set col j and row i to 0 when matrix[i][j]=0
//o(n*m)time  o(m+n)space
void setMatrix(vector<vector<int> >& matrix){
	if(matrix.size()==0 ||matrix[0].size()==0)
		return;
	int N=matrix.size();
	int M=matrix[0].size();
	//find a num not in matrix
	set<int> cols;
	set<int> rows;
	for(int i=0; i< N; i++){
		for(int j=0; j<M; j++){
			if(matrix[i][j]==0){
				cols.insert(j);
				rows.insert(i);
			}					
		}
	}
	
	//change to 0
	for(int i=0; i< N; i++){
		for(int j=0; j<M; j++){
			if(cols.count(j)!=0|| rows.count(i)!=0){
				matrix[i][j]=0;
			}					
		}
	}

	
}
//o(n*m)time o(1)space

void setMatrix(vector<vector<int> >& matrix){
	if(matrix.size()==0||matrix[0].size()==0)
		return;
	int m = matrix.size();
	int n = matrix[0].size();
	bool col = false, row = false;
	for(int i=0; i<m;i++)
		if(matrix[i][0]==0){
			row = true;
			break;
		}
	for(int i=0; i<n;i++)
		if(matrix[0][1]==0){
			col = true;
			break;
		}
		
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(matrix[i][j]==0){
				matrix[0][j]==0;
				matrix[i][0]==0;
			}
		}
	}
	for(int i=0; i<m;i++){
		for(int j=0; j<n; j++){
			if(matrix[0][j]==0||matrix[i][0]==0)
				matrix[i][j]=0;
		}
	}
	if(row){
		for(int i=0; i<m;i++)
			matrix[i][0] = 0;
	}
	if(col){
		for(int i=0; i<n;i++)
			matrix[0][i] = 0;
	}
	return;
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
	matrix[2][1]=0;
	setMatrix(matrix);
	cout <<endl;
	for(int i=0; i<matrix.size(); i++){
		for(int j=0; j<matrix[i].size(); j++)
			cout << matrix[i][j]<<"\t";
		cout << endl;
	}
	
}
