import javax.swing.*;

class program14
{
    public static void main(String a[])
    {
        JFrame frame = new JFrame();

        JCheckBox java = new JCheckBox("Java");
        JCheckBox python = new JCheckBox("Python");
        JCheckBox cpp = new JCheckBox("Cpp");
        JCheckBox javascrip = new JCheckBox("JavaScript");

        JButton button = new JButton("Submit");

        java.setBounds(50, 40, 100, 30);
        python.setBounds(50, 80, 100, 30);
        cpp.setBounds(50, 120, 100, 30);
        javascrip.setBounds(50, 160, 100, 30);

        button.setBounds(50, 210, 100, 30);

        button.addActionListener(e -> {
            String result = "";

            if(java.isSelected()){
                result+= "Java\n";
            }
            if(python.isSelected()){
                result+= "Python\n";
            }
            if(cpp.isSelected()){
                result+= "Cpp\n";
            }
            if(javascrip.isSelected()){
                result+= "JavaScript\n";
            }

            JOptionPane.showMessageDialog(frame, result);
        });

        frame.add(java);
        frame.add(python);
        frame.add(cpp);
        frame.add(javascrip);

        frame.add(button);

        frame.setSize(300, 280);
        frame.setLayout(null);

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);

    }
}