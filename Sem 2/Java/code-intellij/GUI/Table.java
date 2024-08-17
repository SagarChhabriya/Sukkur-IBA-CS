import java.awt.*;
import javax.swing.*;

public class Table {
//        Initialize column headings
    String cloHeads[]={"Name","Extension","ID#"};
//    Initialize Data
    Object[][]data={
        {"PowerPoint",".pptx","MicroSoft"},
        {"Winword",".docx","MicroSoft"},
        {"Excel",".xlsx","MicroSoft"},
        {"Access",".accdb","MicroSoft"},
        {"Notepad",".notepad","Utility"},
        {"Intellij",".exe","JetBreans"},
        {"CPP",".cpp","BJRane StrouStrup"},
        {"Java",".java","SunMicroSystem"},
};
    Table()
    {
//        Set up the Frame
        JFrame jfrm=new JFrame();
        jfrm.setSize(420,420);
        jfrm.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        jfrm.setLayout(new FlowLayout());
//        Create the Table
        JTable table = new JTable(data,cloHeads);
//        Add the table to the scroll pane
        JScrollPane jsp=new JScrollPane(table);
//        Add the scroll pane to the content pane
        jfrm.add(jsp);
//        Display the frame
        jfrm.setVisible(true);


    }

    public static void main(String[] args) {
//        Create the frame on the event dispatching thread
        SwingUtilities.invokeLater(()->new Table());
    }
}
