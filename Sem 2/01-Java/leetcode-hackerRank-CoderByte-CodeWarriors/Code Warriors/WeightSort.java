
/**
 * My friend John and I are members of the "Fat to Fit Club (FFC)". John is worried because each month a list with the 
 * weights of members is published and each month he is the last on the list which means he is the heaviest.
 * I am the one who establishes the list so I told him: "Don't worry any more, I will modify the order of the list". 
 * It was decided to attribute a "weight" to numbers. The weight of a number will be from now on the sum of its digits.
For example 99 will have "weight" 18, 100 will have "weight" 1 so in the list 100 will come before 99.
Given a string with the weights of FFC members in normal order can you give this string ordered by "weights" of these numbers?
Example:
"56 65 74 100 99 68 86 180 90" ordered by numbers weights becomes: 
"100 180 90 56 65 74 68 86 99"
 */
public class WeightSort {
    public static String orderWeight(String strng) {
                String arr[]=strng.split(" ");
                int newArray[]=new int[arr.length];
                int sum=0, temp=0; 
                String st="";
                  for( int i=0; i<arr.length; i++,sum=0)
                 {
               for(int j=0 ; j<arr[i].length(); j++)
                   sum+=Character.getNumericValue(arr[i].charAt(j));
               newArray[i]=sum;
                }
                    for(int i=0; i<newArray.length;i++)
               for(int j=i+1; j<newArray.length; j++)
                   if(newArray[i]>newArray[j])
                   {
                        temp=newArray[i];
                          newArray[i]=newArray[j];
                          newArray[j]=temp;
                          st=arr[i];
                          arr[i]=arr[j];
                          arr[j]=st;
                   } 
                      String resultString = String.join(" ", arr);
            return resultString;
	}
    public static void main(String[] args) {
        System.out.println(orderWeight("2000 10003 1234000 44444444 9999 11 11 22 123"));
        
    }
}
