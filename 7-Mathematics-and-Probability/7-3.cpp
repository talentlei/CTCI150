const double EPS=1e-5;
class Line{
public:
    explicit Line(double _slope, double _yintercept)
        :slope(_slope),yintercept(_yintercept){}
    bool intersect(Line l1){
        return (slope-l1.slope>EPS)||(yintercept-l1.yintercept<EPS);
    }
private: 
    double slope;
    double yintercept;

}
