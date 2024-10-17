import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class sortuniByArlist {
    public static void main(String[] args) {
        ArrayList<Integer> arr = new ArrayList<>();
        // arr.add(100);
        // arr.add(150);
        // arr.add(20);
        // arr.add(20);
        // arr.add(30);

        // Collections.sort(arr);
        // arr.stream().distinct().forEach(System.out::println);

        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < 5; i++) {
            int temp = sc.nextInt();

            if (!arr.contains(temp)) {
                arr.add(temp);

            }
        }
        Collections.sort(arr);
        for (Integer integer : arr) {
            System.out.print(integer + " ");
        }
    }
}
