#include <iostream>
using namespace std;

string c[10]={"庚","辛","壬","癸","甲","乙","丙","丁","戊","己"};
string d[12]={"申","酉","戌","亥","子","丑","寅","卯","辰","巳","午","未"};

int main(){
    int n;
    while(cin>>n){
        cout<<c[n%10]<<d[n%12]<<'\n';
    }
    return 0;
}
