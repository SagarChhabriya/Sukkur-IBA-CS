import com.sun.source.doctree.SystemPropertyTree;

import java.util.HashMap;

//public class BOX {}
class BOX {
    double width;
    double height;
    double depth;

    // construct clone of an object
    BOX(BOX ob) { // pass object to constructor
        width = ob.width;
        height = ob.height;
        depth = ob.depth;
    }

    // constructor used when all dimensions specified
    BOX(double w, double h, double d) {
        width = w;
        height = h;
        depth = d;
    }

    // constructor used when no dimensions specified
    BOX() {
        width = -1;  // use -1 to indicate
        height = -1; // an uninitialized
        depth = -1;  // box
    }

    // constructor used when cube is created
    BOX(double len) {
        width = height = depth = len;
    }

    // compute and return volume
    double volume() {
        return width * height * depth;
    }
}

// Here, Box is extened to include weight.
class boxWeight extends BOX {
    double weight; // weight of box

    // constructor for BoxWeight
    boxWeight(double w, double h, double d, double m) {
        width = w;
        height = h;
        depth = d;
        weight = m;
    }
}


// Here, Box is extended to include color.
class colorBox extends BOX {
    int color; // color of box

    colorBox(double w, double h, double d, int c) {
        width = w;
        height = h;
        depth = d;
        color = c;
    }
}


class DemoBoxWeight {
        
    public static void main(String args[]) {
      /*
        BOX obj_box=new BOX();
        boxWeight mybox1 = new boxWeight(10, 20, 15, 34.3);
        boxWeight mybox2 = new boxWeight(2, 3, 4, 0.076);
        double vol;

        vol = mybox1.volume();
        System.out.println("Volume of mybox1 is " + vol);
        System.out.println("Weight of mybox1 is " + mybox1.weight);
        System.out.println();

        vol = mybox2.volume();
        System.out.println("Volume of mybox2 is " + vol);
        System.out.println("Weight of mybox2 is " + mybox2.weight);
        obj_box=mybox1;
//        mybox1=obj_box;
*/
        HashMap<String,Integer> capitalCities = new HashMap<String ,Integer>( );
        capitalCities.put("country",1);
        capitalCities.put("England",2);
        capitalCities.put("America",3);
        capitalCities.put("Pakistan",4);
        capitalCities.put("Afghanistan",5);
        for( String item : capitalCities.keySet())
            System.out.println("Key " + item + " value " + capitalCities.get(item)); }
}
