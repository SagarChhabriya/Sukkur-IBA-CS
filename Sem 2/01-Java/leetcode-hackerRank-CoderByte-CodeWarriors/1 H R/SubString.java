import java.util.*;
public class SubString{

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String S = in.next();
        int start = in.nextInt();
        int end = in.nextInt();
        System.out.println(S.substring(start, end));
    }
}
/*
Sample Input

Helloworld
3 7
Sample Output

lowo
*/