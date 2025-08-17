import java.util.*; 
import java.io.*;

class factorial {

  public static int FirstFactorial(int num) {
    int fact=1;
    for(int i=1; i<=num; i++)
    {
        fact*=i;
    }

    return fact;
  }

  public static void main (String[] args) {  
    // keep this function call here     
    Scanner s = new Scanner(System.in);
    System.out.print(FirstFactorial(s.nextLine())); 
  }

}