import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
public class CheckBox implements ItemListener {
    JLabel jLab;
        CheckBox()
        {
            JFrame jfrm= new JFrame("Check Box");
            jfrm.setLayout(new FlowLayout());
            jfrm.setSize(420,420);
            jfrm.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
//            Add check boxes to the content pane
            JCheckBox cb=new JCheckBox("C");
            cb.addItemListener(this);
            jfrm.add(cb);

            cb= new JCheckBox("C++");
            cb.addItemListener( this);
            jfrm.add(cb);

            cb=new JCheckBox("Java");
            cb.addItemListener( this);
            jfrm.add(cb);

            cb=new JCheckBox("Perl");
            cb.addItemListener( this);
            jfrm.add(cb);
//            create a label and add it to the content pane
             jLab=new JLabel("Select Languages");
            jfrm.add(jLab);
//            Diplay the Frame
            jfrm.setVisible(true);


        }
//            Handle item events for the check boxes
        public void itemStateChanged(ItemEvent ie)
        {
            JCheckBox cb=(JCheckBox) ie.getItem();
            if(cb.isSelected())
                jLab.setText(cb.getText()+" is selected");
            else
                jLab.setText(cb.getText()+" is selected");

        }

    public static void main(String[] args) {
//        create the frame on the event dispatching thread
        SwingUtilities.invokeLater(()-> new CheckBox());
    }
}
