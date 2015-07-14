
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


Line findBestLine(const vector<Point>& points){
  int 
  map<double,vector<Line>> linesBySlope;
  for(int i=0; i<points.size(); i++){
    for(int j=i+1; j<points.size(); j++){
      Line line = new Line(points[i],points[j]);
      double k = floorToNearestEPS(line.slope);
      linesBySlope[k].push_back(line);
      
    }
  }
}
