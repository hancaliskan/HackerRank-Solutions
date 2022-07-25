import java.util.*;

class Student{
	private int id;
	private String fname;
	private double cgpa;
	public Student(int id, String fname, double cgpa) {
		super();
		this.id = id;
		this.fname = fname;
		this.cgpa = cgpa;
	}
	public int getId() {
		return id;
	}
	public String getFname() {
		return fname;
	}
	public double getCgpa() {
		return cgpa;
	}
}

public class Solution
{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		int testCases = Integer.parseInt(in.nextLine());
		
		List<Student> studentList = new ArrayList<Student>();
		while(testCases>0){
			int id = in.nextInt();
			String fname = in.next();
			double cgpa = in.nextDouble();
			
			Student st = new Student(id, fname, cgpa);
			studentList.add(st);
			
			testCases--;
		}
        
        for(int i= 0 ; i < studentList.size()-1; i++){
            for(int k = i+1 ; k < studentList.size() ; k++){
                if(studentList.get(i) == studentList.get(k)){
                    System.out.println(i + "and" + k + "are pairs");
                }
            }
        }           

        Collections.sort(studentList, new Comparator<Student>() {
            public int compare(Student s1, Student s2) {
                if(s1.getCgpa() == s2.getCgpa()){
                    if(s1.getFname().compareTo(s2.getFname()) > 0){
                        return 1;
                    }
                    return -1;
                }
                return s1.getCgpa() > s2.getCgpa() ? -1 : 1;
            }
        });
        
      	for(Student st: studentList){
			System.out.println(st.getFname());
		}
	}
}


