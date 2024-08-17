import javax.swing.*;
import java.awt.*;

public class Panel {

    public static void main(String[] args) {
//        JPanel = a GUI component that functions as a container to hold other components
        ImageIcon icon=new ImageIcon("C:\\Users\\Mr Sagar Kumar\\Desktop\\FOLDER\\PC\\pictures\\Saved Pictures\\Suwami.jfif");
        JLabel label=new JLabel();
        label.setText("Hi");
        label.setIcon(icon);
//        label.setVerticalAlignment(JLabel.BOTTOM);
        label.setHorizontalAlignment(JLabel.RIGHT);
        label.setBounds(100,100,75,75);
        JPanel redPanel=new JPanel();
        redPanel.setBackground(Color.red);
        redPanel.setBounds(0,0,250,250);
        redPanel.setLayout(null);

        JPanel bluePanel=new JPanel();
        bluePanel.setBackground(Color.blue);
        bluePanel.setBounds(250,0,250,250);
        bluePanel.setLayout(null);

        JPanel greenPanel=new JPanel();
        greenPanel.setBackground(Color.green);
        greenPanel.setBounds(0,250,500,250);
        greenPanel.setLayout(null);

        JFrame frame=new JFrame();
        frame.setLayout(null);
        frame.setSize(1000,650);
        frame.add(redPanel);
        frame.add(bluePanel);
        frame.add(greenPanel);
        frame.setVisible(true);
        redPanel.add(label);//add the image to the redPanel because panel is a high level container
        bluePanel.add(label);//add the image to the bluePanel because panel is a high level container
        greenPanel.add(label);//add the image to the greenPanel because panel is a high level container
        /*this will cause the picture to added in the recentely called label*/
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    }
}
