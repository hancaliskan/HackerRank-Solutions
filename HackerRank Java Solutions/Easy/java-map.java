//Complete this code or write your own from scratch
import java.util.*;
import java.io.*;

class Solution{
	public static void main(String []argh)
	{
        HashMap<String, Integer> tel_number = new HashMap<String, Integer>();
		Scanner in = new Scanner(System.in);
		int n=in.nextInt();
		in.nextLine();
		for(int i=0;i<n;i++)
		{
			String name=in.nextLine(); 
			int phone=in.nextInt();
			in.nextLine();
            tel_number.put(name, phone);
		}
		while(in.hasNext())
		{
			String s=in.nextLine();
            //tel_number.values(tel_number.get(s));
            if(tel_number.containsKey(s)){
                System.out.println(s + "=" + tel_number.get(s));
            }
            else{
                System.out.println("Not found");
            }
            
            
		}
	}
}




