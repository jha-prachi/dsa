import java.util.Scanner;
public class num_diamond{


    static Scanner sc = new Scanner(System.in);
    public static void number(int rows){
        int nst =1;
        int nsp = rows-1;
        int cst=0;
        for(int r = 1;r<=rows;r++){

            for(int csp =1;csp <=nsp;csp++)
                System.out.print(" ");   //logic for space printing

            int ele = r;
            if(r > (rows+1)/2)
                ele = rows-r+1;
            for( cst = 1;cst<=nst;cst++){
                
                System.out.print(ele);
                if(cst<=nst/2)
                ele++;
                else
                ele--;
                
            }
            
            if(r<=rows/2){
                nsp--;
                nst+=2;
                System.out.println();
            }
            else{
                nst-=2;
                nsp++;   
                System.out.println();
             
            }

        }
    }
    public static void main(String[] Args){
        int n = sc.nextInt();
        number(n);

    }

}