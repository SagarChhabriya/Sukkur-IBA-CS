import java.util.*;
public class StringModification{

    public static void main(String[] args) {
        Scanner enter = new Scanner(System.in);
        String lineOne = enter.nextLine();
        String lineTwo = enter.nextLine();
        System.out.println(lineOne.length()+lineTwo.length());
        int condition = lineOne.compareTo(lineTwo);
        switch((condition>0)? 1 : 0)
        {
            case 1 -> System.out.println("Yes");
            case 0 -> System.out.println("No");
        }      
        System.out.println(Character.toUpperCase(lineOne.charAt(0))+lineOne.substring(1,lineOne.length())+ " " + Character.toUpperCase(lineTwo.charAt(0))+lineTwo.substring(1,lineTwo.length())  );
        
    }
}

/*
There are three lines of output:
For the first line, sum the lengths of A  and B.(A =lineOne && B=lineTwo)
For the second line, write Yes if A is lexicographically greater than B otherwise print No instead.
For the third line, capitalize the first letter in both A and B and print them on a single line, separated by a space.

Sample Input 0

hello
java
Sample Output 0

9
No
Hello Java
*/