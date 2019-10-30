import java.util.Scanner;
public class prime{
   public static Scanner scn = new Scanner(System.in);
  public static void main(String[] Args){
      System.out.print("Enter your number :  ");
         int n=scn.nextInt(); 
         int flag=0;
         int i =0;
         for( i=2;i*i<=n;i++){
             if(n%i==0){
                 flag=1;
                 break;
             }
             else {
                 flag=0;
             }
         }
       if(flag==1)  {
           System.out.println(" NOt Prime NO. : " + i  );
       }
       else{
          System.out.println(" Prime NO. : " ); 
       }


  }
}