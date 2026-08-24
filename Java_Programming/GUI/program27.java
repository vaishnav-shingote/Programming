import java.awt.*;
import javax.swing.*;

public class program27 {

    public static void main(String[] args) {

        JFrame frame = new JFrame("Calculator");

        JTextField display = new JTextField();
        display.setEditable(false);

        JPanel buttons = new JPanel(
                new GridLayout(4, 3, 5, 5)
        );

        buttons.add(new JButton("7"));
        buttons.add(new JButton("8"));
        buttons.add(new JButton("9"));

        buttons.add(new JButton("4"));
        buttons.add(new JButton("5"));
        buttons.add(new JButton("6"));

        buttons.add(new JButton("1"));
        buttons.add(new JButton("2"));
        buttons.add(new JButton("3"));

        buttons.add(new JButton("0"));
        buttons.add(new JButton("+"));
        buttons.add(new JButton("="));

        frame.setLayout(new BorderLayout(5, 5));

        frame.add(display, BorderLayout.NORTH);
        frame.add(buttons, BorderLayout.CENTER);

        frame.setSize(350, 400);

        frame.setDefaultCloseOperation(
                JFrame.EXIT_ON_CLOSE
        );

        frame.setVisible(true);
    }
}