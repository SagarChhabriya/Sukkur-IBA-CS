import java.util.*;
public class IntToString{

    public static void main(String[] args) {
      Scanner enter = new Scanner (System.in);
      int number = enter.nextInt();
      if(number>=-100 && number <=100 )
      { String str = Integer.toString(number); 
        System.out.print("Good job");
      }
      else
        System.out.print("wrong answer");
    }

	}

/*
You are given an integer n, you have to convert it into a string.
Please complete the partially completed code in the editor. If your code successfully converts n into a string s the code will print "Good job". Otherwise it will print "Wrong answer".
n can range between -100 to 100 inclusive.
Sample Input 0

100
Sample Output 0

Good job
*/
