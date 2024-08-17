import javax.swing.*;
import java.awt.*;
import java.util.Random;

public class PaintPanel extends JPanel {
    /*This class extends Jpanel. It overrides the paintComponent() method so that random lines are plotted in the panel*/
    Insets ins; //holds the panel's insets
    Random rand; //used to generate random numbers
//    Construct a panle
    PaintPanel()
    {
//        put a border around the panel
        setBorder(BorderFactory.createLineBorder(Color.RED,5));
        rand =new Random();
    }
//    Override the paintcomponent() method.
    protected void paintComponent(Graphics g) {
        //always call the superclass method first
        super.paintComponent(g);
        int x,y,x2,y2;
//        Get the height and the width of the component
        int height=getHeight();
        int width=getWidth();
//        get the insets
        ins = getInsets();
//        Draw ten lines whose end points are randomly generated
        for(int i=0;i<10; i++)
        {
//            obtain random coordinates that define the endpoints of each line
            x=rand.nextInt(width-ins.left);
            y=rand.nextInt(height-ins.bottom);
            x2=rand.nextInt(width-ins.left);
            y2=rand.nextInt(height-ins.bottom);
//        draw the line
            g.drawLine(x,y,x2,y2);
        }
    }

}
//  Demonstrated painting directly into the panel
class paintDemo {
    JLabel jlab;
    paintDemo()
    {
//        create a new JFrame container
        JFrame jfrm= new JFrame("Paint Demo");
//        give the frame an initial size
        jfrm.setSize(420,420);
//        Terminate the program when user closes the application
        jfrm.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
//        Create the panel that will be painted
        PaintPanel pp = new PaintPanel();
        /*add the panel to the content pane. Because the default border layour is used, the panel will automatically
        * be sized to fit the region*/
        jfrm.add(pp);
//        Diplay the frame
        jfrm.setVisible(true);


    }

    public static void main(String[] args) {
//        create the frame on the event dispatching thread.
        SwingUtilities.invokeLater(paintDemo::new);

    }

}
