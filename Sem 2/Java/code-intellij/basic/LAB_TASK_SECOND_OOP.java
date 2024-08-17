import java.util.Scanner;

public class LAB_TASK_SECOND_OOP {
    public static void main(String[] args) {
        System.out.println("Working on the Truth Table");
        System.out.println("Enter the Number of the Proposition Variables");
        Scanner enter=new Scanner(System.in);
        int proposition_variables=enter.nextInt();
        switch (proposition_variables)
        {
            default:
                System.out.println("Your Selected Choice is Not in our Domain");
            case 2:
                System.out.println("\tP\t\tQ");
                System.out.println("\t1\t\t1");
                System.out.println("\t1\t\t0");
                System.out.println("\t0\t\t1");
                System.out.println("\t0\t\t0");
                break;
            case 3:
                System.out.println("\tP\t\tQ\t\tR");
                System.out.println("\t1\t\t1\t\t1");
                System.out.println("\t1\t\t1\t\t0");
                System.out.println("\t1\t\t0\t\t1");
                System.out.println("\t1\t\t0\t\t0");
                System.out.println("\t0\t\t1\t\t1");
                System.out.println("\t0\t\t1\t\t0");
                System.out.println("\t0\t\t0\t\t1");
                System.out.println("\t0\t\t0\t\t0");
                break;
            case 4:
                System.out.println("\tP\t\tQ\t\tR\t\tS");
                System.out.println("\t1\t\t1\t\t1");
                System.out.println("\t1\t\t1\t\t0");
                System.out.println("\t1\t\t0\t\t1");
                System.out.println("\t1\t\t0\t\t0");
                System.out.println("\t0\t\t1\t\t1");
                System.out.println("\t0\t\t1\t\t0");
                System.out.println("\t0\t\t0\t\t1");
                System.out.println("\t0\t\t0\t\t0");
                System.out.println("\t1\t\t1\t\t1");
                System.out.println("\t1\t\t1\t\t0");
                System.out.println("\t1\t\t0\t\t1");
                System.out.println("\t1\t\t0\t\t0");
                System.out.println("\t0\t\t1\t\t1");
                System.out.println("\t0\t\t1\t\t0");
                System.out.println("\t0\t\t0\t\t1");
                System.out.println("\t0\t\t0\t\t0");


        }



    }
}
