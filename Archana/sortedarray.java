public class sortedarray {
    public static boolean isSortedAscending(int[] arr) {
        for (int i = 0; i < arr.length - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                return false; // If any element is greater than the next one, it's not sorted
            }
        }
        return true; // If no elements violate the sorting order, it's sorted
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5};
        boolean sorted = isSortedAscending(arr); // Store result of method

        System.out.println("Is the array sorted? " + sorted);

        if (sorted) { 
            System.out.println("The array is sorted in ascending order.");
        } else {
            System.out.println("The array is not sorted in ascending order.");
        }
    }
}
