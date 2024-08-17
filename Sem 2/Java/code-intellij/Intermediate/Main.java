import java.lang.reflect.Array;
import java.util.Scanner;

class Main {
        int num;
    void mehtod(String... ABC) {
        System.out.println("RADHE RADHE");
    }
    Main(int num)
    {
        this.num=num;
    }
    void add(int i)
    {
        int arr[]=new int[10];
        arr[i]=i;
    }
    int get()
    {return this.num;}
    public static void main(String[] args) {
        System.out.println("RADHE RADHE");
        Main obj=new Main(2);
        Scanner scanner = new Scanner(System.in);
        Scanner sc=new Scanner(System.in);
        System.out.println("================================");
        for(int i=0;i<3;i++){
            String s1=sc.next();
            int x=sc.nextInt();
            //Complete this line
//                System.out.printf("%s",s);
        }
        System.out.println("================================");
        interface Printable{
            void print();
        }
        interface Showable extends Printable{
            void show();
        }
        class TestInterface4 implements Showable{
            public void print(){System.out.println("Hello");}
            public void show(){System.out.println("Welcome");}

            public static void main(String args[]){
                TestInterface4 obj = new TestInterface4();
                obj.print();
                obj.show();
            }
        }
        /*
        System.out.println("ok".toString().getClass());
        Object obj=new Object();
        System.out.println(obj.toString().getClass());
        System.out.println(obj.getClass());
        int arr[]=new int[10];
        System.out.println(arr.getClass());
        double arr2[]= new double[10];
        System.out.println(arr2.getClass());
        Integer arr3[]=new Integer[10];
        System.out.println(arr3.getClass());
        System.out.println(arr2 instanceof Object);
        Main Main = null;
        System.out.println(Main instanceof Object);
        System.out.println(Main instanceof  Main);
        */
        System.out.format("ok %d", 5);
        /*     fix it
        String s= String.format("% , d ", 1000000000);
        System.out.println(s);
    */
    }
}
class first{
    final void method()
    {System.out.println("method invoked"); }
    void method(int a)
    { /*...*/}
}
class second extends first{
     final void method(int a)
    {   /*...*/    }
    /*The method named "method"  is defined in the class first, and then it is overridden in subclass named "second"
    *   but the main point is that the after overriding the method has be made "final"  */  }

/*
 abstract class Shape {
     String name;

    public Shape(String name) {
        this.name = name;
    }

    public abstract double getArea();
}
//An interface is extending an abstract class

 interface Printable {
    void print();
}

 class Square extends Shape implements Printable {
    private double side;

    public Square(String name, double side) {
        super(name);
        this.side = side;
    }

    public double getArea() {
        return side * side;
    }

    public void print() {
        System.out.println("Name: " + super.name);
        System.out.println("Area: " + getArea());
    }
}
class Test{
    public static void main(String[] args) {
        System.out.println("RADHE RADHE");
        Square square=new Square("Circle",2);
        System.out.println(square.getArea());
    }
}
*/
abstract class A1{
     abstract void print();
     abstract void collect();
}
abstract class A2 extends A1{

    @Override
     abstract void print();
    abstract void donate();
}

class Test1 extends A2{
  Test1()
  {
      System.out.println("From constuctor");
  }
    void collect()
  {
      System.out.println("Collector ");
  }
  void donate()
  {
      System.out.println("Donater");
  }

    @Override
    void print()
    {
        System.out.println("PRINT HAS BEEN IMPLEMENTED");
    }

    public static void main(String[] args) {
        System.out.println("RADHE RADHE");
        A1 a;
        A2 a2;
        Test1 test1;
        a=new Test1();
        a.collect();
        a.print();
        a2=new Test1();
        a2.collect();
        test1=new Test1();
        test1.print();


  }
}
abstract class Parent{
    abstract void message();
}
class childOne extends Parent{
    @Override
     void message()
    {System.out.println("This is ChildOne");}
}
class childTwo extends Parent {
    @Override
    void message() {
        System.out.println("this is ChildTwo");
    }
}
    class checker {
        public static void main(String args[])
        {
            System.out.println("RADHE RADHE");
            childOne childone=new childOne();
            childTwo childtwo=new childTwo();
            childone.message();
            childtwo.message();
        }
    }
/*MUST SHARE WITH SIR: */
    /*
class Example {
    public void outerMethod()
    {
        System.out.println("Outer method");

        // Define a nested method
        void innerMethod ()
        {System.out.println("Inner method");        }

        Example ex=new Example();
        // Call the nested method
        innerMethod();
    }

    public static void main(String[] args) {
        Example ex = new Example();
        ex.outerMethod();
    }
}
*/

/*
class MyClass {
    public void myMethod() {
        int x = 5;

        // Defining a local method
        void myLocalMethod() {
            System.out.println("The value of x is: " + x);
        }

        // Calling the local method
        myLocalMethod();
    }
}
*/

class modifiers{
    public static void print()
    {
        System.out.println("Mata na mane");
    }
    static public void PRINT(){
        System.out.println("Mata na Mane");
    }

}
@FunctionalInterface
interface cw{
    void printer();
}

class implementer {
    public static void main(String[] args) {
        System.out.println("RADHE RADHE");
        cw obj= ()-> System.out.println("RADHE RADHE FROM LAMBDA");
        obj.printer();
        obj=()-> System.out.println("RADHE RADHE FROM LAMBDA SECOND TIME");
        obj.printer();

    }
}

interface Printable{
        void print();

        }
interface Showable extends Printable{
    void show();
}
class TestInterface4 implements Showable, Printable{
    public void print(){System.out.println("Hello");}
    public void show(){System.out.println("Welcome");}

    public static void main(String args[]){
        TestInterface4 obj = new TestInterface4();
        obj.print();
        obj.show();
        var var=4654l;
        var bum=5.3;
        var shum="Shampoo";
        var c='c';
        System.out.printf("num is : %d  %n bum is %f shum is %s  \n  character is %c",var,bum,shum,c);
        System.err.println("using err method");
    }
}
interface outer{
    interface inner{
        void show();
    }


        }
        class implementing implements outer.inner{
        public void show()
        {}

        }
class ArrayToMethod {
    private String name;
    private int age;

    ArrayToMethod() {
    this("Sagar");
        System.out.println("default parametrized constructore called");
    }
    ArrayToMethod(String name)
    {
        this("single parameter",0);
    }
    ArrayToMethod(String name,int age)
    {
        this.name=name;
        this.age=age;
    }
    public static void main(String[] a) {
    ArrayToMethod obj=new ArrayToMethod();
    ArrayToMethod Obj=new ArrayToMethod("Dual",10);
        System.out.println(obj.name);
        System.out.println(obj.age);


      }
}
//abstract class  F extends ArrayToMethod implements outer{}
class M {

}
