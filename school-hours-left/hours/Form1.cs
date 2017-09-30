using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace hours
{
    public partial class Form1 : Form
    {
        public static int hours;
        public static string errorCode = null;
        public static bool failure = false;
        public Form1()
        {
            InitializeComponent();
            reload();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            // Remove 6 hours
            hours = hours - 6;
            string hoursToWrite = hours.ToString();
            File.WriteAllText(Environment.CurrentDirectory + "/hrs.txt", hoursToWrite);
            if (hours >= Int32.MaxValue || hours <= Int32.MinValue)
            {
                hours = 0;
                errorCode = "0600 (Integer Overflow)";
            }
            // Reload
            reload();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            failure = false;
            // Remove X hours
            try { hours = hours - Convert.ToInt32(textBox1.Text); }
            catch
            {
                MessageBox.Show("X was a string or a number >2,147,483,647.");
                failure = true;
            }
            if (hours >= Int32.MaxValue || hours <= Int32.MinValue)
            {
                hours = 0;
                errorCode = "0600 (Integer Overflow)";
            }
            // Reload if no fail
            if (failure == false) { File.WriteAllText(Environment.CurrentDirectory + "/hrs.txt", 
                hours.ToString()); }

            if(failure == false) { reload(); }
        }
        private void reload()
        {
            errorCode = null;
            try
            {
                hours = Convert.ToInt32(File.ReadAllText(Environment.CurrentDirectory + "/hrs.txt"));
            }
            catch (IOException) { errorCode = "Error 0400 (IO Error)"; } // Universal IO Error
            catch (FormatException) { errorCode = "Error 0300 (Conv. Error)"; } // NaN
            catch (Exception) { if (errorCode == null) { errorCode = "Error 0500 (Unknown Error)"; } } // Unknown Error
            if (hours <= 0 && errorCode == null) { errorCode = "Error 0200 (<=0)"; /* Success */ }
            if (errorCode == null) { label2.Text = hours.ToString(); label4.Text = "NO ERROR"; }
            else { label2.Text = errorCode.ToString(); label4.Text = hours.ToString(); }
        }
    }
}
