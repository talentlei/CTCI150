
bool _painFill(vector<vector<char>>& screen,int x,int y,char ncolor,char ocolor){
    if(x<0||x>=screen.size()||y<0||y>=screen[0].size())
        return false;
    if(sreen[x][y]==ncolor){
        sreen[x][y]=ocolor;
        _painFile(screen,x+1,y,ncolor,ocolor);
        _painFile(screen,x-1,y,ncolor,ocolor);
        _painFile(screen,x,y+1,ncolor,ocolor);
        _painFile(screen,x,y-1,ncolor,ocolor);
    }
    return true;
}
bool painFill(vector<vector<char>>&screen,int x,int y, char ocolor){
    if(screen[x][y]==ocolor) return false;
    return _painFill(screen,x,y,sreen[x][y],ocolor);
}
