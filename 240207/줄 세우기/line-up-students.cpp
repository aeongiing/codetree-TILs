#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    public:
        int h, m, number;

        Student(int h=0, int m=0, int number=0){
            this->h=h;
            this->m=m;
            this->number=number;
        }
};

bool cmp(Student a, Student b){
    if(a.h == b.h){
        if(a.m == b.m){
            return a.number < b.number;
        }
        else{
            return a.m > b.m;
        }
    }
    return a.h > b.h;
}

int main() {
    int n;
    cin >> n;
    Student students[n];
    for(int i=0; i<n; i++){
        int h, m;
        cin >> h >> m;
        students[i]=Student(h, m, i+1);
    }
    sort(students, students+n, cmp);
    for(int i=0; i<n; i++){
        cout << students[i].h << " " << students[i].m << " " << students[i].number << endl;
    }
    return 0;
}