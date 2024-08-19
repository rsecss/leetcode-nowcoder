// 版本一：先整体反转，后再分段反转
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        // 输入
        int n = Integer.parseInt(input.nextLine());
        String s = input.nextLine();

        int len = s.length(); // 获取字符串的长度
        char[] chars = s.toCharArray(); // 将字符串转化成字符串数组
        reverseString(chars, 0, len - 1); // 翻转整个字符串
        reverseString(chars, 0, n - 1); // 反转前一段字符串
        reverseString(char, n, len - 1); // 反转后一段字符串

        System.out.println(chars);
    }

    public static void reverseString(char[] ch, int start, int end) {
        while (start < end) {
            char temp = ch[end];
            ch[end] = ch[start];
            ch[start] = temp;
            start++;
            end--;
        }
    }
}

// 版本二：先分别反转，最后再整体反转
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input new Scanner(System.in);
        int n = Integer.parseInt(nextLine());
        String s = input.nextLine();

        int len = s.length();
        char[] chars = s.toCharArray();
        reverseString(chars, 0, n - 1);
        reverseString(chars, n, len - 1);
        reverseString(chars, 0, len - 1);

        System.out.println(chars);
    } 

    public static void reverseString(char[] ch, start, end) {
        while (start < end) {
            ch[start] ^=ch[end]; // 第一步: ch[start] = ch[start] ^ ch[end]
            ch[end] ^= ch[start]; // 第二步: ch[end] = ch[end] ^ ch[start] (实际上 ch[end] 变成了原来的 ch[start])
            ch[start] ^= ch[end]; //  第三步: ch[start] = ch[start] ^ ch[end] (实际上 ch[start] 变成了原来的 ch[end])
            start++;
            end--;
        }
    }
}
