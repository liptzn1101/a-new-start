#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
int main(){
    system("chcp 65001");
    string str;
    int enter=0;
    while(getline(cin,str)){
        int table=0;
        int space=0;
        for(int i=0;i<str.length();i++){
            if(str[i]=='\t'){
                table++;
            }
            else if(str[i]==' '){
                space++;
            }
        }
        enter++;
        cout<<"回车符的个数："<<enter<<endl;
        cout<<"制表符的个数："<<table<<endl;    
        cout<<"空格的个数："<<space<<endl;
    }    
    return 0;
}