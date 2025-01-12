import java.util.Arrays;

public class MultipleExceptions {
    static void doLaundry () throws NullPointerException,ClassNotFoundException
    {
//        code that could throw either the exceptions
    }

    public static void main(String[] args) {

        try {
            doLaundry();
        /*at least one catch block is 'necessary'*/
        }
        catch (ClassNotFoundException e)
        { /*recovery code, if the ClassNotFoundException occurs*/ }
        catch (NullPointerException e)
        {   /*recovery code, if the NullPointerException occurs*/  }
        catch (Exception e)
        {   /*last choice Super class Exception(polymorphic), if an other exceptions occurs*/}
    }
}

class Outer{

    static int num=5;

    class inner{


    }
    static class member{

    }

    public static void main(String[] args) {
        Outer obj=new Outer();
        Outer.inner obj1=obj.new inner();
        Outer.member object= new Outer.member();
        char arr[]={'S','a','g','a','r'};
        String s= Arrays.toString(arr);
        System.out.println(arr);

    }

}
interface a{
    int name();
}
abstract class aa implements a{

}
class aaa extends aa implements a {
    public int name()
    {
        return 0;
    }
}

