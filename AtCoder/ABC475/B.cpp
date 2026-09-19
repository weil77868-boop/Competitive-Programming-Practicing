#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> p(n);
    int o = 0,t = 0,h = 0;
    for(int i=0;i<n;i++){
        cin>>p[i];
        int r = p[i]%1000;
        if(r!=0){
            h += (1000-r)/100;
            t += ((1000-r)/10)%10;
            o += (1000-r)%10;
        }
    }
    cout<<o<<' '<<t<<' '<<h<<endl;
    return 0;
}
