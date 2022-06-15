using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.SqlClient;

namespace Q2
{
    public partial class Login : Form
    {
        SqlConnection con = new SqlConnection("Data Source=SUFIYAAN;Initial Catalog=registration;Integrated Security=True");
        SqlCommand cmd;
        public Login()
        {
            InitializeComponent();
        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }

        private void pictureBox1_Click_1(object sender, EventArgs e)
        {

        }

        private void Login_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                con.Open();
                if(txtUName.Text == "" || txtPass.Text == "")
                {
                    MessageBox.Show(" Please enter username and password ");
                }
                else
                {
                    cmd = new SqlCommand("select * from LoginUsers where U_Name=@Name and U_Pass=@Pass", con);
                    cmd.Parameters.Add("@Name", txtUName.Text);
                    cmd.Parameters.Add("@Pass", txtPass.Text);
                    SqlDataAdapter adpt = new SqlDataAdapter(cmd);
                    DataSet ds = new DataSet();
                    adpt.Fill(ds);

                    int count = ds.Tables[0].Rows.Count;

                    if(count == 1)
                    {
                        MessageBox.Show("You have successfully logged in");
                        Form3 ob = new Form3();
                        this.Hide();
                        ob.Show();
                    }
                    else
                    {
                        MessageBox.Show("Please check username and password");
                    }
                }
                con.Close();
            }
            catch(Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
        }

        private void label3_Click(object sender, EventArgs e)
        {

        }
    }
}
