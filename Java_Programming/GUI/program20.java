import javax.swing.*;

class program20
{
    public static void main(String A[])
    {
        JFrame frame = new JFrame();

        ImageIcon icon = new ImageIcon("logo.png");

        JLabel label = new JLabel(icon);

        label.setBounds(50, 50, 200, 200);

        frame.add(label);

        frame.setSize(400, 350);
        frame.setLayout(null);

        frame.setTitle("Image example");

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}