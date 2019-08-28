using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace MyCalc
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }

        private void button3_Click(object sender, EventArgs e)
        {
            int no1 = int.Parse(textBox1.Text);
            int no2 = int.Parse(textBox2.Text);
            String result = $"{no1} * {no2} = {no1 * no2}";
            MessageBox.Show(result);

        }

        private void button2_Click(object sender, EventArgs e)
        {
            int no1 = int.Parse(textBox1.Text);
            int no2 = int.Parse(textBox2.Text);
            String result = $"{no1} - {no2} = {no1 - no2}";
            MessageBox.Show(result);
        }

        private void button4_Click(object sender, EventArgs e)
        {
            float no1 = float.Parse(textBox1.Text);
            float no2 = float.Parse(textBox2.Text);
            String result = $"{no1} / {no2} = {no1 / no2}";
            MessageBox.Show(result);

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            //find the sum and display
            int no1 = int.Parse(textBox1.Text);
            int no2 = int.Parse(textBox2.Text);
            int sum = no1 + no2;
            String result = $"The sum of {no1} and {no2} is {sum}";
            MessageBox.Show(result);
        }
    }
}
