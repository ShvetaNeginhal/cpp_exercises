using System;

public class Pearson
{
	public static void Main()
    {
        int[] age = new int[16];
        int[] score = new int[16];
        int n, sumx, sumy;
        Console.WriteLine("Enter the value of n");
        n = Console.ReadLine();
        Console.WriteLine("Enter the age");
        
        for(int i = 0; i < n; i++)
        {
            age[i] = Console.ReadLine();
            sumx = sumx + age[i];
        }

        Console.WriteLine("Enter the score for each person");
        for (int i = 0; i < n; i++)
        {
            score[i] = Console.ReadLine();
            sumy = sumy + score[i];
        }

        int xy = multiply(age, score, n);
        int xsquare = xsq(age, n);
        int ysquare = ysq(score, n);
        int result = pearsoncompute(n, xy, sumx, sumy, xsquare, ysquare);
        Console.WriteLine($"The result of Pearson formula is {result}");

    }

    int multiply(int age[], int score[],int n)
    {
        int xysum = 0;
        for(int i = 0; i < n; i++)
        {
            xysum = (age[i] * score[i]) + xysum;
        }
        return xysum;
    }

    int xsq(int age[], int n)
    {
        int xsqsum = 0;
        for (int i = 0; i < n; i++)
        {
            xsqsum = xsqsum + (age[i] * age[i]);
        }
        return xsqsum;

    }

    int ysq(int score[], int n)
      {
           int ysqsum = 0;
           for (int i = 0; i < n; i++)
            {
               ysqsum = ysqsum + (score[i] * score[i]);
            }
            return ysqsum;
        }

    int pearsoncompute(int n,int xy, int sumx, int sumy, int xsquare, int ysquare)
    {
        double pearson;
        pearson = ((n * xy) - (sumx * sumy)) / Math.Sqrt(((n * xsquare) - xsquare) * ((n * ysquare) - ysquare));
        return pearson;
    }
}
