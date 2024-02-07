#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Student{
    public: 
        string name;
        int a, b, c;

        Student(string name="", int a=0, int b=0, int c=0){
            this->name=name;
            this->a=a;
            this->b=b;
            this->c=c;
        }
};

bool cmp(Student s1, Student s2){
    return s1.a + s1.b + s1.c < s2.a + s2.b + s2.c;
}

int main() {
    int n;
    cin >> n;
    Student students[n];
    for(int i=0; i<n; i++){
        int a, b, c;
        string name;
        cin >> name >> a >> b >> c;
        students[i]=Student(name, a, b, c);
    }
    sort(students, students+n, cmp);
    for(int i=0; i<n; i++){
        cout << students[i].name << " " << students[i].a << " " << students[i].b << " " << students[i].c << endl;
    }
    return 0;
}