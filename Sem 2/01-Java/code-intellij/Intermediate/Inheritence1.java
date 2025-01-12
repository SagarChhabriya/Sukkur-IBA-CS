public class Inheritence1 {
    public static void main(String[] args) {
        System.out.println("RADHE RADHE");

        //        A obj_A1=new A();
        /*
        System.out.println(obj_A1.name);
        System.out.println(obj_A1.Name());
        obj_A1.name();
        */

        A obj_A2=new A("okay");
        /*
        System.out.println(obj_A2.name);
        System.out.println(obj_A2.Name());
        obj_A2.name();
        */


        A.A_inner obj_A_inner1=obj_A2.new A_inner();


        A.A_inner obj_A_inner2=obj_A2.new A_inner("okay");
        A.A_member obj_A_member1=new A.A_member();
        A.A_member obj_A_member2=new A.A_member("okay");
/*
        B obj_B1=new B();
        B obj_B2=new B("okay");
        B.B_inner obj_B_inner1=obj_B2.new B_inner();
        B.B_member obj_B_member1=new B.B_member();
        B.B_member obj_B_member2=new B.B_member("Okay");
*/
//        Achild obj_childA2= (Achild) new A();         //casting can't be done
//        Achild obj_inner=new A.A_inner();             //not allowed
//        Achild obj_childMember =new A.A_member();     //not allowed



    }
}
class  A {
    String name="Class A instance";
    void name()
    {System.out.println("Class A method");}
    Void Name()
    {System.out.println("CLass A returned Void mehtod");return null;}
    A()
    {System.out.println("Parameter less constructor of class A has been invoked");}
    A(String name)
    {   this.name=name; System.out.println("Parameterized constructor of Class A has been invoked");}
    class A_inner{
        String inner_name="Inner Class A's Instance";
        void name()
        {System.out.println("Inner Class A's method with the same name as class A");}
        void inner_name()
        {System.out.println("Inner class A method");}
        Void Name()
        {System.out.println("Class inner A returned Void method");return null;}
        A_inner()
        {System.out.println("Parameter less constructor of A_inner  has been invoked"); }
        A_inner(String inner_name)
        {   this.inner_name=inner_name;     System.out.println("Parametrized constructor of A_inner has been invoked");    }
    }
    static class A_member{
        String member_name="static Class A's Instance";
        void name()
        {System.out.println("static Class A's method with the same name as class A");}
        void member_name()
        {System.out.println("static class A method");}
        Void Name()
        {System.out.println("Class static A returned Void method");return null;}
        A_member()
        {System.out.println("Parameter less constructor of A_member  has been invoked"); }
        A_member(String member_name)
        {   this.member_name=member_name;     System.out.println("Parametrized constructor of A_member has been invoked");    }
    }
}

class B {
    String name = "Class B instance";

    void name() {
        System.out.println("Class B method");
    }

    Void Name() {
        System.out.println("CLass B returned Void mehtod");
        return null;
    }

    B() {
        System.out.println("Parameter less constructor of class B has been invoked");
    }

    B(String name) {
        this.name = name;
        System.out.println("Parameterized constructor of Class B has been invoked");
    }

    class B_inner {
        String inner_name = "Inner Class B's Instance";

        void name() {
            System.out.println("Inner Class B's method with the same name as class B");
        }

        void inner_name() {
            System.out.println("Inner class B method");
        }

        Void Name() {
            System.out.println("Class inner B returned Void method");
            return null;
        }

        B_inner() {
            System.out.println("Parameter less constructor of B_inner  has been invoked");
        }

        B_inner(String inner_name) {
            this.inner_name = inner_name;
            System.out.println("Parametrized constructor of B_inner has been invoked");
        }
    }

    static class B_member {
        String member_name = "member Class B's Instance";

        void name() {
            System.out.println("member Class B's method with the same name as class B");
        }

        void member_name() {
            System.out.println("member class B method");
        }

        Void Name() {
            System.out.println("Class member B returned Void method");
            return null;
        }

        B_member() {
            System.out.println("Parameter less constructor of B_member  has been invoked");
        }

        B_member(String member_name) {
            this.member_name = member_name;
            System.out.println("Parametrized constructor of B_member has been invoked");
        }
    }
}
class Achild extends A{

}
class Bchild extends B{

}