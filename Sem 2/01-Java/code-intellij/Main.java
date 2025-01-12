import java.util.Arrays;
import java.util.StringTokenizer;
import java.util.Random;

public class Main {
    public static void main(String[] args) {
//        String number = Integer.toString(123456);
//        String numbers[]=number.split("");
//        int sum = 0;
//        for(String val : numbers)
//            sum+=Integer.parseInt(val);
//        System.out.println(sum);

//        int[] arr = {1, 1, 3, 4, 5, 5, 7, 9, 9, 10};
        /*removing value at specific index*/
//        for(int i=0; i<arr.length; i++) {
//            if (arr[i] == 5)
//            { arr[i] = arr[i + 1];
//                for(int j=i+1; j<arr.length-1; j++)
//                    arr[j]=arr[j+1];
//                arr[arr.length-1]=-1;
//                break;
//            }
//        }
//        System.out.println(Arrays.toString(arr));
        /*Min and max in array*/
//        int max = arr[0];
//        int min = arr[0];
//        for(int element : arr)
//        {
//            if(element>max)max=element;
//            if(element<min)min=element;
//        }
//        System.out.println(max);
//        System.out.println(min);
        /* reversing array */
//    int len = arr.length-1;
//        for(int i=0; i<arr.length/2; i++)
//        {
//            int temp = arr[len];
//            arr[len--]=arr[i];
//            arr[i]=temp;
//        }
//        System.out.println(Arrays.toString(arr));
        /*finding duplicates*/
//        int counter=0;
//        for(int i=0; i<arr.length; i++)
//            for(int j=i+1; j<arr.length; j++)
//                if(arr[i]==arr[j] && (i != j))
//                    System.out.println("duplicate element "+ arr[j]);

        /*Intersection of Two Arrays*/
//        int arrOne[] = {2,4,6,8,};
//        int arrTwo[] = {1,2,3,4,5,6,7,8,9,10};
//        int res [] = new int[10];
//        for(int i = 0; i<arrOne.length; i++)
//        {
//            for(int j=0; j<arrTwo.length; j++)
//            {
//                if(arrOne[i]==arrTwo[j]) res[i]=arrOne[i];
//            }
//        }
//        System.out.println(Arrays.toString(res));

       /*Shuffle an array*/
        int[] shuf= {1,2,3,4,5};
        for(int i=0; i<shuf.length; i++)
        {
            Random random= new Random();
            int rand = random.nextInt(i+1);
            int temp = shuf[i];
            shuf[i]=shuf[rand];
            shuf[rand]=temp;
        }
        System.out.println(Arrays.toString(shuf));

    }
}
class StringTOken{

    public static void main(String[] args) {
        StringTokenizer str = new StringTokenizer("Hello, my name is John");
//        System.out.println(str.countTokens());
        int[] charCount=new int[26];
        String arr = "abcdefghijklmnopqrstuvwxyz";
        for(char c : arr.toCharArray())
            charCount[c-'a']++;



    }

}