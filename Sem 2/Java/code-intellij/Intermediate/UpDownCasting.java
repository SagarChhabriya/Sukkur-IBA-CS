public class UpDownCasting {

    public static void main(String[] args) {
        Child object=new Child("","",0);
        Father obj=new Father("Mukesh Kumar","",50);
        System.out.println(obj.FatherName);
        System.out.println(obj.name);
        System.out.println(obj.FatherAge);
        System.out.println(object.ChildName);
        System.out.println(object.ChildAge);
    }
}

class Father
{
    String FatherName;
    StringBuffer name;

    int FatherAge;
    Father(String FatherName, String name , int FatherAge)
    {

        this.FatherName=FatherName;
        this.FatherAge=FatherAge;
    }



}

class Child extends Father{

    String ChildName;
    int ChildAge;
    Child()
    {super("","",0);}
    Child(String a, String b, int c)
    {
//        super("Mukesh Kumar","child class const",45);
        super(a, b,c );
    }



}
