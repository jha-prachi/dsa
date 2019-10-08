import java.util.Scanner;
public class factorial{
    public static Scanner scn= new Scanner (System.in);  // user input
        public static void main(String[] args){
                        System.out.println("Please enter your number");  // print
                        int n = scn.nextInt();

            System.out.println(facto(n));
            ncr();
        }


        public static void ncr(){ // function banne ka tarika
            System.out.println("Please enterr you n & r : ");
            int n =scn.nextInt();// user input
            int r =scn.nextInt();//user input
            int ans = facto(n) / (facto(n-r)*facto(r));
                        System.out.println(ans);
}


public static int facto(int n){
    int ans = 1;                     //return karwaya kyuki ans ncr ko chaiye
    for(int i=1; i<=n; i++){
        ans*=i;
    }
    return ans;
}
}