/*
 * Arrays in java.
 * 
 * Array is collection of same data type elements.
 * Array can be defined like:
 *      1st) datatype[] var: // null value
 *         Default values: * 0 for the primitive data type of the intger.
 *                         * \u0000 for char type.
 *                         * false for boolean types.
 *                         * null for the reference type.
 * 
 *      2nd) datatype[] var = new datatype[size];
 */

public class Arrays {
    public static void main(String[] args) {

        // Accessing the array elements
        int[] arr = new int[5]; // {0,0,0,0,0}
        // arr = {10,20,3,4}; //Error.
        arr[0] = 10;// } can be initialized like this.
        arr[3] = 20;// }

        // also array can be initialized like this.
        int[] arr1 = { 10, 20, 30 };

        // printing the elements
        for (int i = 0; i < arr1.length; i++) {
            System.out.println(arr1[i]);
        }

    }
}
