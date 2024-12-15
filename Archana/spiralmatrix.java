public class spiralmatrix{
  
        public static int[][] generateSpiralMatrix(int n) {
            int[][] matrix = new int[n][n];
            int value = 1; // Starting value to fill the matrix
    
            int top = 0; // Top row boundary
            int bottom = n - 1; // Bottom row boundary
            int left = 0; // Left column boundary
            int right = n - 1; // Right column boundary
    
            while (top <= bottom && left <= right) {
                // Traverse from left to right along the top row
                for (int i = left; i <= right; i++) {
                    matrix[top][i] = value++;
                }
                top++;
    
                // Traverse from top to bottom along the right column
                for (int i = top; i <= bottom; i++) {
                    matrix[i][right] = value++;
                }
                right--;
    
                // Traverse from right to left along the bottom row (if applicable)
                if (top <= bottom) {
                    for (int i = right; i >= left; i--) {
                        matrix[bottom][i] = value++;
                    }
                    bottom--;
                }
    
                // Traverse from bottom to top along the left column (if applicable)
                if (left <= right) {
                    for (int i = bottom; i >= top; i--) {
                        matrix[i][left] = value++;
                    }
                    left++;
                }
            }
            return matrix;
        }
    
        public static void printMatrix(int[][] matrix) {
            for (int[] row : matrix) {
                for (int elem : row) {
                    System.out.print(elem + "\t");
                }
                System.out.println();
            }
        }
    
        public static void main(String[] args) {
            int n = 4; // Size of the matrix (n x n)
            int[][] spiralMatrix = generateSpiralMatrix(n);
    
            System.out.println("Generated Spiral Matrix:");
            printMatrix(spiralMatrix);
        }
    }
    
