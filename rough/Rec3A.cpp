#include<iostream>
#include<vector>
#include <string>

using namespace std;

string removehi(string ques , string ans)
{

if(ques.length()==0)
 return ans;


if(ques.length()>1 && ques[0]=='h' && ques[1]=='i')
return removehi(ques.substr(2),ans);
else
{
    char ch = ques[0];
    ans = ans + ch;
    // cout<<" " <<ans;
     
    return removehi(ques.substr(1),ans);
}

}

int main()
{
    cout<<removehi("ihihiiihhjfggcijbguhhlkhjgihiiihih","");
    // cout<<res;
 return 0; 
}
