import java.awt.*;
import javax.swing.*;

class program29
{
    public static void main(String[] args) {
        JFrame frame = new JFrame("GridBagLayout");

        JPanel panel = new JPanel(new GridBagLayout());

        GridBagConstraints gbc = new GridBagConstraints();

        JButton button1 = new JButton("one");
        JButton button2 = new JButton("two");
        JButton button3 = new JButton("three");

        gbc.gridx = 0;
        gbc.gridy = 0;

        panel.add(button1, gbc);

        gbc.gridx = 1;
        gbc.gridy = 0;

        panel.add(button2, gbc);

        gbc.gridx = 0;
        gbc.gridy = 1;

        panel.add(button3, gbc);

        frame.add(panel);

        frame.setSize(500, 300);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);

        
    }
}