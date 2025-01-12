import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import static javax.swing.BorderFactory.createLineBorder;

class Event extends JPanel{
    JLabel jLab;
    Event()
    {

//        create a new JFrame container
        JFrame jfrm= new JFrame("An Event Example");
//        Specify the Flow layout for the Layour manager
        jfrm.setLayout(new FlowLayout());
//        Give the frame on initial size
        jfrm.setSize(420,420);
        jfrm.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
//        Make two buttons
        JButton jbtnAlpha= new JButton("Alpha");
        JButton jbtnBeta= new JButton("Beta");
//        Add an action listener for Alpha
        jbtnAlpha.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                jLab.setText("Alpha was pressed");
            }
        });
        jbtnBeta.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                jLab.setText("Beta was pressed");
            }
        });
//        Add the buttons to content pane
        jfrm.add(jbtnAlpha);
        jfrm.add(jbtnBeta);
//        create a text-based label
        jLab=new JLabel("Press a Button");
//        Add the Label to content pane
        jfrm.add(jLab);
//        Display the frame
        jfrm.setVisible(true);


    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(()->new Event());
    }
}
