using System;
class GlazerCalc
{
    static void Main()
    {
        //writing hello world
        System.Console.WriteLine("Hello, World!");

        //diffining verriables
        string name = "James Call";
        string location = "Idaho";

        //outputting varriables
        System.Console.WriteLine($"My Name is {name}");
        System.Console.WriteLine($"I am from {location}");

        //finding and displaying current date
        string date = DateTime.Now.ToString("dd/MM/YYYY");
        System.Console.WriteLine($"the current date is {date}");

        //finding and displaying number of days till Christmas
        DateTime today = DateTime.Today;
        DateTime christmas = new DateTime(today.Year, 12, 25);
        TimeSpan timeUntilChristmas = christmas - today;
        int daysUntilChristmas = timeUntilChristmas.Days;
        System.Console.WriteLine($"There are {daysUntilChristmas} days until Christmas.");

        //section 2.1 in the C# Programming Yellow
        double width, height, woodLength, glassArea;
        string widthString, heightString;
        System.Console.Write("what is the length: ");
        widthString = Console.ReadLine();
        width = double.Parse(widthString);
        System.Console.Write("what is the width: ");
        heightString = Console.ReadLine();
        height = double.Parse(heightString);
        woodLength = 2 * (width + height) * 3.25;
        glassArea = 2 * (width * height);
        System.Console.WriteLine($"The length of the wood is {woodLength} feet");
        System.Console.WriteLine($"The area of the glass is {glassArea} square metres");

        Console.ReadKey();

    }
}