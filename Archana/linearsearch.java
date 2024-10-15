public class linearsearch {

    public static void main(String args[]) {
        int no[] = {20, 1, 8, 3, 9};
        int key = 20;
        int index = linearsearch(no, key);
        
        if (index == -1) {
            System.out.println("not found");
        } else {
            System.out.println("found at index: " + index);
        }
    }

    public static int linearsearch(int no[], int key) {
        for (int i = 0; i < no.length; i++) {
            if (no[i] == key) {
                return i;
            }
        }
        return -1;
    }
}
