public class stack {
    static int []stack_arr= new int[10];

    static int tos=0;
    static void push(int item)
    {
        if(tos==10) System.out.println("Stack is full");
        else stack_arr[tos++]=item;
    }
    static int pop()
    {
        if(tos<0)
        {
            System.out.println("Stack is underflow");
            return 0;
        }
        else return stack_arr[--tos];
    }



    public static void main(String[] args) {

        System.out.println("RADHE RADHE ");
        stack stack_obj=new stack();
        System.out.println("The push method");
        for(int i=0; i<15; i++) stack_obj.push(i);
        System.out.println("The pop Method");
        for(int i=0; i<10; i++) System.out.println(stack_obj.pop());;

    }
}
