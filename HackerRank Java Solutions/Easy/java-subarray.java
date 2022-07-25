import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] a = new int[n];
        for(int i = 0; i < n ; i++)
        {
            int scan_number = scan.nextInt();
            a[i] = scan_number;
        }
        scan.close();
        
        int pair_numb = 0;
        for (int i = 0; i < a.length; i++){
            for (int j = i; j < a.length; j++){
                int sum = 0;
                for (int k = i; k <= j; k = k + 1){
                    sum = sum + a[k];
                }
                if (sum < 0){
                    pair_numb++;
                }
            }
        }
        System.out.println(pair_numb);
    }
}

