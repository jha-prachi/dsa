import java.io.*;
import java.util.*;

public class Solution {

     public static Scanner scn = new Scanner(System.in);
    public static void main(String[] args){
        long b = scn.nextLong();
        long a = scn.nextLong();
        System.out.println(rotation(a,b));


    }
    public static int reverseOfNo(long a ){
        int count =0;
        while(a!=0){
            count ++;
            a/=10;

        }
        return count;
        
    }

    public static long rotation(long a , long k){
        if(a==0){
            return 0;
        }
        else{
        long digit = reverseOfNo(a);
        k=k%digit;
        long mul=1,div=1;
        k = k<0?k+digit:k;
        for(long i=1;i<=digit;i++){
            if(i<=k){
                mul*=10;
            }
            else{
                div*=10;
            }
        }
        long rem = a%div;
        a/=div;
        return (rem*mul) + a;

    }
    }
}