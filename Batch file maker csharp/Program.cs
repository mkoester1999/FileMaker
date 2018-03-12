using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;



namespace Batch_file_maker_csharp
{
    class Program
    {
        static void Main(string[] args)
        {
            string file = "hello.bat";
            string path = Environment.ExpandEnvironmentVariables("C:\\users\\%username%\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\startup\\" + file);
            StreamWriter writer = new StreamWriter(path);
            writer.WriteLine("@echo off");
            writer.WriteLine("echo you've been hacked bro");
            writer.WriteLine("pause");
            writer.Close();
        }
    }
}
