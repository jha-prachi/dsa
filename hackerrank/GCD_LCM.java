import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class GCD_LCM {
    public static Scanner scn = new Scanner(System.in);
    
    public static void main(String[] args) {
        int n1 =  scn.nextInt();
        int n2 = scn.nextInt();
        gcd(n1,n2);
        // System.out.println(gcd(n1,n2));
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
    }
    public static void gcd(int n1 , int n2){
            int gcd=1,lcm;
            int small =  n1>n2?n2:n1;
            for(int i=2;i<small;i++){
                if(n1%i==0 && n2%i==0){
                    gcd=i;
                }
            }
        lcm = (n1*n2)/gcd;
        System.out.println(gcd+" "+lcm);
    }
}