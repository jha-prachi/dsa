import java.util.Scanner;

public class dynamic{
    public static Scanner scn = new Scanner(System.in);
   static int call1,call2;
   public static int Noof_Ways(int n, int[] storage){
       call1++;
       //Memorization
   if(n==0) 
   return 1;
   if(storage[n]!=0)        //if value is there then return this value
            return storage[n];
      call2++;      
     int count =0;
    for(int diec=1;diec<=6;diec++){
        if(n-diec>=0){
             count=count + Noof_Ways(n-diec,storage);
             
        }
    }
    storage[n]=count;//storing
    return count;
   }
   public static int dicetabo(int n){
       int[]dp= new int[n+1];
       dp[n]=1;
       for(int i=n-1;i>=0;i--){
           for(int j=1;j<=6;j++){
               if(i+j<=n)
               dp[i]+=dp[i+j];
           }
       }
    return dp[0];

   }
   //====================================================================================================
   //mazepath multimoves
   public static int Mazepathmulti(int sr,int sc,int er,int ec,int[][] dp){
       call1++;
       if (sr==er&& sc==ec)
       return 1;
       int ans=0;
       if(dp[sr][sc]!=0)
       return dp[sr][sc];
       call2++;
       for(int jump=1;jump<er;jump++){
           if(sr+jump<=er && sc+jump<=ec)
           ans += Mazepathmulti(sr+jump,sc+jump,er,ec, dp);
           if(sr+jump<=er)
           ans += Mazepathmulti(sr+jump,sc,er,ec,dp);
            if(sc+jump<=ec)
           ans +=Mazepathmulti(sr,sc+jump,er,ec,dp);
       }
       dp[sr][sc]= ans;
            return ans;
   }
   //tabulization
   public static void display(int[][] arr){
   for(int i=0;i<arr.length;i++){
   for(int j=0;j<arr[0].length;j++)
   {
    // andar
    System.out.print(arr[i][j]+" ");
   }
   // bhar 
   System.out.println(" ");
   }

   }
 static void mazemulti(int sr,int sc, int er,int ec){
    int[][]dp=new int[er+1][ec+1];
   
        for(int i=er;i>=0;i--)
            for(int j=ec;j>=0;j--){
                 for(int jump=1;jump<=er;jump++){
                if(i+jump<=er){
                    dp[i][j]+= dp[i+jump][j];
                }
                if(j+jump<=ec)
                dp[i][j]+= dp[i][j+jump];
                if(i==er&&j==ec)
                dp[i][j]=1;
            }
        
    }
    display(dp);
}
 //============================================================================
public static void MinJump(int[]arr){
    int[] dp= new int[arr.length];
    dp[arr.length-1]=0;
    for(int i=arr.length-2;i>=0;i--){
        int min=(int)1e6;
        for(int j=1;j<=arr[i] && i+j<arr.length;j++){
            min=Math.min(dp[i+j],min);
        }
        dp[i]=min+1;
    }
    System.out.println(dp[0]);
 
}


    public static void main(String[] args) {
    //    mazemulti(0,0,3,3);
        // int er=3,ec=3;
        // int[][]dp= new int[er+1][ec+1];
        // int rec=Mazepathmulti(0,0,3,3,dp);
        // System.out.println(call1 +"function call "+" " + call2);
        // System.out.println(rec);
        // int n=10;
        // int[] storage=new int[n+1];
        // int rec=Noof_Ways(n,storage);
        // System.out.println(call1 +" " + call2);
        // System.out.println(rec);
        int[]array={1,3,0,4,0,0,2,1,1,0};
            MinJump(array);
    }
}
