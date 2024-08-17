    import java.util.Scanner;
class Main{
String name;
    void setName(String name)
    {
        this.name=name;
    }
    String getName()
    {   return this.name;}
    void set_obj(Main obj)
    {
        this.name=obj.name;
    }




    public static void main(String[] args) {
        Scanner enter=new Scanner(System.in);
        System.out.println("RADHE RADHE");
        Main obj1= new Main();
        Main obj2= new Main();
        obj1.setName("Sagar");
        obj2.setName("sagar");
        System.out.println(obj1.name);
        System.out.println(obj2.name);
        obj1.set_obj(obj2);
        obj1.setName("SAGAR");
        System.out.println(obj1.name);
        System.out.println(obj2.name);
    }
}