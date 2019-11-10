import java.util.Scanner;
public class practice{
    public static Scanner scn=new Scanner(System.in);
    public static int Upper_bound(int[] arr , int data)
    { 
        int li= 0;
        int ri= arr.length-1;
        while(li<=ri)
        {
            int mid = ((li+ri)/2);
            if(arr[mid]==data) 
            {
                // System.out.println("ds");
                //upper bound
                if(arr[mid+1]==data)
                li=mid+1;
                else 
                return mid;

            }
            else if(arr[mid]>data)
            ri=mid-1;
            else
                li=mid+1;

               }
return -1;
            }
//==========================================================
// minimum element using recursion
 public static int minimumele(int []arr , int vidx)
 {
    if(vidx==arr.length-1 ) 
    return  arr[vidx];
    int ans=minimumele(arr, vidx+1);   //recursion
    ans=ans>arr[vidx]?arr[vidx]:ans;
        return ans;
 }
 public static void input(int[] arr){
    for(int i=0;i<arr.length;i++){
       arr[i]=scn.nextInt();
   }
}

    public static void main (String[] args)
    {
    System.out.print("Enter your size : ");
    int n =scn.nextInt();
        int[] arr =new int [n];
        input(arr);
        // int res= minimumele(arr, 0);
        // System.out.print(res);
    int a= scn.nextInt();
    int ans =Upper_bound(arr,a);
    System.out.print(ans);
    }
}
    








//     {
//        System.out.print("Enter your application number : ");
//         int app= scn.nextInt();
//         int res=0;
//         app =app/10;
//         while(app!=0)
//         {   
//         int rem = app%10;
//         res =(res*10)+rem;
//         app/=10;
//         //return rem;
//         }
// System.out.print("Your Roll number : ");
// System.out.print(res);
//     }
    
// }













//application : 456321
    //     roll no : 23654
    //    application = application/10;
    //    int ans =fn reverse(application)