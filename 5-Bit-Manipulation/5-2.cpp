void binary(double a){
    if(a>1||a<0)
        cout<< "ERROR" <<endl;
    string bit("0.");
    int k=0;
    while(k<32&&a!=0.0){
        a*=2;
        if(a>=1.0){
         bit.append("1");
         a-=1;
        }
        else  bit.append("0");
    }
    if(a!=0.0) cout<<"ERROR"<<endl;
    else cout<<bit<<endl;
}
