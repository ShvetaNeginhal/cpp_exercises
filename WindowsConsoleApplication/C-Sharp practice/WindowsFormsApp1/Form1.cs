using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    

    public partial class Form1 : Form
    {
        int totalprice = 0;
      

        public Form1()
        {
            InitializeComponent();
        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
           
   
        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {
           
        }

        private void textBox3_TextChanged(object sender, EventArgs e)
        {
            

        }

        private void textBox4_TextChanged(object sender, EventArgs e)
        {
           
        }

        private void button1_Click(object sender, EventArgs e)
        {
            
            textBox1.Clear();
            textBox2.Clear();
            textBox3.Clear();
            textBox4.Clear();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            int price = int.Parse(textBox4.Text);
            int quantity = int.Parse(textBox3.Text);
            string des = textBox2.Text;
            int code = int.Parse(textBox1.Text);

            int itemprice = quantity * price;
            totalprice = totalprice + itemprice;
            MessageBox.Show($"Current Bill is {totalprice}");
        }

        private void button2_Click(object sender, EventArgs e)
        {
            
            
            MessageBox.Show($"Total Bill is {totalprice}");
        }
    }
}
