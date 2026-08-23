import javax.swing.*;

class program15
{
    public static void main(String a[])
    {
        JFrame frame = new JFrame();

        JCheckBox java = new JCheckBox("Java");
        
        JButton button = new JButton("Submit");

        java.setBounds(50, 40, 100, 30);

        button.setBounds(50, 180, 100, 30);

        java.addItemListener(e -> {

            if(java.isSelected()){
                System.out.println("Java selected");
            }else
            {
                System.out.println("Java Unselected");
            }
        });

        frame.add(java);
        
        frame.add(button);

        frame.setSize(300, 280);
        frame.setLayout(null);

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);

    }
}