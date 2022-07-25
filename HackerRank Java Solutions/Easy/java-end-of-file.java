import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        try {
            Scanner sc = new Scanner(System.in);
            int i = 1;
            while(sc.hasNext()) {
                System.out.println(i + " " +sc.nextLine());
                i++;
            }
            sc.close();
        } catch (Exception e) {
        System.out.println("Error");
        }
    }
}

