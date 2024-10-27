import java.util.HashSet;
import java.util.Set;
    
    public class union{
    
        public static void main(String[] args) {
            int[] array1 = {8,3,6,8,0};
            int[] array2 = {4, 5, 6, 7, 8};
    
            Set<Integer> unionResult = findUnion(array1, array2);
    
            System.out.println("Union of the two arrays is: " + unionResult);
        }
    
        // Function to find the union of two arrays
        public static Set<Integer> findUnion(int[] arr1, int[] arr2) {
            Set<Integer> unionSet = new HashSet<>();
    
            // Add elements of th 1st array to the set
            for (int element : arr1) {
                unionSet.add(element);
            }
    
            // Add elements of the 2 ndarray to the set
            for (int element : arr2) {
                unionSet.add(element);
            }
    
            return unionSet;
        }
    }
    
    

