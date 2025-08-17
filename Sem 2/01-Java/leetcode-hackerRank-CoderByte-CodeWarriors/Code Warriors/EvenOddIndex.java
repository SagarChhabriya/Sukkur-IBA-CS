public class EvenOddIndex{
  static int find(int[] integers){
            int countEven=0,countOdd=0,even=0, odd=0; 
          for(int i=0; i<integers.length; i++)
          {
              if(integers[i]%2==0 || integers[i]%2==-0)
              {++countEven; even=integers[i]; }
              if(integers[i]%2==1||integers[i]%2==-1)
              {++countOdd; odd=integers[i];}
          }
          if(countEven==1)
              return even;
          return odd;
}

	public static void main(String[] args)
	{
	System.out.println("EvenOddIndex");
	}
}