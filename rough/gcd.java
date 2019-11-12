import java.io.*;
import java.util.*;

public class gcd {
    public static Scanner scn = new Scanner(System.in);
    public static void main(String[] args) {
        
        int a = scn.nextInt();
        int b = scn.nextInt();
      
        // int gcd=1;
        // for(int i=1;i<a;i++){
        //     if(a%i==0 && b%i==0){ 
        //         gcd=i;
        //     }
        // }
            int gcdans = gcd1(a,b);
     
    // System.out.println(gcd1(a,b));
    int lcm =(a*b)/gcdans;
     System.out.print(gcdans + " " + lcm);
    }


 public static int gcd1(int num1 , int num2 )
 {
    if(num1<num2){
        int temp=num1;
        num1=num2;
        num2=temp;
    }
    // 60/40 , 40/60
    // 60%40
    // bada num % choa num
    // num1%numn2

  while(num1%num2!=0){
      int rem =num1 % num2;
      num1 =num2;
      num2=rem;
      
  
  }
  return num2;  
}
}

