import java.awt.*;
import javax.swing.*;
import javax.swing.event.*;
import java.awt.event.*;
public class JLIST {

//        Create an array of cities
    String[] Cities= {"New York", "Chicage","Huston","Denver","Los Angeles"
                        , "Seattle","London","Paris","New Delhi","Hong Kong","Tokyo","Sydney"};
    String[] Fever={"Panadol","Hydrazine","Brufen","Concor","Gluco","Zoliget","Geyteral","Fast",
                    "Ascard","Priton","Iberet","Surbex"};
    public JLIST()
    {
//        Set up the Frame
        JFrame jfrm=new JFrame("JList Demo");
        jfrm.setLayout(new FlowLayout());
        jfrm.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        jfrm.setSize(200,200);
        jfrm.setVisible(true);

//        Create a JList
        JList<String> jlst= new JList<>(Cities);
        JList<String> jlst1=new JList<>(Fever);
//        set the list selection mode to single-selection
        jlst.setSelectionMode(ListSelectionModel.SINGLE_SELECTION);

//        add the list to scroll a pane
        JScrollPane jscrlp=new JScrollPane(jlst);

//        set the preffered size of the scroll pane
        jscrlp.setPreferredSize(new Dimension(120,90));

//        Make a label that displays the selection
        JLabel jlab=new JLabel("Choose a city");
//        Add action listener for the list
        jlst.addListSelectionListener(e -> {
//                Get the index of the changed item
            int idx=jlst.getSelectedIndex();
//                Display selection, if item was selected.
            if(idx!=-1)
            {
                jlab.setText("Suitable Medicine : "+ Fever[idx]+ " \n "+" Similar one "+Fever[idx+1]);
            }
            else        //otherwise
                jlab.setText("Choose a City");
        });
//        Add the list  and label to the content pane
        jfrm.add(jscrlp);
        jfrm.add(jlab);

//        Display the frame
        jfrm.setVisible(true);


    }

    public static void main(String[] args) {
//        Create the frame on the event dispatching thread.
        SwingUtilities.invokeLater(()-> new JLIST());
    }

}
