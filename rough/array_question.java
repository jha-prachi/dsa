import java.util.Scanner;
public class array_question{
    public static Scanner scn =new Scanner(System.in);
    
public static int maximum(int[] arr ,int n){
int i =0; 
int max=arr[0];
for (i=1;i<arr.length;i++){

    if(arr[i]>max){
    max=arr[i];
    }
}
return max;
}
// public static int minimum(int[] arr ,int n) {
//     int i =0;
//     int min =arr[0];
//     for(i =0;)

}


public static void input(int[] arr){
     for(int i=0;i<arr.length;i++){
        arr[i]=scn.nextInt();
    }
}
 public static void display(int[] arr){

     for(int i=0;i<arr.length;i++){
        System.out.print(arr[i]+ " ");
        
    }
}
    public static void main(String[] Args){
        System.out.println("enter your array size : ");
        int n =scn.nextInt();
        int[] arr =new int [n];
       input(arr);
    //    System.out.print("Maximum number :");
       System.out.println("maximum no is : "+  maximum(arr , n));
        
        //display(arr);

    }
}
