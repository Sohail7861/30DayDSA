import java.util.Arrays;

    public class sort012  {
        public static void sortColors(int[] arr) {
            int low = 0;
            int mid = 0;
            int high = arr.length - 1;
            
            while (mid <= high) {
                if (arr[mid] == 0) {
                    // Swap arr[low] and arr[mid], increment low and mid
                    int temp = arr[low];
                    arr[low] = arr[mid];
                    arr[mid] = temp;
                    low++;
                    mid++;
                } else if (arr[mid] == 1) {
                    // Just move mid forward
                    mid++;
                } else {
                    // Swap arr[mid] and arr[high], decrement high
                    int temp = arr[mid];
                    arr[mid] = arr[high];
                    arr[high] = temp;
                    high--;
                }
            }
        }
        
        public static void main(String[] args) {
            int[] arr = {0, 1, 2, 1, 0, 2, 1, 0, 2};
            sortColors(arr);
            System.out.println(Arrays.toString(arr));
        }
    }
    
    

