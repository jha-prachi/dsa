import java.util.Scanner;
import java.util.Arrays;
public class binaryserach{
    static Scanner sc = new Scanner(System.in);
  public static void main(String[] Args){
   int n=sc.nextInt();
   int data=sc.nextInt(); 
      int[] arr=new int[n];
      for (int i=0;i<arr.length;i++)
      arr[i]=sc.nextInt();
//System.out.println(BS(arr,data));

System.out.println(BSCE(arr,data));
  }
  public static  int BS(int[] arr , int data){
      int li =0;
      int ri =arr.length-1;
      while(li<=ri){
          int mid =(li+ri)/2;
          if (arr[mid]==data){
              //upper and lower bound
            //   if(mid-1>=0 && arr [mid]==arr[mid+1] )
            //   ri=mid-1;
              if(mid+1<arr.length && arr[mid]==arr[mid+1])
              li=mid+1;
              else // upper bound ends
            return mid ;
          }
          else if(arr[mid]<data)
          li=mid+1;
          else ri=mid-1;
      }
      return -1;
  }
 // closest element     
public static int BSCE(int[] arr , int data){
    int li = 0,ri = arr.length-1;
    if (arr[ri]<=data)
    return ri;
    if (data <=arr[li])
    return li;
     while(li<=ri){
          int mid =(li+ri)/2;
          if (arr[mid]==data){
              return mid;
          }
           else if(arr[mid]<data)
          li=mid+1;
          else ri=mid-1;
          }
       // return ((data - arr[ri])<=(arr[li]-data))?ri:li;
        return ((data - arr[ri])<=(arr[li]-data))?arr[ri]:arr[li]; 
      //  (return elementrather then pointer index)

  }

}