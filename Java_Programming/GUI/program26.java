import java.awt.*;
import javax.swing.*;

class program26
{
    public static void main(String[] args) 
    {
        JFrame frame = new JFrame("GridLayout");

        JPanel panel = new JPanel();
        panel.setLayout(new GridLayout(3,3));

        panel.add(new JButton("1"));
        panel.add(new JButton("2"));
        panel.add(new JButton("3"));
        panel.add(new JButton("4"));
        panel.add(new JButton("5"));
        panel.add(new JButton("6"));
        panel.add(new JButton("7"));
        panel.add(new JButton("8"));
        panel.add(new JButton("9"));

        frame.add(panel);

        frame.setSize(400, 400);

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}