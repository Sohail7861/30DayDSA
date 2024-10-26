public class movezeroestoreend{
    public static void moveZerosToEnd(int[] arr) {
        int nonZeroIndex = 0; // keep track of the position of non-zero elements

        // Traverse the array and move non-zero elements to the front
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] != 0) {
                arr[nonZeroIndex++] = arr[i];
            }
        }

        // Fill the remaining positions with zeros
        while (nonZeroIndex < arr.length) {
            arr[nonZeroIndex++] = 0;
        }
    }

    public static void main(String[] args) {
        int[] arr = {0, 1, 0, 3, 4,0,7};
        moveZerosToEnd(arr);

        // result
        for (int num : arr) {
            System.out.print(num + " ");
        }
    }
}
