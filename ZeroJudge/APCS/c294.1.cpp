//2016/10-1
#include <iostream>
#include <algorithm>
using namespace std;

void judge(int a, int b, int c){
    cout<<a<<' '<<b<<' '<<c<<endl;
    if(a+b<=c){
        cout<<"No"<<endl;
    }else{
        if(a*a+b*b>c*c){
            cout<<"Acute"<<endl;
        }else if(a*a+b*b<c*c){
            cout<<"Obtuse"<<endl;
        }else{
            cout<<"Right"<<endl;
        }
    }
}

int main(){
    int tri[3];
    cin>>tri[0]>>tri[1]>>tri[2];
    sort(tri,tri+3);
    judge(tri[0], tri[1], tri[2]);
    return 0;
}
