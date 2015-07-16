
int getWays(int n,vector<int>& base){
    vector<int> base(4,1);
    return  _getWays(n,0,base);    
}

int _getWays(int n,int pos, const vector<int>& base){
    if(n==0)
        return 1;
    if(pos==base.size()) return 0;
    
    int ways=0;
    for(int i=0;n-i*base[pos]>=0;i++){
        ways += _getWays(n-i*base[pos],pos+1,base);
    }
    return ways;
}
//n represent  value
// m represent coins can't be used

int getWays2(int n,const vector<int>& cents, int m){
    if(n==0) return 1;
    if(n<0) return 0;
    if(m<=0&&n>=1) return 0;
    return getWays2(n,cents,m-1)+getWay2(n-cents[m],cents,m);
}

//int getWays3()

