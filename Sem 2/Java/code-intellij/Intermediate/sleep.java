public class sleep {
    public static void main(String[]args){
        System.out.println("RADHE RADHE");
        long start, end = 0;
        start=System.currentTimeMillis();//get starting time

        for(long i=0; i<10000000L; i++)
            end=System.currentTimeMillis();//get ending time
        System.out.println("Elapsed time "+ (end-start));
        sleep Sleep = null;
        System.out.println(Sleep.getClass());
    }
}
