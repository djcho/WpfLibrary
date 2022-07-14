using System;
using System.Threading;
using System.Windows;

namespace WpfLibrary
{
    public class DialogInterface
    {
        public int ShowModalDialog(IntPtr parentWindowHandle)
        {
            bool dialogResult = false;

            Thread thread = new Thread(() =>
            {
                WpfDialog w = new WpfDialog(parentWindowHandle);
                w.WindowStartupLocation = WindowStartupLocation.CenterScreen;
                dialogResult = (bool)w.ShowDialog();
            });

            thread.SetApartmentState(ApartmentState.STA);
            thread.Start();
            thread.Join();
            return dialogResult ? 0 : -1;
        }
    }
}