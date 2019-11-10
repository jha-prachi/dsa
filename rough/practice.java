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
// public static boolean Check_Divisor(int[] arr , int max)
// {int flag =0;
//     for(int i =0; i<=arr.length-1;i++)
//    { if(max % arr[i]==0)
//     flag =1;
//    }
//    return true;
//    else
//    {
//     flag =0;   
//    }
   

// }
public static int Check_Divisor_01(int[] arr , int max)
{int flag =0;
    for(int i =0; i<=arr.length-1;i++)
   { 
       if(max % arr[i]!=0){
        
        flag =1;
        return flag;
       }
        
   }

   return flag;
   
   
}
public static boolean Check_Divisor_02(int[] arr , int max)
{boolean flag =false;
    for(int i =0; i<=arr.length-1;i++)
   { 
       if(max % arr[i]!=0){
        
        flag =true;
        return flag;
       }
        
   }

   return flag;
   
   
}
public static void Check_Divisor_03(int[] arr , int max)
{boolean flag =false;
    for(int i =0; i<=arr.length-1;i++)
   { 
       if(max % arr[i]!=0){
        
        flag =true;
        break;
       }
        
   }

    if(flag==false){
        System.out.println("Yes");
    }
    else{
        System.out.println("No");
    }
   
}
   
public static void main (String[] args)
    {
    // System.out.print("Enter your size : ");
    // int n =scn.nextInt();
        // int[] arr =new int [n];
        // input(arr);
        // int res= minimumele(arr, 0);
        // System.out.print(res);
    // int a= scn.nextInt();
    // int ans =Upper_bound(arr,a);
    // System.out.print(ans);
    // int max = somefn(arr);
    int[] arr ={ 12, 2, 5, 3, 6, 4, 1};
    int max=12;
    int flagofint = Check_Divisor_01(arr, max);
        if(flagofint==1){
            System.out.println("No");
        }
        else{
            System.out.println("Yes");
        }
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