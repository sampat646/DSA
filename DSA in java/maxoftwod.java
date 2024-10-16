public class maxoftwod {
    public static void main(String[] args) {
        int[][] Raggedarr = { { 1, 2, 0 },
                { 5, 3, 2 },
                { 5, 8, 6 } };
        int j;
        int max;
        int min;
        for (int i = 0; i < Raggedarr.length; i++) {
            max = Raggedarr[i][0];
            min = Raggedarr[i][0];
            for (j = 0; j < Raggedarr[i].length; j++) {
                max = (Raggedarr[i][j] > max ? Raggedarr[i][j] : max);
                min = (Raggedarr[i][j] < min ? Raggedarr[i][j] : min);
            }
            System.out.println("max of " + (i + 1) + " row is " + max);
            System.out.println("min of " + (i + 1) + " row is " + min);

        }
    }
}
