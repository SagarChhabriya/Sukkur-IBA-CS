package Generic;
//This class describes a method which have Type Parameter Formal Parameter, and method of Type Parameter

public class GenericMethod<T> {
    T t;

    public void add(T t)
    {
        this.t=t;
    }
    public T get()
    {return t;}
    public static <T> void printArray(T array[])
    {
        for(T element : array)
            System.out.print(element + " ");
    }
    public static void main(String args[])
    {
        GenericMethod<String> string= new GenericMethod<>();
        string.add("Sagar");
        GenericMethod<Integer> number = new GenericMethod<>();
        number.add(22);
        System.out.println("Name is "+string.get());
        System.out.println("Age is "+number.get());
        Integer[] arr={1,2,3,4,5,6,7,8,9};
        printArray(arr);
    }
}
