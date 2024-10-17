import java.util.Scanner;
import java.util.ArrayList;

public class CRUDArrlist {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        ArrayList<Integer> arr = new ArrayList<>();
        
        while (true) {
            System.out.println("1) Add elements");
            System.out.println("2) Remove elements");
            System.out.println("3) Display elements");
            System.out.println("4) Exit");
    
            System.out.print("Enter your choice :");
            int choice = scan.nextInt();
            switch (choice) {
                case 1:
                    System.out.print("Enter how many elements you want to add :");

                    int n = scan.nextInt();
                   
                        arr.add(n);
                    
                    break;
                case 2:
                    System.out.println("Which number have to remove :");
                    int  rele = scan.nextInt();
                   if (arr.contains(rele)) {
                    arr.remove(Integer.valueOf(rele));
                   }
                    break;
                case 3:
                    for (Integer integer : arr) {
                        System.out.print("["+integer+"]" + " ");
                    }
                    System.out.println();
                    break;
                case 4:
                    System.exit(0);

                default:
                    System.out.println("Enter the correct number");
                    break;
            }
        }
    }

}
