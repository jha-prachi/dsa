import java.util.Scanner;
public class factorial_a{
    public static Scanner scn= new Scanner (System.in); 
public static void main(String[] args){

System.out.println("Enter Your Factorial Number : ");     //print on Screen
int n = scn.nextInt();    // User input
 int ans = facto(n);
 System.out.println(ans);
}


public static int facto(int n){
    int result = 1;   //Initilaized the result(variable)
for(int i =1 ; i<= n; i++){
       result = result * i ;     //Logic     
}

return result;
}

}

// class{

//     main(String[]){ // main function
//         // main ki body
   
//     }
//       func1(int a ){ // 2nd function
//         // func1 ki body jisme tune a kko use kiya
//     }
//     func2(int a , int b){

//     }
// }


// func1(int a){

// }
// main(){

// }