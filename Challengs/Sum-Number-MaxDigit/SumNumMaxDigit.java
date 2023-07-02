import java.util.Random;

public class SumNumMaxDigit {
    public static int main(int maxDigit) {
        int[] num = new int[4];
        int sum = 0;
        Random rand = new Random();
        
        for (int i = 0; i < num.length; i++) {
            int digit = rand.nextInt(maxDigit) + 1;
            num[i] = digit;
            sum += digit;
        }
        
        int totalDigit = Integer.parseInt(String.join("", 
            Integer.toString(num[0]), 
            Integer.toString(num[1]), 
            Integer.toString(num[2]), 
            Integer.toString(num[3])
        ));
        
        if (sum == 21) {
            return totalDigit;
        } else {
            return main(maxDigit);
        }
    }

    public static void main(String[] args) {
        System.out.println(main(6));
    }
}