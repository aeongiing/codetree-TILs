#include <iostream>
#include <algorithm>
using namespace std;

class Point{
    public: 
        int x, y, number;

        Point(int x=0, int y=0, int number=0){
            this->x=x;
            this->y=y;
            this->number=number;
        }
};

bool cmp(Point a, Point b){
    if(a.x<0){
        a.x=-a.x;
    }
    if(a.y<0){
        a.y=-a.y;
    }
    if(b.x<0){
        b.x=-b.x;
    }
    if(b.y<0){
        b.y=-b.y;
    }
    if(a.x+a.y == b.x+b.y){
        return a.number < b.number;
    }
    return a.x+a.y < b.x+b.y;
}

int main() {
    int n;
    cin >> n;
    Point p[n];
    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;
        p[i]=Point(x, y, i+1);
    }
    sort(p, p+n, cmp);
    for(int i=0; i<n; i++){
        cout << p[i].number << endl;
    }
    return 0;
}