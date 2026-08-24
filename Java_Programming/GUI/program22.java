
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

        //  FlowLayout Alignment
        /*
            starting from left --> panel.setLayout(new Flowlayout(FlowLayout.LEFT));
            This is defalut (Center) --> panel.setLayout(new FlowLayout(FlowLayout.CENTER));
            starting from Right --> panel.setLayout(new FlowLayout(FlowLayout.Right));

            panel.setLayout(new FlowLayout(FlowLayout.CENTER, 20, 10));
            20 --> horizontal gap
            10 --> vertical gap

        */

        frame.add(panel);

        frame.setSize(400, 200);

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        frame.setVisible(true);

    }
}
