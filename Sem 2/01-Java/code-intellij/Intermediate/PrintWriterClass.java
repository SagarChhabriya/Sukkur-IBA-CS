import java.io.FileOutputStream;
import java.io.PrintWriter;

public class PrintWriterClass {

    public static void main(String[] args) {
        PrintWriter writeToFile=null;
        try {
          writeToFile=new PrintWriter(new FileOutputStream("D://text.txt"));
        }
        catch (Exception e)
        {
           writeToFile.println("name");
           

        }
    }
}
