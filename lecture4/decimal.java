import java.util.Scanner;
public class decimal{
    static Scanner scn = new Scanner(System.in);
  public static void main(String[] Args){
      System.out.print("Enter your numnber: ") ;    
      int num=scn.nextInt();
    //  int ans= DtoB(num);
      int val = BtoD(num);
System.out.print(val);
}
 public static int DtoB (int num)
{
    int res =0;
    int pow= 1;
    while (num!=0){
        int rem =num % 2;
        num /=2;
        //res=res+pow*rem
      res+= pow *rem;
      pow *= 10;
    }
    return res;
    
}
 public static int BtoD(int num){
 int res =0;
    int pow= 1;
    while (num!=0){
        int rem =num % 10;
        num /=10;
        //res=res+pow*rem
      res+= pow *rem;
      pow *= 2;   
}
return res;
  }
}