import java.util.Scanner;
public class arr_question{
    static Scanner sc = new Scanner(System.in);
  public static void main(String[] Args){
      int[]a = new int [40];
      answer(a);
  }

  public static void answer(int[]arr){
      for(int i=1; i*i<=arr.length;i++){      //question logic
          System.out.println(i*i);

      }
  }
}
