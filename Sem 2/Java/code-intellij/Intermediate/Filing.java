import java.io.*;
import java.util.Scanner;

public class Filing {
    public static void main(String[] args) {
        System.out.println("RADHE RADHE");
//        System.out.println("1.New File\n2.Existing File\n3.Delete");
/*        1: */ Scanner  enter=new Scanner(System.in);
        try {
            FileWriter writer = new FileWriter("filename.txt");
            File file=new File("filename.txt");
            writer.write("Hello, world!");
            writer.close();
            System.out.println(file.getAbsolutePath());//get the path/directory of the file
            System.out.println(file.getAbsoluteFile()); //get the path/directory of the file
            System.out.println("File created successfully.");

        } catch (IOException e) {
            System.out.println("An error occurred.");
            e.printStackTrace();
        }
    }
}
