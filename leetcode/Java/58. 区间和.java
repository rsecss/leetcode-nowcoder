import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int n = input.nextInt();
        int[] array = new int[n];
        int[] newArray = new int[n];

        int preSum = 0; // 前缀和
        for(int i = 0; i < n; i++) {
            array[i] = input.nextInt();
            preSum += array[i];
            newArray[i] = preSum;
        }

        while(input.hasNextInt()) {
            int a = input.nextInt();
            int b = input.nextInt();

            int sum = 0;
            if (a == 0) {
                sum = newArray[b];
            } else {
                sum = newArray[b] - newArray[a - 1]; // 这里注意下标问题，a~b 的和，那么下标就是 b——>a-1
            }
            System.out.println(sum);
        }
        input.close();
    }
}