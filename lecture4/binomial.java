import java.util.Scanner;
public class binomial{
    static Scanner scn = new Scanner(System.in);
          public static void pascalTriangle (int rows){
for(int n=0;n<rows;n++) {
    int val =1;    //present value
    for(int r=0; r<=n;r++){
System.out.print(val +" ");
val= (val*(n-r))/(r+1);

    }
    System.out.println();
}             

          }
  public static void main(String[] Args){
      System.out.println("Enter your rows : ");
        int n = sc.nextInt();
      //  pascalTriangle(n);
      fibonacci(n);

    }
    public static void fibonacci(int n){
        int nst =1,a=0,b=1,sum;
        for(int i =1; i<=n ; i++){
            for (int cst=1;cst<=nst; cst++){
                
                System.out.print(a+" ");
                sum =a+b;
                a=b;
                b=sum;
            }
            nst++;
               System.out.println();
        }
    }
}