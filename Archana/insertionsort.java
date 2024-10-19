public class insertionsort{
    // Method to perform insertion sort
    public static void insertionSort(int[] array) {
        // Loop over the array starting from the second element
        for (int i = 1; i < array.length; i++) {
            int key = array[i]; // The element to be inserted at the right place
            int j = i - 1;
            
            // Shift elements that are greater than the key to one position ahead
            while (j >= 0 && array[j] > key) {
                array[j + 1] = array[j];
                j = j - 1;
            }
            // Place the key at its correct position
            array[j + 1] = key;
        }
    }

    // Helper method to print the array
    public static void printArray(int[] array) {
        for (int i = 0; i < array.length; i++) {
            System.out.print(array[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int[] array = {12, 11, 13, 5, 6};
        
        System.out.println("Original array:");
        printArray(array);
        
        insertionSort(array);
        
        System.out.println("Sorted array:");
        printArray(array);
    }
}
