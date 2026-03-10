#include<iostream>
using namespace std;
int main(){
    int a;
    while(a=getchar()!=EOF){
        cout<<a<<" "<<endl;
    }
    printf("EOF=%d\n",EOF);
    printf ("a=%d\n",a);
    return 0;
}