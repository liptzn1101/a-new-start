#include<iostream>
using namespace std;
int main(){
    string input;
    string output;
    getline(cin, input);
    for(int i=0;i<input.length();i++){
        if(input[i]=='\t'){
            output+="\\t";
        }
        if(input[i]=='\b'){
            output+="\\b";
        }
        if(input[i]=='\\'){
            output+="\\\\";
        }
        output+=input[i];
    }
    for(int i=0;i<output.length();i++){
        putchar(output[i]);
    }
}