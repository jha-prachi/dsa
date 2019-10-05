#include<iostream>
using namespace std;

int main(){
    // / 5/2=3 5%2=1 6%2=0 7%2=1 10%5=0 12%11=1 11%12=11 10%35=10 12%2=0 13%2=1 14%2=0 15%2=1
    
    int n;
    cin>>n; //user input
    for(int i =1;i<=n;i++){
if(i % 2== 1 ){

    cout<<i<<"  : This number is odd"<<endl;
   }
else{
cout<<i<<"  : This is Even number" << endl;
}

    }
   

    return 0;
}

//if(condiotn){
    // if condtion true then this block will run 
// }
// else{

// }


