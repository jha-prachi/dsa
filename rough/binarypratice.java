import java.util.Scanner;
public class binarypratice{
    public static  Scanner scn=new Scanner(System.in);
    public static void main(String[] args){
        // int size =6;
        int li ,ri;
        int data=4;
        int[] arr={8, 9, 10, 12  ,1 ,2 , 4, 5 ,6}; // khud daala hain not user input
        // System.out.println(binary(arr,3));
        int k = pivot(arr);
        // System.out.println(pivot(arr));
        // k ri-1 ya li
        if(arr[arr.length-1]>=data){
            li=k;
            ri=arr.length;
        }
        else{
            li=0;
            ri=k-1;
        }
        System.out.println(binarysearh(arr,data,li,ri));
    }
    public static int binarysearh(int[] arr , int data,int li , int ri){
        // int li =0;
        // int ri =arr.length-1;
        while(li<=ri){
            int mid = ((li+ri)/2);
            if(arr[mid]==data){
                //lower bound
                return mid;
            }
          
            else if (arr[mid]>data)
            ri=mid-1;

        else{
            li=mid+1;
        }
        }
        
        System.out.print("karke aaya hu");
        return -1;

    }
    public static int binary(int[] arr , int data){
        int li =0;
        int ri =arr.length-1;
        while(li<=ri){
            int mid = ((li+ri)/2);
            if(arr[mid]==data){
                //lower bound
                if(arr[mid-1]==data){
                     ri =mid-1;
                }
                else{
                    return mid;
                }
            }
          
            else if (arr[mid]>data)
            ri=mid-1;

        else{
            li=mid+1;
        }
        }
        
        System.out.print("karke aaya hu");
        return -1;

    }

public static int pivot(int[] arr){
    int li =0 , ri =arr.length-1;
    while(li<=ri){
        int mid =(li+ri)/2;
        if(arr[mid]>arr[mid+1]){
            return mid+1;
        }
        else{
            if(arr[0]>arr[mid]){
                ri=mid-1;
            }
            else{
                li=mid+1;
            }
        }

    }
    return -1;
    
}
}
// 1 23 4
// arr[ri]
/*


8 1239 10 12 1 2
k=6;
li and ri
 8 9 10 12  1 2 8 9 4 5 6
8 9 10 11 12 13 15 16 17 1 2


// 1 1  3 3 3 3 3 3 3 4 4 4 4 4 4 4  4 4  4 4 4 4 4 4 4  4   5  6  7
        //  ri ri  mid
        // if(arr){
        //     if(){

        //     }
        //     else{

        //     }
        // }


        */