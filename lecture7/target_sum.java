import java.util.Scanner;
public class target_sum{
    static Scanner sc = new Scanner(System.in);
    public static void main(String[]Args){
//low =li high = ril
            int n = sc.nextInt();
            int[]a = new int[n];
            for(int i=0;i<a.length;i++)
                a[i] = sc.nextInt();
            System.out.println("Enter target : ");
            int target =sc.nextInt();
            int low = 0;    
            int high = a.length-1;
            int sum=0;
            while(low<high){
                sum = a[low]+a[high];
                if(sum<target)
                    low++;
                else if(sum>target)
                    high--;
                else if(sum == target){
                    System.out.println(a[low]+" "+a[high]);
                    low++;
                    high--;
                }
            }
    }


}