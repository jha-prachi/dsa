#include <iostream>
#include <vector>
#include <string>

using namespace std;


string removeHi01(string ques){
// base case
    if(ques.length()==0){
    // cout<<ans<<endl;
    return "" ;    
    }
    // char ch = ques[0];
    if(ques.length()>1 && ques[0]=='h'&&ques[1]=='i'){
        string ros = ques.substr(2);
        return removeHi01(ros);
    }else{
        string ros= ques.substr(1);
        return ques[0]+removeHi01(ros);
    }
// htmk -> tmk ,"h" -> mk ,"ht"


}

int main(){
    // removeHi("hjhisdhifhi","");
    cout<<removeHi01("ihihhithithihhhhhithitt");
    return 0;
}