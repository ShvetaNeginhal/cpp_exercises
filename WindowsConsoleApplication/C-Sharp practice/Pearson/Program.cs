using System;

public class Pearson
{
    public static int multiply(int[] age, int[] score, int n)
    {
        int xysum = 0;
        for (int i = 0; i < n; i++)
        {
            xysum = (age[i] * score[i]) + xysum;
        }
        return xysum;
    }

    public static int xsq(int[] age, int n)
    {
        int xsqsum = 0;
        for (int i = 0; i < n; i++)
        {
            xsqsum = (age[i] * age[i]) + xsqsum;
        }
        return xsqsum;

    }

    public static int ysq(int[] score, int n)
    {
        int ysqsum = 0;
        for (int i = 0; i < n; i++)
        {
            ysqsum =(score[i] * score[i]) + ysqsum;
        }
        return ysqsum;
    }

    public static double pearsoncompute(int n, int xy, int sumx, int sumy, int xsquare, int ysquare)
    {
        double pear;
        pear = ((n * xy) - (sumx * sumy)) / Math.Sqrt(((n * xsquare) - (sumx * sumx)) * ((n * ysquare) - (sumy * sumy)));
        return pear;
    }
    public static void Main()
    {
        int[] age = new int[16];
        int[] score = new int[16];
        int n, sumx = 0, sumy = 0;
        Console.WriteLine("Enter the value of n");
        n = int.Parse(Console.ReadLine());
        Console.WriteLine("Enter the age");

        for (int i = 0; i < n; i++)
        {
            
            age[i] = int.Parse(Console.ReadLine());
            sumx = sumx + age[i];
        }

        Console.WriteLine("Enter the score for each person");
        for (int i = 0; i < n; i++)
        {
            score[i] = int.Parse(Console.ReadLine());
            sumy = sumy + score[i];
        }

        int xy = multiply(age,score, n);
        int xsquare = xsq(age, n);
        int ysquare = ysq(score, n);
        double result = pearsoncompute(n, xy, sumx, sumy, xsquare, ysquare);
        Console.WriteLine($"The result of Pearson formula is {result}");

    }

    
}
