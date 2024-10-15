import java.util.Scanner;

public class Exc {
    public static void main(String[] args) {
        /*
         * Write program that fills an array with n intgers entred by the user supposed
         * that user must be entered
         * 1 to 20
         * 
         * This is simple solution.
         * Scanner sc = new Scanner(System.in);
         * //input by the user
         * System.out.println("Enter the how many numbers you want");
         * int n = sc.nextInt();
         * //array declaration
         * int[] arr = new int[n];
         * if (n>=1 && n<=20) {
         * //arrays element init
         * for (int i = 0; i < n; i++) {
         * arr[i] = sc.nextInt();
         * }
         * }
         * else{
         * System.out.println("Enter the numbers in b/w 1 to 20 only.");
         * }
         * for (int i = 0; i < arr.length; i++) {
         * System.out.print(arr[i] + " ");
         * }
         * 
         */

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number (max is 20 ?) ");
        int n = sc.nextInt();

        while (n > 20 || n <= 1) {
            System.out.println("Enter the numbers b/w 1 to 20");
            n = sc.nextInt();
        }

        int[] arr = new int[n];
        fillingArray(arr);
        printingArray(arr);

    }

    public static void printingArray(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }

    }

    public static void fillingArray(int[] arr) {
        Scanner s = new Scanner(System.in);
        for (int i = 0; i < arr.length; i++) {
            arr[i] = s.nextInt();
        }

    }
}
