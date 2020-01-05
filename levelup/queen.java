import java.util.Scanner;

import sun.print.SunAlternateMedia;
public class queen{
    public static Scanner scn=new Scanner(System.in);
    public static boolean isSafe(boolean[][] box,int x, int y){
        int[][] dir={{0,-1},{-1,-1},{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1}};
        int size= Math.max(box.length,box[0].length);
        for(int d=0;d<8;d++){
                    for(int rad=1;rad<=size;rad++){//max tak radius jayega
                int X=x+rad*dir[d][0];
                int Y=y+rad*dir[d][1];
                if(X>=0 && Y>=0 && X<box.length && Y<box[0].length){// //v valaidilty
                    if(box[X][Y]==true) return false; // kya uspe queen place d hai(piche wale cell par)  jo isse mar rhi ho
                }
                else{
                    break;
                }
            }
        }
        // max(4,4)=4
        // X = 0 + 2*0
        // Y = 0 + 2*(-1) -> (0,-2)

        return true;
    }
    public static int queencombi(boolean[][] box,int idx,int qpsf,int er,int tnq,String ans){
        if(qpsf==tnq||idx==er*er){
            if(qpsf==tnq){
                System.out.println(ans);
                return 1;
            }
            return 0;
        }
        int count=0;
        int a=idx/er;
        int b=idx%er;
        if(isSafe(box,a,b) ){
            box[a][b]=true;

        count+=queencombi(box, idx+1, qpsf+1, er, tnq, ans + "("+a +" ," + b + ")");
            box[a][b]=false;
    }
        count+=queencombi(box, idx+1, qpsf, er, tnq, ans);
        return count;
    }
    //====================================================================================
    // public static int Queenbits( int box,int bitr,int bitc,int bitd,int bitad,int tnq3
    ){
    //     if(qpsf==tnq || idx==col*col){
    //         if(qpsf==tnq){
    //             System.out.println(ans);
    //             return 1;
    //         }
    //         return 0;
    //     }
    //     int count=0;
    //     int a=(1<<col);
    //     int b=(1>>row);
    //     int c=()



    //     return
    // }
public static boolean SudokuSafe(int[][] box,int num ,int row,int col){
    for(int c=0;c<9;c++){
        if(num==box [row][col])
        return false;
    }
    for(int a=0;a<9;a++){
        if(num==box[row][col])
        return false;
    }
    int x=(row/3)*3;
    int y=(col/3)*3;
    for(int i=x;i<x+3;i++){
        for(int j=y;j<y+3;j++){
         if( box[i][j]==num)       
        return false;
       }
    } 
}
   public static int Sudoku(int[][] board,int idx){
        if(idx==81){
            return 1;

        }
        int count=0;
int xrow=idx/9;
int ycol=idx%9;
if(board [xrow][ycol]==0){
for(int num=1;num<=9;num++){
    if(SudokuSafe(board,num,xrow,ycol)){
        board[xrow][ycol]=num;
      count+=Sudoku(board, idx+1); 
      board[xrow][ycol]=0;
    }

}
}

return count;


    }
    //===================================PERMUTATION===========================================================================
    public static int nqueen(boolean[][] box , int qpsf, int tnq , int lqpl , String ans ){
        if(tnq==qpsf || lqpl == box.length*box[0].length-1){
            if(tnq==qpsf){
                System.out.println(ans);
                return 1;

            }
            return 0;
        }
        int count=0;
        for(int i=0;i<box.length*box[0].length;i++){
            int x = i/box.length;
            int y = i%box[0].length;
            if(box[x][y]==false && isSafe(box, x, y)){
                box[x][y]=true;
                count+= nqueen(box,qpsf+1, tnq, lqpl+1, ans+"("+x+" ,"+y+") ");
                box[x][y]=false;
            }
            // dir vector mei sari  directions islie lia hai kyuki isme jo aage wala region hai usme bhi queen bethi ho skti hai 
            // lekin permu mei hmesha hm 0 se start jartre hai islie hme sari directions leni padti hai .
            // jo combi walia tha usme hmesha aage wala region unexplored rheta hai 
            // q0 is placed 0,3 -> q1 is placed1,0 ->q2 is placed 0,0
            // box[0][3]= true -> box[1][0]=true -> (ek hi recusion call chal rhi hai )
            // tp ye jabhi false ho ja jab aage wala bnada apni sari rec call khek kar raa jayega

       
        }
        return count;
    }
// 2 calls
/*
box[x][y]=true;
1st calss -> ki vo queen placed hogi
box[x][y]=false;
2nd calls , ()idx+1; kya pata vo idx par nahi bethi to kya pata bo idx+1 par bethna chahe


*/
  

    public static void main (String[] args){
        // boolean[][] box= new boolean[4][4];
        // // System.out.println(queencombi(box,0, 0,4,4, ""));
        // System.out.println(nqueen(box, 0,4, 0, ""));


       int[][] board= {{3, 0, 6, 5, 0, 8, 4, 0, 0},  
                      {5, 2, 0, 0, 0, 0, 0, 0, 0},  
                      {0, 8, 7, 0, 0, 0, 0, 3, 1},  
                      {0, 0, 3, 0, 1, 0, 0, 8, 0},  
                      {9, 0, 0, 8, 6, 3, 0, 0, 5},  
                      {0, 5, 0, 0, 9, 0, 6, 0, 0},  
                      {1, 3, 0, 0, 0, 0, 2, 5, 0},  
                      {0, 0, 0, 0, 0, 0, 0, 7, 4},  
                      {0, 0, 5, 2, 0, 6, 3, 0, 0}}; 
                      
                      System.out.println(Sudoku(board, 0));

    }
}


// box -> track box[x][y] .. teri pichliqueen 
//box ka array ?->pta laagne ke lie ki queen 