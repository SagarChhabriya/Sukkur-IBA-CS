public class PangramChecker {
  public boolean check(String sentence){
   
String alphabet = "abcdefghijklmnopqrstuvwxyz";
    sentence = sentence.toLowerCase();
    for (int i = 0; i < alphabet.length(); i++) {
        if (sentence.indexOf(alphabet.charAt(i)) == -1) {
            return false;
        }
    }
    return true;
}
	public static void main(String[] args)
	{
		System.out.print("The Pangram Method, main method called");
	}
  }
