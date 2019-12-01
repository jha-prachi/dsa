import java.util.Scanner;
 public class Rec2anay{
 public static int Starirs (int n ,String ans)
 {
     
 int count =0;
 if(n==0)
 {

     System.out.println(ans);
     return 1;
 }
//  String ans ="";
 if(n>=1){
     count+=Starirs(n-1,ans+1);
 }
//  System.out.print(ans+count);
 if(n>=2)
 {
 count+=Starirs(n-2,ans+2);
//  System.out.print(ans+count);
 }
 if(n>=3)
 {
 count+=Starirs(n-3,ans+3);
//  System.out.print(ans+count);
 }
 return count;
 }


    public static void main(String[]  Args){
            //     String str="abcde";
            //     System.out.println(str.charAt(1));
            int ans =Starirs(5,"");
            System.out.println(ans);
    }
}


/* 
hihiihihihi  
    java                                          cpp
1)  String str = "";                             string str = "";
2)  String str = new String();


1 ) str="hihisadf";
" " -> String diffrent '' -> char
str.length()                                     str.length();
str.substring(2,6)                               str.substr(2,3);
  (begin index , last indeix)                  (negin index , length)

str.charAt(index);                          char ch = str[index]; array of characters 
*/