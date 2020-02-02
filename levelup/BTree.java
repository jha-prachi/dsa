
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

    static Node findnode = new Node();

    public static Boolean FIND(Node root, int data) {
        if (root.data == data) {
            findnode = root;
            return true;
        }
        boolean ls = FIND(root.left, data);
        if (ls == true) {
            return true;
        }
        boolean rs = FIND(root.right, data);
        if (rs == true) {
            return true;
        }
        return false;
    }

    public static Node makeBST(int[] arr, int li, int ri) {
        if (li > ri)
            return null;
        int mid = (li + ri) / 2;
        Node root = new Node(arr[mid], null, null);
        root.left = makeBST(arr, li, mid - 1);
        root.right = makeBST(arr, mid + 1, ri);

        return root;
    }

    public static Node adddata(Node root, int data) {
        if (root == null) {
            Node ans = new Node(data, null, null);
            return ans;
        }
        if (data < root.data) {
            root.left = adddata(root.left, data);
        } else {
            root.right = adddata(root.right, data);
        }
        return root;
    }

    public static Node removedata(Node root, int data) {
        // if()
        if (root.left == null && root.right == null)
            return null;
        if (root.left == null || root.right == null) {
            if (root.left == null) {

            }

        }
        return root;
    }

    public static Node LCANODE(Node root, int a, int b) {
        if (root == null)
            return null;
        if (root.data < a) {
            return LCANODE(root.right, a, b);
        } else if (b < root.data) {
            return LCANODE(root.left, a, b);
        } else {
            return root;
        }

    }

    public static Node Rangeprint(Node root, int a, int b) {
        if (root == null)
            return null;
            if(root.data<a){
                return Rangeprint(root.right, a, b);
            }
            else if (b < root.data) {
                return Rangeprint(root.left, a, b);
            } else {
                if(root.data>=a && root.data<=b){
                System.out.println(root.data);
                }
                Rangeprint(root.right, a, b);
                Rangeprint(root.left, a, b);
                return root;
            }
    }

    public static void main(String[] args) {
        // int[] arr = { 10, 20, 30, -1, -1, 40, -1, -1, 50, 60, 80, -1, -1, -1, 70, 90,
        // -1, 100, -1, -1, -1 };
        // Node root = TreesCons(arr);
        // System.out.println(height(root));
        // System.out.println(size(root));
        // display( root);
        int[] array = { 10, 20, 30, 40, 50, 60, 70, 80, 90 };
        Node root1 = makeBST(array, 0, array.length - 1);
        // Node ans = LCANODE(root1, 30, 80);
        Node ans = Rangeprint(root1, 30, 80);

        // Node ans = adddata(root1, 25);
        // display(ans);
       // System.out.println("LCA of two nodes : " + ans.data);

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