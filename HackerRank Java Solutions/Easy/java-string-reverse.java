import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();

        String r_str="";
        String ch;        
        
        for (int i=0; i<A.length(); i++)
        {
            ch= A.substring(i, (i+1)); 
            r_str= ch+r_str; 
        }
        //System.out.println(r_str);
        
        if(A.compareTo(r_str) == 0){
            System.out.print("Yes");
        }
        else{
            System.out.print("No");
        } 
        
        
    }
}




