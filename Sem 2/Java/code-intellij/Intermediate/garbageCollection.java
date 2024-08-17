public class garbageCollection {
    public static void main(String[] args) {
        // create some objects
        Object obj1 = new Object();
        Object obj2 = new Object();

        // dereference obj1 and obj2 to make them eligible for garbage collection
        obj1 = null;
        obj2 = null;

        // suggest the JVM to perform garbage collection
        System.gc();
    }
}