#include <iostream>
#include <string>
using namespace std;
string replaceSpaces(string &str){
    string temp = "";
    for(int i = 0; i<str.size();i++){
        if(str[i]==' '){
           temp.push_back('@');
           temp.push_back('4');
           temp.push_back('0');
        }
        else{
            temp.push_back(str[i]);
        }
    }
    return temp;
	
}
int main(){
    string str = "hello";
    string a = replaceSpaces(str);
    cout<<a;
    return 0;
}