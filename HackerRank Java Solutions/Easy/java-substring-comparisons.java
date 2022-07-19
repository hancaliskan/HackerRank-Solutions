import java.util.Scanner;

public class Solution {

    public static String getSmallestAndLargest(String s, int k) {
        String smallest = s.substring(0, (0+k));
        String largest = s.substring(0, (0+k));
        
        String[] str_list = new String[(s.length()-k)];  
        for(int i = 0; i < (s.length()-k); i++)
        {
            str_list[i] = s.substring(i, (i+k));
            if (str_list[i].compareTo(smallest) < 0)    
                smallest = str_list[i];
            if (str_list[i].compareTo(largest) > 0)
                largest = str_list[i];
        }
    return smallest + "\n" + largest;
    }


    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.next();
        int k = scan.nextInt();
        scan.close();
      
        System.out.println(getSmallestAndLargest(s, k));
    }
}

///////////////////////////VER2/////////////////////////////
/*

import java.util.Scanner;

public class Solution {

    public static String getSmallestAndLargest(String s, int k) {
        String sequence = s.substring(0, k);
    	String smallest = sequence;
    	String largest = sequence;

    	for(int i = 1; i <= (s.length() - k); i++){
        	sequence = s.substring(i, (i + k));

        	if(sequence.compareTo(smallest) < 0){
            	smallest = sequence;
        	}
        	if(sequence.compareTo(largest) > 0){
            	largest = sequence;
        	}            
    	}
    return smallest + "\n" + largest;
    }


    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.next();
        int k = scan.nextInt();
        scan.close();
      
        System.out.println(getSmallestAndLargest(s, k));
    }
}

*/
