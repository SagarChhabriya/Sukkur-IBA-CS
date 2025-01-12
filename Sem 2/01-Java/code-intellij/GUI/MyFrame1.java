import javax.swing.*;
import java.awt.*;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;

public class MyFrame1 extends JFrame implements MouseListener {

        JLabel label,label1,label2,label3,label4,label5,label6,label7,label8;
        MyFrame1()
        {
            this.setSize(500,500);
            this.setLayout(null);
            label=new JLabel();
            label.setBackground(Color.red);
            label.setBounds(0,00,250,250);
            label.setOpaque(true);
            label.addMouseListener(this);
            this.add(label);
            this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

            label1=new JLabel();
            label1.setBackground(Color.blue);
            label1.setBounds(250,0,250,250);
            label1.setOpaque(true);
            label1.addMouseListener(this);
            this.add(label1);

            label2=new JLabel();
            label2.setBackground(Color.green);
            label2.setBounds(500,0,250,250);
            label2.setOpaque(true);
            label2.addMouseListener(this);
            this.add(label2);

            label3=new JLabel();
            label3.setBackground(Color.gray);
            label3.setBounds(00,250,250,250);
            label3.setOpaque(true);
            label3.addMouseListener(this);
            this.add(label3);

            label4=new JLabel();
            label4.setBackground(Color.black);
            label4.setBounds(250,250,250,250);
            label4.setOpaque(true);
            label4.addMouseListener(this);
            this.add(label4);

            label5=new JLabel();
            label5.setBackground(Color.pink);
            label5.setBounds(500,250,250,250);
            label5.setOpaque(true);
            label5.addMouseListener(this);
            this.add(label5);

            label6=new JLabel();
            label6.setBackground(Color.orange);
            label6.setBounds(0,500,250,250);
            label6.setOpaque(true);
            label6.addMouseListener(this);
            this.add(label6);

            label7=new JLabel();
            label7.setBackground(Color.blue);
            label7.setBounds(250,500,250,250);
            label7.setOpaque(true);
            label7.addMouseListener(this);
            this.add(label7);



            this.setVisible(true);

        }

    @Override
    public void mouseClicked(MouseEvent e) {
        System.out.println("You clicked the mouse");
        label.setBackground(Color.green);
        label1.setBackground(Color.black);
        label2.setBackground(Color.pink);
        label3.setBackground(Color.orange);
        label4.setBackground(Color.cyan);
        label5.setBackground(Color.darkGray);
        label6.setBackground(Color.lightGray);
        label7.setBackground(Color.magenta);
    }

    @Override
    public void mousePressed(MouseEvent e) {
        System.out.println("You pressed the Mouse");
        label.setBackground(Color.black);
        label1.setBackground(Color.gray);
        label2.setBackground(Color.orange);
        label3.setBackground(Color.pink);
        label4.setBackground(Color.darkGray);
        label5.setBackground(Color.cyan);
        label6.setBackground(Color.magenta);
        label7.setBackground(Color.gray);
        }

    @Override
    public void mouseReleased(MouseEvent e) {
        System.out.println("You released the Mouse");
        label.setBackground(Color.pink);
        label1.setBackground(Color.black);
        label2.setBackground(Color.blue);
        label3.setBackground(Color.red);
        label4.setBackground(Color.orange);
        label5.setBackground(Color.cyan);
        label6.setBackground(Color.yellow);
        label7.setBackground(Color.magenta);
    }

    @Override
    public void mouseEntered(MouseEvent e) {
        System.out.println("Mouse has been entered");
        label.setBackground(Color.blue);
        label1.setBackground(Color.black);
        label2.setBackground(Color.magenta);
        label3.setBackground(Color.red);
        label4.setBackground(Color.orange);
        label5.setBackground(Color.yellow);
        label6.setBackground(Color.pink);
        label7.setBackground(Color.green);

    }

    @Override
    public void mouseExited(MouseEvent e) {
        System.out.println("Mouse has been exited");
        label.setBackground(Color.cyan);
        label1.setBackground(Color.pink);
        label2.setBackground(Color.red);
        label3.setBackground(Color.orange);
        label4.setBackground(Color.cyan);
        label5.setBackground(Color.darkGray);
        label6.setBackground(Color.lightGray);
        label7.setBackground(Color.magenta);
        }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(()-> {
            new MyFrame1();
        });
    }
}
