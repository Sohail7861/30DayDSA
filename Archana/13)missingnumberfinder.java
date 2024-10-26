public class missingnumberfinder {
    public static int findMissingNumber(int[] arr, int n) {
        //sum of the first n natural numbers
        int totalSum = n * (n + 1) / 2;

        // Calculate the sum of elements in the array
        int arraySum = 0;
        for (int num : arr) {
            arraySum += num;
        }

        // The missing number is the difference between totalSum and arraySum
        return totalSum - arraySum;
    }

    public static void main(String[] args) {
        int[] arr = {1,2,3,5,6}; 
        int n = 6;
        int missingNumber = findMissingNumber(arr, n);
        System.out.println("The missing number is: " + missingNumber);
    }
}

    

