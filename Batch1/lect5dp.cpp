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
vector<vector<int>> lcsubstring(string str1 , string str2){
    vector<vector<int>>dp(str1.length()+1,vector<int>(str2.length()+1,0));
    for(int i=dp.size()-2;i>=0;i--){
        for(int j=dp[0].size()-2;j>=0;j--){
            if(str1[i]==str2[j]){
                dp[i][j]=dp[i+1][j+1]+1;
            }
            else{
                dp[i][j]=0;
            }
        }
    }
    display(dp);
    return dp;
}
//=================================================================================================================
 int lcsubsequence(string str1 , string str2){
        vector<vector<int>>dp(str1.length()+1,vector<int>(str2.length()+1,0));
            for(int i=dp.size()-2;i>=0;i--){
                for(int j=dp[0].size()-2;j>=0;j--){
                    if(str1[i]==str2[j]){
                        dp[i][j]=dp[i+1][j+1]+1; // agar equal hue to diagonal se puchna hain uska ans phir usmei apne ans ko +1 karna hain 
                    }
                    else{
                        dp[i][j]=max(dp[i+1][j],dp[i][j+1]);   //agar equal nahi hue to apne aage wale mei se unka max mangna hai.
                    }
                }
            }
            display(dp);
            return dp[0][0]; 
             }
 //=======================================================================================================================            
 int Distinctsub(string str1 ,string str2){
            vector<vector<int>>dp(str1.length()+1,vector<int>(str2.length()+1,0));
            cout<<dp[0].size()-2<<" "<<str2.length();
            dp[str1.length()][str2.length()]=1;
                for(int i=dp.size()-2;i>=0;i--){
                    for(int j=dp[0].size()-2;j>=0;j--){
                        if(j==str2.length()){
                            dp[i][j]=1;
                        
                        }
                       else  if(str1[i]!=str2[j]){
                            dp[i][j]=dp[i+1][j];
                       }
                            else if(str1[i]==str2[j]){
                                dp[i][j]=dp[i+1][j+1]+ dp[i+1][j];
                            }
                    }
                }
                display(dp);
                return dp[0][0];
 }
//=============================================================
int Knapsack(vector<int> &weight,vector<int> &cost,int tar){
    vector<vector<int>>dp(cost.size()+1,vector<int>(tar+1),0));
   {
        for(int j=0;j<cost.size()+1;j++){
         for(int i=1;i<=tar;i++){
             if(i==0)
             dp[i][j]=j -weight[i]>=0 ? cost[i] : 0;
             else{
                 int taken =0;
                 if(j-weight[i]>=0)
                     taken=dp[i-1][j-weight[i]] +cost[i];
                 dp[i][j]=max(dp[i-1][j], taken);
             }
             }

        }
        return dp[cost.size()-1][tar];
    } 
 }
 
int main(){
   vector<int> arr={1,3,4,5};
   vector<int>array={10,40,50,70};
    cout<<Knapsack(arr,array,8);
    // vector<vector<int>>rec=lcsubstring("ABCDGH","ACDGHR");
    // int max=0;
    // for(int i=0;i<rec.size();i++){
    //     for(int j=0;j<rec[0].size();j++){
    //         if(rec[i][j]>max)
    //         max=rec[i][j];
    //     }
    // }
    // cout<<"Distinct Subsequence : "<<Distinctsub("geeksforgeeks","gks");
       // cout<<"Longest common Subsequence : "<<lcsubsequence("ABCDGH" ,"ACDGHR");
    // cout<<"Longest common Substring is : "<<max;
    // cout<<countersubse("babad");
    return 0;
}

