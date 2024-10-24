public class removeduplicates{
    public static int removeDuplicates(int[] arr) {
        if (arr.length == 0) return 0; // array  empty unthe

        int uniqueIndex = 0; // Keeps track of the index of the last unique element

        for (int i = 1; i < arr.length; i++) {
            if (arr[i] != arr[uniqueIndex]) { // If the current element is different from the last unique one
                uniqueIndex++; // Move to the next position
                arr[uniqueIndex] = arr[i]; // Set the unique element
            }
        }

        return uniqueIndex + 1; // Number of unique elements
    }

    public static void main(String[] args) {
        int[] arr = {1, 1, 2, 2, 3, 4, 4, 5};

        int lengthWithoutDuplicates = removeDuplicates(arr);

        System.out.println("Array after removing duplicates: ");
        for (int i = 0; i < lengthWithoutDuplicates; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}

    

