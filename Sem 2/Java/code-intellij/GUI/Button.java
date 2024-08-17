//Toggle button
import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

public class Button {
        public Button()
        {
//            set up the frame
            JFrame jfrm = new JFrame("Button");
            jfrm.setSize(420,420);
            jfrm.setLayout(new FlowLayout());
            jfrm.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
//            Create  a label
            JLabel jLab= new JLabel("Button is off");
//            Make a toggle button
            JToggleButton jtbtn= new JToggleButton("On/Off");
//            Add an item listener for the toggle  button
            jtbtn.addItemListener(new ItemListener() {
                @Override
                public void itemStateChanged(ItemEvent e) {
                    if(jtbtn.isSelected())
                        jLab.setText("Button is On");
                    else
                        jLab.setText("Button is Off");
                }
            });
//            Add the toggle button  and label to the content pane
            jfrm.add(jtbtn);
            jfrm.add(jLab);
//            Display the frame
            jfrm.setVisible(true);

        }

    public static void main(String[] args) {
//        Create the frame on the event dispatching thread
        SwingUtilities.invokeLater(()-> new Button());
    }
    }
