#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;
int main(){
    system("chcp 65001");
    float low,high,step=20;
    low=0;
    high=300;
    for(float n=low; n<=high; n+=step){
        cout<<left<<setw(6)<<fixed<<setprecision(0)<<n<<left<<setw(6)<<fixed<<setprecision(1)<<(n-32)/1.8<<endl;
    }
    return 0;
}