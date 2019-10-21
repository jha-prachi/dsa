#include <iostream>
using namespace std;

void mirrorTriangle(int rows){

    int nst = 1; // no of starts 
    int nsp =rows -1;

    for(int r = 1;r<=rows;r++){                     //Sab Kuch row wale loop mei

     for(int csp=1;csp<=nsp;csp++){

        cout<<" ";         
         }        
    for(int cst =1;cst<=nst;cst++){
        cout<<"*" ;
                            
           }
    nst++;               //pattern observing
    nsp--;
     cout<<endl;
     }
}
    int main(int Args ,char ** Argv){
        int n;
        cin>>n;
        mirrorTriangle(n);
  
    }
