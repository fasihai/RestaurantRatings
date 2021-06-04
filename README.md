# RestaurantRatings

This program has three parts. Code all three as one main.
(1) Write a section of code to process a set of data from a file. The data represents restaurant ratings. Read the data, and produce a report summarizing the ratings.
Create your own copy of the input data on your machine, or on a classroom machine. It doesn’t matter where you put it, as long as you name it a41data.txt. The data is in a .txt file in the assignment in Canvas. You can open it using Canvas and then copy and paste or “save as.” Use any text editor, but not something like Word unless you’re careful to save in .txt format.
Next, code your program. Hard-code the fully-qualified path name for the file into your open. Open the file. Check for successful open. If the open failed, display an error message and terminate the program by issuing a return with a return code of 4.
If the file opened successfully, proceed to read the restaurant rating data. It’s a set of restaurant ratings from one rater (a person). The rating data is composed of the rater’s name, followed by a set of restaurants and numeric ratings. You don’t know in advance how many restaurants there will be. A sample file might be:
Julia
In-n-out 5 McDonald’s 4 Wendy’s 4 ...
There is one record with the rater’s name, followed by some number of records, each with a restaurant name and a rating. You may assume that there are no errors in the data, and that there will be at least one rater and one restaurant with a non-zero rating. The restaurant name will not contain embedded blanks. This means you can use the streaming operator (>>) for input.
Display a report that echoes the input, like the following:
Rater: Julia
Restaurant: In-n-out Rating: 5
Restaurant: McDonald’s Rating: 4
Restaurant: Wendy’s Rating: 4
And, when the end of the input file is reached, display the average rating: Average rating: 4.33
After your program displays the average, it should close the file and return.
Part 2: Statistics show that the chances of rolling a 7 with two dice approaches 6/36. Write a section of code that rolls the dice 100 times, and counts the number of 7’s. Display the number of 7’s as a percentage. (Feel free to be as accurate as you can be: 37% and 37.8842% would both be acceptable.) Put that block of code inside another loop, which repeats it 10 times. Your code will thus display a total of 10 percentages, each percentage being the result of 100 rolls. Make sure that you don’t reinitialize the seed each time, because then your results will all be identical! If you’re interested, try modifying the code to roll 1,000 times in each set, or 10,000 times, or even 1,000,000. The greater the number of rolls, the closer the results should be to 6/36.
Part 3. Screen display.
Ask the user for two integer dimensions: height, and width, in that order. Display a box on the screen of that size. For example:
Enter height and width 63
OK here is your box: xxx
xxx
xxx
xxx
xxx
xxx
Thank you and have a nice day!
Use nested for loops.
