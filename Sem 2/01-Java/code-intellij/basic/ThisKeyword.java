public class ThisKeyword {
    int sample;
    ThisKeyword(int sample)
    {
        this.sample=sample=8;
        System.out.println(this);
    }
    public static void main(String[] args) {
        System.out.println("RADHE RADHE");
        ThisKeyword obj=new ThisKeyword(5);
        System.out.println(obj);
    }

}
