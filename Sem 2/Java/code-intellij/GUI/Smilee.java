import javax.swing.*;
import java.awt.*;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;

public class Smilee extends JFrame implements MouseListener {
        JLabel label;
        ImageIcon smilee1,smilee2,smilee3;
        Smilee()
        {
//            Set up the Frame
            this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
            this.setSize(500,500);
            this.setLayout(new FlowLayout());
            smilee1=new ImageIcon("D:\\smilee1.png");
            smilee2=new ImageIcon("D:\\smilee2.png");
            smilee3=new ImageIcon("D:\\smilee3.png");
            label=new JLabel();
            label.addMouseListener(this);
            label.setIcon(smilee1);

            this.add(label);
            this.pack();
            this.setLocationRelativeTo(null);
            this.setVisible(true);


        }

    @Override
    public void mouseClicked(MouseEvent e) {
        label.setIcon(smilee3);
    }

    @Override
    public void mousePressed(MouseEvent e) {

    }

    @Override
    public void mouseReleased(MouseEvent e) {

    }

    @Override
    public void mouseEntered(MouseEvent e) {
        label.setIcon(smilee2);
    }

    @Override
    public void mouseExited(MouseEvent e) {
        label.setIcon(smilee1);
    }

    public static void main(String[] args) {
//        Create the event on the dispatching thread
        SwingUtilities.invokeLater(()->new Smilee());
    }
}
