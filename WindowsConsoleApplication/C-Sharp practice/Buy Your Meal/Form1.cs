using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Buy_Your_Meal
{
    public partial class Form1 : Form
    {
        int order = 0;
        public Form1()
        {
            InitializeComponent();
        }


        private void textBox6_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void button5_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            order = order + 250;
        }

        private void label1_Click_1(object sender, EventArgs e)
        {

        }

        private void label7_Click(object sender, EventArgs e)
        {

        }

        private void button3_Click(object sender, EventArgs e)
        {
            order = order + 100;
        }

        private void label4_Click(object sender, EventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void button4_Click(object sender, EventArgs e)
        {
            order = order + 75;
        }

        private void label6_Click(object sender, EventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {
            order = order + 150;
        }

        private void checkedListBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void button6_Click(object sender, EventArgs e)
        {
            order = order + 90;
        }

        private void button5_Click_1(object sender, EventArgs e)
        {
            MessageBox.Show($"The total bill is {order}");
            MessageBox.Show($"Enjoy your meal :)");
        }

        private void button9_Click(object sender, EventArgs e)
        {
            order = order + 80;
        }

        private void button7_Click(object sender, EventArgs e)
        {
            order = order + 180;
        }

        private void button8_Click(object sender, EventArgs e)
        {
            order = order + 120;
        }
    }
}
