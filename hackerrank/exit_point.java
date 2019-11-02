import java.io.*;
import java.util.*;

public class soln {
public static Scanner scn = new Scanner(System.in);
    // This is a functional problem. 
    // Input is managed for you.
    // Don't change main, write your code in the function below
    public static void main(String[] args) {
       int r = scn.nextInt();
        int c = scn.nextInt();
        int[][] arr = new int[r][c];
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[0].length; j++) {
                arr[i][j] = scn.nextInt();
            }

        }
        exitPoint(arr);
    }


    public static void exitPoint(int[][] v) {
         int dir=0 , row=0,col=0;
        while(true){ // an infinte loop which will only break in inner break condition
            dir = (dir + v[row][col])%4;
            if(dir==0){
                col++;
                if(col == v.length){
                    System.out.println( row +", " + (col-1));
                    break;
                }
            }
            if(dir==1){
                row++;
                if(row ==v.length){
                    System.out.println( (row-1) + ", " + col);
                    break;
                }
            }
            if(dir==2){
                col--;
                if(col== -1){
                    System.out.println(row + ", " + (col+1));
                    break;
                }
            }
            if(dir==3){
                row--;
                if(row == -1){
                    System.out.println((row+1) + ", " + col);
                    break;
                }
            }
        }
    }
    
    
}