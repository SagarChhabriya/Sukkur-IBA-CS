import java.util.Scanner;

public class CryptoGraphy {
    String encryption(String line)
    {
        char[]arr_encrypted=new char[line.length()];
        String newLine;
        for (int i = 0; i < line.length(); i++/*Do encrypt*/)
            arr_encrypted[i] = (char) (line.charAt(i) + 3);
        newLine=new String(arr_encrypted);
        return newLine;
    }
    String decryption(String line)
    {
        char[] arr_decrypted=new char[line.length()];
        String decrypted;
        for(int i=0; i<line.length();i++)
            arr_decrypted[i]=(char) (line.charAt(i)-3);
        decrypted=new String(arr_decrypted);
        return decrypted;
    }

    public static void main(String[] args) {
        CryptoGraphy obj=new CryptoGraphy();
        Scanner enter=new Scanner(System.in);
        System.out.println("Enter a line");
        String line=enter.nextLine();
        System.out.println("Encrypted "+obj.encryption(line));
        String res=obj.encryption(line);
        System.out.println("Decrypted "+obj.decryption(res));
    }
}
