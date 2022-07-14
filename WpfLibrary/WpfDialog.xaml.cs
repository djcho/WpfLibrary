using System;
using System.Windows;
using System.Windows.Interop;

namespace WpfLibrary
{
    /// <summary>
    /// WpfDialog.xaml에 대한 상호 작용 논리
    /// </summary>
    public partial class WpfDialog : Window
    {
        public WpfDialog(IntPtr parentWindowhandle)
        {
            InitializeComponent();
            var interop = new WindowInteropHelper(this);
            interop.Owner = parentWindowhandle;
        }
    }
}
