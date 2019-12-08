import java.util.Scanner;
public class Sadal{
    
public static Scanner scn = new Scanner(System.in);
    public static void sadal(int[][] arr){
        int temp=-1,flag=0;
        int min=arr[0][0];
        int max = arr[0][0];
        for(int i=0;i<arr.length;i++){
            
            for(int j=0;j<arr[0].length;j++){
                if(min>arr[j][i]){
                    min=arr[j][i];
                }
            }
        }
        for(int i=0;i<arr.length;i++){
            
            for(int j=0;j<arr[0].length;j++){
                if(max<arr[j][i]){
                    max=arr[j][i];
                }
            }
        }
        System.out.print(max +" "+ min);
        if(min==max){
            System.out.println(max);
        }
        else{
            System.out.println("No Such Point Exist");
        }
    }
    public static void main(String[] args){
        int m = scn.nextInt();
        int n=scn.nextInt();
        int[][] arr  = new int[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++)
                arr[i][j] = scn.nextInt();
        }
        sadal(arr);
    }
}