#include <iostream>
#include <vector>

using namespace std;

struct Point{
    int x,y;
};

bool isHullEdge(const Point& p1,const Point& p2,const vector<Point>& points){
    int A= p2.y - p1.y;
    int B= p1.x - p2.x;
    int C= ((p2.x-p1.x) * p1.y) -((p2.y-p1.y)*p1.x);
    int sign = 0;

    for(const auto &p: points){
        int value=A*p.x+B*p.y+C;
        if(value != 0){
            if(sign == 0) sign = (value > 0) ? 1:-1;
            else if((value > 0 && sign < 0) || (value < 0 && sign > 0)) return false;
        }
    }
    return true;
}

vector<Point> slow_convex_hull(const vector<Point>& points){
    vector<Point> hull;
    int n = points.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(isHullEdge(points[i],points[j],points)) hull.push_back(points[i]);
        }
    }
    return hull;
}

int main(){
    vector<Point> points={{0, 3}, {1, 1}, {2, 2}, {4, 4}, {0, 0}, {1, 2}, {3, 1}, {3, 3}};
    vector<Point> hull = slow_convex_hull(points);

    for(auto p: hull){
        cout<<"("<<p.x<<","<<p.y<<")\n";
    }
    return 0;
}