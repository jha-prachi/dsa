import java.io.*;

public class solution {
    public static void main(String[] args) {
        mystack sckt = new mystack(20);
        for (int i = 2; i < 20; i++) {
            sckt.push(i);
            sckt.top();
            sckt.size();
        }
        System.out.println(sckt.top());
        sckt.print();
    }
}