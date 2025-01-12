package Generic;
import javax.management.monitor.StringMonitor;
import javax.swing.text.StringContent;
import java.awt.datatransfer.StringSelection;
import java.io.*;
import java.lang.invoke.StringConcatFactory;
import java.math.*;
import java.security.*;
import java.sql.SQLOutput;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

public class Main { }
class Gen1<T>{
    T ob;

    Gen1(T o){
        ob = o;
    }
    T getOb()
    {return ob;}
    void ShowType()
    {
        System.out.println("Type of t is "+ob.getClass().getName());
    }


}
class GenDemo1{
    public static void main(String[] args) {
        Gen1<Integer> object1;
        object1=new Gen1<>(88);
        int v = object1.getOb();
        System.out.println("Value = "+v);
        System.out.println();
        Gen1<String> strOb = new Gen1<>("Generic Test");
        strOb.ShowType();
        String str = strOb.getOb();
        System.out.println("Value = "+str);
    }
}
class Gen2<T>{
    T object;
    Gen2(T o)
    {object=o;}
    void show()
    {
        System.out.println("The type of the object is "+this.object.getClass().getName());
    }

    public static void main(String[] args) {
        Gen2<Integer> RollNumber = new Gen2<>(023220310);
        Gen2<String> Name = new Gen2<>("Sagar Chhabriya");
        Gen2<Boolean> Alive = new Gen2<>(true);
        RollNumber.show();
        Name.show();
        Alive.show();
    }
}

class Gene2<T , V>
{
    T key; V value;
    Gene2( T a, V b)
    {
        key = a;
        value = b;
    }
    void show()
    {	System.out.println("The type of the key is "+this.key.getClass().getName());
        System.out.println("The type of the value is "+this.value.getClass().getName());
    }
    T getKey()
    {	return this.key;}
    V getValue()
    {	return this.value;}

    public static void main(String[] args)
    {
        System.out.println("Inside the main");
        Gene2<Integer,String> object = new Gene2<Integer, String>(023220310,"Sagar Chhabriya");
		System.out.println("Object key "+object.getKey());
		System.out.println("Object value "+object.getValue());
        System.out.println("object : " + object);
//        System.out.println((10/100)*100);
        double per= (20/50)*100;
        System.out.println(per);


    }
}

class Solution{

    Object ob;
    Solution(Object o)
    { ob = o;}
    Object get()
    {return ob;}
    void show()
    { System.out.println("Type of ob is " + ob.getClass().getName());
    }
    }
class user{
    public static void main(String[] a)
    {
//        System.out.println("RADHE RADHE");
//        Solution object = new Solution(88);
//        object.show();
    char arr[]={'a','c','d','e',' '};
        char item ='b';
        int loc=1;
        for(int i=arr.length-1; i>loc; i--)
            arr[i]=arr[i-1];
        arr[loc]=item;
        System.out.println(Arrays.toString(arr));

    }

}

 class LinearSearch_6 {

    public static void main(String[] args) {
        int arr[]={1,2,3,4,5,6,};
        int k =0;
        int item =3;
        int loc =0;
        while(k<arr.length)
        {
            if(arr[k]==item)
            {
                loc = k;
                System.out.println("Location : "+loc);
                k++;
            }
        }
    }
}


class Sol {

    public static void main(String[] args) {
//        System.out.println(Integer.valueOf('a'));




/*
        Map<String,Integer> object = new HashMap<>();
        Scanner enter = new Scanner(System.in);
        int  n = enter.nextInt();
        for(int i=0; i<n; i++)
        {
            String key = enter.nextLine();
            enter.skip("\n");
            System.out.println();
            Integer value=enter.nextInt();
            object.put(key,value);
        }
        for(int i=0; i<n; i++)
        {
            String find = enter.nextLine();
            System.out.println(object.get(find));
        }
        */

        Integer a = 2;
        String binStr = Integer.toBinaryString(a);
        System.out.println(binStr);
        System.out.printf("%x%n",2);
        System.out.printf("%x%n",10);
        System.out.printf("%e%n",10.0);

//        Long b = Long.valueOf(Integer.valueOf(a));
//        System.out.println(b);

    }
}
