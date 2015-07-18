
void printLastK(string infile,int k){
    if(k<=0) return ;
    ifstream is(infile.c_str(),ios::in);
    string line;
    vector<string> vec(k,"");
    int ind =0,cnt=0;
    while(getline(is,line)){
        ind = ind%k;
        vec[ind++]=line;
        cnt++;
    }
    if(cnt>=k){
        for(int i=0; i<k; i++)
            cout<< vec[(ind+i)%k]<<end;
    }
    for(int i=0; i<cnt; i++)
        cout<<vec[i]<<endl;
}
