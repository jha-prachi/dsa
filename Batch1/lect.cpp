#include<iostream>
#include<vector>
#include<string>

using namespace std;
void display(vector<vector<int>> dp){
    for(int i =0;i<dp.size();i++){
        for(int j=0;j<dp[0].size();j++){
            cout<<dp[i][j]<< " ";
        }
        cout<<endl;
    }
}
void lcsubstring(string str1 , string str2{
    vector<vector<int>>dp(str1.length()+1,vector<int>(str2.length()+1,0));
    for(int i=dp.size()-1;i>=0;i--){
        for(int j=dp[0].size()-1;j>=0;j--){
            if(str1[i]==str2[j]){
                dp[i][j]=dp[i+1][j+1]+1;
            }
            else{
                dp[i][j]=0;
            }
        }
    }
    // cout<<'h';
    display(dp);

}



int main(){
    lcsubstring("ABCDGH","ACDGHR");
  // cout<<countersubse("babad");
    return 0;
}
