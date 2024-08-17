import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
public class TextField {

    TextField(){
//        Set up the Frame
        JFrame jfrm=new JFrame("TextFieldDemo");
        jfrm.setLayout(new FlowLayout());
        jfrm.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        jfrm.setSize(420,420);
//        jfrm.setBackground(Color.GREEN);

        //        add a text field to the content pane
        JTextField jtf=new JTextField(15);
        jfrm.add(jtf);
//        add a label
        JLabel jl=new JLabel();
        jfrm.add(jl);
//        Handle action events
        jtf.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
//                show text when user presses enter
                jl.setText(jtf.getText());
            }
        });
//        display the frame
        jfrm.setVisible(true);
    }

    public static void main(String[] args) {
//        create the frame on event dispatching thread
        SwingUtilities.invokeLater(()-> new TextField());
    }
}
