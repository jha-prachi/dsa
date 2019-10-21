#include <iostream>
using namespace std;

void full(int rows){
    int nst =1;
    int nsp = rows;

    for(int r = 1;r<=rows;r++){
        if(r<=rows/2){
        for(int csp = 1;csp<=nsp;csp++){
            cout<<" ";
        }
        for(int cst = 1;cst<=nst;cst++)
            cout<<"*";

        nst+=2;
        nsp--;
        cout<<endl;
    }
    else{
        for(int csp = 1;csp<=nsp;csp++)
            cout<<" ";
        for(int cst = 1;cst<=nst;cst++)
            cout<<"*";

        nst-=2;
        nsp++;
        cout<<endl;
         }
    }

}
    int main(int Args ,char ** Argv){
        int n = 0;
        cin>>n;
        full(n);
  
    }
