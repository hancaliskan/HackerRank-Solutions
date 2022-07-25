import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);
        int input_number = scanner.nextInt();
        int array_elements_number;

        ArrayList<Integer> number_list = new ArrayList<>();
        for(int i = 0; i < input_number; i++){
            number_list.add(scanner.nextInt());
        }

        String action_name;
        int changes_index_number, changes_element;
        int changes_number = scanner.nextInt();
        
        for(int i = 0; i < changes_number; i++){
            action_name = scanner.next();
            if(action_name.equals("Insert")){
                changes_index_number = scanner.nextInt();
                changes_element = scanner.nextInt();
                number_list.add(changes_index_number, changes_element);
            }
            else if(action_name.equals("Delete")){
                changes_index_number = scanner.nextInt();
                number_list.remove(changes_index_number);
            }
            else{
                break;
            }
        }
        
        for(int j = 0; j < number_list.size(); j++){
            System.out.print(number_list.get(j) + " ");
        }
    }
}

