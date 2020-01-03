import java.util.Scanner;
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

        // hw -> coinchange (8 methids)+ iske tree diagrams
        // queen 2d wale (4 mehtods)+ tree diagram 
            
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
        boolean[][] box= new boolean[4][4];
        // System.out.println(queencombi(box,0, 0,4,4, ""));
        System.out.println(nqueen(box, 0,4, 0, ""));

    }
}


// box -> track box[x][y] .. teri pichliqueen 
//box ka array ?->pta laagne ke lie ki queen 