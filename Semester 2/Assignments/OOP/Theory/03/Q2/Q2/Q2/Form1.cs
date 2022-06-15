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
    public partial class Form1 : Form
    {
        DataTable dt = new DataTable();

        string name;
        string designation;
        int salary;
        string gender;
        string review;
        public Form1()
        {
            InitializeComponent();
        }

        private void btnSave_Click(object sender, EventArgs e)
        {
            name = txtName.Text;
            designation = txtDesignation.Text;
            salary = int.Parse(txtSalary.Text);

            
            if (rbtnMale.Checked)
            {
                gender = "Male";
            }
            else
            {
                gender = "Female";
            }

            
            if(chkGood.Checked && chkVGood.Checked)
            {
                review = "Both";
            }else if (chkGood.Checked)
            {
                review = "Good";
            }
            else
            {
                review = "Very Good";
            }

            display();
            empty();

            lblDisplay.Text = name + " " + designation + " " + salary + " " + gender + " " + review;
        }

        public void display()
        {
            dt.Columns.Add(" Name ");
            dt.Columns.Add(" Designation ");
            dt.Columns.Add(" Salary ");
            dt.Columns.Add(" Gender ");
            dt.Columns.Add(" Review ");

            DataRow dr = dt.NewRow();
            dr[0] = name;
            dr[1] = designation;
            dr[2] = salary ;
            dr[3] = gender;
            dr[4] = review;

            dt.Rows.Add(dr);
            dtDataGridView.DataSource = dt;
        }

        public void empty()
        {
            txtDesignation.Text = "";
            txtName.Text = "";
            txtSalary.Text = "";
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }
}
