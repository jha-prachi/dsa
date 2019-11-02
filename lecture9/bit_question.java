import java.util.*;
public class bit_question{
public static Scanner scn =new Scanner(System.in);
// you have to find no of ones in the given number
public static int noofBit_01(int n){
    int count=0;
            for(int i=0; i<32;i++)
                if((n&(1<<i))!=0)     //mask =(1<<i);
                    count++;
    return count;
  }
    //    public static void 
    public static void main (String[] args){
        int n =scn.nextInt(); 
       System.out.println(noofBit_01(n));
    }
}
    