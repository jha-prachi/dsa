#include<iostream>
using namespace std;

void hollow(int rows){
    int nsp=rows-1,nsp1=-1;
    // int nst=1;
    for(int i=1;i<=rows;i++){
     for(int csp=1;csp<=nsp;csp++)  {
       cout<<" ";  
     } 
    cout<<"#";
    if(i!=1){  // csp1 is for hollow space
         for(int csp1=1;csp1<=nsp1;csp1++){
        cout<<" ";
    }

    }
   
    if(i!=1){
        cout<<"#";
    }
    
     nsp--;
    nsp1+=2;
    cout<<endl;
    }
    for(int i=1;i<2*rows;i++ ){   // for last one pattern
        cout<<"#";
    }
    
}
 

int main(){
    int rows;
    cin>>rows;
    hollow(rows);
    // i love you pily
    return 0;
}