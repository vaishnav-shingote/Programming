import javax.swing.JFrame;
import javax.swing.JLabel;

public class program3
{
    public static void main(String A[])
    {
        JFrame frame = new JFrame();

        JLabel label = new JLabel();

        label.setText("Hello Java GUI");

        frame.add(label);

        frame.setSize(1000, 800);
        frame.setTitle("My GUI.");

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        frame.setVisible(true);
    }
}