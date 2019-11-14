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

string removehiwithouthit(string ques)
{
if(ques.length()==0)
return " ";
if(ques.length()>1 && ques[0]=='h' && ques[1]=='i')

    if(ques.length()>2 && ques[2]=='t')
        return "hit" + removehiwithouthit(ques.substr(3));
else
        return removehiwithouthit(ques.substr(2)); 

else
return ques[0]+removehiwithouthit(ques.substr(1));


}


int main(){
   cout<<removehiwithouthit("ihihihithihihhithhhhithiiihithhithit");
   // cout<<removeHi01("ihihhithithihhhhhithitt");
    return 0;
}