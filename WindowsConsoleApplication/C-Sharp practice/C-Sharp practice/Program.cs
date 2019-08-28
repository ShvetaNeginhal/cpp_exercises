using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;



    class Program
    {
        static void Main()
        {
        //Console.WriteLine("Hello World!");
        // Console.WriteLine("Hello Earth!");

        //accept name and convert into upper case
        /*
        string name;
        Console.WriteLine("Enter a name");
        name = Console.ReadLine();
        Console.WriteLine(name.ToUpper());
        */
        /*
        int no1, no2, max;
        string choice; 


        do
        {
            Console.WriteLine("Enter two nos");
            no1 = int.Parse(Console.ReadLine());
            no2 = int.Parse(Console.ReadLine());
            max = (no1 > no2) ? no1 : no2;
            Console.WriteLine($"The MAximum of {no1} and {no2} is {max}");
            Console.WriteLine("Enter Y to continue else N to terminate");
            choice = Console.ReadLine();
            //Console.WriteLine($"The MAximum of {no1} and {no2} is {Math.Max(no1,no2)}");
        } while (choice.ToUpper() == "Y");

    */

        int amicablesum = 0;
        for(int i=1;i<=10000;i++)
            {
            if(IsAmicable(i)){
            amicablesum +=1;
            }
            }           
        Console.WriteLine($"Amicable Numbers sum btw 1 and 10000 is {amicablesum}");
        }   
    
        private static bool IsAmicable(int n){
            int m = DivisorSum(n);
            return m != n && DivisorSum(m) == n;
        }
        
        private static int DivisorSum(int n){
            int sum = 0;
            for(int i=1; i<=n; i++){
            if(n%i == 0){
                sum = sum + i;
            }

            }   
            return sum;
            }
    }

