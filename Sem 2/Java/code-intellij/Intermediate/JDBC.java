import java.sql.*;

public class JDBC {

    public static void main(String[] args) throws ClassNotFoundException, SQLException {
        // TODO code application logic here
        try {
            Class.forName("net.UcanaccessDriver");
            Connection conn = DriverManager.getConnection("jdbc:ucanaccess:C:\\Users\\Mr Sagar Kumar\\Documents\\School.accdb");
            String sql = "SELECT Student_id FORM school";
            Statement stmt = conn.createStatement();
            ResultSet rs = stmt.executeQuery(sql);

            while (rs.next()) {
                int studentId = rs.getInt("Student_id");
                System.out.println("Student ID : " + studentId);
            }
            rs.close();
            stmt.close();
            conn.close();

        } catch (ClassNotFoundException e) {
            e.printStackTrace();
        }
    }
}
