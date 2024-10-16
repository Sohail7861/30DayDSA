public class binarysearch {
    // time complexity is O(log N base 2) and is done on sorted elements
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5, 6, 7};
        int target = 7;
        int ans = binarysearch(arr, target);
        System.out.println(ans);
    }

    public static int binarysearch(int[] arr, int target) {
        int start = 0;
        int end = arr.length - 1;
        
        while (start <= end) {
            // Find the middle index
            int mid = (start + end) / 2;
            
            // Case 1: Target found
            if (target == arr[mid]) {
                return mid;
            }
            // Case 2: Target is greater than mid, search right half
            else if (target > arr[mid]) {
                start = mid + 1;
            }
            // Case 3: Target is smaller than mid, search left half
            else {
                end = mid - 1;
            }
        }
        // Target not found
        return -1;
    }
}



// if we don't know either the array is sorted in ascending or descending order
public class binarysearch {
        // time complexity is O(log N base 2) and is done on sorted elements
        public static void main(String[] args) {
            int[] arr = {1, 2, 3, 4, 5, 6, 7};
            int target = 7;
            int ans = orderwedonotknow(arr, target);
            System.out.println(ans);
        }
    
        public static int orderwedonotknow(int[] arr, int target) {
            int start = 0;
            int end = arr.length - 1;
            //array in ascending or not
            boolean isAsc;
            if (arr[start]<arr[end]) {
                isAsc=true;
            }else{
                isAsc=false;
            }
            
            while (start <= end) {
                // Find the middle index
                int mid = (start + end) / 2;
                
                // Case 1: Target found
                if (target == arr[mid]) {
                    return mid;
                }
                if (isAsc) {
                    if (target < arr[mid]) {
                        end = mid - 1;
                    } else {
                        start = mid + 1;
                    }
                } else {
                    if (target > arr[mid]) {
                        end = mid - 1;
                    } else {
                        start = mid + 1;
                    }
                }
            }
            return -1;
        }
    }

                


