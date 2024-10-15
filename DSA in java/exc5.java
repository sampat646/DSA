public class exc5 {
    public static void main(String[] args) {
        int[] arr = { 2, 1, 5, 4 };
        int[] temp = new int[arr.length];
        int j = 0;
        int k = arr.length - 1;

        for (int i = 0; i < arr.length; i++) {
            if ((arr[i] % 2) != 0) {
                temp[j++] = arr[i];

            } else {
                temp[k--] = arr[i];
            }

        }
        for (int i = 0; i < temp.length; i++) {
            System.out.println(temp[i]);
        }

    }
}
