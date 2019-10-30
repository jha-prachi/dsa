import java.util.Scanner;
public class practice{
    public static Scanner scn=new Scanner(System.in);
    public static void main (String[] args){
       System.out.print("Enter your number : ");
        int n= scn.nextInt();
        int res=0;
        while(n!=0){
        int rem = n%100;
        b8n9 0res =(res*100)+rem;
        n/=100;
        //return rem;
        }
System.out.print(res);
    }
    
}