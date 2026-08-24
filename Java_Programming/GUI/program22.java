
import java.awt.FlowLayout;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;

class program22 
{
    public static void main(String[] args) 
    {
        JFrame frame = new JFrame("FlowLayout");

        JPanel panel = new JPanel();

        FlowLayout layout = new FlowLayout();
        panel.setLayout(layout);

        panel.add(new JButton("One"));
        panel.add(new JButton("Two"));
        panel.add(new JButton("Three"));
        panel.add(new JButton("Four"));

        frame.add(panel);

        frame.setSize(400, 200);

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        frame.setVisible(true);

    }
}
