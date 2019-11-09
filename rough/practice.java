import java.util.Scanner;
public class practice{
    public static Scanner scn=new Scanner(System.in);
    // public static void main (String[] args){
    //    System.out.print("Enter your application number : ");
    //     int app= scn.nextInt();
    //     int res=0;
    //     app =app/10;
    //     while(app!=0){   
    //     int rem = app%10;
    //     res =(res*10)+rem;
    //     app/=10;
    //     //return rem;
    //     }

    public static int index(int[]arr , int data){
        for(int i =0;i<=arr.length-1;i++)
            if(arr[i]==data)
                return i;
   // else if()
     return -1;
    }
    public static void main(String[] args) {
        int n=scn.nextInt();//size
        int a=scn.nextInt();//data
        int []arr=new int[n];
        System.out.print(index(arr,a));
        
        
    }
    
}

// System.out.print("Your Roll number : ");
// System.out.print(res);
//     }
    
// }













//application : 456321
    //     roll no : 23654
    //    application = application/10;
    //    int ans =fn reverse(application)