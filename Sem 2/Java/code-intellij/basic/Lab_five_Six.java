import java.util.Scanner;
public class Lab_five_Six {
    public static void main(String[] args)
    {
        System.out.println("RADHE RADHE ");
        Scanner enter= new Scanner(System.in);
/*
//        Question No ONE  Bug Collector
        System.out.println("Question No one Bug collector ");
        System.out.println("Enter the Bugs of Five days one by one");
        int sum=0;
        for(int bug, i=1; i<=5; i++)
        {
            System.out.printf("Enter the Bug of day %d \n",i);
            bug = enter.nextInt();
            sum+=bug;
        }
        System.out.printf("Bug of Five days is %d ",sum);
*/

//  Question NO Two Calories burned
      /*
        System.out.println("Question No Two");
        System.out.println("Running on a particular treadmill you burn 4.2 calories per minute. Write a prgram" +
                "that uses a loop to display the number of calories burned after 10,15,20,25, and 30 minutes.");
        for(int i=0; i<1; i++)
        {
            System.out.printf("Calories in %d Minutes are %.1f \n",1,1*4.2);
            System.out.printf("Calories in %d Minutes are %.1f \n",10,10*4.2);
            System.out.printf("Calories in %d Minutes are %.1f \n",15,15*4.2);
            System.out.printf("Calories in %d Minutes are %.1f \n",20,20*4.2);
            System.out.printf("Calories in %d Minutes are %.1f \n",25,25*4.2);
            System.out.printf("Calories in %d Minutes are %.1f \n",30,30*4.2);
        }
       */
//    Question No Three, Budget Analysis
      /*
        System.out.println("Question No Four");
        System.out.println("Enter the Expenditure of Months");
        System.out.println("How many months you have spent your Salary");
        System.out.println("Enter the Number of months");
        int mon,amount,sum=0;
        mon = enter.nextInt();
        for(int i=1; i<=mon; i++)
        {
            System.out.printf("Enter the spent amount of month %d \n",i );
            amount=enter.nextInt();
            sum+=amount;
        }
        System.out.printf("Total Spent amount is %d ",sum);
    */

//  Question No Four, Distance Traveld
     /*
        System.out.println("Question No four, Distance Traveled");
        System.out.println("Enter the Number of Hours and speed mph, and the Program will show you the Average" +
                " of traveled distance per hour");
        System.out.println("Enter the Number of Hours");
        int hours,speed;
        hours=enter.nextInt();
        System.out.println("Enter the Speed of train miles per hour");
        speed=enter.nextInt();
        for(int i=1;i<=hours;i++)
        {
            System.out.printf("your vehicle will travel %d miles in %d hours \n",speed*i,i);
        }
    */
//    Question No five Average Rainfall
        System.out.println("Question No five Average Rainfall ");
        System.out.println("Enter the Number of Years to calculate their Rainfall");
        System.out.println("Enter the Years");
        int year;   double  fall,sum_of_fall=0,av_fall;
        year=enter.nextInt();
        for(int i=1; i<=year; i++)
        {
            for(int j=1; j<=12; j++)
            {
                System.out.printf("Enter the Rainfall of Month %d of Year %d \n",j,i);
                fall=enter.nextDouble();
                sum_of_fall+=fall;
            }
        }
        av_fall=sum_of_fall/year;
        System.out.printf("Average of Rainfall of %d years is %.1f ",year,av_fall);

    }
}
