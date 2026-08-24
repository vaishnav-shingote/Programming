import java.awt.*;
import javax.swing.*;

class program24
{
    public static void main(String[] args) {
        JFrame frame = new JFrame("My Application");

        JPanel header =  new JPanel();
        JPanel content = new JPanel();
        JPanel footer = new JPanel();

        header.add(new JLabel("MY APPLICATION"));
        content.add(new JButton("Main Button"));
        footer.add(new JLabel("Status : Ready"));

        frame.setLayout(new BorderLayout());

        frame.add(header, BorderLayout.NORTH);
        frame.add(content, BorderLayout.CENTER);
        frame.add(footer, BorderLayout.SOUTH);

        frame.setSize(600, 400);

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}
