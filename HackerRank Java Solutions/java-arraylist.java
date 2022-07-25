import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int input_lines = scanner.nextInt();
        int array_elements_number;

        ArrayList<ArrayList<Integer>> lines = new ArrayList<>();
        for(int i = 0; i < input_lines; i++){
            array_elements_number = scanner.nextInt();
            lines.add(i, new ArrayList<Integer>());       
            for(int j = 0; j < array_elements_number; j++){
                lines.get(i).add(scanner.nextInt());             
            }
        }

        int coordinate1, coordinate2;
        int input_check_lines = scanner.nextInt();
        for(int i = 0; i < input_check_lines; i++){
            coordinate1 = scanner.nextInt();
            coordinate2 = scanner.nextInt();
            try{
                System.out.println(lines.get(coordinate1-1).get(coordinate2-1)); 
            } 
            catch(Exception e){
                System.out.println("ERROR!");
            }         
        }
    }   
}

