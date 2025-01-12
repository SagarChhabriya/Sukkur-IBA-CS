public class Base1 {
    /*Query: line→ 14,15,16(objects reference sharing*/

    public static void main(String[] args) {
        System.out.println("RADHE RADHE");
//        base obj_base=new base();
//        child obj_child=new child();
//        obj_child=obj_base;

        base base_obj=new base( );
        base base_obj1=new child( ) ;
        base child_obj=new child( ) ;
        child child_obj1=new child( ) ;
        base_obj=child_obj;
        base_obj=child_obj1;
        base_obj1=child_obj;
        base_obj1=child_obj1;
        child_obj=base_obj;
        child_obj=base_obj1;
//        child_obj1=base_obj;
//        child_obj1=base_obj1;
        /*
   BY sir------------------------------------
        Parent p=new Parent();
        Child c=(Child) p;
*/

//        child_obj1=base_obj;//invalid focus on constructor???
        //        child child_obj1=new base( ) ;
        System.out.println(base_obj.getClass());
        System.out.println(base_obj1.getClass());
        System.out.println(child_obj.getClass());
        System.out.println(child_obj1.getClass());


    }


}
class base
{
    void msg()
    {
        System.out.println("Hello! Messenger Invoked");
    }
}
class child extends  base{
    void msg()
    {
        System.out.println("Hello! child Messenger Invoked");
    }

}
