#include<iostream>
using namespace std;
int main(){
    string input;
    string output;
    int count=0;//0 means no space, 1 means space
    getline(cin,input);
    for(int i=0;i<input.size();i++){
        if(input[i]==' '){
            if(count==0){
                output+=input[i];
                count=1;
            }
        }else{
            output+=input[i];
            count=0;            
        }
        
    }
    cout<<output<<endl;
}