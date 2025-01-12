import  java.lang.String;
//Lab five      //Task No one   //a. create a parameterized constructor
class employee{
    private String name,city,gender;        private int age;    private double salary;
    public employee(String name, String city, String gender,int age, double salary) {
        this.name=name; this.city=city;     this.gender=gender;
        this.age=age;   this.salary=salary;     }
    //b.create a default constructor which doesn't do anything.
    public employee(){}
//c.make this class an encapsulated class, remmember that an employee
// can not take salary less than 25000 and not more than 60000
    public void set_salary(double salary_amount)
    {   if(salary_amount>25000 && salary_amount<60000)
            this.salary=salary_amount;}
    public double get_salary()
    {   if(this.salary>25000 && this.salary<60000)
        return this.salary;
        else System.out.println("Salary is out of range "); return 0;
    }
    public String getName()
    {    return name;  }
    public void setName(String name)
    {    this.name = name;  }
    public String getCity()
    {    return city;    }
    public void setCity(String city)
    {    this.city = city;}
    public String getGender()
    {    return gender; }
    public void setGender(String gender)
    {    this.gender = gender; }
    public int getAge()
    {    return age; }
    public void setAge(int age)
    {    this.age = age;    }

    // d.finally add a method in this class, which allows to create a copy
    // of student object  in such a way that both objects point to same memory location
    employee same_location(employee obj1, employee obj2)
    {
//        this method will assign the same location to two different objects,
//        and change in one will cause change in other
        obj2=obj1;
        return obj2;
    }
    //   e. also add a method so that both objects point to different memory locations
    public void different_location(employee obj)
    {
//        this method will assign the one object's instances to the other, same values
//        but difference reference  change in one will not cause the change in other
        this.age=obj.age;
        this.city=obj.city;
        this.gender=obj.gender;
        this.name=obj.name;
        this.salary=obj.salary;
    }
}
//2. create a class calculator with three variables, namely: number1, number2, and
// number3
class calculator{
    private double number1, nubmer2,number3,sum_of_params;
    //a.create at least three constructors
    calculator (){}
    calculator(int num, int bum)                {   this.sum_of_params=num+bum;}
    calculator (double number1, double number2, double number3)
    {   this.number1=number1;       this.nubmer2=number2;    this.number3=number3;  }

    public double getNumber1()                  {    return number1;}

    public void setNumber1(double number1)      {    this.number1 = number1; }
    public double getNumber2()                  {    return nubmer2; }
    public void setNumber2(double nubmer2)      {    this.nubmer2 = nubmer2; }
    public double getNumber3()                  {    return number3; }
    public void setNumber3(double number3)      {   this.number3 = number3;}
    //    c add methods for sum and multiplication
    double sum(double num1, double num2)        {   return num1+num2;}
    double multiply(double num1, double num2)   {   return num1*num2;}

}
// Task three:- try the following code and write down your observations
class TestOverLoading
{
//    observation : String array as a formal parameter
    public static void main(String[] args)
    {   System.out.println("main with Sting[]");    }

//    observation : String identifier/object as a formal parameter
    public static void main(String args)
    {  System.out.println("main with String args");    }

//    observation : method named main with default parameters
    public static void main()
    { System.out.println("main without args");    }
}
//Task no four
class OverloadingCalculation3{
    void sum(int a, long b)
    {System.out.println("A method invoked with 1st parameter int and second paramter long");}
    void sum(long a, int b)
    {System.out.println("B method invoked with first parameter long and second paramter int");}

}
//Task No five
//create a class square with an attribute called number
class square{
    private double number;
//a.make this class encapsulated

    public double getNumber()
    {    return number; }

    public void setNumber(double number)
    {    this.number = number; }
//    b.Add three methods, all having same name but their data types are: float, double, int

    void method(float num)
    {System.out.println("float method invoked"); return;}

    void method(double num)
    {System.out.println("double method invoked");}

    void method(int num)
    {System.out.println("int method invoked");}

}
public class Holiday {
    public static void main(String[] args) {
        System.out.println("RADHE RADHE");
//        class employee starts
        employee obj1=new employee();
        employee obj2= new employee("Sagar","Kandhkot", "Male", 18, 50000);
        employee obj3=new employee("Qadeer","Kandhkot","Male",20,100000);

        System.out.println(" getting the data");
        System.out.println("obj1 name   "+obj1.getName());
        System.out.println("obj1 salary "+obj1.get_salary());
        System.out.println("obj1 city   "+obj1.getCity());
        System.out.println("obj1 gender "+obj1.getGender());
        System.out.println("obj1 age    "+obj1.getAge());

        System.out.println(" getting the data");
        System.out.println("obj2 name   "+obj2.getName());
        System.out.println("obj2 salary "+obj2.get_salary());
        System.out.println("obj2 city   "+obj2.getCity());
        System.out.println("obj2 gender "+obj2.getGender());
        System.out.println("obj2 age    "+obj2.getAge());

        System.out.println(" getting the data");
        System.out.println("obj3 name   "+obj3.getName());
        System.out.println("obj3 salary "+obj3.get_salary());
        System.out.println("obj3 city   "+obj3.getCity());
        System.out.println("obj3 gender "+obj3.getGender());
        System.out.println("obj3 age    "+obj3.getAge());

        System.out.println("getting the data after setting");
        obj1.setName("Gulu");   obj1.setAge(25);    obj1.setCity("Registan");
        obj1.setGender("other");    obj1.set_salary(10000);

        System.out.println(" getting the data of obj1 after setting it");
        System.out.println("obj1 name   "+obj1.getName());
        System.out.println("obj1 salary "+obj1.get_salary());
        System.out.println("obj1 city   "+obj1.getCity());
        System.out.println("obj1 gender "+obj1.getGender());
        System.out.println("obj1 age    "+obj1.getAge());


System.out.println("addresses AFTER calling the same_location method  obj1 → " + obj1 + " obj2 → "+ obj2+" obj3 →  "+ obj3);
//        obj2 stores the object which is returned by same_location mehtod which is a class type method
System.out.println("addresses BEFORE calling the same_location method  obj1 → " + obj1 + " obj2 → "+ obj2+" obj3 →  "+ obj3);
        obj1=obj2.same_location(obj3, obj2);
        System.out.println("is obj1== obj3 "+(obj1==obj3));
/*      after calling the method same_location the memory address of the obj3 will be assigned to obj2
        and that will be stored in obj1 by the return statement NOTE: after calling the same_location
        method obj3 and obj1 refers to the same address(because the returned reference will be stored in obj1
        it will not cause any effect on the memory location of obj2 */
        obj1.setName("SAGAR");
        obj2.setName("sagar");
        System.out.println("the name of obj1 and obj2 BEFORE calling the different_location method");
        System.out.println("obj1 → "+obj1.getName()+ " obj2 → "+obj2.getName());
        obj1.different_location(obj2);
        System.out.println("the name of obj1 and obj2 AFTER  calling the different_location method");
        System.out.println("obj1 → "+obj1.getName()+ " obj2 → "+obj2.getName());

//      class employee finsih


//        class calculator start

        calculator calc_obj1=new calculator();
        calculator calc_obj2=new calculator(1,2,3);
        System.out.println("calc_obj1 BEFORE setting its value ");
        System.out.println("obj1.Number1 → "+calc_obj1.getNumber1());
        System.out.println("obj1.Number2 → "+calc_obj1.getNumber2());
        System.out.println("obj1.Number3 → "+calc_obj1.getNumber3());

        System.out.println("calc_obj2 BEFORE setting its value ");
        System.out.println("obj2.Number1 → "+calc_obj2.getNumber1());
        System.out.println("obj2.Number2 → "+calc_obj2.getNumber2());
        System.out.println("obj2.Number3 → "+calc_obj2.getNumber3());
//        Setting the calc_obj1's values
        calc_obj1.setNumber1(10);   calc_obj1.setNumber2(20);   calc_obj1.setNumber3(30);
//      Setting the calc_obj2's values
        calc_obj2.setNumber1(5);   calc_obj2.setNumber2(10);   calc_obj2.setNumber3(15);

        System.out.println("calc_obj1 AFTER setting its value ");
        System.out.println("obj1.Number1 → "+calc_obj1.getNumber1());
        System.out.println("obj1.Number2 → "+calc_obj1.getNumber2());
        System.out.println("obj1.Number3 → "+calc_obj1.getNumber3());

        System.out.println("calc_obj2 AFTER setting its value ");
        System.out.println("obj2.Number1 → "+calc_obj2.getNumber1());
        System.out.println("obj2.Number2 → "+calc_obj2.getNumber2());
        System.out.println("obj2.Number3 → "+calc_obj2.getNumber3());

        System.out.println("calc_obj1.sum of two numbers → "+calc_obj1.sum(2, -2));
        System.out.println("calc_obj1.sum of three number → "+calc_obj2.sum(-2 , calc_obj1.sum(4, 8)));
        System.out.println("calc_obj1.product of two numbers → "+ calc_obj1.multiply(2, 2));
        System.out.println("calc_obj1.product of three numbers →  "+calc_obj1.multiply(2, calc_obj1.multiply(2, 2)));
//        class calculatore finish

//        class OverloadingCalculation3 start
        OverloadingCalculation3 over_obj= new OverloadingCalculation3();
        over_obj.sum(5, 10L);
        over_obj.sum(5L, 10);

//      class square
        square square_obj1= new square();
        System.out.println("sqaure_obj1's number BEFORE setting "+square_obj1.getNumber());
        square_obj1.setNumber(55);
        System.out.println("sqaure_obj1's number AFTER setting "+square_obj1.getNumber());
        square_obj1.method(55);
        square_obj1.method(55.0);
        square_obj1.method(55.55);

    }
}
