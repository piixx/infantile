using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Diagnostics;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace crash_sandbox_A
{
    public partial class Form1 : Form
    {
        public static string VersionInfo =
            "Infantile Stage\n" + // stage of development
            "Infantile Repo Version: 1.01\n" + // inf repo version
            "https://github.com/piixx/infantile\n" + // inf repo link
            "> CRASH SANDBOX A <\n" + // display information about the crash sandbox
            "> VERSION 1.01 <\n" + // version 1.01
            "> 9/30/17 <"; // last updated
        public Form1()
        {
            InitializeComponent();
            textBox3.ForeColor = Color.Red;
            textBox3.Text = "------===============ERROR LIST===============-------";
        }

        private void button1_Click(object sender, EventArgs e)
        {
            MessageBox.Show(VersionInfo);
        }

        private void button2_Click(object sender, EventArgs e) // string -> process run
        {
            try
            {
                string arguments = textBox1.Text; // get the arguments needed
                char seperator = ' '; // define the argument-process seperator as space
                string run = arguments.Split(seperator)[0]; // split the string, first word is the process
                string args; // set null args
                if (arguments.Split(seperator).Length <= 1) { args = ""; } // no args? thats ok, set to "". (INF-0001)
                else { args = arguments.Split(seperator)[1]; } // args? coolio, set them
                ProcessStartInfo processStartInfo = new ProcessStartInfo(run, args); // set the runtime parameters
                Process.Start(processStartInfo); // doit
            }
            catch (Exception a) // catch an exception, display it
            {
                textBox3.Text =
                    textBox3.Text +
                    Environment.NewLine +
                    Environment.NewLine +
                    a.ToString();
            }
        }

        private void button3_Click(object sender, EventArgs e) // 16bit string -> int calculator
        {
            try
            {
                // kudos https://stackoverflow.com/questions/333737/evaluating-string-342-yield-int-18
                DataTable dt = new DataTable(); // make a new datatable of "in-memory data"
                var v = dt.Compute(textBox2.Text, ""); // tell that data table to compute our request w/o data filter
                int c = Convert.ToInt16(v); // convert to 16bit int
                textBox2.Text = c.ToString(); // convert it to a string and display it
            }
            catch (Exception a) // catch an exception, display it
            {
                textBox3.Text =
                    textBox3.Text +
                    Environment.NewLine +
                    Environment.NewLine +
                    a.ToString();
            }
        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {
            // empty function
        }

        private void button4_Click(object sender, EventArgs e) // 32bit string -> int calculator
        {
            try
            {
                // kudos https://stackoverflow.com/questions/333737/evaluating-string-342-yield-int-18
                DataTable dt = new DataTable(); // make a new datatable of "in-memory data"
                var v = dt.Compute(textBox4.Text, ""); // tell that data table to compute our request w/o data filter
                int c = Convert.ToInt32(v); // convert to 32bit int
                textBox4.Text = c.ToString(); // if all goes well, display it
            }
            catch (Exception a) // catch an exception, display it
            {
                textBox3.Text =
                    textBox3.Text +
                    Environment.NewLine +
                    Environment.NewLine +
                    a.ToString();
            }
        }

        private void button5_Click(object sender, EventArgs e) // 64bit string -> int calculator
        {
            try
            {
                // kudos https://stackoverflow.com/questions/333737/evaluating-string-342-yield-int-18
                DataTable dt = new DataTable(); // make a new datatable of "in-memory data"
                var v = dt.Compute(textBox5.Text, ""); // tell that data table to compute our request w/o data filter
                long c = Convert.ToInt64(v); // convert to 32bit int
                textBox5.Text = c.ToString(); // if all goes well, display it
            }
            catch (Exception a) // catch an exception, display it
            {
                textBox3.Text =
                    textBox3.Text +
                    Environment.NewLine +
                    Environment.NewLine +
                    a.ToString();
            }
        }

        private void button6_Click(object sender, EventArgs e) // "clear" button
        {
            textBox3.Text = "------===============ERROR LIST===============-------";
        }

        private void button7_Click(object sender, EventArgs e) // string -> file open (rw access)
        {
            try
            {
                string filename = textBox6.Text; // set file path
                File.OpenWrite(filename); // open w/ RW access
                textBox6.Text = "Success";
            }
            catch (Exception a) // catch an exception, display it
            {
                textBox3.Text =
                    textBox3.Text +
                    Environment.NewLine +
                    Environment.NewLine +
                    a.ToString();
            }
        }

        private void button8_Click(object sender, EventArgs e) // string -> file open (read access)
        {
            try
            {
                string filename = textBox6.Text; // set file path
                File.OpenRead(filename); // open w/ strictly read access
                textBox7.Text = "Success";
            }
            catch (Exception a) // catch an exception, display it
            {
                textBox3.Text =
                    textBox3.Text +
                    Environment.NewLine +
                    Environment.NewLine +
                    a.ToString();
            }
        }

        private void button9_Click(object sender, EventArgs e) // string -> dir open (rw access)
        {
            try
            {
                string dirname = textBox8.Text; // set directory name
                DateTime time = Directory.GetLastAccessTime(dirname); // retrieve last time (read)
                Directory.SetLastAccessTime(dirname, time); // write the last time as the last time (write)
                                                            // the tests are harmless because nothing is really changed and tests both read and write
            }
            catch (Exception a) // catch an exception, display it
            {
                textBox3.Text =
                   textBox3.Text +
                   Environment.NewLine +
                   Environment.NewLine +
                   a.ToString();
            }
        }

        private void button10_Click(object sender, EventArgs e) // test for buffalowire bug (UGLY CODE)
        {
            // c# variant of BuffaloWire
            try
            {
                textBox3.Text =
                   textBox3.Text +
                   Environment.NewLine +
                   Environment.NewLine +
                   "-- There are a couple different scenarios for this exploit:" + Environment.NewLine +
                   "-- Scenario 1: You are on Windows 10 Build 1703, and $MFT is a valid file." +
                   Environment.NewLine +
                   "-- Scenario 2: You are on Windows 10 Pre-1703, $MFT does not exist, but will not crash " +
                   "the system. It is regarded as 'File not found.'" + Environment.NewLine +
                   "-- Scenario 3: You are on Windows Pre-10, $MFT does not exist and will hang the system.";
                File.GetCreationTime("c:/$MFT/test");
                textBox3.Text =
                   textBox3.Text +
                   Environment.NewLine +
                   Environment.NewLine +
                   "--==--==--BuffaloWire does not affect this system.--==--==--" +
                   Environment.NewLine +
                   "--==--==--Scenario 1: You are on Windows 10 Build 1703.--==--==--";
            }
            catch
            {
                textBox3.Text =
                   textBox3.Text +
                   Environment.NewLine +
                   Environment.NewLine +
                   "--==--==--BuffaloWire does not affect this system.--==--==--" +
                   Environment.NewLine +
                   "--==--==--Scenario 2: You are on Windows 10 Pre-1703.--==--==--";
            }
        }
    }
}
