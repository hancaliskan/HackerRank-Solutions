import java.util.Scanner;

class MyCalculator {  
    public long power(int numb1, int numb2) throws Exception{
        long result;
        
        if( numb1 == 0 && numb2 == 0){
            throw new Exception("n and p should not be zero.");
        }
        if( numb1 < 0 || numb2 < 0){
            throw new Exception("n or p should not be negative.");
        }
        result = (long)Math.pow(numb1, numb2);
        
        return result;
    }
}

public class Solution {
    public static final MyCalculator my_calculator = new MyCalculator();
    public static final Scanner in = new Scanner(System.in);
    
    public static void main(String[] args) {
        while (in .hasNextInt()) {
            int n = in .nextInt();
            int p = in .nextInt();
            
            try {
                System.out.println(my_calculator.power(n, p));
            } catch (Exception e) {
                System.out.println(e);
            }
        }
    }
}

