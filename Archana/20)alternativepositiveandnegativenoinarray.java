import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
public class alternativepositiveandnegativenoinarray {
    

    public void rearrange(int[] arr) {
        List<Integer> positive = new ArrayList<>();
        List<Integer> negative = new ArrayList<>();

        // Separate positive and negative numbers
        for (int num : arr) {
            if (num >= 0) {
                positive.add(num);
            } else {
                negative.add(num);
            }
        }

        // Pointers for positive and negative lists
        int posIndex = 0, negIndex = 0, index = 0;
        int totalLength = arr.length;

        // Fill the array by alternating positive and negative numbers
        while (posIndex < positive.size() && negIndex < negative.size()) {
            if (index % 2 == 0) { // Even index: place positive
                arr[index++] = positive.get(posIndex++);
            } else { // Odd index: place negative
                arr[index++] = negative.get(negIndex++);
            }
        }

        // Fill remaining positive numbers if any
        while (posIndex < positive.size()) {
            arr[index++] = positive.get(posIndex++);
        }

        // Fill remaining negative numbers if any
        while (negIndex < negative.size()) {
            arr[index++] = negative.get(negIndex++);
        }
    }

    public static void main(String[] args) {
        alternativepositiveandnegativenoinarray solution = new alternativepositiveandnegativenoinarray();
        int[] arr = {1, -2, 3, -4, 5, -6, 7, -8, 9};
        
        System.out.println("Original Array: " + Arrays.toString(arr));
        solution.rearrange(arr);
        System.out.println("Rearranged Array: " + Arrays.toString(arr));
    }
}


