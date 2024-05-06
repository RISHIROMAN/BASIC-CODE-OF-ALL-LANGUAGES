import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class rishi {
    private static final Map<Character, Character> STROBOGRAMMATIC_MAP = new HashMap<>();

    static {
        STROBOGRAMMATIC_MAP.put('0', '0');
        STROBOGRAMMATIC_MAP.put('1', '1');
        STROBOGRAMMATIC_MAP.put('6', '9');
        STROBOGRAMMATIC_MAP.put('8', '8');
        STROBOGRAMMATIC_MAP.put('9', '6');
    }

    public static boolean isStrobogrammatic(String number) {
        int left = 0;
        int right = number.length() - 1;

        while (left <= right) {
            char leftChar = number.charAt(left);
            char rightChar = number.charAt(right);

            if (!STROBOGRAMMATIC_MAP.containsKey(leftChar) || STROBOGRAMMATIC_MAP.get(leftChar) != rightChar) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }

    public static void main(String[] args) {
        System.out.println("enter the number");
        Scanner sc = new Scanner (System.in);
        Long number=sc.nextLong();
        boolean isStrobogrammatic = isStrobogrammatic(number);

        System.out.println(number + " is strobogrammatic: " + isStrobogrammatic);
    }
}
