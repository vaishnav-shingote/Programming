import java.awt.Font;
import javax.swing.JFrame;
import javax.swing.JLabel;

public class program6
{
    public static void main(String A[])
    {
        JFrame frame = new JFrame("Student Information");

        JLabel label1 = new JLabel("Name : Vaishnav");
        JLabel label2 = new JLabel("Branch : AI & DS");
        JLabel label3 = new JLabel("CGPA : 9.0");

        label1.setFont(new Font("Arial", Font.BOLD, 20));
        label2.setFont(new Font("Arial", Font.BOLD, 20));
        label3.setFont(new Font("Arial", Font.BOLD, 20));

        label1.setBounds(100, 50 ,400, 300);
        label2.setBounds(100, 100 ,400, 300);
        label3.setBounds(100, 120 ,400, 300);

        frame.add(label1);
        frame.add(label2);
        frame.add(label3);

        frame.setSize(1000, 800);
        frame.setLayout(null);

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}