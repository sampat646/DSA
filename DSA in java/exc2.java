public class exc2 {
    public static void main(String[] args) {
        int[] arr = { 1, 2, 3, 5, 4, 5, 8 };
        sumProductAvg(arr);
    }

    private static void sumProductAvg(int[] arr) {
        int sum = 0;
        int product=1;
        int avg = 0;

        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];
            product=arr[i]*product;
        }
        System.out.println("sum " + sum);
        System.out.println("product " + product);
        System.out.println("average " + sum/arr.length);
    }

}
