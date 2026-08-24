import java.awt.*;
import javax.swing.*;

public class program31 {

    public static void main(String[] args) {

        JFrame frame = new JFrame("Login");

        JPanel panel = new JPanel();

        panel.setLayout(
                new BoxLayout(
                        panel,
                        BoxLayout.Y_AXIS
                )
        );

        JLabel title = new JLabel("LOGIN");
        title.setAlignmentX(
                Component.CENTER_ALIGNMENT
        );

        JLabel usernameLabel =
                new JLabel("Username");

        JTextField username =
                new JTextField(15);

        JLabel passwordLabel =
                new JLabel("Password");

        JPasswordField password =
                new JPasswordField(15);

        JButton login =
                new JButton("Login");

        login.setAlignmentX(
                Component.CENTER_ALIGNMENT
        );

        panel.add(title);

        panel.add(
                Box.createVerticalStrut(20)
        );

        panel.add(usernameLabel);

        panel.add(
                Box.createVerticalStrut(5)
        );

        panel.add(username);

        panel.add(
                Box.createVerticalStrut(15)
        );

        panel.add(passwordLabel);

        panel.add(
                Box.createVerticalStrut(5)
        );

        panel.add(password);

        panel.add(
                Box.createVerticalStrut(20)
        );

        panel.add(login);

        frame.add(panel);

        frame.setSize(350, 400);

        frame.setDefaultCloseOperation(
                JFrame.EXIT_ON_CLOSE
        );

        frame.setLocationRelativeTo(null);

        frame.setVisible(true);
    }
}