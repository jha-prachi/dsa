#include<iostream>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int nsp=n-1;
    int nst=1;
    // 1 ##*
    //   123
    // 2 #**
    //   123   
    // 3 ***
    //   123
    
    for(int nrow=1;nrow<=n;nrow++){
        // outer loop
        // first loop for space 
        for(int csp=1;csp<=nsp;csp++){
            cout<<" ";
        }
        // second llop for starst
        for(int cst=1;cst<=nst;cst++){
            cout<<"*";
        }
        cout<<endl;
        nsp--;
        nst++;
        //     *
        //    ***
        //   *****
        //  *******    
    }
    //    *
    //   **
    //  *** 
    //  nsp no of space  , nst -> no of stars
    //     space ko # ki form me soch 
    //     ##*
    //     #**
    //     ***
    //     step 1 ) kon gat rha ha aur kon badh rha ai aur kitne se
    //     hamara n kitna hai ?
    //     n=3
    //     int nsp =n-1  , nst = 1
    //     condition
    
    return 0;
}