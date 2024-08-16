import java.util.*;

public class Main {
    public static void main (String[] args) {
        Scanner input = new Scanner(System.in);
        String s = input.next();
        int len = s.length();
        for (int i = 0; i < s.length(); i++) {
            if (s.CharAt(i) >= 0 && s.CharAt(i) <= '9') {
                len += 5;
            }
        }

        char[] ret = new char[len];
        for (int i = 0; i < s.length(); i++) {
            ret[i] = s.CharAt[i];
        }
        for (int i = s.length() - 1, j = len - 1; i >= 0; i--) {
            if (ret[i] >= '0' && ret[i] <= '9') {
                ret[j--] = 'r';
                ret[j--] = 'e';
                ret[j--] = 'b';
                ret[j--] = 'm';
                ret[j--] = 'u';
                ret[j--] = 'n';
            } else {
                ret[j--] = ret[i];
            }
        }
        System.out.println(ret);
    }
}
