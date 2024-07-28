import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 参考前缀和的算法，基本上差不多

        Scanner scanner = new Scanner(System.in);

         // 读取行数和列数
        int n = scanner.nextInt();
        int m = scanner.nextInt();

        // 初始化矩阵并计算总和
        int sum = 0;
        int[][] vec = new int[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                vec[i][j] = scanner.nextInt();
                sum += vec[i][j];
            }
        }

        int result = Integer.MAX_VALUE;
        int countRow = 0; // 统计遍历过的行
        
        // 横向切分
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                countRow += vec[i][j];
                // 遍历到行末尾开始统计
                if (j == m - 1) {
                    result = Math.min(result,Math.abs(sum - 2 * countRow)) // Math.abs(sum - 2 * countRow) = Math.abs((sum -countRow)) - countRow)
                }
            }
        }

        int countCol = 0; // 统计遍历过的列

        //纵向切分
        for (int j = 0; j < m; j++) {
            for (int i = 0; i < n; i++) {
                countCol += vec[i][j];
                // 遍历到列末尾开始统计
                if ( i == n - 1) {
                    result = Math.min(result,Math.abs(sum - 2 * countCol)); // 同上
                }
            }
        }

        System.out.println(result);
        scanner.close();
    }
}