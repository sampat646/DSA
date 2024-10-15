public class exc4 {
    public static void main(String[] args) {
        int[] arr = { 10, 20, 30, 40, 60, 80, 92 };
        int max = arr[0];
        int min = arr[0];

        for (int i = 0; i < arr.length; i++) {
            max = (arr[i] > max) ? arr[i] : max;
            min = (arr[i] < min) ? arr[i] : min;
        }
        System.out.println(min + " and " + max);
    }
}
