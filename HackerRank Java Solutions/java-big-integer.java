import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        BigInteger numb1 = new BigInteger(sc.next());
        BigInteger numb2 = new BigInteger(sc.next());
        
        System.out.println(numb1.add(numb2));
        System.out.println(numb1.multiply(numb2));
    }
}

