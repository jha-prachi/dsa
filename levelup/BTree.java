public class BTree {
    public static class Node {
        int data = 0;
        Node left = null;
        Node right = null;

        // data memebers
        Node() {
            // default constructor
        }

        Node(int data, Node left, Node right) {
            this.data = data;
            this.left = left;
            this.right = right;
        }

        // member functions

    }

    static int idx = 0;

    public static Node TreesCons(int[] arr) {
        if (arr[idx] == -1) {
            idx++;
            return null;

        }
        // object creation
        // int arr =new int[size];
        Node circle = new Node(arr[idx], null, null);
        // circle.data = arr[idx];
        idx++;
        circle.left = TreesCons(arr); // tree connect to each other
        circle.right = TreesCons(arr);
        return circle;
    }

    public static void display(Node circle) {
        if (circle == null)
            return;
        if (circle.left == null) {
            System.out.print(". <-");
        } else {
            System.out.print(circle.left.data + " <-");
        }
        System.out.print(circle.data + "->");
        if (circle.right == null) {
            System.out.print(".");
        } else {
            System.out.print(circle.right.data);
        }
        System.out.println("");
        display(circle.left);
        display(circle.right);

    }

    static int max = 0;

    public static int height(Node root) {
        if (root == null)
            return 0;
        int lh = height(root.left);
        int rh = height(root.right);
        max = Math.max(lh, rh);
        max = max + 1;
        return max;
    }

    public static int size(Node root) {
        if (root == null)
            return 0;
        int ls = size(root.left);
        int rs = size(root.right);
        return ls + rs + 1;
    }
    static Node findnode  = new Node();
    public static Boolean FIND(Node root, int data) {
        if (root.data == data) {
            findnode =   root;
            return true;
        }
        boolean ls = FIND(root.left, data);
        if(ls == true){
            return true;
        }
        boolean rs = FIND(root.right, data);
        if(rs == true){
            return true;
        }
        return false;
    }

    public static void main(String[] args) {
        int[] arr = { 10, 20, 30, -1, -1, 40, -1, -1, 50, 60, 80, -1, -1, -1, 70, 90, -1, 100, -1, -1, -1 };
        Node root = TreesCons(arr);
        System.out.println(height(root));
       // System.out.println(size(root));
        // display( root);

    }
}
// int float - < java *
/*
 * class Node{ int data=0; Node left = null; Node right = null;
 * 
 * } Node(){
 * 
 * }
 * 
 * class marks{ int sci; int maths; int hindi; }
 * 
 * 
 * marks anay; anay.sci=32 anay.hindi =34;
 * 
 * marks stud[10];
 * 
 * 
 * 
 * 
 */