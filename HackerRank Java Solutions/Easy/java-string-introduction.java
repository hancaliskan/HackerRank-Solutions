import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        String B=sc.next();
        
        int Asize = A.length();
        int Bsize = B.length();
        System.out.println(Asize+Bsize);
        if(A.compareTo(B) > 0){
            System.out.println("Yes");
        }
        else{
            System.out.println("No");
        }
        String output_A = A.substring(0, 1).toUpperCase() + A.substring(1);
        String output_B = B.substring(0, 1).toUpperCase() + B.substring(1);
        System.out.println(output_A + " " + output_B);
    }
}




