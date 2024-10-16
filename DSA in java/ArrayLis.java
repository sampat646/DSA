import java.util.ArrayList;
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


    }
}
