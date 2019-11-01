import java.util.Scanner;
public class practice{
    public static Scanner scn=new Scanner(System.in);
    public static void main (String[] args){
       System.out.print("Enter your application number : ");
        int app= scn.nextInt();
        int res=0;
        app =app/10;
        while(app!=0){   
        int rem = app%10;
        res =(res*10)+rem;
        app/=10;
        //return rem;
        }

System.out.print("Your Roll number : ");
System.out.print(res);
    }
    
}













//application : 456321
    //     roll no : 23654
    //    application = application/10;
    //    int ans =fn reverse(application)