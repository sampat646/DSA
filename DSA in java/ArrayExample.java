
/*
 * Arrays in java.
 * 
 * Array is a collection of same data type elements.
 * Array can be defined like:
 *      1st) datatype[] var; // null value
 *         Default values: 
 *              * 0 for the primitive data type of integers.
 *              * \u0000 for char type.
 *              * false for boolean types.
 *              * null for reference types.
 * 
 *      2nd) datatype[] var = new datatype[size];
 */
import java.util.Arrays; // Import the Arrays utility class

public class ArrayExample { // Changed class name to avoid conflict
    public static void main(String[] args) {
        // ============================================= Basic concepts of array start
        // Accessing the array elements
        int[] arr = new int[5]; // {0,0,0,0,0}
        // arr = {10, 20, 3, 4}; //Error.
        arr[0] = 10; // can be initialized like this.
        arr[3] = 20; // }

        // also array can be initialized like this.
        int[] arr1 = { 10, 2, 30 };

        // printing the elements
        for (int i = 0; i < arr1.length; i++) {
            // System.out.println(arr1[i]);
        }
        // ============================================= Basic concepts of array finish

        // ============================================= Anonymous Array
        // System.out.println("Array: " + Arrays.toString(new int[] {1, 2, 3, 5}));

        // Accessing by the method
        getArray(arr1);

        // Array class: contains some static methods
        /*
         * sorting: sort() syntax= sort(array, (fromIndex) to (toIndex-1))
         * searching
         * comparing
         * filling
         * returning string representation of the array
         */

        // sort() using the Arrays class
        Arrays.sort(arr1);

        // Printing sorted array of the numbers
        System.out.println("sorted array numbers");
        for (int i = 0; i < arr1.length; i++) {
            // System.out.print(arr1[i] + " "); // 2 10 30
        }

        // Printing sorted array Characters.
        char[] Character = { 'a', 'A', 'b', 'B', 'c', 'C' };
        Arrays.sort(Character);
        System.out.println("sorted array Characters");
        for (int i = 0; i < Character.length; i++) {
            // System.out.print(Character[i] + " "); // A B C a b c
        }

        // unicode of characters
        int[] unicode = { 'a', 'A', 'b', 'B', 'c', 'C' };
        Arrays.sort(unicode);
        System.out.println("sorted array unicode");
        for (int i = 0; i < unicode.length; i++) {
            // System.out.print(unicode[i] + " " + "\n"); // 65 66 67 97 98 99
        }

        // sorting the array elements with limited number
        int[] num = { 8, 5, 65, 5, 6, 1, 6, 4, 5, 4, 6 };
        Arrays.sort(num, 3, 9);
        for (int i = 0; i < num.length; i++) {
            // System.out.print(num[i] + " ");// 8 5 65 1 4 5 5 6 6 4 6
        }

        // Printing sorted array objects.
        String[] objects = {"sampat", "abhi", "hanuma"};
        Arrays.sort(objects);
        System.out.println("sorted array objects");
        for (int i = 0; i < objects.length; i++) {
            System.out.print(objects[i] + " ");// abc efg hij
        }
        /*
        Note: point() will never sort().
        */

    }

    // Accessing array elements via a method
    public static void getArray(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            // System.out.println(arr[i]);
        }
    }
}
