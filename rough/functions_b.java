import java.util.Scanner;

public class functions_b{
    public static Scanner scn = new Scanner(System.in);
    public static void main(String[] args){
           System.out.println("Enter your number : ");

        int num = scn.nextInt();
        int res  = add(num,3);   
        System.out.println(" your number is : " + res);
        
                 
    //  print(num);              // functin call ka tarika   
    }                      // main scope ends

 public static void print( int a){
    System.out.println("Hello World" + " " +a);

}


public static int add (int num_1 , int num_2){
    int num_3 =  num_1 + num_2;
    return num_3;
}

}// class scope endsa

