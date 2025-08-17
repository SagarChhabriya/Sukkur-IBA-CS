public class LeapYears {

  public static boolean isLeapYear(int year) {
    if(year%4==0 && (year%100!=0 || year%400==0)) return true;
    return false;
  }
	public static void main(String[] args)
	{
	System.out.println("A year is a leap year if it is evenly divisible by 4, However, if a year is evenly divisible by 100, it is not a leap year, unless it is also evenly divisible by 400");
	}
}