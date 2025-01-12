import  java.awt.*;
import  javax.swing.*;
import javax.swing.border.Border;

import static javax.swing.text.StyleConstants.setIcon;

public class LabelAndICON {

    public LabelAndICON()
    {
//        set up the frame
        JFrame jfrm= new JFrame("Label Demo");
        jfrm.setLayout(new FlowLayout());
        jfrm.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        jfrm.setSize(420,420);
        //        create an icon
        ImageIcon ii=new ImageIcon("C:\\Users\\Mr Sagar Kumar\\Desktop\\FOLDER\\PC\\pictures\\Saved Pictures\\Suwami.jfif");
        Border border= BorderFactory.createLineBorder(Color.green,3);
        JLabel jl=new JLabel("Suwami",ii,JLabel.CENTER);//        create a Label

        jl.setIcon(ii);  //label can also have icon

        jl.setHorizontalTextPosition(JLabel.CENTER); //set the text of Jlabel to the CENTER,LEFT, RIGHT of imageIcon HORIZONTALLY

        jl.setVerticalTextPosition(JLabel.TOP); //set the text of the Jlabel VERTICALLY, TOP, BOTTOM
//        jl.setForeground(Color.green);    set the foreground color

        jl.setForeground(new Color(0,155,0));//set font color //set the foreground color via cutomizaiton rbg or unicode format \ffff

        jl.setFont(new Font("Mv Boli",Font.PLAIN,25));//set font of text

        jl.setIconTextGap(20);// set gap of text to image +ve or -ve both values can be passed as argument

        jl.setBackground(Color.black);//set background color

        jl.setOpaque(true);//diplay background color
        jl.setBorder(border);
        jfrm.add(jl);   //        Add the Label to the content pane

        jfrm.setVisible(true);      //        Display the frame



    }

    public static void main(String[] args) {
//        create the frame on event dispatching thread.
        SwingUtilities.invokeLater(()->new LabelAndICON());
    }
}
