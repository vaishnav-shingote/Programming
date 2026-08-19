import javax.swing.JButton;
import javax.swing.JFrame;

public class program8
{
    public static void main(String[] args) {
        JFrame frame = new JFrame();

        JButton button = new JButton("Click Me");
        button.setBounds(150, 100, 120, 40);

        frame.add(button);

        frame.setSize(500, 400);
        frame.setLayout(null);

        frame.setTitle("Button Example");
        button.setText("Submit");
        button.setEnabled(false);

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}
