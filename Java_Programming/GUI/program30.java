import java.awt.*;
import javax.swing.*;

public class program30 {

    public static void main(String[] args) {

        JFrame frame = new JFrame("Registration");

        JPanel panel = new JPanel(
                new GridBagLayout()
        );

        GridBagConstraints gbc =
                new GridBagConstraints();

        gbc.insets = new Insets(5, 5, 5, 5);

        // Name Label
        gbc.gridx = 0;
        gbc.gridy = 0;

        panel.add(
                new JLabel("Name:"),
                gbc
        );

        // Name Field
        gbc.gridx = 1;
        gbc.gridy = 0;
        gbc.fill = GridBagConstraints.HORIZONTAL;

        panel.add(
                new JTextField(20),
                gbc
        );

        // Email Label
        gbc.gridx = 0;
        gbc.gridy = 1;
        gbc.fill = GridBagConstraints.NONE;

        panel.add(
                new JLabel("Email:"),
                gbc
        );

        // Email Field
        gbc.gridx = 1;
        gbc.gridy = 1;
        gbc.fill = GridBagConstraints.HORIZONTAL;

        panel.add(
                new JTextField(20),
                gbc
        );

        // Password Label
        gbc.gridx = 0;
        gbc.gridy = 2;
        gbc.fill = GridBagConstraints.NONE;

        panel.add(
                new JLabel("Password:"),
                gbc
        );

        // Password Field
        gbc.gridx = 1;
        gbc.gridy = 2;
        gbc.fill = GridBagConstraints.HORIZONTAL;

        panel.add(
                new JPasswordField(20),
                gbc
        );

        // Register button
        gbc.gridx = 1;
        gbc.gridy = 3;
        gbc.fill = GridBagConstraints.NONE;

        panel.add(
                new JButton("Register"),
                gbc
        );

        frame.add(panel);

        frame.setSize(500, 300);

        frame.setDefaultCloseOperation(
                JFrame.EXIT_ON_CLOSE
        );

        frame.setVisible(true);
    }
}