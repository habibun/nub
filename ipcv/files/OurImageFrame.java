/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * OurImageFrame.java
 *
 * Created on Aug 22, 2020, 4:54:45 PM
 */

/**
 *
 * @author raihan
 */
public class OurImageFrame extends javax.swing.JFrame {

    /** Creates new form OurImageFrame */
    public OurImageFrame() {
        initComponents();
    }

    /** This method is called from within the constructor to
     * initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is
     * always regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        ourImagePanel2 = new OurImagePanel();
        ourImagePanel3 = new OurImagePanel();
        ourImagePanel4 = new OurImagePanel();
        ourImagePanel1 = new OurImagePanel();
        ourImagePanel5 = new OurImagePanel();
        button1 = new java.awt.Button();
        button2 = new java.awt.Button();

        javax.swing.GroupLayout ourImagePanel2Layout = new javax.swing.GroupLayout(ourImagePanel2);
        ourImagePanel2.setLayout(ourImagePanel2Layout);
        ourImagePanel2Layout.setHorizontalGroup(
            ourImagePanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 100, Short.MAX_VALUE)
        );
        ourImagePanel2Layout.setVerticalGroup(
            ourImagePanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 100, Short.MAX_VALUE)
        );

        javax.swing.GroupLayout ourImagePanel3Layout = new javax.swing.GroupLayout(ourImagePanel3);
        ourImagePanel3.setLayout(ourImagePanel3Layout);
        ourImagePanel3Layout.setHorizontalGroup(
            ourImagePanel3Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 100, Short.MAX_VALUE)
        );
        ourImagePanel3Layout.setVerticalGroup(
            ourImagePanel3Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 100, Short.MAX_VALUE)
        );

        javax.swing.GroupLayout ourImagePanel4Layout = new javax.swing.GroupLayout(ourImagePanel4);
        ourImagePanel4.setLayout(ourImagePanel4Layout);
        ourImagePanel4Layout.setHorizontalGroup(
            ourImagePanel4Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 100, Short.MAX_VALUE)
        );
        ourImagePanel4Layout.setVerticalGroup(
            ourImagePanel4Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 100, Short.MAX_VALUE)
        );

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        ourImagePanel1.setBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(0, 0, 0)));

        javax.swing.GroupLayout ourImagePanel1Layout = new javax.swing.GroupLayout(ourImagePanel1);
        ourImagePanel1.setLayout(ourImagePanel1Layout);
        ourImagePanel1Layout.setHorizontalGroup(
            ourImagePanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 316, Short.MAX_VALUE)
        );
        ourImagePanel1Layout.setVerticalGroup(
            ourImagePanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 346, Short.MAX_VALUE)
        );

        ourImagePanel5.setBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(0, 0, 0)));

        javax.swing.GroupLayout ourImagePanel5Layout = new javax.swing.GroupLayout(ourImagePanel5);
        ourImagePanel5.setLayout(ourImagePanel5Layout);
        ourImagePanel5Layout.setHorizontalGroup(
            ourImagePanel5Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 310, Short.MAX_VALUE)
        );
        ourImagePanel5Layout.setVerticalGroup(
            ourImagePanel5Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 346, Short.MAX_VALUE)
        );

        button1.setLabel("LoadImage");
        button1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                button1ActionPerformed(evt);
            }
        });

        button2.setLabel("DetectEdge");
        button2.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                button2ActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                .addComponent(ourImagePanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addComponent(ourImagePanel5, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
            .addGroup(layout.createSequentialGroup()
                .addGap(133, 133, 133)
                .addComponent(button1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 180, Short.MAX_VALUE)
                .addComponent(button2, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(168, 168, 168))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING, false)
                    .addComponent(ourImagePanel5, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addComponent(ourImagePanel1, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addComponent(button1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(button2, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addContainerGap(36, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void button1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_button1ActionPerformed
        // TODO add your handling code here:
        this.ourImagePanel1.setImage_name("Tulips.jpg");
        this.ourImagePanel1.loadImage();
        this.ourImagePanel1.repaint();
        this.repaint();
    }//GEN-LAST:event_button1ActionPerformed

    private void button2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_button2ActionPerformed
        // TODO add your handling code here:
        String img_name = "";
        this.ourImagePanel5.setImage(this.ourImagePanel1.getImage());
        this.ourImagePanel5.createBufferedImages();
        //
        this.ourImagePanel5.imageSharpen();
        img_name = this.ourImagePanel5.writeImage();
        this.ourImagePanel5.setImage_name(img_name);
        this.ourImagePanel5.loadImage();
        this.ourImagePanel5.repaint();
        this.repaint();
    }//GEN-LAST:event_button2ActionPerformed

    /**
    * @param args the command line arguments
    */
    public static void main(String args[]) {
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new OurImageFrame().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private java.awt.Button button1;
    private java.awt.Button button2;
    private OurImagePanel ourImagePanel1;
    private OurImagePanel ourImagePanel2;
    private OurImagePanel ourImagePanel3;
    private OurImagePanel ourImagePanel4;
    private OurImagePanel ourImagePanel5;
    // End of variables declaration//GEN-END:variables

}
