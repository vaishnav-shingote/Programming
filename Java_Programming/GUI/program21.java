import javax.swing.*;

class program21
{
    public static void main(String[] args) {
        JFrame frame = new JFrame("Panel Example");
        
        JPanel panel = new JPanel();

        JButton button1 = new JButton("Click");
        JButton button2 = new JButton("Submit");

        panel.add(button1);
        panel.add(button2);

        frame.add(panel);

        frame.setSize(400, 300);

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}
