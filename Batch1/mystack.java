import java.io.*;

public class mystack {
    private int[] st;
    private int idx = -1;

    mystack() {
        this.st = new int[10];
    }

    mystack(int size) {
        this.st = new int[size];
    }

    public void print() {
        System.err.print("[");
        for (int i = idx; i > 0; i--) {
            System.out.print(st[i] + " ,");
        }
        System.out.println(st[0] + "]");

    }

    public int size() {
        return idx + 1;
    }

    public boolean empty() {
        return idx == -1;
    }

    public int top() {
        if (idx == -1) {
            System.out.println("mystack is overflow");
            return -1;
        }
        return st[idx];
    }

    public void push(int data) {
        if (idx >= st.length) {
            System.out.println("mystack is overflow");
            return;
        }
        idx++;
        st[idx] = data;
    }

}
