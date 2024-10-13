/**
 * Patterns
 * steps to solve the pattern problems
 * 1st one is: see the how many rows are there in the pattern.
 * 2nd one is: see the how many columns are there in the particular row.
 * 3rd one is: see the which type of * or anything you want to print.
 */
public class Pattern1 {

    public static void main(String[] args) {
        // Pattern11(4);
        // pattern12(4);
        // pattern3(4);
        // pattern4(5);
        // pattern5(5);
        // pattern6(5);
        // Pattern7(5);
        // pattern8(5);
        // Pattern9(5);
    }

    public static void Pattern11(int n) {
        // according the first rule we will assign the len of the row
        for (int row = 0; row < n; row++) {

            // Then according the second rule assign the column
            for (int col = 0; col <= row; col++) {
                System.out.print("* ");
            }
            System.out.println();

        }
        /*
          output:  * 
                   * *
                   * * *
                   * * * *
         */
    }

    public static void pattern12(int n) {

        for (int row = 1; row <= n; row++) { // if we row is start with the 1<=n
            for (int col = 1; col <= n - row + 1; col++) { // here you will formula will n-row+1 if s:0 n-row
                System.out.print("* ");
            }
            System.out.println();
        }
        /*
         * output: * * * * 
                   * * *
                   * *
                   *
         */
    }

    public static void pattern3(int n) {

        for (int row = 1; row <= n; row++) { // if we row is start with the 1<=n
            for (int col = 1; col <= row; col++) { // here you will formula will n-row+1 if s:0 n-row
                System.out.print(col + " ");
            }
            System.out.println();
        }
        /*
         * output:1 
                  1 2
                  1 2 3
                  1 2 3 4
         */
    }

    public static void pattern4(int n) {

        for (int row = 1; row <= n; row++) { // if we row is start with the 1<=n
            for (int col = 1; col <= row; col++) { // here you will formula will n-row+1 if s:0 n-row
                System.out.print("* ");
            }
            System.out.println();
        }
        for (int row = 1; row <= n; row++) { // if we row is start with the 1<=n
            for (int col = 1; col <= n - row; col++) { // here you will formula will n-row+1 if s:0 n-row
                System.out.print("* ");
            }
            System.out.println();
        }
        /*
         * output:
            *       *
                  * *
                * * *
              * * * *
            * * * * *
         */
    }

    public static void pattern5(int n) {

        for (int row = 1; row <= n; row++) { // if we row is start with the 1<=n
            for (int col = 1; col <= n - row; col++) { // here you will formula will n-row+1 if s:0 n-row
                System.out.print(" ");
            }
            // System.out.println();
            for (int clo = 0; clo < row; clo++) {
                System.out.print("* ");
            }
            System.out.println();
        }
        /*
         * output:
         *     * 
              * *
             * * *
            * * * *
           * * * * *
         */
       
    }

    public static void pattern6(int n) {

        for (int row = 1; row <= n; row++) {

            for (int col = 1; col <= n - row; col++) {
                System.out.print(" ");
            }

            for (int col = 1; col <= row; col++) {
                System.out.print("*");
            }
            System.out.println();
        }
       
    }

    public static void Pattern7(int n) {
        for (int var1 = 1; var1 <= n; ++var1) {
            for (int var2 = 1; var2 <= var1; ++var2) {
                System.out.print(var2);
            }

            System.out.println();
        }
         /*
         * output:
         * 1
           1 2
           1 2 3
           1 2 3 4
           1 2 3 4 5
         */

    }

    public static void pattern8(int n) {

        for (int row = 1; row <= n; row++) { // if we row is start with the 1<=n
            for (int col = 1; col <= n - row + 1; col++) { // here you will formula will n-row+1 if s:0 n-row
                System.out.print(col);
            }
            System.out.println();
        }
         /*
         * output:
         * 1 2 3 4 5
           1 2 3 4
           1 2 3
           1 2
           1
         */
    }

    public static void Pattern9(int n) {
        for (int row = 1; row <= n; row++) {
            for (int col = 1; col <= n; col++) {
                if (col == 1 || col == n  || row == 1 || row == n ) {
                    System.out.print("*");
                }
                else{
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}