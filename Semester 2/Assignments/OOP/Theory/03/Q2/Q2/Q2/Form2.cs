using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Q2
{
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        string name;

        private void Form2_Load(object sender, EventArgs e)
        {
            cmbCourse.Items.Add(" C# Programming ");
            cmbCourse.Items.Add(" C Programming ");
            cmbCourse.Items.Add(" Java Programming ");
            cmbCourse.Items.Add(" Python Programming ");
        }

        private void cmbCourse_SelectedIndexChanged(object sender, EventArgs e)
        {
            name = cmbCourse.SelectedItem.ToString();
        }

        private void btnSave_Click(object sender, EventArgs e)
        {
            MessageBox.Show(name);
        }
    }
}
