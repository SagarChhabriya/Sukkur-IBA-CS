package Generic;
/*
* A Simple Generic Class. Here, T is a parameter that will be replaced by a real type
* when an object of type Gen is created
* */
public class Gen<T> {
    T ob;//Declare an object of type T

    /*Pass the constructor a reference to an object of type T*/
    Gen(T o) {
        ob = o;
    }

    //    Return ob
    T getOb() {
        return ob;
    }

    //    Show type of T
    void ShowType() {
        System.out.println("Type of T is " + ob.getClass().getName());
    }
}
//Demonstrate the generic class
    class GenDemo{
    public static void main(String[] args) {
//        create  a Gen reference for integers
        Gen<Integer> iOb;
        /*Create a Gen<Integer> object and assign its reference to iOb. Notice the use of
        * autoboxing to encapsulate the value 88 within an Integer object.*/
        iOb=new Gen<>(88);
//        show the type of data used by iOb.
        iOb.ShowType();
//        Get the value in iOb. Notice that no cast is needed
        int v=iOb.getOb();
        System.out.println("Value "+ v);
        System.out.println();
//        Create an object for Strings
        Gen<String> strOb = new Gen<String>("Generic Test");
//        Show the type of data used by strOb
        strOb.ShowType();
//        Get the value of strOb. Again, notice that no cast is needed.
        String str = strOb.getOb();
        System.out.println("Value : "+str);

    }
}

class Driver{
    public static int[] arrayDiff(int[] a, int[] b) {
        int res[]=new int[a.length+b.length];
        int index=-1;
        for(int i=0; i<a.length; i++)
            for(int j=0; j<b.length; j++)
                if(a[i] != b[j]) res[++index]=a[i];

        return res;
    }
    public static void main(String[] args) {
        int one[]={1,5,6,7};
        int two[]={2,1,3};
        int res[]=arrayDiff(one, two);
        for(int item: res)
            System.out.print(item + " ");


    }

}
