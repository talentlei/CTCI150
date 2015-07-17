class box{
    explicit box(int w, int h, int l, int id)
    : width(w), height(h), length(l), index(id) {}
    
    int width;
    int height;
    int length;
    int index;
    bool operator<(const box& o) const{
        return width < o.width and height < o.height and length < o.length;
    }
    void to_string(){
        printf("%d: %d, %d, %d\n", index, width, height, length);
    }
};

int getHighStack(vector<box>& boxs){
    sort(boxs.begin(),boxs.end());
    int res = 0;
    vector<int> dp(n,0);
    dp[0] = boxs[0].size();
    res = dp[0];
    for(int i=1; i<boxs.size(); i++){
        for(int j=0; j<i; j++){
            if(boxs[j]<boxs[i])
            dp[i] = max(boxs[i],dp[j]+box[i].height);
        }
        res = max(res,dp[i]);
    }
    return res;
}
