import javax.swing.*;
import javax.swing.border.Border;
import java.awt.*;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;

public class MyFrame  {
    public static void main(String[] args) {


//        JLabel= a GUI display are for a string of text, an image, or both
        ImageIcon image=new ImageIcon("C:\\Users\\Mr Sagar Kumar\\Desktop\\FOLDER\\PC\\pictures\\Saved Pictures\\Suwami.jfif");
        JLabel label=new JLabel();//create a label
        label.setText("Suwami");
        label.setIcon(image);
        label.setHorizontalTextPosition(JLabel.CENTER); //set the text of Jlabel to the CENTER,LEFT, RIGHT of imageIcon HORIZONTALLY
        label.setVerticalTextPosition(JLabel.TOP); //set the text of the Jlabel VERTICALLY, TOP, BOTTOM
//        jl.setForeground(Color.green);    set the foreground color



        label.setForeground(new Color(0,155,0));//set font color //set the foreground color via cutomizaiton rbg or unicode format \ffff
        label.setFont(new Font("Mv Boli",Font.PLAIN,25));//set font of text
        label.setIconTextGap(20);// set gap of text to image +ve or -ve both values can be passed as argument
        label.setBackground(Color.black);//set background color
        label.setOpaque(true);//display background color
        Border border= BorderFactory.createLineBorder(Color.green,3);
        label.setBorder(border);
//        label.setVerticalAlignment(JLabel.TOP);//set the picture at the top
        label.setVerticalAlignment(JLabel.CENTER);//set the picture verically at the center(set vertical position of icon+text within label)
        label.setHorizontalAlignment(JLabel.CENTER);//set the picture horizontally at the center
        label.setBounds(0,0,255,255);//set x,y position within frame as well as dimensions(releated to the frame.layout
//

        JFrame frame=new JFrame();
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(500,500);
        frame.setVisible(true);
        frame.add(label);
//        frame.setLayout(null);// commenting this will cause the Layout's visiblity false
        frame.setLayout(null);
        //frame.pack(); //this will set the fit-screen w.r to the content
//        uncommenting this will fit the screen and YOU MUST HAVE TO comment the setbounds() and setSize() methods
//        when you use pack() method make Sure to add all the labels→ frame.add(label) //means first add the labels and the pack


        /*Copied code from the Mian class for cleaning
* //    JFrame = a GUI window to add components
//        Set up JFrame
        JFrame frame=new JFrame();
        frame.setTitle("Title");//        set title of frame
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); //exit out of application
        frame.setResizable(false); // prevent frame from being resized
        frame.setSize(420,420); //set the size x-dimension and y-dimension
        frame.setVisible(true); //make frame visible
        ImageIcon image=new ImageIcon("C:\\Users\\Mr Sagar Kumar\\Desktop\\FOLDER\\PC\\pictures\\Saved Pictures\\Suwami.jfif");//create an ImageIcon
        frame.setIconImage(image.getImage());//change icon of frame
        frame.getContentPane().setBackground(new Color(55,55,50));// change color of background

* */


    }

}
