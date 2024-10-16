public class sumofarr {
    public static void main(String[] args) {
        int[][] Raggedarr = { { 1, 2, 0 },
                { 5, 3,2 },
                { 5, 8, 6 } };
                int j;
                int sum = 0;
        for (int i = 0; i < Raggedarr.length; i++) {
            sum = 0;
            int csum = 0;
            for (j = 0; j < Raggedarr[i].length; j++) {
                sum += Raggedarr[i][j];
                csum+=Raggedarr[j][i];
            }
            System.out.println("sum of an row " + (i + 1) + " is : " + sum);
            System.out.println("sum of an col " + (i + 1) + " is : " + csum);
        }
    }
}
