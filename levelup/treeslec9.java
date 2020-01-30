import java.io.*;
import java.util.ArrayList;

// import javax.xml.soap.Node;

class trreslec9 {
    public static class Node {
        int data = 0;
        Node left = null;
        Node right = null;

        Node(int data, Node left, Node right) {
            this.data = data;
            this.left = left;
            this.right = right;
        }

        Node() {

        }

    }

    public static Node create(int[] arr) {
        if (idx == arr.length || arr[idx] == -1) {
            idx++;
            return null;
        }

        Node nnode = new Node(arr[idx], null, null);
        idx++;
        nnode.left = create(arr);
        nnode.right = create(arr);
        return nnode;
    }

    static Node x, y, prev;

    public static boolean Recover_BST(Node node) {
        if (node == null)
            return false;
        boolean res = false;
        res = res || Recover_BST(node.left);
        if (prev != null && node.data < prev.data) {
            y = node;
            if (x == null)
                x = prev;
            else
                return true;
        }
        prev = node;
        res = res || Recover_BST(node.right);
        return res;
    }

    }

    public static void main(String[] args) {
    }

}