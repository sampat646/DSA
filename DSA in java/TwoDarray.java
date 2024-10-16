import java.util.Arrays;

public class TwoDarray {
    public static void main(String[] args) {
        /*initializing the array */
        int[][] toArray = { {1,2,0},{5,8,6} };
        int n = toArray.length;
        System.out.println("size is " + n);
        for (int i = 0; i < toArray.length /*manual method row number =>2*/; i++) {
           for (int j = 0; j < toArray[i].length/*manual method column number =>3*/; j++) {
                System.out.print(toArray[i][j] +" ");
           }
           System.out.println();
           /*output:
            * 1 2 0 
            * 5 8 6
            */
        }
        System.out.println(Arrays.deepToString(toArray));  // [[1, 2, 0], [5, 8, 6]]

        /*Ragged array*/
        int[][] Raggedarr = { {1,2,0},
                              {5,3},
                              {5,8,6} };
        int n1 = toArray.length;
        System.out.println("size is " + n1);
        for (int i = 0; i < Raggedarr.length /*manual method row number =>2*/; i++) {
           for (int j = 0; j < Raggedarr[i].length/*manual method column number =>3*/; j++) {
                System.out.print(Raggedarr[i][j] +" ");
           }
           System.out.println();
           /*output:
            * 1 2 0 
            * 5 8 6
            */
        }
        System.out.println(Arrays.deepToString(Raggedarr));  // [[1, 2, 0], [5, 8, 6]]


    }
}
