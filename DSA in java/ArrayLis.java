import java.util.ArrayList;
import java.util.Collections;
public class ArrayLis {
    public static void main(String[] args) {
        ArrayList <Integer> one = new ArrayList<>();
        one.add(10);
        one.add(10);
        one.add(10);
        one.add(2,20);
        System.out.println(one);//[10, 10, 20, 10]

        //for single element accessing by get() method
        System.out.println(one.get(0)); //10
        System.out.println(one.get(1)); //10
        System.out.println(one.get(2)); //20

        //for updating the value of the exciting array
        one.set(1, 30);
        System.out.println(one);//[10, 30, 20, 10]

        //removing the elements from the arraylist

        //removing from the index is
        one.remove(0);
        System.out.println(one);

        //removing the value of the arraylist
        one.remove("10");
        System.out.println(one);

        //clear() clearing the all elements
        // one.clear();
        System.out.println(one);

        //getting the size of the arraylist
        System.out.println(one.size());//3

        //printing the array list
        for (int i = 0; i < one.size(); i++) {
            System.out.print(one.get(i) + " ");
        }
        System.out.println();

        //sorting the elements from using the collection class
        Collections.sort(one);
        System.out.println("After sorting the array");
        System.out.println(one);

        //we can sort the string also in alphabetical order
        ArrayList<String> names = new ArrayList<>();
        names.add("sam");
        names.add("amit");
        names.add("sumeet");
        Collections.sort(names);
        System.out.println(names);




    }
}
