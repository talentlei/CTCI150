
pair<int ,int > find(const vector<vector<int>>& matrix, int n){
    pair<int,int> res;
    if(matrix.size()==0 || matrix[0].size()==0)
        return res;
    int m = matrix.size(), n = matrix[0].size();
    int i=0,j=n-1;
    while(i<m&&j>=0){
        if(matrix[i][j]== n){
            res.first = i;
            res.second = j;
            return res;
        }
        if(matrix[i][j]>n)
            j--;
        else i++;
    }
    return res;
}
