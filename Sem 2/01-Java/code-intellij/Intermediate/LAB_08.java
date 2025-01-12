import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;
import java.util.Scanner;

public class LAB_08 {

        static public void main(String[] args) throws ParseException {
            RegularBooks o=new RegularBooks("ABC", "ALAE KER AA",5);
            int var=o.daysOverdue("13/12/2023","30/12/2023", 14);
            System.out.println(var  );




            }

        }

//Thanos task
interface earnedAmountFromBook{


    //implicitly public abstract
    int overdueFees();
    double computeFine(boolean checker);
}
interface  accessOfBook{
            boolean isOverdue(int limitedDays);
    int daysOverdue(String issueDate, String returnedDate, int limitedDays) throws ParseException;

}
abstract class Book implements earnedAmountFromBook , accessOfBook{
    String bookTitle;
    String author;
    int dayTaken;
    Scanner enter=new Scanner(System.in);
    Book(String bookTitle, String author, int dayTaken)
    {
        this.bookTitle=bookTitle; this.author=author; this.dayTaken=dayTaken;
    }
    Book(String bookTitle, int dayTaken)
    {
        this.bookTitle=bookTitle; this.dayTaken=dayTaken;
    }
    public boolean confirm()
    {   char yes;
        System.out.println("Are you Sure to issue the book  Press Y | N");
        yes=enter.next().charAt(00000);
        if(yes == 'y' ||  yes == 'Y') return true;  return false;
    }
    public int daysOverdue(String issueDate, String retrurnedDate, int limitedDays/*issuance limit*/) throws ParseException {
        //establishing patterns
        SimpleDateFormat simpleDateFormat=new SimpleDateFormat("dd/MM/yyyy");
        SimpleDateFormat simpleDateFormat1=new SimpleDateFormat("EEE dd MMM yyyy");
        //creating date objects : java.util.Date; and parsing the string to Date
        Date issued=simpleDateFormat.parse(issueDate);
        Date returned=simpleDateFormat.parse(retrurnedDate);
        //parsing the date object to string with the help of format( ) method
        String issuedStr=simpleDateFormat1.format(issued);
        String returnedStr=simpleDateFormat1.format(returned);
        //printing the Dates in simpleDateFormat1 pattern
        System.out.println(this.bookTitle+" book has been issued on : "+ issuedStr );
        System.out.println(this.bookTitle+" book has been returned on : "+ returnedStr);
        //calculating the time difference: using Calender class: java.util.Calender;
        Calendar c1 = Calendar.getInstance();
        c1.setTime(issued);
        Calendar c2 = Calendar.getInstance();
        c2.setTime(returned);
        //Dynamic initialization of days and years
        long days = c2.get(Calendar.DAY_OF_YEAR) - c1.get(Calendar.DAY_OF_YEAR);
//        int years = c2.get(Calendar.YEAR) - c1.get(Calendar.YEAR);
        //printing the difference of issued and returned data
        //System.out.println(years + " Years : "); //this line will print the years(which we don't need now)
        System.out.println("Total Usage of Book --> "+ days+  " Days ");
        /*if the user enter the dates in opposite( in other words the issue date is : 10/11/2020
         * and the return date is : 09/11/2020, the returned date entered before issue date then
         * user will get the output in reverse of the days, like here the difference is : -1 */
        if(days> 0 && days <= limitedDays)
            System.out.println("The provided time for the access of book is existing, Student can access the book  " +
                    (limitedDays-days)+" more days ");
        else
            System.out.println("The provided time for the access of book has been exceeded, Student cannot access the book," +
                    "and the Student has used the book  "+(days-limitedDays)+" more days");

        return (int) days;
    }

}
/* Regular borrowed for two weeks.*/
class  RegularBooks extends Book {

    /*must be public, because we can decrease the scope of access modifier*/
    RegularBooks(String bookTitle, String author, int dayTaken) {
        super(bookTitle, author, dayTaken);
    }

    public int overdueFees() {
        return 10;
    }
    @Override
    public double computeFine(boolean checker)
    {   if(checker)
        System.out.println(this.bookTitle+"book has been returned on due date, therefore NO FINE HAS BEEN COMPUTED");
    else
        System.out.println(this.bookTitle+" book has not been returned on due date, therefore FINE IS RUPEES ");
        return 100;
    }
    @Override
    public boolean isOverdue(int limitedDays) {
        if (limitedDays > 0 && limitedDays <= 14)
        {    System.out.println("due date exist");  return true;            }
        else
        {   System.out.println("due date has been passed"); return false;   }
}


}
class ReferenceBooks extends Book{
/*Reference books can be taken out for just two days*/
    ReferenceBooks(String bookTitle, int dayTaken)
    {   super(bookTitle,dayTaken);}
    /*must be public, because we can decrease the scope of access modifier*/
    public int overdueFees()
    {   return 10;    }

    @Override
    public boolean isOverdue(int limitedDays) {
        if (limitedDays > 0 && limitedDays <= 2)
        {    System.out.println("due date exist ");  return true;            }
        else
        {   System.out.println("due date has been passed"); return false;   }
    }

    @Override
    public double computeFine(boolean checker)
    {   if(checker)
        System.out.println(this.bookTitle+"book has been returned on due date, therefore NO FINE HAS BEEN COMPUTED");
        else
        System.out.println(this.bookTitle+" book has not been returned on due date, therefore FINE IS RUPEES ");
        return 40;
    }
}
class   AudioBooks extends Book{
/*Auido books can be borrowed for two weeks*/

    AudioBooks(String bookTitle, String author, int dayTaken)
    {   super(bookTitle, author,dayTaken);}
    /*must be public, because we can decrease the scope of access modifier*/
    public int overdueFees()
    {   return 20;    }
    @Override
    public boolean isOverdue(int limitedDays) {
        if (limitedDays > 0 && limitedDays <= 14)
        {    System.out.println("due date exist");  return true;            }
        else
        {   System.out.println("due date has been passed"); return false;   }
    }
    @Override
    public double computeFine(boolean checker)
    {   if(checker)
        System.out.println(this.bookTitle+"book has been returned on due date, therefore NO FINE HAS BEEN COMPUTED");
    else
        System.out.println(this.bookTitle+" book has not been returned on due date, therefore FINE IS RUPEES ");
        return 100;
    }

}

