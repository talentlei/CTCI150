
vector<string> ones = {"one", "two", "three", "four", "five", "six", "seven",
                       "eight", "nine"};
vector<string> teens = {"eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
                        "seventeen", "eighteen", "nineteen"};
vector<string> tens = {"ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy",
                       "eighty", "ninty"};
vector<string> bigs = {"", "thousand", "million", "billion"};
string numToString(int num){
  if(num==0) return "zero";
  else if(num<0) return "nagetive "+numtoString(-1*num);
  
  int count=0;
  string str = "";
  while(num>0){
    if(num%1000>0){  //注意等于1000的情况
      str = numToString100(num%1000)+" " + bigs[count] +" "+ str;
    }
    count++;
    num/=1000;
  }
}

string numToString100(int num){
  string str = "";
  if(num>=100){
    str = digits[number/100-1]+" Hundred ";
    num%=100;
  }
  if(num>=11&&num<=19){
    str= str + teens[num-11]+" ";
  }
  else if(num==10||num>=20){
    str = str + tens[num/10-1] +" ";
    num/=10;
  }
  
  if(num>=1&&num<=9)
    str = str +digits[num-1]+" ";
  return str;
}
