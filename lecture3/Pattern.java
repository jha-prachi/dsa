import java.util.Scanner;
public class Pattern{

    static Scanner sc = new Scanner(System.in);
    public static void main(String[]Args){

         int number = sc.nextInt();
         for(int i = 0;i<number;i++){
             for(int j  =0; j<i-1;j++){
                System.out.print("*");
             
             }

           System.out.println();
         }

    }
}