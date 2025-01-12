
class Address
{   String city,state, country;
    public Address(String city,String state,String country)
    {this.city=city; this.state=state; this.country=country;   }

}
class Employee
{ int id; String name;    Address address;
    public Employee(int id, String name, Address address)
    {   this.id=id;     this.name=name; this.address=address;}
    void display()
    {   System.out.println(id + " "+ name);
        System.out.println(address.city+" "+ address.state+" "+ address.country);   }
}
/*  Output
     123 Sagar
    KandhKot Sindh Pakistan
    234 Qadeer
    KandhKot Sindh Pakistan
*/
public class Aggregation {
    public static void main(String[] args) {
        System.out.println("RADHE RADHE");
        Address address1=new Address("KandhKot","Sindh","Pakistan");
        Address address2=new Address("KandhKot","Sindh","Pakistan");
        Employee e1= new Employee(123,"Sagar", address1);
        Employee e2= new Employee(234,"Qadeer", address2);

        e1.display();
        e2.display();
    }
}