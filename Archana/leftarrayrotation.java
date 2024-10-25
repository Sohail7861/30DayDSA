 public class leftarrayrotation{

    public static void leftRotateByOne(int[] arr) {
        if (arr.length == 0) return; // Check if array is empty

        int firstElement = arr[0];  // Store the first element
        
        // Shift all elements to the left by one
        for (int i = 0; i < arr.length - 1; i++) {
            arr[i] = arr[i + 1];
        }
        
        // Put the first element at the end of the array
        arr[arr.length - 1] = firstElement;
    }

    public static void main(String[] args) {
        int[] arr = {9,3,9,8,7,4,6,0};
        
        System.out.println("Original Array:");
        for (int i : arr) {
            System.out.print(i + " ");
        }
        
        leftRotateByOne(arr);
        
        System.out.println("\nArray after left rotation by one:");
        for (int i : arr) {
            System.out.print(i + " ");
        }
    }
}
 
    

