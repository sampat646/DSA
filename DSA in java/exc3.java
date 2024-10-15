import java.util.Scanner;
public class exc3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] arr = { 1, 1, 1, 2, 3, 4 };
        int search = sc.nextInt();
        int count = 0;

        for (int i = 0; i < arr.length; i++) {
            if (arr[i]==search) {
                count++;
            }
        }
        System.out.println(search + " this is " + count  +" occurs these many times");
    }
}
