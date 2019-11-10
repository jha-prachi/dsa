#include <iostream>
#include <vector>
#include <string>

using namespace std;


string removeHi(string str){

    if(str.length()==0)
    return " ";52

char ch =str[0];
if(str.length()>1 && str[0]=='h'&& str[1]=='i' )
return removeHi(str.substr(2));
else
return ch+ removeHi(str.substr(1));
}
//////// Remove hi from string (hit)
// string removehit(string str)
// if (str.length()==0)
// return " ";
// char ch =str[0];
// char ch =str[1];
// if(str.length()>2 && str[0]=='h'&& str[1]=='i' && str[2]=='t')
// return removehit(str.substr(3));
// else 
// return ch1 +ch2 removehit(str.substr(2));
// }


int main(){

string str ="ihiiihihiihiihihihii";
   string result=removeHi(str);
    cout<<result;
 
}