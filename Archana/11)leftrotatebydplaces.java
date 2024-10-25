public class leftrotatebydplaces{

    // 
    public static void leftRotateByD(int[] arr, int D) {
        int n = arr.length;
        if (n == 0 || D % n == 0) return; // No rotation needed if D is 0 or multiple of n
        
        D = D % n; // In case D > n, reduce D to D % n

        // Step 1: Reverse the first D elements
        reverseArray(arr, 0, D - 1);
        
        // Step 2: Reverse the remaining elements from D to n-1
        reverseArray(arr, D, n - 1);
        
        // Step 3: Reverse the entire array
        reverseArray(arr, 0, n - 1);
    }

    // function to reverse elements in the array from index start to end
    private static void reverseArray(int[] arr, int start, int end) {
        while (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5, 6, 7};
        int D = 4; // Number of places to rotate
        
        System.out.println("Original Array:");
        for (int i : arr) {
            System.out.print(i + " ");
        }
        
        leftRotateByD(arr, D);
        
        System.out.println("\nArray after left rotation by " + D + " places:");
        for (int i : arr) {
            System.out.print(i + " ");
        }
    }
}
