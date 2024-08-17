package Lambda;



/*No Param*/
abstract interface NoParam{
    public abstract int getNum();
}

public class Scracth {
    public static void main(String[] args) {
        NoParam num1 = ( )-> 100;
        NoParam num2 = ( )-> 200;
        System.out.println(num1.getNum());
        System.out.println(num2.getNum());

    }
}

/*Single Param*/
abstract interface SingleParam{
    abstract public double getNum(double n);
}
class SingleParameter{
    public static void main(String[] args) {
        SingleParam num1 = (n)-> n * 2;
        SingleParam num2 = (n)->n + 2;
        SingleParam num3 = (n) ->n - 2;
        SingleParam num4 = (n) -> n/2;
//        SingleParam num5 = (n) -> (n % 2) == 0;//because the expression return boolean value and we have double type absract method
        System.out.println(num1.getNum(100.5));
        System.out.println(num2.getNum(100.5));
        System.out.println(num3.getNum(100.5));
        System.out.println(num4.getNum(100.5));
    }
}

abstract interface TwoParam{
    public abstract int getNum(int n, int o);
}
class TwoParameters{
    public static void main(String[] args) {
        TwoParam num1 = (a,b) -> a + b;
        TwoParam num2 = (a,b) -> a * b;
        TwoParam num3 = (a,b) -> a - b;
        TwoParam num4 = (a,b) -> a / b;
        TwoParam num5 = (a,b) -> a % b;
        System.out.println("addition of  two numbers "+num1.getNum(5,5));
        System.out.println("Multiplication of two numbers"+num2.getNum(5,5));
        System.out.println("Subtraction of two numbers"+num3.getNum(5,5));
        try {
            System.out.println("division of two numbers "+num4.getNum(5,0));
        }catch (Exception e ){
            System.out.println(e);
        }
        System.out.println("remainder "+num5.getNum(5,5));

    }

}

/*Generic Functional interface*/
abstract interface GenericInterface<T>{
    T getValue();
}
class GenericLambda{
    public static void main(String[] args) {
        GenericInterface<Integer> IntObject = () -> 5;
        GenericInterface<String> StrObject = () -> "Sagar Chhabriya";
        GenericInterface<Double> DoubleObj = () -> 555.55;
        System.out.println(IntObject.getValue());
        System.out.println(StrObject.getValue());
        System.out.println(DoubleObj.getValue());
    }
}

/*Generic Single Parameterized Interface*/

abstract interface SingleGenericInterface<T>{
    T getVluae( T t );
}
class   SingleGenClass{
    public static void main(String[] args) {
        SingleGenericInterface<Integer> IntObject = (n) -> n * 2;
        SingleGenericInterface<Double> DoubleObj = (n) -> n * n;
        SingleGenericInterface<String> StrObject = (n) -> n + " Chhabriya";
        System.out.println(IntObject.getVluae(5));
        System.out.println(DoubleObj.getVluae(5.5));
        System.out.println(StrObject.getVluae("Sagar"));

    }
}
/*Double Parameterized Generic Interface*/
abstract interface DoubleGenericInterface<T>
{ T getValue(T a, T b); }
class DoubleGenClass{
    public static void main(String[] args) {
        DoubleGenericInterface<Integer> IntObject = (a,b) -> a * b;
        DoubleGenericInterface<String> String = ( a, b) -> a +" "+ b;
        System.out.println(IntObject.getValue(5,5));
        System.out.println(String.getValue("Sagar","Chhabriya"));
    }
}
/*Lambda Block*/
abstract interface LambdaBlock{
        public abstract int getValue();
}
class Lambda{
    public static void main(String[] args) {
        LambdaBlock object1 = ()-> {return 500;};
        LambdaBlock object2 = ()-> {
            int arr[]={1,2,3,4,5,6,7,8,9},sum=0;
            for(int element : arr)
                 sum += element;
            return sum;
        };
        System.out.println(object1.getValue());
        System.out.println(object2.getValue());

    }
}

/*Parameterized Lambda  Block*/
abstract interface SingleLambdaBlock{
    abstract public int getValue(int n);
}
class SingleBlock{
    public static void main(String[] args) {
        SingleLambdaBlock num1 = (n)->{ if(n>=0){ int fact =1; for( int i=1; i<=n; i++) fact *=i; return fact;}return n;};
        System.out.println(num1.getValue(5));
    }
}

