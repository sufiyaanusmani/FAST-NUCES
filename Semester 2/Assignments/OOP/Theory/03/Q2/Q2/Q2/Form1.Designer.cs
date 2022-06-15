namespace Q2
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.txtName = new System.Windows.Forms.TextBox();
            this.txtDesignation = new System.Windows.Forms.TextBox();
            this.txtSalary = new System.Windows.Forms.TextBox();
            this.btnSave = new System.Windows.Forms.Button();
            this.lblDisplay = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.rbtnMale = new System.Windows.Forms.RadioButton();
            this.rbtnFemale = new System.Windows.Forms.RadioButton();
            this.label5 = new System.Windows.Forms.Label();
            this.chkGood = new System.Windows.Forms.CheckBox();
            this.chkVGood = new System.Windows.Forms.CheckBox();
            this.dtDataGridView = new System.Windows.Forms.DataGridView();
            ((System.ComponentModel.ISupportInitialize)(this.dtDataGridView)).BeginInit();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(40, 59);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(38, 13);
            this.label1.TabIndex = 0;
            this.label1.Text = "Name:";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(40, 93);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(66, 13);
            this.label2.TabIndex = 1;
            this.label2.Text = "Designation:";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(40, 127);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(39, 13);
            this.label3.TabIndex = 2;
            this.label3.Text = "Salary:";
            // 
            // txtName
            // 
            this.txtName.Location = new System.Drawing.Point(112, 56);
            this.txtName.Multiline = true;
            this.txtName.Name = "txtName";
            this.txtName.Size = new System.Drawing.Size(196, 20);
            this.txtName.TabIndex = 3;
            // 
            // txtDesignation
            // 
            this.txtDesignation.Location = new System.Drawing.Point(112, 90);
            this.txtDesignation.Multiline = true;
            this.txtDesignation.Name = "txtDesignation";
            this.txtDesignation.Size = new System.Drawing.Size(196, 20);
            this.txtDesignation.TabIndex = 4;
            // 
            // txtSalary
            // 
            this.txtSalary.Location = new System.Drawing.Point(112, 124);
            this.txtSalary.Multiline = true;
            this.txtSalary.Name = "txtSalary";
            this.txtSalary.Size = new System.Drawing.Size(196, 20);
            this.txtSalary.TabIndex = 5;
            // 
            // btnSave
            // 
            this.btnSave.Location = new System.Drawing.Point(112, 226);
            this.btnSave.Name = "btnSave";
            this.btnSave.Size = new System.Drawing.Size(117, 34);
            this.btnSave.TabIndex = 6;
            this.btnSave.Text = "Save";
            this.btnSave.UseVisualStyleBackColor = true;
            this.btnSave.Click += new System.EventHandler(this.btnSave_Click);
            // 
            // lblDisplay
            // 
            this.lblDisplay.AutoSize = true;
            this.lblDisplay.Location = new System.Drawing.Point(40, 292);
            this.lblDisplay.Name = "lblDisplay";
            this.lblDisplay.Size = new System.Drawing.Size(0, 13);
            this.lblDisplay.TabIndex = 7;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(39, 159);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(45, 13);
            this.label4.TabIndex = 8;
            this.label4.Text = "Gender:";
            // 
            // rbtnMale
            // 
            this.rbtnMale.AutoSize = true;
            this.rbtnMale.Location = new System.Drawing.Point(112, 159);
            this.rbtnMale.Name = "rbtnMale";
            this.rbtnMale.Size = new System.Drawing.Size(48, 17);
            this.rbtnMale.TabIndex = 9;
            this.rbtnMale.TabStop = true;
            this.rbtnMale.Text = "Male";
            this.rbtnMale.UseVisualStyleBackColor = true;
            // 
            // rbtnFemale
            // 
            this.rbtnFemale.AutoSize = true;
            this.rbtnFemale.Location = new System.Drawing.Point(170, 159);
            this.rbtnFemale.Name = "rbtnFemale";
            this.rbtnFemale.Size = new System.Drawing.Size(59, 17);
            this.rbtnFemale.TabIndex = 10;
            this.rbtnFemale.TabStop = true;
            this.rbtnFemale.Text = "Female";
            this.rbtnFemale.UseVisualStyleBackColor = true;
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(40, 192);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(46, 13);
            this.label5.TabIndex = 11;
            this.label5.Text = "Review:";
            // 
            // chkGood
            // 
            this.chkGood.AutoSize = true;
            this.chkGood.Location = new System.Drawing.Point(112, 192);
            this.chkGood.Name = "chkGood";
            this.chkGood.Size = new System.Drawing.Size(52, 17);
            this.chkGood.TabIndex = 12;
            this.chkGood.Text = "Good";
            this.chkGood.UseVisualStyleBackColor = true;
            // 
            // chkVGood
            // 
            this.chkVGood.AutoSize = true;
            this.chkVGood.Location = new System.Drawing.Point(170, 192);
            this.chkVGood.Name = "chkVGood";
            this.chkVGood.Size = new System.Drawing.Size(76, 17);
            this.chkVGood.TabIndex = 13;
            this.chkVGood.Text = "Very Good";
            this.chkVGood.UseVisualStyleBackColor = true;
            // 
            // dtDataGridView
            // 
            this.dtDataGridView.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dtDataGridView.Location = new System.Drawing.Point(42, 347);
            this.dtDataGridView.Name = "dtDataGridView";
            this.dtDataGridView.Size = new System.Drawing.Size(266, 150);
            this.dtDataGridView.TabIndex = 14;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.White;
            this.ClientSize = new System.Drawing.Size(338, 509);
            this.Controls.Add(this.dtDataGridView);
            this.Controls.Add(this.chkVGood);
            this.Controls.Add(this.chkGood);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.rbtnFemale);
            this.Controls.Add(this.rbtnMale);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.lblDisplay);
            this.Controls.Add(this.btnSave);
            this.Controls.Add(this.txtSalary);
            this.Controls.Add(this.txtDesignation);
            this.Controls.Add(this.txtName);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedSingle;
            this.MaximizeBox = false;
            this.Name = "Form1";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.dtDataGridView)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox txtName;
        private System.Windows.Forms.TextBox txtDesignation;
        private System.Windows.Forms.TextBox txtSalary;
        private System.Windows.Forms.Button btnSave;
        private System.Windows.Forms.Label lblDisplay;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.RadioButton rbtnMale;
        private System.Windows.Forms.RadioButton rbtnFemale;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.CheckBox chkGood;
        private System.Windows.Forms.CheckBox chkVGood;
        private System.Windows.Forms.DataGridView dtDataGridView;
    }
}

