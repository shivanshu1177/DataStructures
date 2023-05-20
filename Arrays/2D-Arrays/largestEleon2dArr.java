/**
 * largestEleon2dArr
 */

import java.util.*;

public class largestEleon2dArr {

    public static void findLargest(int arr[][]){
        int n = arr.length;
        int m = arr[0].length;
        int max = arr[0][0];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(arr[i][j] > max){
                    max = arr[i][j];
                }
            }
        }
        System.out.println(max);
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int[][] matrix = new int[n][m];

        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                matrix[i][j] = sc.nextInt();
            }
        }

        findLargest(matrix);

        
    }
}