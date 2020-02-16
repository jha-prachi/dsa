import java.util.*;

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
        if (idx == arr.length) {
            return null;
        }
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
        if (root.data < a) {
            return Rangeprint(root.right, a, b);
        } else if (b < root.data) {
            return Rangeprint(root.left, a, b);
        } else {
            if (root.data >= a && root.data <= b) {
                System.out.println(root.data);
            }
            Rangeprint(root.right, a, b);
            Rangeprint(root.left, a, b);
            return root;
        }
    }

    static int maxlen = 1;

    // =====================================Longest consective
    // Sequence================================
    public static void LCSeq(Node root, int potential, int currlen) {
        if (root == null)
            return;
        if (root.data == potential) {
            currlen++;
            maxlen = Math.max(currlen, maxlen);
        } else {
            currlen = 1;
        }
        LCSeq(root.left, root.data + 1, currlen);
        LCSeq(root.right, root.data + 1, currlen);
    }

    // ===========================Morris
    // traversal================================================================
    public static Node rightmost(Node node, Node curr) {
        while (node.right != null && node.right != curr) {
            node = node.right;
            // node.right = curr;
        }
        return node;
    }

    public static void morris(Node node) {
        Node curr = node;
        while (curr != null) {
            Node nextleft = curr.left;
            if (nextleft == null) {
                System.out.print(curr.data + " ");
                curr = curr.right;
                continue;
            }
            Node rightmost = rightmost(nextleft, curr);
            if (rightmost.right == null) {
                rightmost.right = curr;// thread
                curr = curr.left;
            } else {
                rightmost.right = null;// thread break
                System.out.print(curr.data + " ");
                curr = curr.right;
            }
        }

    }

    class traversal {
        Node node = null;
        boolean Selfdone = false;
        boolean leftdone = false;
        boolean rightdone = false;

        traversal(Node node) {
            this.node = node;
        }
    }
    static int maxSum=0;
    public static int leaftoleafmaxsum(Node root)
     {
        if (root == null)
            return (int) -1e7;
            if(root.left == null && root.right == null)
                return root.data;
            int leftsum = leaftoleafmaxsum(root.left);
        int rightsum = leaftoleafmaxsum(root.right);
        if (root.left != null && root.right != null){
            maxSum = Math.max(maxSum, leftsum + rightsum + root.data);
        return Math.max(leftsum, rightsum) + root.data;
        }
        return root.left == null?rightsum + root.data : leftsum + root.data; 
    }

    public static void main(String[] args) {
        // int[] arr = { 10, 20, 30, -1, -1, 40, -1, -1, 50, 60, 80, -1, -1, -1, 70, 90,
        // -1, 100, -1, -1, -1 };
        // Node root = TreesCons(arr);
        // System.out.println(height(root));
        // System.out.println(size(root));
        // display( root);
        // // int[] array = { 10, 20, 30, 40, 50, 60, 70, 80, 90 };
        // int[] array = { 3, -1, 4, -1, 5, 7, 8, 9, 10, -1, -1, 10, -1, 11, -1, -1, -1,
        // -1, 6, -1, -1 };
        // Node root1 = TreesCons(array);
        // Node root1 = makeBST(array, 0, array.length - 1);
        // Node ans = LCANODE(root1, 30, 80);
        // Node ans = Rangeprint(root1, 30, 80);
        // display(root1);
        // LCSeq(root1, root1.data, 1);
        // System.out.print(maxlen);
        // Node ans = adddata(root1, 25);
        // display(ans);
        // System.out.println("LCA of two nodes : " + ans.data);
        int[] array = { 3, 4, -1, 5, 7, 8, 9, 10, -1, -1, 10, -1, 11, -1, -1, -1, -1, 6, -1, -1 };
        Node root1 = TreesCons(array);
        System.out.print(leaftoleafmaxsum(root1));
        //display(root1);
        //morris(root1);

        
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