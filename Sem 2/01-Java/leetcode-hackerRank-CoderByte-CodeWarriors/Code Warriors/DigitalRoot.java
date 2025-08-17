/*
others solution

public class DRoot {
  public static int digital_root(int n) {
    return (n != 0 && n%9 == 0) ? 9 : n % 9;
  }
}

*/

public class DigitalRoot{
   static String numberString;
     static int[] intArr;
    public static int digital_root(int num) {
            numberString=String.valueOf(num);
            intArr=new int[numberString.length()];
            int sum=0,i=0,temp=0; char c; 
        for( i=0; i<numberString.length(); i++)
            {
             c=numberString.charAt(i);
            intArr[i]=Character.getNumericValue(c);
            sum+=intArr[i];
            }
        
        if(sum>=10)
        return digital_root(sum);
        return sum;
    
  }
	public static void main(String[] args)
	{
		System.out.println("Inside the main method");	
	}
}