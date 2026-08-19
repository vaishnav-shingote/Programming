import javax.swing.JFrame;
import javax.swing.JLabel;

public class program4
{
    public static void main(String A[])
    {
        JFrame frame = new JFrame();

        JLabel label = new JLabel("Welcome Vaishnav !");

        label.setBounds(100, 100 ,200, 30); //(x, y, width, height)

        frame.add(label);

        frame.setSize(1000, 800);
        frame.setLayout(null);

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}