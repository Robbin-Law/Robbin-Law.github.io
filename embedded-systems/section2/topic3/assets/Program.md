using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MigrateCode
{    
    class Program
    {
        #region IGNORE_ME
        // ignore this block of code, it is here to simulate items
        //  included in the derivative file of the micro
        // do not attempt to migrate this code to C (ignore the entire #region)
        static byte PT1AD1 = 0xFF;
        static byte DDR1AD1 = 0x00;
        // end ignore this block
        #endregion

        //Global variables
        static UInt16 uiMainLoopCount = 0;

        static void Main(string[] args)
        {
            //One Time initialization
            PT1AD1 &= 0x1F;
            DDR1AD1 = 0xE0;            

            //Infinite Loop
            while (true)
            {
                ++uiMainLoopCount;
                RED(uiMainLoopCount < 0x1000);
                GREEN(uiMainLoopCount >= 0x1000);
            }
        }


        //Functions
        static void RED (bool bOn)
        {
            if (bOn)
                PT1AD1 |= (byte)(((UInt32)1 << (7)));
            else
            {
                PT1AD1 &= 0x7F;
            }

        }

        static void GREEN(bool bOn)
        {
            if (bOn)
            {
                PT1AD1 |= 0x20;
            }
            else
            {
                PT1AD1 &= 0b11011111;
            }
                            
        }
    }
}
