import javax.swing.*;

public class program18
{
    public static void main(String[] args)
    {
        JFrame frame = new JFrame("Login");

        JLabel usernameLabel = new JLabel("Username : ");
        JLabel passwordLabel = new JLabel("Password : ");

        JTextField usernameField = new JTextField();
        JPasswordField passwordField = new JPasswordField();

        JButton loginButton = new JButton("Login");

        usernameLabel.setBounds(40, 40, 100, 30);
        usernameField.setBounds(130, 40, 180, 30);

        passwordLabel.setBounds(40, 90, 100, 30);
        passwordField.setBounds(130, 90, 180, 30);

        loginButton.setBounds(130, 140, 100, 30);

        loginButton.addActionListener(e ->
        {
            String username = usernameField.getText();

            char[] passwordChars = passwordField.getPassword();

            String password = new String(passwordChars);

            if(username.equals("admin") && password.equals("1234"))
            {
                JOptionPane.showMessageDialog(frame, "Login Successful!");
            }
            else
            {
                JOptionPane.showMessageDialog(frame,
                        "Invalid Username or Password");
            }
        });

        frame.add(usernameLabel);
        frame.add(usernameField);
        frame.add(passwordLabel);
        frame.add(passwordField);
        frame.add(loginButton);

        frame.setSize(400, 250);
        frame.setLayout(null);

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}