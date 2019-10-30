import java.util.Scanner;
public class rotation{
    public static Scanner scn =new Scanner(System.in);
    public static int count(int n){
        int count=0;
        while(n!=0){
            // count++;
            count = count+1;
            // n=n/10
            n/=10;
        }
    return count ;
    }
    public static int reverse(int num , int k){
        int res=count(num);
        int mul =1,div=1;
        k=k%res;
        for(int i=1;i<=res;i++)// mapping of i with k
        {
            if(i<=k){
               mul= mul*10;
            }
            else{
                div=div*10;
            }
        }
        int ans=num/div;
       num= num%div;
       int anay=num*mul+ans;
       return anay; 
    }

    public static void main (String[] args)
    {int num=scn.nextInt();
    int k=scn.nextInt();
      int prachi= reverse(num,k);
        System.out.println(prachi);
    }
}
public static int odd_Rotation(int n){
    int odd =0;
    int even =0;
    while(n!=0){
      int digit=n%10;
      if(digit%2==1){
          odd++;
          System.out.print(odd); 
      }  


      else(int res =n/10)
          even++;
          return res;
          System.out.print(even);

    
    }
}

// 65454564
 
// agar hme kisi number ki har digit ko extract out karna hai 

// int a = n%10  -> last digit ko extract out
//  // yaha par code ka logic

// n=n/10 -> last digit ko hta dega



// k=1;


// n%10=5
// if( 5 is odd){
//     odd++
// }
// else{
//     even++
// }
// n=n/10;
// 65415912618
// n%10=8
// if(8 is odd){
//     odd++
// }
// else{P
// even++;
// }































 //     application : 456321
    //     roll no : 23654
    //    application = application/10;
    //    int ans =fn reverse(application)
// 234567/10=23456 = 1
// 23456/10=2345  = 2
// 2345/10=234 =3 
// 234/10=23
// 23/10=2
// 2/10=0
// 0 loop ends 