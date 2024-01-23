#include<iostream>
using namespace std;
int main(){
    char a;
    int b;
    int acounter=0,bcounter=0,ccounter=0,dcounter=0;
    for(int i=0;i<3;i++){
        cin>>a>>b;
        if(a=='Y'&&b>=37){
            acounter++;
        }
        else if(b>=37&&a=='N'){
            bcounter++;
        }
        else if(a=='Y'&&b<37){
            ccounter++;
        }
        else{
            dcounter++;
        }
    }
    cout<<acounter<<" "<<bcounter<<" "<<ccounter<<" "<<dcounter;
    if(acounter>=2){
        cout<<" E";
    }
    return 0;
}