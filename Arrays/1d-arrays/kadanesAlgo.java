/**
 * kadanesAlgo
 */
import java.util.*;

public class kadanesAlgo {

    public static int kadanesA(int[] arr, int n){
        int curr = 0;
        int max = Integer.MIN_VALUE;

        for(int i = 0; i<n; i++){
            curr += arr[i];
            if(max < curr){
                max = curr;
            }
            if(curr<0){
                curr = 0;
            }
        }
        return max;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int[] arr = new int[n];
        for(int i = 0; i<n; i++){
            arr[i] = sc.nextInt();
        }
        System.out.println(kadanesA(arr, n));
    }
}