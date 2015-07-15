
const double EPS=1e-5;

class Point{
public:
  Point(double _x, double _y)
  :x(_x),y(_y){};
  ~Point(){};
  double x;
  double y;
}
class Line{
public:
  Line(Point a, Point b){
    if(a.x-b.x<EPS){
      intercept=a.x;
      infinite_slope = true;
      slope=0;
    }else{
      slope = (a.y-b.y)/(a.x-b.x);
      intercept = a.y-slope*a.x;
    }
  }
  ~Line(){};
  
  double floorToNearestEPS(double d){
    int r = (int)(d/EPS);
    return r*EPS;
  }
  
  
private:
  double slope;
  double intercept;
  bool infinite_slope = false;
}

bool isEquvalent(double a, double b){
    return (abs(a-b)<EPS);
}
bool parallelLine(const Line& l1, const Line& l2){
    return isEquvalent(l1.slope,l2.slope)&&isEquvalent(l1.intercept,l2.intercept)&&(l1.infinite_slope==l2.infinite_slope);
}

int countEquivalentLines(const vector<Line>& lines, const Line& line){
    int cnt=0;
    for(auto ln : lines){
        if(parallelLine(ln,line))
            cnt++;
    }
    return cnt;
}

int countEquivLines(const Line& line,const double k, const map<double,vector<Line> >& linesBySlope ){
    return countEquivalentLines(linesBySlope(k),line)+
            countEquivalentLines(linesBySlope(k+EPS),line)+
                countEquivalentLines(linesBySlope(k-EPS),line);
}

Line findBestLine(const vector<Point>& points){
  int cnt=0;
  Line res;
  map<double,vector<Line>> linesBySlope;
  for(int i=0; i<points.size(); i++){
    for(int j=i+1; j<points.size(); j++){
      Line line = new Line(points[i],points[j]);
      double k = floorToNearestEPS(line.slope);
      linesBySlope[k].push_back(line);
      int _cnt = countEquivLines(line,k,linesBySlope);
      if(_cnt>cnt){
          cnt = _cnt;
          res = line;
      }
    }
  }
  return res;
}
