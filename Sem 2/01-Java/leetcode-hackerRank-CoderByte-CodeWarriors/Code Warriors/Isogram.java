import java.util.*;
public class Isogram {
    public static boolean  isIsogram(String str) {
      String line=str.toLowerCase();
        if(str.isEmpty())return true;
          Set<Character> Set= new LinkedHashSet<>();
        for(int i=0; i<line.length(); i++)
            Set.add(line.charAt(i));
//        Convert the set to a single string
        StringBuilder builder=new StringBuilder();
        for(Character c : Set)
            builder.append(c);
        String string=builder.toString();
    return (string.equalsIgnoreCase(str)); 
      
    } 
	public static void main(String[] args)
	{
	System.out.print("an isogram is a word or phrase in which no letter occurs more than once. In other words, all the letters in an isogram are unique.For example, the word (algorithm)is an isogram because it contains no repeated letters, while the word (banana) is not an isogram because it contains three occurrences of the letter (a)");
	}
}

/*
----------------------------------------------
class isogram {
  static boolean isIsogram(String str) {
    return str.isEmpty() || str.toLowerCase().chars().distinct().count() == str.length();
  }
----------------------------------------------
}
*/