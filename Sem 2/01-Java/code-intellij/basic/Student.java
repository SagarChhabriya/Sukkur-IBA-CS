//Class for Instance Variables
public class Student {
    public String name;
    private int marks;
    public Student(String StudentName)
    {
        this.name=StudentName;
    }
    public void setMarks(int StudentMarks)
    {
        this.marks=StudentMarks;
    }
    public void PrintStudentInf()
    {
        System.out.println("Name " + name);
        System.out.println("Marks " + marks);
    }

    public static void main(String[] args) {
        Student  StudentOne= new Student("Sagar");
        Student  StudentTwo= new Student("Qadeer");
        Student  StudentThree= new Student("Sagar");
        StudentOne.setMarks(70);
        StudentTwo.setMarks(80);
        StudentThree.setMarks(90);
        StudentOne.PrintStudentInf();
        StudentTwo.PrintStudentInf();
        StudentThree.PrintStudentInf();


    }
}
