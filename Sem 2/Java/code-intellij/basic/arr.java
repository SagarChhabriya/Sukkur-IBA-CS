import java.util.Scanner;

//    Class arr contains main method
// left questions
// deletion , insertion , segregation, two d, matrices addition, matrices identity
public class arr {

    public static void main(String[] args) {
        System.out.println("RADHE RADHE INSIDE MAIN METHOD");
        first pointer = new first();
        $second point = new $second();
        three poi= new three();

        //        pointer.rev();
//        pointer.msg();
//        pointer.max();
//        pointer.msg();
//          point.split();
//        pointer.msg();
//          point.sort();
//        pointer.msg();
//        poi.rev_copy();
//        pointer.msg();
//        poi.max_3_num();
//        poi.f();






    }
}
class first {
    public int rev() {
        Scanner enter = new Scanner(System.in);
        System.out.println("In the method named first");
        System.out.println("Enter the Size of an array");
        int size = enter.nextInt();
        int[] a = new int[size];
        System.out.println("Enter " + size + " Elements ");
        for (int num = 1, i = 0; i < size; i++, num++)
        {
            System.out.printf("Enter %d Number element   ", num);
            a[i] = enter.nextInt();
        }
        System.out.println("Printing array how it is stored");
        for (int i = 0; i < size; i++) {
            System.out.println(a[i]);

        }

        System.out.println("Printing array in its reverse order");
        for (int i = size - 1; i >= 0; i--) {
            System.out.println(a[i]);
        }
        return 0;
    }

    public void msg() {
        System.out.println("Array has been printed ...thish...thish 😎😎🤘🏼");

    }

    public void max() {
        System.out.println("Enter the Size of an Array");
        Scanner enter = new Scanner(System.in);
        int size = enter.nextInt();
        int[] ar = new int[size];
        int max = 0, min = 0;
        System.out.println("Enter " + size + " Elements");
        for (int j = 0, i = 0; i < size; i++, j++) {
            {
                ar[i] = enter.nextInt();
                if (ar[i] > max) {
                    max = ar[i];
                }
            }
        }
        System.out.println("Here is the Minimum Element " + min);
        System.out.println("Here is the Maximum ELement " + max);

    }

    public void even_odd()
    {
        System.out.println("Finding even and odd");
        System.out.println("Enter the Size of an array");
        Scanner enter = new Scanner(System.in);
        int size = enter.nextInt();
        int[] eo = new int[size];
        int[] e = new int[size];
        int[] o = new int[size];
        int[] p = new int[size];
        int[] n = new int[size];
        int[] z = new int[size];
        int count_e = 0, count_o = 0, count_zero = 0, count_pos = 0, count_neg = 0;
        System.out.println("Enter " + size + " Elements");
            for (int i = 0; i < size; i++)
            {
                    eo[i] = enter.nextInt();
                    if (eo[i] % 2 == 0 || eo[i] % 2 == -0)
                    {
                        e[count_e] = eo[i];
                        ++count_e;
                    }
                    if (eo[i] % 2 == 1 || eo[i] % 2 == -1)
                    {
                        o[count_o] = eo[i];
                        ++count_o;
                    }
                    if (eo[i] > 0)
                    {
                        p[count_pos] = eo[i];
                        ++count_pos;
                    }
                    if (eo[i] < 0)
                    {
                        n[count_neg] = eo[i];
                        ++count_neg;
                    }
                    if (eo[i] == 0)
                    {
                        z[count_zero] = eo[i];
                        ++count_zero;
                    }
            }
            System.out.println("There are " + count_o + " odd Numbers in the Array");
            System.out.println("There are " + count_e + " Even Numbers in the Array");
            System.out.println("Ther are " + count_zero + " zeros in the array");
            System.out.println("There are " + count_pos + " Positive Numbers in the array");
            System.out.println("Threr are " + count_neg + " Negative Numbers in the Array");

            System.out.println("Printing Even Numbers");
            for ( int i = 0; i < count_e; i++)
            {
                System.out.println(e[i]);
            }
            System.out.println("Printing the Odd Numbers of the Array");
            for ( int i = 0; i < count_o; i++)
            {
                System.out.println(o[i]);
            }
            System.out.println("Printing positive Numbers ");
            for (int  i = 0; i < count_pos; i++)
            {
                System.out.println(p[i]);
            }
            System.out.println("Printing Negative Numbers ");
            for (int  i = 0; i < count_neg; i++)
            {
                System.out.println(n[i]);
            }
            System.out.println("Printing Zeros");
            for (int i = 0; i < count_zero; i++)
            {
                System.out.println(z[i]);
            }




    }

}
class $second
{
    Scanner enter = new Scanner(System.in);

    public void split() {
        System.out.println("Spliting an array");
        System.out.println("Enter the Size of the Array");
        int size = enter.nextInt();
        int[] arr= new int[size];
        int[] hone = new int[size/2];
        int[] htwo =new  int[size/2];
        int count_htwo=0;
        System.out.println("Enter "+ size + " Elements");
        for(int i=0; i<size; i++)
        {
            arr[i]=enter.nextInt();
        }
        System.out.println("Printing Your Eetered Array");
        for(int i=0;i<size; i++)
        {
            System.out.print(arr[i]+ " ");
        }
        System.out.println("After Spliting the First Array is ");
        for(int i=0; i<size/2; i++)
        {       hone[i]=arr[i];      }
        for(int i=0; i<size/2; i++)
        {
            System.out.print(hone[i]+" ");
        }
        System.out.println("After Spliting the Second Array is ");
        for(int i=size/2; i<size; i++)
        {   htwo[count_htwo]=arr[i];    ++count_htwo;   }
        for(int i=0; i<count_htwo; i++)
        {
            System.out.println(htwo[i]+" ");
        }




    }

    public void sort()
    {
        System.out.println("Sorting an array");
        System.out.println("Enter the size of the Array");
        int size=enter.nextInt();
        int[] arr=new int[size];
        int[] t=new int[size];

        System.out.println("Enter "+ size + " Elements");
        for(int i=0; i<size; i++)
        {   arr[i]=enter.nextInt(); }
        for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size; j++)
            {
                if(arr[i]>arr[j])
                {
                    t[0]=arr[i];
                    arr[i]=arr[j];
                    arr[j]=t[0];
                }

            }
        }

        for(int i=0; i<size; i++)
        {
            System.out.print(arr[i]+" ");
        }
    }


}
class three
{
    Scanner enter= new Scanner(System.in);
    int size;
//    The array is reversed but note that the index of the second(store copy array's) is fixed 😎
    public void rev_copy()
    {
        System.out.println("getting an array and copying it in reverse and then printing it");
        System.out.println("Enter the Size of the Array");
        size = enter.nextInt();
        int[] get= new int[size];
        int[] set= new int[size];
        int fix=0;
        System.out.println("Enter "+ size + " Elements");
        for(int i=0; i<size; i++)
        {   get[i]=enter.nextInt(); }
        for(int i=size-1;i>=0; i--)
        {
            set[fix]=get[i];
            ++fix;
        }
        System.out.println("Printing the Reversed array");
        for(int i=0; i<size; i++)
        {
            System.out.print(set[i]+" ");
        }



    }
    public void max_3_num ()
    {
        System.out.println("Finding the Three maximum numbers of the Array");
        System.out.println("Enter the Size of the array");
        size=enter.nextInt();
        int[]  arr= new int[size];
        int max1=0,max2=0,max3=0;
        System.out.println("Enter "+ size + " Elements");
        for(int i=0; i<size; i++)
        {
            arr[i]=enter.nextInt();
            if (arr[i]>max1)
            {   max1=arr[i];    }
        }
        for(int i=0; i<size; i++)
        {
            if(arr[i]< max1 && arr[i]>max2)
            {   max2=arr[i];    }
        }
        for(int i=0; i<size; i++)
        {
            if(arr[i]< max1 && arr[i]<max2 && arr[i]>max3)
            {   max3=arr[i];    }
        }
        System.out.println("Max one "+ max1);
        System.out.println("Max two "+ max2);
        System.out.println("Max three "+ max3);
    }
//    incorrect frequency and f
    public void frequency()
    {
        System.out.println("Checking the frequency of Numbers");
        System.out.println("Enter the Size of the Array");
        size= enter.nextInt();
        int[] arr= new int[size];
        int same1=0,same2=0,same3=0,count_same1=0,count_same2=0,count_same3=0;
        System.out.println("Enter "+ size + " Elements");
        for(int i=0; i<size; i++)
        {
            arr[i]=enter.nextInt();
        }
        for(int i=0; i<size; i++)
        {
            for (int j=i+1; j<size;j++)
            {
                if (arr[i]==arr[j])
                {
                    same1=arr[i];
                    ++count_same1;
                }
            }
        }
        for (int i=0; i<size; i++)
        {
            for (int k=i+1; k<size;k++)
            {
                if (arr[i]==arr[k] && arr[i]!=same1 )
                {
                    same2=arr[i];
                ++count_same2;
                }
            }
        }
        for (int i=0; i<size; i++)
        {
            for (int l=i+1; l<size; l++)
            {
                if (arr[i]==arr[l] && arr[i]!= same2 && arr[i]!= same1)
                {
                    same3=arr[i];
                    ++count_same3;
                }
            }
        }
        System.out.println("Same one " + same1+ " it occurs " + count_same1+ " times");
        System.out.println("Same two " + same2+" it occurs " + count_same1+ " times");
        System.out.println("Same three " + same3+" it occurs " + count_same1+ " times");


    }
    public void f()
    {
        int[] arr=new int[] {1,2,8,3,2,2,2,5,1};
        int[] fr= new int[arr.length];
        int visited=-1;
        for(int i=0; i<arr.length; i++)
        {
            int count=1;
            for(int j=0; i<arr.length; i++)
            {
                if (arr[i]==arr[j])
                {
                    count++;
                    fr[j]=visited;
                }
            }
            if (arr[i]!=visited)
            {
                fr[i]=count;
            }
        }
        for (int i=0; i<fr.length;i++)
        {
            if (fr[i]!=visited)
            {
                System.out.println(" " +arr[i] + " |  " + fr[i]);

            }
        }
    }

}





