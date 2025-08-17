public class AverageArray{
  public static double find_average(int[] array){
    double sum=0, count=0;
    if(array.length == 0)return 0;
    else
        for(int i =0; i<array.length; i++){
          sum+=array[i]; count++;
        }
    return sum/count;
    
  }
	public static void main(String[] args)
	{
	System.out.println("Inside the Average Array Class");
	}
}