import java.awt.event.*;
import javax.swing.*;

public class program12
{
    public static void main(String[] args) {
        JFrame frame = new JFrame();

        JLabel label = new JLabel("Name : ");

        JTextField textField = new JTextField();

        JButton button = new JButton("Submit");

        label.setBounds(50, 50, 100, 30);
        textField.setBounds(100, 50, 250, 30);
        button.setBounds(150, 100, 100, 30);

        button.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e)
            {
                String name = textField.getText();

                JOptionPane.showMessageDialog(frame, "Hello "+ name);

                textField.setText("");
            }
        });

        frame.add(label);
        frame.add(textField);
        frame.add(button);

        frame.setSize(450, 250);
        frame.setLayout(null);

        frame.setTitle("User Form");

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}
