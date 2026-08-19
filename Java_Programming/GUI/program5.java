import java.awt.Font;
import javax.swing.JFrame;
import javax.swing.JLabel;

public class program5
{
    public static void main(String A[])
    {
        JFrame frame = new JFrame();

        JLabel label = new JLabel("Welcome to Java GUI !");

        label.setFont(new Font("Arial", Font.BOLD, 20));

        label.setBounds(100, 100 ,400, 300); //(x, y, width, height)

        frame.add(label);

        frame.setSize(1000, 800);
        frame.setLayout(null);

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}