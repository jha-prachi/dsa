import java.util.LinkedList;
import java.util.Stack;

class stack01 {  
    // =====================================================================================
    public static void leftmax (int[] arr) {
        Stack<Integer> st = new Stack<>();
        st.push(arr[0]);// stack ke ander phela ele
        for (int i = 1; i < arr.length; i++) {
            while (st.size() != 0 && st.peek() <= arr[i]) {
                st.pop();

            }
            if (st.size() != 0) {
               System.out.println(arr[i]  + "->" + st.peek()); 
            } else {
                System.out.println(arr[i] + "->" + -1);
            }
            st.push(arr[i]);
        }

    }

    public static void main(String[] args) {
        int[] arr = { 6, 2, 5, 4, 5, 1, 6 };
        leftmax(arr);
    }
}