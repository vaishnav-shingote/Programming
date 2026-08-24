import java.awt.*;
import javax.swing.*;

class program25
{
    public static void main(String[] args) {
        JFrame frame = new JFrame("Nested Layout");

        JPanel header = new JPanel(new FlowLayout());
        header.add(new JLabel("Sutdent Management"));

        JPanel center = new JPanel(new GridLayout(2,2));
        center.add(new JButton("Add Student"));
        center.add(new JButton("View Student"));
        center.add(new JButton("Update Student"));
        center.add(new JButton("Delete Student"));

        JPanel footer = new JPanel(new FlowLayout());
        footer.add(new JLabel("Ready"));

        frame.setLayout(new BorderLayout());
        frame.add(header, BorderLayout.NORTH);
        frame.add(center, BorderLayout.CENTER);
        frame.add(footer, BorderLayout.SOUTH);

        frame.setSize(600, 400);

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    } 
}