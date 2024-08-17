import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
public class TabbedPane {

    TabbedPane()
    {
//        set up the Frame
        JFrame jfrm=new JFrame("Tabbed Pane");
        jfrm.setLayout(new FlowLayout());
        jfrm.setSize(420,420);
        jfrm.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

//        Create the tabbed pane
        JTabbedPane jtp=new JTabbedPane();
        jtp.addTab("Cities",new CitiesPanel());
        jtp.addTab("Colors",new ColorsPane());
        jtp.addTab("Flavors",new FlavorsPane());
        jfrm.add(jtp);
//        Display the frame
        jfrm.setVisible(true);
    }

    public static void main(String[] args) {
//        Create the frame on event dispatching thread
        SwingUtilities.invokeLater(()-> new TabbedPane());
    }


    class CitiesPanel extends JPanel{
        public CitiesPanel()
        {
            JButton b1=new JButton("New York"); add(b1);
            JButton b2=new JButton("London"); add(b2);
            JButton b3=new JButton("Hong Kong"); add(b3);
            JButton b4=new JButton("Tokyo"); add(b4);

        }
    }

    class ColorsPane    extends JPanel{
        ColorsPane()
        {
            JCheckBox cb1=new JCheckBox("Red"); add(cb1);
            JCheckBox cb2=new JCheckBox("Green"); add(cb2);
            JCheckBox cb3=new JCheckBox("Blue"); add(cb3);

        }
    }

    class FlavorsPane extends  JPanel{

        FlavorsPane()
        {
            JComboBox<String> jcb=new JComboBox<>();
            jcb.addItem("Vanilla");
            jcb.addItem("Chocolate");
            jcb.addItem("Strawberry");
            add(jcb);

        }
    }

}

