import javax.swing.*;

public class program11
{
    public static void main(String[] args) {
        JFrame frame = new JFrame();

        JTextField textField = new JTextField();

        textField.setBounds(100, 100, 250, 30);

        frame.add(textField);

        frame.setSize(500, 400);
        frame.setLayout(null);

        frame.setTitle("Text Field Example");

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}
