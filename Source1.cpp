#include <iostream>
#include <string>
using namespace std;

int main()
{

	string FirstName, FirstName2, Question, Question1, Question2, TryAgain;
	int Points = 0, QuestionsRight = 0, PointsBet = 0, Players, QuestionsRight1 = 0, QuestionsRight2 = 0, Points1 = 0, Points2 = 0, PointsBet1 = 0, PointsBet2 = 0, Duo1 = 0, Duo2 = 0;

	//Introduction

	cout << "----------------------------------------------------------------------------" << endl << endl;

	cout << "Hello and welcome to the Trivia Corner! I'll be your host, Amanda Lau! I'll be asking you 10 questions, " << endl;
	cout << "each worth 10 points. You need at least 80 points to win this game! Some questions may vary in points, so keep an eye out for them!" << endl << endl;
	cout << "The theme of this game will be..... Disney Trivia! Do you want this to be a (1) or (2) player game?" << endl;
	cin >> Players;
	cout << "\n\n";

	if (Players == 1)
	{
		cout << "You've selected Single Player!" << endl << endl;

		cout << "Welcome contestant! Please enter your name." << endl;
		cin >> FirstName;

		cout << endl << "Now put on your Mickey Ears, " << FirstName << ", and let's get right to it!" << endl;

		cout << endl << "----------------------------------------------------------------------------" << endl << endl;

		//Question 1
		//First disney animation? Snow white

		cout << "First question: What was the first animated Disney feature film?" << endl;
		cin.ignore(1000, '\n');
		getline(cin, Question);
		cout << "\n";

		if (Question == "Snow White and the Seven Dwarves" || Question == "Snow White" || Question == "snow white" || Question == "SNOW WHITE" || Question == "snow white and the seven dwarves" || Question == "SNOW WHITE AND THE SEVEN DWARVES" || Question == "Snow White and The Seven Dwarves" || Question == "SnowWhite" || Question == "snowwhite" || Question == "SNOWWHITE" || Question == "Snow white" || Question == "snow White")
		{
			Points = Points + 10;
			QuestionsRight = QuestionsRight + 1;

			cout << "Correct! Snow White was made back in 1937, landing it as the first ever animated Disney feature film. You've earned 10 points, " << FirstName << "!";
		}

		else
			cout << "Unfortunately that was incorrect. The right answer is Snow White and the Seven Dwarves." << endl;

		cout << endl << "----------------------------------------------------------------------------" << endl << endl;

		//Question 2
		//Y/N Mickey mouse #1? No

		cout << "Time for the next question! Was Mickey Mouse Walt Disney's first animated character? (Y)es or (N)o?" << endl << endl;
		getline(cin, Question);
		cout << "\n";

		if (Question == "No" || Question == "no" || Question == "NO" || Question == "N" || Question == "n")
		{
			Points = Points + 10;
			QuestionsRight = QuestionsRight + 1;

			if (QuestionsRight == 2)
				cout << "Two in a row! ";

			cout << "You got that correct. Oswald the Lucky Rabbit was the name of the characted that Disney created first. You have " << Points << " points now." << endl;
		}

		else
		{
			cout << "If you answered yes, you are wrong. The right answer is No, because Oswald the Lucky Rabbit was the first!" << endl;

			(QuestionsRight == 0) ? cout << "You currently have 0 points. Step it up!\n" : cout << "You have 10 points now.\n";
		}

		cout << endl << "----------------------------------------------------------------------------" << endl << endl;

		//Question 3
		//Genie in the lamp - 10000 years, record commas and no commas

		cout << "Third Question. In 'Aladdin', how many years was the Genie locked in the lamp? Type in only numbers." << endl;
		getline(cin, Question);
		cout << "\n";

		if (Question == "10000" || Question == "10,000" || Question == "10,000 years" || Question == "10000 years" || Question == "10,000 YEARS" || Question == "10000 YEARS" || Question == "10,000 Years" || Question == "10000 Years" || Question == "10000years" || Question == "10,000years")
		{
			Points = Points + 10;
			QuestionsRight = QuestionsRight + 1;

			cout << "You got that right! The Genie was locked in the magic lamp for 10,000 years. Imagine being locked in that for that long... You have " << Points << " points now." << endl;
		}

		else
		{
			cout << "Uh oh, that wasn't right. The right answer was 10,000 years. You now have " << Points << " points now.\n";
		}

		cout << endl << "----------------------------------------------------------------------------" << endl << endl;

		//Question 4
		//how many puppies did 101 dalmations have? 15

		cout << "Time for the 4th question, " << FirstName << ". How many puppies did Pongo and Perdita have in '101 Dalmations'?" << endl;
		cout << " A) 3 Puppies" << endl << " B) 15 Puppies" << endl << " C) 50 Puppies" << endl << " D) 101 Puppies" << endl;
		getline(cin, Question);
		cout << "\n";

		if (Question == "15" || Question == "15 Puppies" || Question == "15 PUPPIES" || Question == "15 puppies" || Question == "B" || Question == "b" || Question == "B)" || Question == "b)")
		{
			Points = Points + 10;
			QuestionsRight = QuestionsRight + 1;

			cout << "That's right! They didn't actually have 101 puppies, but actually 15 puppies. You have " << Points << " points now." << endl;
		}

		else
			cout << "That's wrong. They had 15 puppies in total. Sorry if this stumped you! You have " << Points << " points in total." << endl;

		cout << endl << "----------------------------------------------------------------------------" << endl << endl;

		//Question 5
		//Wreck it Ralph game - Sugar Rush

		cout << "Question 5 time! What game did Princess Vanellope von Schweetz come from in 'Wreck It Ralph'?" << endl;
		getline(cin, Question);
		cout << "\n";

		if (Question == "Sugar Rush" || Question == "SUGAR RUSH" || Question == "sugar rush" || Question == "Sugar rush" || Question == "sugar Rush")
		{
			Points = Points + 10;
			QuestionsRight = QuestionsRight + 1;

			cout << "Correct! The game Vanellope von Schweetz originated from is called Sugar Rush, which isn't actually a real game, compared to the other references in the movie." << endl;
			cout << "You have " << Points << " points in total. \n";

		}

		else
			cout << "That's unfortunately wrong. The game's title is Sugar Rush. You have " << Points << " right now. Keep it up!" << endl;

		cout << endl << "----------------------------------------------------------------------------" << endl << endl;

		//Question 6
		// *DOUBLE* What is the badge that Russell is missing? Assisting the elderly

		cout << "It's time for a *** BONUS QUESTION *** !\n";
		cout << "This question is worth double the points, so 20 in total! However, if you get this one wrong, you'll lose 10 points. Answer carefully!" << endl << endl;

		cout << endl << "What is the badge that Russell is missing in the movie 'Up'?" << endl;
		getline(cin, Question);
		cout << "\n";

		if (Question == "Assisting the Elderly" || Question == "ASSISTING THE ELDERLY" || Question == "assisting the elderly" || Question == "Assisting the Elderly")
		{
			Points = Points + 20;
			QuestionsRight = QuestionsRight + 1;

			cout << "Impressive! Russell was missing the Assisting the Elderly badge, and if he were to get it, he would then achieve the status of Senior Wilderness Explorer." << endl;
			if (QuestionsRight == 6)
				cout << "You're on a roll! You have 6 out of 6 questions correct now. You have 80 points! Keep it up!" << endl;
			else
				cout << "You have " << Points << " points now. You've answered " << QuestionsRight << " questions correctly so far! 4 more left!" << endl;
		}

		else
		{
			cout << "That's not right... Would you like to try to answer again? (Y)es or (N)o?" << endl;
			getline(cin, TryAgain);
			cout << "\n";

			if (TryAgain == "Y" || TryAgain == "y" || TryAgain == "Yes" || TryAgain == "YES" || TryAgain == "yes")
			{
				cout << "Wonderful! Once again, what is the badge that Russell is missing in the movie 'Up'?" << endl;
				getline(cin, Question);
				cout << "\n";

				if (Question == "Assisting the Elderly" || Question == "ASSISTING THE ELDERLY" || Question == "assisting the elderly" || Question == "Assisting the Elderly")
				{
					Points = Points + 20;
					QuestionsRight = QuestionsRight + 1;

					cout << "Impressive! Russell was missing the Assisting the Elderly badge, and if he were to get it, he would then achieve the status of Senior Wilderness Explorer." << endl;
					cout << "Your new total is " << Points << " points now! Keep it up!" << endl;

				}

				else
				{
					Points = Points - 10;
					cout << "Bummer, you didn't get it. He was missing the Assisting the Elderly badge, the last of the Wilderness Badges needed to become a Senior Wilderness Explorer.\n";
					cout << "You've lost 10 points, so your new total is " << Points << " points. You've answered " << QuestionsRight << " questions correctly so far." << endl;
					if (QuestionsRight == 0)
						cout << " Pay more attention!." << endl;
				}

			}

			else
			{
				Points = Points - 10;
				cout << "Bummer, you didn't get it. He was missing the Assisting the Elderly badge, the last of the Wilderness Badges needed to become a Senior Wilderness Explorer.\n";
				cout << "You've lost 10 points, so your new total is " << Points << " points. You've answered " << QuestionsRight << " questions correctly so far." << endl;
				if (QuestionsRight == 0)
					cout << " Pay more attention!" << endl;
			}

		}

		cout << endl << "----------------------------------------------------------------------------" << endl << endl;

		//Question 7
		//Tarzan soundtrack? Phil Collins

		cout << "Question number 7 time! Who is the composer for the 'Tarzan' soundtrack, along with many more?" << endl;
		getline(cin, Question);
		cout << "\n";

		if (Question == "Phil Collins" || Question == "PHIL COLLINS" || Question == "phil collins" || Question == "Collins" || Question == "collins" || Question == "COLLINS" || Question == "PhilCollins" || Question == "Philcollins" || Question == "PHILCOLLINS" || Question == "philcollins")
		{
			Points = Points + 10;
			QuestionsRight = QuestionsRight + 1;

			cout << "Amazing work! Phil Collins has composed many soundtracks for Disney, including Tarzan and Brother Bear. You have " << Points << " points now." << endl;

		}

		else
			cout << "How could you not know one of the greatest composers in movie history? The composer's name is Phil Collins. Educate yourself! You have " << Points << " points now." << endl;

		cout << endl << "----------------------------------------------------------------------------" << endl << endl;

		//Question 8
		//Who does the Madrigal family not talk about in Encanto? Bruno

		cout << "Get ready for question numero 8! Who does the Madrigal family not talk about in 'Encanto'?" << endl;
		getline(cin, Question);
		cout << "\n";

		if (Question == "Bruno Madrigal" || Question == "BRUNO MADRIGAL" || Question == "bruno madrigal" || Question == "bruno" || Question == "Bruno" || Question == "BRUNO")
		{
			Points = Points + 10;
			QuestionsRight = QuestionsRight + 1;

			cout << "*Humming to the song* We don't talk about Bruno... Oh- um- Yes! You got it right! You have " << Points << " points now. Forget you ever saw that..." << endl;
		}

		else
		{
			cout << "Aww how have you never heard of the song? The Madrigal family doesn't talk about Bruno!~ You have " << Points << " points now." << endl;
			if (QuestionsRight == 0)
				cout << "You have 0 questions right so far... You're not going to win this.";

		}

		cout << endl << "----------------------------------------------------------------------------" << endl << endl;

		//Question 9
		//Where does the Princess and the Frog take place? New Orleans

		cout << "Coming up next is Question 9. Where does the Princess and the Frog take place? Name only the city." << endl;
		getline(cin, Question);
		cout << "\n";

		if (Question == "New Orleans" || Question == "NEW ORLEANS" || Question == "new orleans")
		{
			Points = Points + 10;
			QuestionsRight = QuestionsRight + 1;

			cout << "The birthplace of jazz, New Orleans. You got that right! You have " << Points << " points in total." << endl;

		}

		else
			cout << "*sad trumpet noises* The correct answer was New Orleans... How disappointing. You have " << Points << " points now." << endl;

		cout << endl << "----------------------------------------------------------------------------" << endl << endl;

		//Question 10
		//the name of elsa and anna's kingdom? Arendelle

		cout << "It's time for the final and 10th question! What is the name of Elsa and Anna's kingdom from 'Frozen'?" << endl;
		getline(cin, Question);
		cout << "\n";

		if (Question == "Arendelle" || Question == "ARENDELLE" || Question == "arendelle")
		{
			Points = Points + 10;
			QuestionsRight = QuestionsRight + 1;

			cout << "Correct! The movie's location is in Arendelle, which actually in real life is based in Norway. You earned a total of " << Points << " points in this game!" << endl;

		}

		else
		{
			cout << "The location of Frozen is in a kingdom named Arendelle. You didn't get this right, so you earned a total of " << Points << " points this game." << endl;
		}

		cout << endl << "----------------------------------------------------------------------------" << endl << endl;

		//Bonus round, applicable to only winners
		//How many ghosts? 999

		if (Points >= 80)
		{
			cout << "You've earned yourself a total of " << Points << " points in this game, " << FirstName << "! You've won!" << endl;
			cout << "You have answered " << QuestionsRight << " questions correctly. ";
			if (QuestionsRight == 10)
				cout << " You aced this trivia test! Congrats!" << endl << endl;
			else
				cout << " " << endl << endl;

			cout << "You've got a chance to bet all of your points for double its worth. Will you take the bet? If you lose, I get to take all of the points you've betted! Choose wisely! (Y)es or (N)o?" << endl;
			getline(cin, TryAgain);
			cout << "\n";

			if (TryAgain == "Y" || TryAgain == "y" || TryAgain == "Yes" || TryAgain == "YES" || TryAgain == "yes")
			{
				cout << "Are you ready? Place your bets!" << endl;
				cin >> PointsBet;

				Points = Points - PointsBet;

				if (PointsBet > 0)
				{
					cout << "Bets have been placed! You have betted " << PointsBet << " points. Here we go!\n";
					cout << "How many ghosts haunt the Haunted Mansion? This is a tricky question!" << endl;
					cin.ignore(1000, '\n');
					getline(cin, Question);
					cout << "\n";

					if (Question == "999" || Question == "999 Ghosts" || Question == "999 ghosts" || Question == "999 GHOSTS")
					{
						cout << "Oh... Oh my god... You got it correct! There are a total of 999 ghosts haunting the Haunted Mansion!" << endl << endl;

						PointsBet = PointsBet * 2;
						Points = Points + PointsBet;

						cout << "You've won a total of " << Points << " points this game! You've answered " << QuestionsRight + 1 << " questions correctly. Very impressive! Have a good day, " << FirstName << "!" << endl;
						return 0;

					}

					else
					{
						cout << "Oh, what a shame. You've lost the bet! Thank you for the points! You've won a total of " << Points << " points. You've answered " << QuestionsRight << " correctly.";

						if (Points >= 80)
						{
							cout << "You still beat the game! Congrats, " << FirstName << "!" << endl;
						}

						if (Points < 80)
						{
							cout << "You've lost. Sorry! Thanks for playing, " << FirstName << "~" << endl;
						}

						return 0;
					}


				}

				if (PointsBet < 0)
				{
					cout << "Did you think you could break the system? Shame on you! You've lost! I've taken away your points. You now have a total of 0 points. Good bye, " << FirstName << "! >:(" << endl;
					return 0;
				}

				if (PointsBet == 0)
				{
					cout << "You didn't want to bet anything? That's okay, but you won't earn any points for answering this correctly. Do you wish to proceed? (Y)es or (N)o?" << endl;
					cin.ignore(1000, '\n');
					getline(cin, TryAgain);
					cout << "\n";

					if (TryAgain == "Y" || TryAgain == "y" || TryAgain == "Yes" || TryAgain == "YES" || TryAgain == "yes")
					{
						cout << "How many ghosts haunt the Haunted Mansion? This is a tricky question!" << endl;
						cin.ignore(1000, '\n');
						getline(cin, Question);
						cout << "\n";

						if (Question == "999" || Question == "999 Ghosts" || Question == "999 ghosts" || Question == "999 GHOSTS")
						{
							cout << "Oh my god... You got it correct! There are a total of 999 ghosts haunting the Haunted Mansion!" << endl << endl;

							cout << "You've won a total of " << Points << " points this game! You've answered " << QuestionsRight + 1 << " questions correctly. Very impressive! Have a good day, " << FirstName << "!" << endl;
							return 0;

						}

						else
						{
							cout << "Oh, what a shame. The total was 999 ghosts!" << endl << endl;
							cout << "You've still won a total of " << Points << " points. You've answered " << QuestionsRight << " correctly. Very impressive, " << FirstName << "! See you later!";

							return 0;
						}
					}

					else
						cout << "That's okay! You've won anyways, answering a total of " << QuestionsRight << " questions correctly! Enjoy the rest of your day, " << FirstName << "!";
					return 0;
				}

			}
		}

		else
		{
			cout << "That's okay. You've won anyways, answering a total of " << QuestionsRight << " questions correctly! Enjoy the rest of your day, " << FirstName << "!";
			return 0;
		}

		if (Points < 80)
		{
			cout << "Bummer, you lost! I'm sorry that you didn't earn enough points. You earned " << Points << " points, which is " << 80 - Points << " away from winning." << endl << " You've answered a total of " << QuestionsRight << " questions correctly. See you later, " << FirstName << "!";
			return 0;
		}
	}

	if (Players == 2)
	{
		cout << "You've selected Competitive Mode!" << endl << endl;

		cout << "Welcome contestants! Player 1, please enter your name." << endl;
		cin >> FirstName;

		cout << endl << "Player 2, please enter your name as well." << endl;
		cin >> FirstName2;

		cout << endl << "Now put on your Mickey Ears, " << FirstName << " and " << FirstName2 << ", and let's get right to it!" << endl;

		cout << endl << "----------------------------------------------------------------------------" << endl << endl;
		//Question 1
		//First disney animation? Snow white

		{
			cout << "First question: What was the first animated Disney feature film? " << FirstName << ", you go first." << endl;
			cin.ignore(1000, '\n');
			getline(cin, Question1);

			cout << endl << "Alright, what is your answer, " << FirstName2 << "?" << endl;
			getline(cin, Question2);
			cout << "\n";

			if (Question1 == "Snow White and the Seven Dwarves" || Question1 == "Snow White" || Question1 == "snow white" || Question1 == "SNOW WHITE" || Question1 == "snow white and the seven dwarves" || Question1 == "SNOW WHITE AND THE SEVEN DWARVES" || Question1 == "Snow White and The Seven Dwarves" || Question1 == "Snow white" || Question1 == "snow White" || Question1 == "SNOWWHITE" || Question1 == "snowwhite" || Question1 == "SnowWhite")
			{
				Points1 = Points1 + 10;
				QuestionsRight1 = QuestionsRight1 + 1;
				Duo1 = 1;
			}

			if (Question2 == "Snow White and the Seven Dwarves" || Question2 == "Snow White" || Question2 == "snow white" || Question2 == "SNOW WHITE" || Question2 == "snow white and the seven dwarves" || Question2 == "SNOW WHITE AND THE SEVEN DWARVES" || Question2 == "Snow White and The Seven Dwarves" || Question2 == "Snow white" || Question2 == "snow White" || Question1 == "SNOWWHITE" || Question1 == "snowwhite" || Question1 == "SnowWhite")
			{
				Points2 = Points2 + 10;
				QuestionsRight2 = QuestionsRight2 + 1;
				Duo2 = 1;
			}

			if (Duo1 == 1 && Duo2 == 0)
				cout << FirstName << " got it right! Snow White was made back in 1937, landing it as the first ever animated Disney feature film. " << FirstName << " earned 10 points, meanwhile " << FirstName2 << " earned none.";

			else if (Duo1 == 0 && Duo2 == 1)
				cout << FirstName2 << " got it right! Snow White was made back in 1937, landing it as the first ever animated Disney feature film. " << FirstName2 << " earned 10 points, meanwhile " << FirstName << " earned none.";

			else if (Duo1 == 1 && Duo2 == 1)
				cout << "You both got it Correct! Snow White was made back in 1937, landing it as the first ever animated Disney feature film. You've both earned 10 points, " << FirstName << " and " << FirstName2 << "!";


			else
				cout << "Unfortunately both of you were incorrect. The right answer is Snow White and the Seven Dwarves." << endl;
		}

		cout << endl << "----------------------------------------------------------------------------" << endl << endl;

		//Question 2
		//Y/N Mickey mouse #1? No

		{
			Duo1 = 0;
			Duo2 = 0;

			cout << "Time for the next question! Was Mickey Mouse Walt Disney's first animated character? (Y)es or (N)o?" << endl;

			cout << FirstName << ", you're up first." << endl;
			getline(cin, Question1);

			cout << endl << "Alright, " << FirstName2 << ", it's time for your answer." << endl;
			getline(cin, Question2);
			cout << "\n";

			if (Question1 == "No" || Question1 == "no" || Question1 == "NO" || Question1 == "N" || Question1 == "n")
			{
				Points1 = Points1 + 10;
				QuestionsRight1 = QuestionsRight1 + 1;
				Duo1 = 1;

			}

			if (Question2 == "No" || Question2 == "no" || Question2 == "NO" || Question2 == "N" || Question2 == "n")
			{
				Points2 = Points2 + 10;
				QuestionsRight2 = QuestionsRight2 + 1;
				Duo2 = 1;

			}

			if (Duo1 == 1 && Duo2 != 1)
				cout << FirstName << " got it correct.  Oswald the Lucky Rabbit was the name of the characted that Disney created first. " << FirstName << " has " << Points1 << " points, and " << FirstName2 << " has " << Points2 << " points now." << endl;

			else if (Duo2 == 1 && Duo1 != 1)
				cout << FirstName2 << " got it correct.  Oswald the Lucky Rabbit was the name of the characted that Disney created first. " << FirstName << " has " << Points1 << " points and " << FirstName2 << " has " << Points2 << " points now." << endl;

			else if (Duo1 == 1 && Duo2 == 1)
				cout << "You both got that correct. Oswald the Lucky Rabbit was the name of the characted that Disney created first. " << FirstName << " has " << Points1 << " points and " << FirstName2 << " has " << Points2 << " points now." << endl;

			else
			{
				cout << "If you both answered yes, you are wrong. The right answer is No, because Oswald the Lucky Rabbit was the first animated character Disney created!" << endl;

				(QuestionsRight1 == 0 && QuestionsRight2 == 0) ? cout << "You both currently have 0 points. Step it up!\n" : cout << "You both have still have 10 points.\n";
			}
		}

		cout << endl << "----------------------------------------------------------------------------" << endl << endl;

		//Question 3
		//Genie in the lamp - 10000 years, record commas and no commas

		{
			Duo1 = 0;
			Duo2 = 0;

			cout << "Third Question. In 'Aladdin', how many years was the Genie locked in the lamp? Type in only numbers. " << FirstName << ", it's your turn." << endl;
			getline(cin, Question1);

			cout << endl << "Alright " << FirstName2 << ", it's your turn." << endl;
			getline(cin, Question2);
			cout << "\n";

			if (Question1 == "10000" || Question1 == "10,000" || Question1 == "10,000 years" || Question1 == "10000 years" || Question1 == "10,000 YEARS" || Question1 == "10000 YEARS" || Question1 == "10,000 Years" || Question1 == "10000 Years" || Question1 == "10000years" || Question1 == "10,000years")
			{
				Points1 = Points1 + 10;
				QuestionsRight1 = QuestionsRight1 + 1;
				Duo1 = 1;
			}

			if (Question2 == "10000" || Question2 == "10,000" || Question2 == "10,000 years" || Question2 == "10000 years" || Question2 == "10,000 YEARS" || Question2 == "10000 YEARS" || Question2 == "10,000 Years" || Question2 == "10000 Years" || Question2 == "10000years" || Question2 == "10,000years")
			{
				Points2 = Points2 + 10;
				QuestionsRight2 = QuestionsRight2 + 1;
				Duo2 = 1;
			}

			if (Duo1 == 1 && Duo2 != 1)
				cout << FirstName << " got that right! The Genie was locked in the magic lamp for 10,000 years. Imagine being locked in that for that long... " << FirstName << " has " << Points1 << " points and " << FirstName2 << " has " << Points2 << " points now." << endl;

			else if (Duo2 == 1 && Duo2 != 1)
				cout << FirstName2 << " got that right! The Genie was locked in the magic lamp for 10,000 years. Imagine being locked in that for that long... " << FirstName << " has " << Points1 << " points and " << FirstName2 << " has " << Points2 << " points now." << endl;

			else if (Duo1 == 1 && Duo2 == 1)
				cout << "You both got that right! The Genie was locked in the magic lamp for 10,000 years. Imagine being locked in that for that long... " << FirstName << " has " << Points1 << " points and " << FirstName2 << " has " << Points2 << " points now." << endl;

			else
			{
				cout << "Uh oh, both of you weren't right. The right answer was 10,000 years. " << FirstName << " has " << Points1 << " points and " << FirstName2 << " has " << Points2 << " points now." << endl;
			}
		}

		cout << endl << "----------------------------------------------------------------------------" << endl << endl;

		//Question 4
		//how many puppies did 101 dalmations have? 15

		{
			Duo1 = 0;
			Duo2 = 0;

			cout << "Time for the 4th question, " << FirstName << " and " << FirstName2 << "! How many puppies did Pongo and Perdita have in '101 Dalmations' ?" << endl;
			cout << " A) 3 Puppies" << endl << " B) 15 Puppies" << endl << " C) 50 Puppies" << endl << " D) 101 Puppies" << endl << endl << "Player 1, your turn." << endl;
			getline(cin, Question1);

			cout << endl << "Now it's " << FirstName2 << "'s turn." << endl;
			getline(cin, Question2);
			cout << "\n";

			if (Question1 == "15" || Question1 == "15 Puppies" || Question1 == "15 PUPPIES" || Question1 == "15 puppies" || Question1 == "B" || Question1 == "b" || Question1 == "B)" || Question1 == "b)")
			{
				Points1 = Points1 + 10;
				QuestionsRight1 = QuestionsRight1 + 1;
				Duo1 = 1;
			}

			if (Question2 == "15" || Question2 == "15 Puppies" || Question2 == "15 PUPPIES" || Question2 == "15 puppies" || Question2 == "B" || Question2 == "b" || Question2 == "B)" || Question2 == "b)")
			{
				Points2 = Points2 + 10;
				QuestionsRight2 = QuestionsRight2 + 1;
				Duo2 = 1;
			}

			if (Duo1 == 1 && Duo2 != 1)
				cout << FirstName << " is right! They didn't actually have 101 puppies, but actually 15 puppies. " << FirstName << " has " << Points1 << " points and " << FirstName2 << " has " << Points2 << " points now." << endl;

			else if (Duo1 != 1 && Duo2 == 1)
				cout << FirstName2 << " is right! They didn't actually have 101 puppies, but actually 15 puppies. " << FirstName << " has " << Points1 << " points and " << FirstName2 << " has " << Points2 << " points now." << endl;

			else if (Duo1 == 1 && Duo2 == 1)
				cout << "That's right! They didn't actually have 101 puppies, but actually 15 puppies. " << FirstName << " has " << Points1 << " points and " << FirstName2 << " has " << Points2 << " points now." << endl;

			else
				cout << "Sorry, you're both wrong. They had 15 puppies in total. Sorry if this stumped you both! " << FirstName << " has " << Points1 << " points and " << FirstName2 << " has " << Points2 << " points." << endl;
		}

		cout << endl << "----------------------------------------------------------------------------" << endl << endl;

		//Question 5
		//Wreck it Ralph game - Sugar Rush
		{
			Duo1 = 0;
			Duo2 = 0;

			cout << "Question 5 time! What game did Princess Vanellope von Schweetz come from in 'Wreck It Ralph'? " << FirstName << ", you're up first." << endl;
			getline(cin, Question1);

			cout << endl << "Player 2, it's your turn now." << endl;
			getline(cin, Question2);
			cout << "\n";

			if (Question1 == "Sugar Rush" || Question1 == "SUGAR RUSH" || Question1 == "sugar rush" || Question1 == "Sugar rush" || Question1 == "sugar Rush")
			{
				Points1 = Points1 + 10;
				QuestionsRight1 = QuestionsRight1 + 1;
				Duo1 = 1;
			}

			if (Question2 == "Sugar Rush" || Question2 == "SUGAR RUSH" || Question2 == "sugar rush" || Question2 == "Sugar rush" || Question2 == "sugar Rush")
			{
				Points2 = Points2 + 10;
				QuestionsRight2 = QuestionsRight2 + 1;
				Duo2 = 1;
			}
			if (Duo1 == 1 && Duo2 == 0)
				cout << FirstName << " is correct! The game Vanellope von Schweetz originated from is called Sugar Rush, which isn't actually a real game, compared to the other references in the movie." << endl << FirstName << " has " << Points1 << " points and " << FirstName2 << " has " << Points2 << " points now." << endl;
			else if (Duo1 == 0 && Duo2 == 1)
				cout << FirstName2 << " is correct! The game Vanellope von Schweetz originated from is called Sugar Rush, which isn't actually a real game, compared to the other references in the movie." << endl << FirstName << " has " << Points1 << " points and " << FirstName2 << " has " << Points2 << " points now." << endl;

			else if (Duo1 == 1 && Duo2 == 1)
				cout << "Both of you are correct! The game  Vanellope von Schweetz originated from is called Sugar Rush, which isn't actually a real game, compared to the other references in the movie." << endl << FirstName << " has " << Points1 << " points and " << FirstName2 << " has " << Points2 << " points now." << endl;

			else
				cout << "You both are unfortunately wrong. The game's title is Sugar Rush. " << FirstName << " has " << Points1 << " points and " << FirstName2 << " has " << Points2 << " points now." << endl;

			(QuestionsRight1 == QuestionsRight2) ? cout << "\nYou both are tied for points! Let's see if this changes with this next question...\n" : cout << endl;
		}
		cout << endl << "----------------------------------------------------------------------------" << endl << endl;

		//Question 6
		// *DOUBLE* What is the badge that Russell is missing? Assisting the elderly

		{
			Duo1 = 0;
			Duo2 = 0;

			cout << "It's time for a *** BONUS QUESTION *** !\n";
			cout << "This question is worth double the points, so 20 in total! However, if you get this one wrong, you'll lose 10 points. Answer carefully!" << endl << endl;

			cout << endl << "What is the badge that Russell is missing in the movie 'Up'? " << FirstName << ", you're up first." << endl;
			getline(cin, Question1);

			cout << endl << "It's your turn now, " << FirstName2 << "." << endl;
			getline(cin, Question2);
			cout << "\n";


			if (Question1 == "Assisting the Elderly" || Question1 == "ASSISTING THE ELDERLY" || Question1 == "assisting the elderly" || Question1 == "Assisting The Elderly" || Question1 == "Assisting the elderly")
			{
				Points1 = Points1 + 20;
				QuestionsRight1 = QuestionsRight1 + 1;
				Duo1 = 1;
			}

			if (Question2 == "Assisting the Elderly" || Question2 == "ASSISTING THE ELDERLY" || Question2 == "assisting the elderly" || Question2 == "Assisting The Elderly" || Question2 == "Assisting the elderly")
			{
				Points2 = Points2 + 20;
				QuestionsRight2 = QuestionsRight2 + 1;
				Duo2 = 1;
			}

			if (Duo1 == 1 && Duo2 == 0)
			{
				Points1 = Points1 - 10;
				cout << "Impressive! The points go to " << FirstName << "! Russell was missing the Assisting the Elderly badge, and if he were to get it, he would then achieve the status of Senior Wilderness Explorer." << endl;
				cout << FirstName << "'s new total is " << Points1 << " and " << FirstName2 << "'s new total is " << Points2 << " points." << endl;

				if (QuestionsRight1 == 6)
					cout << FirstName << ", you're on a roll! You have 6 out of 6 questions correct now. You have " << Points1 << " points! Keep it up!" << endl;

			}

			else if (Duo1 == 0 && Duo2 == 1)
			{
				Points1 = Points1 - 10;
				cout << "Impressive! The points go to " << FirstName2 << "! Russell was missing the Assisting the Elderly badge, and if he were to get it, he would then achieve the status of Senior Wilderness Explorer." << endl;
				cout << FirstName << "'s new total is " << Points1 << " and " << FirstName2 << "'s new total is " << Points2 << " points." << endl;

				if (QuestionsRight2 == 6)
					cout << FirstName2 << ", you're on a roll! You have 6 out of 6 questions correct now. You have " << Points2 << " points! Keep it up!" << endl;
			}

			else if (Duo1 == 1 && Duo2 == 1)
			{
				cout << "Impressive! Russell was missing the Assisting the Elderly badge, and if he were to get it, he would then achieve the status of Senior Wilderness Explorer." << endl;
				cout << "You both got it right! " << FirstName << "'s new total is " << Points1 << " and " << FirstName2 << "'s new total is " << Points2 << " points." << endl;

				if (QuestionsRight1 == 6 || QuestionsRight2 == 6)
					cout << FirstName << " and " << FirstName2 << ", you guys are on a roll! You both have 6 out of 6 questions correct now. You both have " << Points1 << " points! Keep it up!" << endl;
			}

			else if (Duo1 == 0 && Duo2 == 0)
			{
				cout << "Seems like neither of you got it... Would you both like a second chance at trying? (Y)es or (N)o? " << endl;
				getline(cin, TryAgain);

				if (TryAgain == "Yes" || TryAgain == "yes" || TryAgain == "YES" || TryAgain == "y" || TryAgain == "Y")
				{
					cout << endl << "What is the badge that Russell is missing in the movie 'Up'? " << FirstName << ", you're up first." << endl;
					getline(cin, Question1);

					cout << endl << "It's your turn now, " << FirstName2 << "." << endl;
					getline(cin, Question2);


					if (Question1 == "Assisting the Elderly" || Question1 == "ASSISTING THE ELDERLY" || Question1 == "assisting the elderly" || Question1 == "Assisting The Elderly" || Question1 == "Assisting the elderly")
					{
						Points1 = Points1 + 20;
						QuestionsRight1 = QuestionsRight1 + 1;
						Duo1 = 1;
					}

					if (Question2 == "Assisting the Elderly" || Question2 == "ASSISTING THE ELDERLY" || Question2 == "assisting the elderly" || Question2 == "Assisting The Elderly" || Question2 == "Assisting the elderly")
					{
						Points2 = Points2 + 20;
						QuestionsRight2 = QuestionsRight2 + 1;
						Duo2 = 1;
					}

					if (Duo1 == 1 && Duo2 == 0)
					{
						Points2 = Points2 - 10;
						cout << "Impressive! The points go to " << FirstName << "! Russell was missing the Assisting the Elderly badge, and if he were to get it, he would then achieve the status of Senior Wilderness Explorer." << endl;
						cout << FirstName << "'s new total is " << Points1 << " and " << FirstName2 << "'s new total is " << Points2 << " points." << endl;

						if (QuestionsRight1 == 6)
							cout << FirstName << ", you're on a roll! You have 6 out of 6 questions correct now. You have " << Points1 << " points! Keep it up!" << endl;

					}

					else if (Duo1 == 0 && Duo2 == 1)
					{
						Points1 = Points1 - 10;
						cout << "Impressive! The points go to " << FirstName2 << "! Russell was missing the Assisting the Elderly badge, and if he were to get it, he would then achieve the status of Senior Wilderness Explorer." << endl;
						cout << FirstName << "'s new total is " << Points1 << " and " << FirstName2 << "'s new total is " << Points2 << " points." << endl;

						if (QuestionsRight2 == 6)
							cout << FirstName2 << ", you're on a roll! You have 6 out of 6 questions correct now. You have " << Points2 << " points! Keep it up!" << endl;
					}

					else if (Duo1 == 1 && Duo2 == 1)
					{
						cout << "Impressive! Russell was missing the Assisting the Elderly badge, and if he were to get it, he would then achieve the status of Senior Wilderness Explorer." << endl;
						cout << "You both got it right! " << FirstName << "'s new total is " << Points1 << " and " << FirstName2 << "'s new total is " << Points2 << " points." << endl;

						if (QuestionsRight1 == 6 || QuestionsRight2 == 6)
							cout << FirstName << " and " << FirstName2 << ", you guys are on a roll! You both have 6 out of 6 questions correct now. You both have " << Points1 << " points! Keep it up!" << endl;
					}

					else if (Duo1 == 0 && Duo2 == 0)
					{
						Points1 = Points1 - 10;
						Points2 = Points2 - 10;

						cout << "Bummer, it seems like neither of you got it. He was missing the Assisting the Elderly badge, the last of the Wilderness Badges needed to become a Senior Wilderness Explorer.\n";
						cout << "You've both just lost 10 points, so your new total is " << Points1 << " and " << Points2 << " points respectively. " << FirstName << " has answered " << QuestionsRight1 << " questions correctly and " << FirstName2 << " has answered " << QuestionsRight2 << " questions correctly so far." << endl;
						if (QuestionsRight == 0)
							cout << " Pay more attention! Both of you have 0 questions right!" << endl;

					}
				}

				else
				{
					Points1 = Points1 - 10;
					Points2 = Points2 - 10;

					cout << "Bummer, neither of you got it and it seems like you don't want a second chance. He was missing the Assisting the Elderly badge, the last of the Wilderness Badge he needed to become a Senior Wilderness Explorer.\n";
					cout << "You've both just lost 10 points, so your new total is " << Points1 << " and " << Points2 << " points respectively. " << FirstName << " has answered " << QuestionsRight1 << " questions correctly and " << FirstName2 << " has answered " << QuestionsRight2 << " questions correctly so far." << endl;
					if (QuestionsRight == 0)
						cout << " Pay more attention! Both of you have 0 questions right!" << endl;
				}
			}
		}

		cout << endl << "----------------------------------------------------------------------------" << endl << endl;

		//Question 7
		//Tarzan soundtrack? Phil Collins

		{
			Duo1 = 0;
			Duo2 = 0;

			cout << "Question number 7 time! Who is the composer for the 'Tarzan' soundtrack, along with many more? It's your turn, " << FirstName << "." << endl;
			getline(cin, Question1);

			cout << "Alright, " << FirstName2 << ", it's your time to answer." << endl;
			getline(cin, Question2);
			cout << "\n";

			if (Question1 == "Phil Collins" || Question1 == "PHIL COLLINS" || Question1 == "phil collins" || Question1 == "Phil collins" || Question1 == "Collins" || Question1 == "collins" || Question1 == "COLLINS" || Question1 == "PhilCollins" || Question1 == "Philcollins" || Question1 == "PHILCOLLINS" || Question1 == "philcollins")
			{
				Points1 = Points1 + 10;
				QuestionsRight1 = QuestionsRight1 + 1;
				Duo1 = 1;
			}

			if (Question2 == "Phil Collins" || Question2 == "PHIL COLLINS" || Question2 == "phil collins" || Question2 == "Phil collins" || Question2 == "Collins" || Question2 == "collins" || Question2 == "COLLINS" || Question2 == "PhilCollins" || Question2 == "Philcollins" || Question2 == "PHILCOLLINS" || Question2 == "philcollins")
			{
				Points2 = Points2 + 10;
				QuestionsRight2 = QuestionsRight2 + 1;
				Duo2 = 1;
			}

			if (Duo1 == 1 && Duo2 == 0)
				cout << "Amazing work, " << FirstName << "! Phil Collins has composed many soundtracks for Disney, including Tarzan and Brother Bear. " << FirstName << " now has " << Points1 << " points and " << FirstName2 << " has " << Points2 << " points now." << endl;

			else if (Duo1 == 0 && Duo2 == 1)
				cout << "Amazing work, " << FirstName2 << "! Phil Collins has composed many soundtracks for Disney, including Tarzan and Brother Bear. " << FirstName << " now has " << Points1 << " points and " << FirstName2 << " has " << Points2 << " points now." << endl;

			else if (Duo1 == 1 && Duo2 == 1)
				cout << "Amazing work, you two! Phil Collins has composed many soundtracks for Disney, including Tarzan and Brother Bear. " << FirstName << " now has " << Points1 << " points and " << FirstName2 << " has " << Points2 << " points now." << endl;

			else if (Duo1 == 0 && Duo2 == 0)
				cout << "How could you not know one of the greatest composers in movie history? The composer's name is Phil Collins. Educate yourselves! " << FirstName << " now has " << Points1 << " points and " << FirstName2 << " has " << Points2 << " points now." << endl;

		}

		cout << endl << "----------------------------------------------------------------------------" << endl << endl;

		//Question 8
		//Who does the Madrigal family not talk about in Encanto? Bruno

		{
			Duo1 = 0;
			Duo2 = 0;

			cout << "Get ready for question numero 8! Who does the Madrigal family not talk about in 'Encanto'? " << FirstName << ", it's your turn to answer." << endl;
			getline(cin, Question1);

			cout << endl << "Alrighty, " << FirstName2 << ", it's time to answer." << endl;
			getline(cin, Question2);
			cout << "\n";

			if (Question1 == "Bruno Madrigal" || Question1 == "BRUNO MADRIGAL" || Question1 == "bruno madrigal" || Question1 == "bruno" || Question1 == "Bruno" || Question1 == "BRUNO")
			{
				Points1 = Points1 + 10;
				QuestionsRight1 = QuestionsRight1 + 1;
				Duo1 = 1;

			}

			if (Question2 == "Bruno Madrigal" || Question2 == "BRUNO MADRIGAL" || Question2 == "bruno madrigal" || Question2 == "bruno" || Question2 == "Bruno" || Question2 == "BRUNO")
			{
				Points2 = Points2 + 10;
				QuestionsRight2 = QuestionsRight2 + 1;
				Duo2 = 1;

			}

			if (Duo1 == 1 && Duo2 == 0)
				cout << "*Humming to the song* We don't talk about Bruno... Oh- um- Yes! " << FirstName << " got it right! " << FirstName << " has " << Points1 << " points now and " << FirstName2 << " has " << Points2 << " points now. Forget you ever saw that please..." << endl;

			else if (Duo1 == 0 && Duo2 == 1)
				cout << "*Humming to the song* We don't talk about Bruno... Oh- um- Yes! " << FirstName2 << " got it right! " << FirstName << " has " << Points1 << " points now and " << FirstName2 << " has " << Points2 << " points now. Forget you ever saw that please..." << endl;

			else if (Duo1 == 1 && Duo2 == 1)
				cout << "*Humming to the song* We don't talk about Bruno... Oh- um- Yes! You both got it right! " << FirstName << " has " << Points1 << " points now and " << FirstName2 << " has " << Points2 << " points now. Forget you ever saw that please..." << endl;

			else if (Duo1 == 0 && Duo2 == 1)
			{
				cout << "Aww how have you never heard of the song? The Madrigal family doesn't talk about Bruno!~ " << FirstName << " has " << Points1 << " points and " << FirstName2 << " has " << Points2 << " points now." << endl;

				if (QuestionsRight1 == 0 && QuestionsRight2 == 0)
					cout << "You guys have 0 questions right so far... You're not going to win this. :(" << endl;

			}
		}

		cout << endl << "----------------------------------------------------------------------------" << endl << endl;

		//Question 9
		//Where does the Princess and the Frog take place? New Orleans

		{
			Duo1 = 0;
			Duo2 = 0;

			cout << "Coming up next is Question 9. Where does the Princess and the Frog take place? Name only the city. " << FirstName << " it's your turn." << endl;
			getline(cin, Question1);

			cout << endl << "Next is " << FirstName2 << " turn to answer." << endl;
			getline(cin, Question2);
			cout << "\n";

			if (Question1 == "New Orleans" || Question1 == "NEW ORLEANS" || Question1 == "new orleans")
			{
				Points1 = Points1 + 10;
				QuestionsRight1 = QuestionsRight1 + 1;
				Duo1 = 1;
			}

			if (Question2 == "New Orleans" || Question2 == "NEW ORLEANS" || Question2 == "new orleans")
			{
				Points2 = Points2 + 10;
				QuestionsRight2 = QuestionsRight2 + 1;
				Duo2 = 1;
			}

			if (Question1 == "Louisiana" || Question2 == "LOUISIANA" || Question2 == "LA" || Question2 == "New Orleans, LA" || Question2 == "louisiana")
			{
				Points1 = Points1 + 5;
				QuestionsRight1 = QuestionsRight1 + 1;
				Duo1 = 2;
			}

			if (Question2 == "Louisiana" || Question2 == "LOUISIANA" || Question2 == "LA" || Question2 == "New Orleans, LA" || Question2 == "louisiana")
			{
				Points2 = Points2 + 5;
				QuestionsRight2 = QuestionsRight2 + 1;
				Duo2 = 2;
			}

			if (Duo1 == 1 && Duo2 == 0)
				cout << "The birthplace of jazz, New Orleans. " << FirstName << " got that right! " << FirstName << " has " << Points1 << " points and " << FirstName2 << " has " << Points2 << " points in total." << endl;

			else if (Duo1 == 0 && Duo2 == 1)
				cout << "The birthplace of jazz, New Orleans. " << FirstName2 << " got that right! " << FirstName << " has " << Points1 << " points and " << FirstName2 << " has " << Points2 << " points in total." << endl;

			else if (Duo1 == 1 && Duo2 == 2)
			{
				cout << "The birthplace of jazz, New Orleans. " << FirstName << " got that right while " << FirstName2 << " got it partially right. Pay attention to instructions next time!" << endl;
				cout << FirstName << " has " << Points1 << " points and " << FirstName2 << " has " << Points2 << " points in total." << endl;
			}

			else if (Duo1 == 2 && Duo2 == 1)
			{
				cout << "The birthplace of jazz, New Orleans. " << FirstName2 << " got that right while " << FirstName << " got it partially right. Pay attention to instructions next time!" << endl;
				cout << FirstName << " has " << Points1 << " points and " << FirstName2 << " has " << Points2 << " points in total." << endl;
			}

			else if (Duo1 == 0 && Duo2 == 2)
			{
				cout << "The birthplace of jazz, New Orleans. " << FirstName2 << " got it partially right. Pay attention to instructions next time!" << endl;
				cout << FirstName << " has " << Points1 << " points and " << FirstName2 << " has " << Points2 << " points in total." << endl;
			}
			else if (Duo1 == 2 && Duo2 == 0)
			{
				cout << "The birthplace of jazz, New Orleans. " << FirstName << " got that partially right. Pay attention to instructions next time!" << endl;
				cout << FirstName << " has " << Points1 << " points and " << FirstName2 << " has " << Points2 << " points in total." << endl;
			}

			else if (Duo1 == 2 && Duo2 == 2)
			{
				cout << "The birthplace of jazz, New Orleans. You both got that partially right. Pay attention to instructions next time!" << endl;
				cout << FirstName << " has " << Points1 << " points and " << FirstName2 << " has " << Points2 << " points in total." << endl;
			}

			else if (Duo1 == 1 && Duo2 == 1)
				cout << "The birthplace of jazz, New Orleans. Both of you got that right! " << FirstName << " has " << Points1 << " points and " << FirstName2 << " has " << Points2 << " points in total." << endl;

			else if (Duo1 == 0 && Duo2 == 0)
				cout << "*sad trumpet noises* The correct answer was New Orleans... How disappointing. " << FirstName << " has " << Points1 << " points and " << FirstName2 << " has " << Points2 << " points in total." << endl;
		}

		cout << endl << "----------------------------------------------------------------------------" << endl << endl;

		//Question 10
		//the name of elsa and anna's kingdom? Arendelle
		{
			Duo1 = 0;
			Duo2 = 0;

			cout << "It's time for the final and 10th question! What is the name of Elsa and Anna's kingdom from 'Frozen'? It's " << FirstName << "'s turn now." << endl;
			getline(cin, Question1);

			cout << "Now it's time for " << FirstName2 << " to answer." << endl;
			getline(cin, Question2);
			cout << "\n";

			if (Question1 == "Arendelle" || Question1 == "ARENDELLE" || Question1 == "arendelle")
			{
				Points1 = Points1 + 10;
				QuestionsRight1 = QuestionsRight1 + 1;
				Duo1 = 1;
			}

			if (Question2 == "Arendelle" || Question2 == "ARENDELLE" || Question2 == "arendelle")
			{
				Points2 = Points1 + 10;
				QuestionsRight2 = QuestionsRight2 + 1;
				Duo2 = 1;
			}

			if (Duo1 == 1 && Duo2 == 0)
				cout << FirstName << "is correct! The movie's location is in Arendelle, which actually in real life is based in Norway. " << FirstName << " has earned a total of " << Points1 << " points and " << FirstName2 << " has earned a total of " << Points2 << " points in this game!" << endl;

			else if (Duo1 == 0 && Duo2 == 1)
				cout << FirstName2 << "is correct! The movie's location is in Arendelle, which actually in real life is based in Norway. " << FirstName << " has earned a total of " << Points1 << " points and " << FirstName2 << " has earned a total of " << Points2 << " points in this game!" << endl;

			else if (Duo1 == 1 && Duo2 == 1)
				cout << "You are both correct! The movie's location is in Arendelle, which actually in real life is based in Norway. " << FirstName << " has earned a total of " << Points1 << " points and " << FirstName2 << " has earned a total of " << Points2 << " points in this game!" << endl;

			else
			{
				cout << "The location of Frozen is in a kingdom named Arendelle. Neither of you got this right, so " << FirstName << " earned a total of " << Points1 << " points and " << FirstName2 << " earned a total of " << Points2 << " points in this game!" << endl;
			}
		}
		cout << endl << "----------------------------------------------------------------------------" << endl << endl;

		//Bonus round, applicable to only winners
		//How many ghosts? 999

		{
			Duo1 = 0;
			Duo2 = 0;
			if (Points1 >= 80 && Points2 >= 80)
			{
				cout << "You both have won!" << endl;
				cout << "You have answered " << QuestionsRight1 << " and " << QuestionsRight2 << " questions correctly respectively. ";
				if (QuestionsRight1 == 10 && QuestionsRight2 == 10)
					cout << "You both aced this trivia test!Congrats!" << endl << endl;
				else
					cout << " " << endl << endl;

				cout << "You've got a chance to bet all of your points for double its worth. Will you take the bet? If you lose, I get to take all of the points you've betted! Choose wisely! (Y)es or (N)o?" << endl;
				getline(cin, TryAgain);
				cout << "\n";

				if (TryAgain == "Y" || TryAgain == "y" || TryAgain == "Yes" || TryAgain == "YES" || TryAgain == "yes")
				{
					cout << "Are you ready? Place your bets, " << FirstName << "!" << endl;
					cin >> PointsBet1;

					cout << "How about you, " << FirstName2 << "? How much will you give me?" << endl;
					cin >> PointsBet2;

					if (PointsBet1 > Points1)
					{
						cout << "Hey, " << FirstName << ", you can't do that! You don't have enough points to bet that much. Please enter a number that you can actually bet." << endl;
						cin >> PointsBet1;
					}

					if (PointsBet2 > Points2)
					{
						cout << "Hey, " << FirstName2 << ", you can't do that! You don't have enough points to bet that much. Please enter a number that you can actually bet." << endl;
						cin >> PointsBet2;
					}

					if (PointsBet1 == 0)
					{
						cout << FirstName << " didn't want to bet anything? That's okay, but you won't earn any points for answering this correctly. Do you wish to proceed? (Y)es or (N)o?" << endl;
						cin.ignore(1000, '\n');
						getline(cin, TryAgain);
						cout << "\n";

						if (TryAgain == "Y" || TryAgain == "y" || TryAgain == "Yes" || TryAgain == "YES" || TryAgain == "yes")
						{

							Points1 = Points1 - PointsBet1;
							Points2 = Points2 - PointsBet2;

							cout << "Okay! How many ghosts haunt the Haunted Mansion? This is a tricky question! It's your turn to answer, " << FirstName << "." << endl;
							cin.ignore(1000, '\n');
							getline(cin, Question1);

							cout << "What do you think, " << FirstName2 << "?" << endl;
							getline(cin, Question2);
							cout << "\n";

							if (Question1 == "999" || Question1 == "999 Ghosts" || Question1 == "999 ghosts" || Question1 == "999 GHOSTS")
							{
								PointsBet1 = PointsBet1 * 2;
								Points1 = Points1 + PointsBet1;
								Duo1 = 1;
							}

							if (Question2 == "999" || Question2 == "999 Ghosts" || Question2 == "999 ghosts" || Question2 == "999 GHOSTS")
							{
								PointsBet2 = PointsBet2 * 2;
								Points2 = Points2 + PointsBet2;
								Duo2 = 1;
							}

							if (Duo1 == 1 && Duo2 == 0)
							{

								cout << "Oh... Oh my god... " << FirstName << " got it correct! There are a total of 999 ghosts haunting the Haunted Mansion!" << endl << endl;

								cout << FirstName << " won a total of " << Points1 << " points, and " << FirstName2 << " won a total of " << Points2 << " points this game! " << endl;
								cout << "You've answered " << QuestionsRight1 + 1 << " and " << QuestionsRight2 << " questions correctly. " << endl << endl;

								if (Duo1 >= 80 || Duo2 >= 80)
									cout << "You both won! Very impressive! \n \n** WINNERS = BOTH **" << endl << endl;

								else if (Duo1 >= 80 || Duo2 < 80)
									cout << FirstName << " has won! Very impressive! \n \n** WINNER = PLAYER 1 ** " << endl << endl;

								else if (Duo1 < 80 || Duo2 >= 80)
									cout << FirstName2 << " has won! Very impressive! \n \n** WINNER = PLAYER 2 ** " << endl << endl;

								else if (Duo1 < 80 || Duo2 < 80)
									cout << "Both of you have lost :(. Come again next time! \n \n ** WINNER = NONE **" << endl << endl;

								cout << "Have a good day, " << FirstName << " and " << FirstName2 << "!" << endl;
								return 0;
							}

							if (Duo1 == 0 && Duo2 == 1)
							{

								cout << "Oh... Oh my god... " << FirstName2 << " got it correct! There are a total of 999 ghosts haunting the Haunted Mansion!" << endl << endl;

								cout << FirstName << " won a total of " << Points1 << " points, and " << FirstName2 << " won a total of " << Points2 << " points this game! " << endl;
								cout << "You've answered " << QuestionsRight1 << " and " << QuestionsRight2 + 1 << " questions correctly. " << endl << endl;

								if (Duo1 >= 80 || Duo2 >= 80)
									cout << "You both won! Very impressive! \n \n** WINNERS = BOTH **" << endl << endl;

								else if (Duo1 >= 80 || Duo2 < 80)
									cout << FirstName << " has won! Very impressive! \n \n** WINNER = PLAYER 1 ** " << endl << endl;

								else if (Duo1 < 80 || Duo2 >= 80)
									cout << FirstName2 << " has won! Very impressive! \n \n** WINNER = PLAYER 2 ** " << endl << endl;

								else if (Duo1 < 80 || Duo2 < 80)
									cout << "Both of you have lost :(. Come again next time! \n \n ** WINNER = NONE **" << endl << endl;

								cout << "Have a good day, " << FirstName << " and " << FirstName2 << "!" << endl;
								return 0;
							}

							else if (Duo1 == 1 && Duo2 == 1)
							{
								cout << "Oh... Oh my god... You BOTH got it correct! There are a total of 999 ghosts haunting the Haunted Mansion!" << endl << endl;

								cout << FirstName << " won a total of " << Points1 << " points, and " << FirstName2 << " won a total of " << Points2 << " points this game! " << endl;
								cout << "You've answered " << QuestionsRight1 + 1 << " and " << QuestionsRight2 + 1 << " questions correctly. " << endl << endl;

								if (Duo1 >= 80 || Duo2 >= 80)
									cout << "You both won! Very impressive! \n \n** WINNERS = BOTH **" << endl << endl;

								else if (Duo1 >= 80 || Duo2 < 80)
									cout << FirstName << " has won! Very impressive! \n \n** WINNER = PLAYER 1 ** " << endl << endl;

								else if (Duo1 < 80 || Duo2 >= 80)
									cout << FirstName2 << " has won! Very impressive! \n \n** WINNER = PLAYER 2 ** " << endl << endl;

								else if (Duo1 < 80 || Duo2 < 80)
									cout << "Both of you have lost :(. Come again next time! \n \n ** WINNER = NONE **" << endl << endl;

								cout << "Have a good day, " << FirstName << " and " << FirstName2 << "!" << endl;
								return 0;
							}

							else if (Duo1 == 0 && Duo2 == 0)
							{
								cout << "Oh, what a shame. You've lost the bet! Thank you for the points! " << FirstName << " won a total of " << Points1 << " points and " << FirstName2 << " has won a total of " << Points2 << " points. You've answered " << QuestionsRight1 << " and " << QuestionsRight2 << " correctly. ";
								if (Points1 >= 80 && Points2 >= 80)
								{
									cout << "You both still beat the game! Congrats, " << FirstName << " and " << FirstName2 << "!" << endl << endl;
									cout << "** WINNERS = BOTH **" << endl;
								}

								if (Points1 >= 80 && Points2 < 80)
								{
									cout << "Looks like " << FirstName << " is the winner out of the two of you! Congratulations! See you next time~" << endl << endl;
									cout << "** WINNERS = PLAYER 1 **" << endl;
								}

								if (Points2 >= 80 && Points1 < 80)
								{
									cout << "Looks like " << FirstName2 << " is the winner out of the two of you! Congratulations! See you next time~" << endl << endl;
									cout << "** WINNERS = PLAYER 2 **" << endl;

								}

								if (Points1 < 80 || Points2 < 80)
								{
									cout << "You've both lost. Sorry! Thanks for playing, " << FirstName << " and " << FirstName2 << "~" << endl << endl;
									cout << "** WINNERS = NONE **" << endl;
								}

								return 0;
							}
						}
						else if (TryAgain == "N" || TryAgain == "n" || TryAgain == "No" || TryAgain == "NO" || TryAgain == "no")
						{
							cout << "Please reenter your bet, " << FirstName << ". If you enter 0 again, I'll boot you from the Trivia Corner!" << endl;
							cin >> PointsBet1;
							cout << "\n";

							if (PointsBet1 > Points1)
								cout << "I knew I couldn't trust you. Sorry, " << FirstName2 << ", but you have to pay for " << FirstName << "'s ignorance. Have a nice day! You both get 0 points. ** YOU LOSE **" << endl;
							if (PointsBet1 == 0)
								cout << "I knew I couldn't trust you. Sorry, " << FirstName2 << ", but you have to pay for " << FirstName << "'s ignorance. Have a nice day! You both get 0 points. ** YOU LOSE **" << endl;
							else if (PointsBet1 < 0)
								cout << "I knew I couldn't trust you. Sorry, " << FirstName2 << ", but you have to pay for " << FirstName << "'s ignorance. Have a nice day! You both get 0 points. ** YOU LOSE **" << endl;

							else if (PointsBet1 > 0)
							{

								Points1 = Points1 - PointsBet1;
								Points2 = Points2 - PointsBet2;

								cout << "Okay! How many ghosts haunt the Haunted Mansion? This is a tricky question! It's your turn to answer, " << FirstName << "." << endl;
								cin.ignore(1000, '\n');
								getline(cin, Question1);

								cout << "What do you think, " << FirstName2 << "?" << endl;
								getline(cin, Question2);
								cout << "\n";

								if (Question1 == "999" || Question1 == "999 Ghosts" || Question1 == "999 ghosts" || Question1 == "999 GHOSTS")
								{
									PointsBet1 = PointsBet1 * 2;
									Points1 = Points1 + PointsBet1;
									Duo1 = 1;
								}

								if (Question2 == "999" || Question2 == "999 Ghosts" || Question2 == "999 ghosts" || Question2 == "999 GHOSTS")
								{
									PointsBet2 = PointsBet2 * 2;
									Points2 = Points2 + PointsBet2;
									Duo2 = 1;
								}

								if (Duo1 == 1 && Duo2 == 0)
								{
									cout << "Oh... Oh my god... " << FirstName << " got it correct! There are a total of 999 ghosts haunting the Haunted Mansion!" << endl << endl;

									cout << FirstName << " won a total of " << Points1 << " points, and " << FirstName2 << " won a total of " << Points2 << " points this game! " << endl;
									cout << "You've answered " << QuestionsRight1 + 1 << " and " << QuestionsRight2 << " questions correctly." << endl << endl;

									if (Duo1 >= 80 || Duo2 >= 80)
										cout << "You both won! Very impressive! \n \n** WINNERS = BOTH **" << endl << endl;

									else if (Duo1 >= 80 || Duo2 < 80)
										cout << FirstName << " has won! Very impressive! \n \n** WINNER = PLAYER 1 ** " << endl << endl;

									else if (Duo1 < 80 || Duo2 >= 80)
										cout << FirstName2 << " has won! Very impressive! \n \n** WINNER = PLAYER 2 ** " << endl << endl;

									else if (Duo1 < 80 || Duo2 < 80)
										cout << "Both of you have lost :(. Come again next time! \n \n ** WINNER = NONE **" << endl << endl;

									cout << "Have a good day, " << FirstName << " and " << FirstName2 << "!" << endl;
									return 0;
								}

								if (Duo1 == 0 && Duo2 == 1)
								{
									cout << "Oh... Oh my god... " << FirstName2 << " got it correct! There are a total of 999 ghosts haunting the Haunted Mansion!" << endl << endl;

									cout << FirstName << " won a total of " << Points1 << " points, and " << FirstName2 << " won a total of " << Points2 << " points this game! " << endl;
									cout << "You've answered " << QuestionsRight1 << " and " << QuestionsRight2 + 1 << " questions correctly." << endl << endl;

									if (Duo1 >= 80 || Duo2 >= 80)
										cout << "You both won! Very impressive! \n \n** WINNERS = BOTH **" << endl << endl;

									else if (Duo1 >= 80 || Duo2 < 80)
										cout << FirstName << " has won! Very impressive! \n \n** WINNER = PLAYER 1 ** " << endl << endl;

									else if (Duo1 < 80 || Duo2 >= 80)
										cout << FirstName2 << " has won! Very impressive! \n \n** WINNER = PLAYER 2 ** " << endl << endl;

									else if (Duo1 < 80 || Duo2 < 80)
										cout << "Both of you have lost :(. Come again next time! \n \n ** WINNER = NONE **" << endl << endl;

									cout << "Have a good day, " << FirstName << " and " << FirstName2 << "!" << endl;
									return 0;
								}

								else if (Duo1 == 1 && Duo2 == 1)
								{
									cout << "Oh... Oh my god... You BOTH got it correct! There are a total of 999 ghosts haunting the Haunted Mansion!" << endl << endl;

									cout << FirstName << " won a total of " << Points1 << " points, and " << FirstName2 << " won a total of " << Points2 << " points this game! " << endl;
									cout << "You've answered " << QuestionsRight1 + 1 << " and " << QuestionsRight2 + 1 << " questions correctly." << endl << endl;

									if (Duo1 >= 80 || Duo2 >= 80)
										cout << "You both won! Very impressive! \n \n** WINNERS = BOTH **" << endl << endl;

									else if (Duo1 >= 80 || Duo2 < 80)
										cout << FirstName << " has won! Very impressive! \n \n** WINNER = PLAYER 1 ** " << endl << endl;

									else if (Duo1 < 80 || Duo2 >= 80)
										cout << FirstName2 << " has won! Very impressive! \n \n** WINNER = PLAYER 2 ** " << endl << endl;

									else if (Duo1 < 80 || Duo2 < 80)
										cout << "Both of you have lost :(. Come again next time! \n \n ** WINNER = NONE **" << endl << endl;

									cout << "Have a good day, " << FirstName << " and " << FirstName2 << "!" << endl;
									return 0;
								}

								else if (Duo1 == 0 && Duo2 == 0)
								{
									cout << "Oh, what a shame. You've lost the bet! Thank you for the points! " << FirstName << " won a total of " << Points1 << " points and " << FirstName2 << " has won a total of " << Points2 << " points. You've answered " << QuestionsRight1 << " and " << QuestionsRight2 << " correctly. ";

									if (Points1 >= 80 && Points2 >= 80)
									{
										cout << "You both still beat the game! Congrats, " << FirstName << " and " << FirstName2 << "!" << endl << endl;
										cout << "** WINNERS = BOTH **" << endl;
									}

									if (Points1 >= 80 && Points2 < 80)
									{
										cout << "Looks like " << FirstName << " is the winner out of the two of you! Congratulations! See you next time~" << endl << endl;
										cout << "** WINNERS = PLAYER 1 **" << endl;
									}

									if (Points2 >= 80 && Points1 < 80)
									{
										cout << "Looks like " << FirstName2 << " is the winner out of the two of you! Congratulations! See you next time~" << endl << endl;
										cout << "** WINNERS = PLAYER 2 **" << endl;
									}

									if (Points1 < 80 || Points2 < 80)
									{
										cout << "You've both lost. Sorry! Thanks for playing, " << FirstName << " and " << FirstName2 << "~" << endl << endl;
										cout << "** WINNERS = NONE **" << endl;
									}
									return 0;
								}
							}
						}
					}

					if (PointsBet2 == 0)
					{
						cout << FirstName2 << " didn't want to bet anything? That's okay, but you won't earn any points for answering this correctly. Do you wish to proceed? (Y)es or (N)o?" << endl;
						cin.ignore(1000, '\n');
						getline(cin, TryAgain);
						cout << "\n";

						if (TryAgain == "Y" || TryAgain == "y" || TryAgain == "Yes" || TryAgain == "YES" || TryAgain == "yes")
						{

							Points1 = Points1 - PointsBet1;
							Points2 = Points2 - PointsBet2;

							cout << "Okay! How many ghosts haunt the Haunted Mansion? This is a tricky question! It's your turn to answer, " << FirstName << "." << endl;
							cin.ignore(1000, '\n');
							getline(cin, Question1);

							cout << "What do you think, " << FirstName2 << "?" << endl;
							getline(cin, Question2);
							cout << "\n";

							if (Question1 == "999" || Question1 == "999 Ghosts" || Question1 == "999 ghosts" || Question1 == "999 GHOSTS")
							{
								PointsBet1 = PointsBet1 * 2;
								Points1 = Points1 + PointsBet1;
								Duo1 = 1;
							}

							if (Question2 == "999" || Question2 == "999 Ghosts" || Question2 == "999 ghosts" || Question2 == "999 GHOSTS")
							{
								PointsBet2 = PointsBet2 * 2;
								Points2 = Points2 + PointsBet2;
								Duo2 = 1;
							}

							if (Duo1 == 1 && Duo2 == 0)
							{
								cout << "Oh... Oh my god... " << FirstName << " got it correct! There are a total of 999 ghosts haunting the Haunted Mansion!" << endl << endl;

								cout << FirstName << " won a total of " << Points1 << " points, and " << FirstName2 << " won a total of " << Points2 << " points this game! " << endl;
								cout << "You've answered " << QuestionsRight1 + 1 << " and " << QuestionsRight2 << " questions correctly." << endl << endl;

								if (Duo1 >= 80 || Duo2 >= 80)
									cout << "You both won! Very impressive! \n \n** WINNERS = BOTH **" << endl << endl;

								else if (Duo1 >= 80 || Duo2 < 80)
									cout << FirstName << " has won! Very impressive! \n \n** WINNER = PLAYER 1 ** " << endl << endl;

								else if (Duo1 < 80 || Duo2 >= 80)
									cout << FirstName2 << " has won! Very impressive! \n \n** WINNER = PLAYER 2 ** " << endl << endl;

								else if (Duo1 < 80 || Duo2 < 80)
									cout << "Both of you have lost :(. Come again next time! \n \n ** WINNER = NONE **" << endl << endl;

								cout << "Have a good day, " << FirstName << " and " << FirstName2 << "!" << endl;
								return 0;
							}

							if (Duo1 == 0 && Duo2 == 1)
							{
								cout << "Oh... Oh my god... " << FirstName2 << " got it correct! There are a total of 999 ghosts haunting the Haunted Mansion!" << endl << endl;

								cout << FirstName << " won a total of " << Points1 << " points, and " << FirstName2 << " won a total of " << Points2 << " points this game! " << endl;
								cout << "You've answered " << QuestionsRight1 << " and " << QuestionsRight2 + 1 << " questions correctly." << endl << endl;

								if (Duo1 >= 80 || Duo2 >= 80)
									cout << "You both won! Very impressive! \n \n** WINNERS = BOTH **" << endl << endl;

								else if (Duo1 >= 80 || Duo2 < 80)
									cout << FirstName << " has won! Very impressive! \n \n** WINNER = PLAYER 1 ** " << endl << endl;

								else if (Duo1 < 80 || Duo2 >= 80)
									cout << FirstName2 << " has won! Very impressive! \n \n** WINNER = PLAYER 2 ** " << endl << endl;

								else if (Duo1 < 80 || Duo2 < 80)
									cout << "Both of you have lost :(. Come again next time! \n \n ** WINNER = NONE **" << endl << endl;

								cout << "Have a good day, " << FirstName << " and " << FirstName2 << "!" << endl;
								return 0;
							}

							else if (Duo1 == 1 && Duo2 == 1)
							{
								cout << "Oh... Oh my god... You BOTH got it correct! There are a total of 999 ghosts haunting the Haunted Mansion!" << endl << endl;

								cout << FirstName << " won a total of " << Points1 << " points, and " << FirstName2 << " won a total of " << Points2 << " points this game! " << endl;
								cout << "You've answered " << QuestionsRight1 + 1 << " and " << QuestionsRight2 + 1 << " questions correctly." << endl << endl;

								if (Duo1 >= 80 || Duo2 >= 80)
									cout << "You both won! Very impressive! \n \n** WINNERS = BOTH **" << endl << endl;

								else if (Duo1 >= 80 || Duo2 < 80)
									cout << FirstName << " has won! Very impressive! \n \n** WINNER = PLAYER 1 ** " << endl << endl;

								else if (Duo1 < 80 || Duo2 >= 80)
									cout << FirstName2 << " has won! Very impressive! \n \n** WINNER = PLAYER 2 ** " << endl << endl;

								else if (Duo1 < 80 || Duo2 < 80)
									cout << "Both of you have lost :(. Come again next time! \n \n ** WINNER = NONE **" << endl << endl;

								cout << "Have a good day, " << FirstName << " and " << FirstName2 << "!" << endl;
								return 0;
							}

							else if (Duo1 == 0 && Duo2 == 0)
							{
								cout << "Oh, what a shame. You've lost the bet! Thank you for the points! " << FirstName << " won a total of " << Points1 << " points and " << FirstName2 << " has won a total of " << Points2 << " points. You've answered " << QuestionsRight1 << " and " << QuestionsRight2 << " correctly. ";

								if (Points1 >= 80 && Points2 >= 80)
								{
									cout << "You both still beat the game! Congrats, " << FirstName << " and " << FirstName2 << "!" << endl << endl;
									cout << "** WINNERS = BOTH **" << endl;
								}

								if (Points1 >= 80 && Points2 < 80)
								{
									cout << "Looks like " << FirstName << " is the winner out of the two of you! Congratulations! See you next time~" << endl << endl;
									cout << "** WINNERS = PLAYER 1 **" << endl;
								}

								if (Points2 >= 80 && Points1 < 80)
								{
									cout << "Looks like " << FirstName2 << " is the winner out of the two of you! Congratulations! See you next time~" << endl << endl;
									cout << "** WINNERS = PLAYER 2 **" << endl;

								}

								if (Points1 < 80 || Points2 < 80)
								{
									cout << "You've both lost. Sorry! Thanks for playing, " << FirstName << " and " << FirstName2 << "~" << endl << endl;
									cout << "** WINNERS = NONE **" << endl;
								}

								return 0;
							}
						}
						else if (TryAgain == "N" || TryAgain == "n" || TryAgain == "No" || TryAgain == "NO" || TryAgain == "no")
						{
							cout << "Please reenter your bet, " << FirstName2 << ". If you enter 0 again, I'll boot you from the Trivia Corner!" << endl;
							cin >> PointsBet2;
							cout << "\n";

							if (PointsBet2 > Points2)
								cout << "I knew I couldn't trust you. Sorry, " << FirstName << ", but you have to pay for " << FirstName2 << "'s ignorance. Have a nice day! You both get 0 points." << endl;

							if (PointsBet2 == 0)
								cout << "I knew I couldn't trust you. Sorry, " << FirstName << ", but you have to pay for " << FirstName2 << "'s ignorance. Have a nice day! You both get 0 points." << endl;

							else if (PointsBet2 < 0)
								cout << "I knew I couldn't trust you. Sorry, " << FirstName << ", but you have to pay for " << FirstName2 << "'s ignorance. Have a nice day! You both get 0 points." << endl;

							else if (PointsBet2 > 0)
							{

								Points1 = Points1 - PointsBet1;
								Points2 = Points2 - PointsBet2;

								cout << "Okay! How many ghosts haunt the Haunted Mansion? This is a tricky question! It's your turn to answer, " << FirstName << "." << endl;
								cin.ignore(1000, '\n');
								getline(cin, Question1);

								cout << "What do you think, " << FirstName2 << "?" << endl;
								getline(cin, Question2);
								cout << "\n";

								if (Question1 == "999" || Question1 == "999 Ghosts" || Question1 == "999 ghosts" || Question1 == "999 GHOSTS")
								{
									PointsBet1 = PointsBet1 * 2;
									Points1 = Points1 + PointsBet1;
									Duo1 = 1;
								}

								if (Question2 == "999" || Question2 == "999 Ghosts" || Question2 == "999 ghosts" || Question2 == "999 GHOSTS")
								{
									PointsBet2 = PointsBet2 * 2;
									Points2 = Points2 + PointsBet2;
									Duo2 = 1;
								}

								if (Duo1 == 1 && Duo2 == 0)
								{
									cout << "Oh... Oh my god... " << FirstName << " got it correct! There are a total of 999 ghosts haunting the Haunted Mansion!" << endl << endl;

									cout << FirstName << " won a total of " << Points1 << " points, and " << FirstName2 << " won a total of " << Points2 << " points this game! " << endl;
									cout << "You've answered " << QuestionsRight1 + 1 << " and " << QuestionsRight2 << " questions correctly." << endl << endl;

									if (Duo1 >= 80 || Duo2 >= 80)
										cout << "You both won! Very impressive! \n \n** WINNERS = BOTH **" << endl << endl;

									else if (Duo1 >= 80 || Duo2 < 80)
										cout << FirstName << " has won! Very impressive! \n \n** WINNER = PLAYER 1 ** " << endl << endl;

									else if (Duo1 < 80 || Duo2 >= 80)
										cout << FirstName2 << " has won! Very impressive! \n \n** WINNER = PLAYER 2 ** " << endl << endl;

									else if (Duo1 < 80 || Duo2 < 80)
										cout << "Both of you have lost :(. Come again next time! \n \n ** WINNER = NONE **" << endl << endl;

									cout << "Have a good day, " << FirstName << " and " << FirstName2 << "!" << endl;
									return 0;
								}

								if (Duo1 == 0 && Duo2 == 1)
								{
									cout << "Oh... Oh my god... " << FirstName2 << " got it correct! There are a total of 999 ghosts haunting the Haunted Mansion!" << endl << endl;

									cout << FirstName << " won a total of " << Points1 << " points, and " << FirstName2 << " won a total of " << Points2 << " points this game! " << endl;
									cout << "You've answered " << QuestionsRight1 << " and " << QuestionsRight2 + 1 << " questions correctly." << endl << endl;

									if (Duo1 >= 80 || Duo2 >= 80)
										cout << "You both won! Very impressive! \n \n** WINNERS = BOTH **" << endl << endl;

									else if (Duo1 >= 80 || Duo2 < 80)
										cout << FirstName << " has won! Very impressive! \n \n** WINNER = PLAYER 1 ** " << endl << endl;

									else if (Duo1 < 80 || Duo2 >= 80)
										cout << FirstName2 << " has won! Very impressive! \n \n** WINNER = PLAYER 2 ** " << endl << endl;

									else if (Duo1 < 80 || Duo2 < 80)
										cout << "Both of you have lost :(. Come again next time! \n \n ** WINNER = NONE **" << endl << endl;

									cout << "Have a good day, " << FirstName << " and " << FirstName2 << "!" << endl;
									return 0;
								}

								else if (Duo1 == 1 && Duo2 == 1)
								{
									cout << "Oh... Oh my god... You BOTH got it correct! There are a total of 999 ghosts haunting the Haunted Mansion!" << endl << endl;

									cout << FirstName << " won a total of " << Points1 << " points, and " << FirstName2 << " won a total of " << Points2 << " points this game! " << endl;
									cout << "You've answered " << QuestionsRight1 + 1 << " and " << QuestionsRight2 + 1 << " questions correctly." << endl << endl;

									if (Duo1 >= 80 || Duo2 >= 80)
										cout << "You both won! Very impressive! \n \n** WINNERS = BOTH **" << endl << endl;

									else if (Duo1 >= 80 || Duo2 < 80)
										cout << FirstName << " has won! Very impressive! \n \n** WINNER = PLAYER 1 ** " << endl << endl;

									else if (Duo1 < 80 || Duo2 >= 80)
										cout << FirstName2 << " has won! Very impressive! \n \n** WINNER = PLAYER 2 ** " << endl << endl;

									else if (Duo1 < 80 || Duo2 < 80)
										cout << "Both of you have lost :(. Come again next time! \n \n ** WINNER = NONE **" << endl << endl;

									cout << "Have a good day, " << FirstName << " and " << FirstName2 << "!" << endl;
									return 0;
								}

								else if (Duo1 == 0 && Duo2 == 0)
								{
									cout << "Oh, what a shame. You've lost the bet! Thank you for the points! " << FirstName << " won a total of " << Points1 << " points and " << FirstName2 << " has won a total of " << Points2 << " points. You've answered " << QuestionsRight1 << " and " << QuestionsRight2 << " correctly. ";

									if (Points1 >= 80 && Points2 >= 80)
									{
										cout << "You both still beat the game! Congrats, " << FirstName << " and " << FirstName2 << "!" << endl << endl;
										cout << "** WINNERS = BOTH **" << endl;
									}

									if (Points1 >= 80 && Points2 < 80)
									{
										cout << "Looks like " << FirstName << " is the winner out of the two of you! Congratulations! See you next time~" << endl << endl;
										cout << "** WINNERS = PLAYER 1 **" << endl;
									}

									if (Points2 >= 80 && Points1 < 80)
									{
										cout << "Looks like " << FirstName2 << " is the winner out of the two of you! Congratulations! See you next time~" << endl << endl;
										cout << "** WINNERS = PLAYER 2 **" << endl;

									}

									if (Points1 < 80 || Points2 < 80)
									{
										cout << "You've both lost. Sorry! Thanks for playing, " << FirstName << " and " << FirstName2 << "~" << endl << endl;
										cout << "** WINNERS = NONE **" << endl;
									}

									return 0;
								}
							}
						}
					}

					if (PointsBet1 > 0 && PointsBet2 > 0)
					{
						cout << "Bets have been placed! You have betted " << PointsBet1 << " and " << PointsBet2 << "points. Here we go!\n";

						Points1 = Points1 - PointsBet1;
						Points2 = Points2 - PointsBet2;

						cout << "How many ghosts haunt the Haunted Mansion? This is a tricky question! It's time to answer, " << FirstName << "." << endl;
						cin.ignore(1000, '\n');
						getline(cin, Question1);

						cout << "What do you have to say, " << FirstName2 << "?" << endl;
						getline(cin, Question2);
						cout << "\n";

						if (Question1 == "999" || Question1 == "999 Ghosts" || Question1 == "999 ghosts" || Question1 == "999 GHOSTS")
						{
							PointsBet1 = PointsBet1 * 2;
							Points1 = Points1 + PointsBet1;
							Duo1 = 1;
						}

						if (Question2 == "999" || Question2 == "999 Ghosts" || Question2 == "999 ghosts" || Question2 == "999 GHOSTS")
						{
							PointsBet2 = PointsBet2 * 2;
							Points2 = Points2 + PointsBet2;
							Duo2 = 1;
						}

						if (Duo1 == 1 && Duo2 == 0)
						{
							cout << "Oh... Oh my god... " << FirstName << " got it correct! There are a total of 999 ghosts haunting the Haunted Mansion!" << endl << endl;

							cout << FirstName << " won a total of " << Points1 << " points, and " << FirstName2 << " won a total of " << Points2 << " points this game! " << endl;
							cout << "You've answered " << QuestionsRight1 + 1 << " and " << QuestionsRight2 << " questions correctly." << endl << endl;

							if (Duo1 >= 80 || Duo2 >= 80)
								cout << "You both won! Very impressive! \n \n** WINNERS = BOTH **" << endl << endl;

							else if (Duo1 >= 80 || Duo2 < 80)
								cout << FirstName << " has won! Very impressive! \n \n** WINNER = PLAYER 1 ** " << endl << endl;

							else if (Duo1 < 80 || Duo2 >= 80)
								cout << FirstName2 << " has won! Very impressive! \n \n** WINNER = PLAYER 2 ** " << endl << endl;

							else if (Duo1 < 80 || Duo2 < 80)
								cout << "Both of you have lost :(. Come again next time! \n \n ** WINNER = NONE **" << endl << endl;

							cout << "Have a good day, " << FirstName << " and " << FirstName2 << "!" << endl;
							return 0;
						}

						if (Duo1 == 0 && Duo2 == 1)
						{
							cout << "Oh... Oh my god... " << FirstName2 << " got it correct! There are a total of 999 ghosts haunting the Haunted Mansion!" << endl << endl;

							cout << FirstName << " won a total of " << Points1 << " points, and " << FirstName2 << " won a total of " << Points2 << " points this game! " << endl;
							cout << "You've answered " << QuestionsRight1 << " and " << QuestionsRight2 + 1 << " questions correctly." << endl << endl;

							if (Duo1 >= 80 || Duo2 >= 80)
								cout << "You both won! Very impressive! \n \n** WINNERS = BOTH **" << endl << endl;

							else if (Duo1 >= 80 || Duo2 < 80)
								cout << FirstName << " has won! Very impressive! \n \n** WINNER = PLAYER 1 ** " << endl << endl;

							else if (Duo1 < 80 || Duo2 >= 80)
								cout << FirstName2 << " has won! Very impressive! \n \n** WINNER = PLAYER 2 ** " << endl << endl;

							else if (Duo1 < 80 || Duo2 < 80)
								cout << "Both of you have lost :(. Come again next time! \n \n ** WINNER = NONE **" << endl << endl;

							cout << "Have a good day, " << FirstName << " and " << FirstName2 << "!" << endl;
							return 0;
						}

						else if (Duo1 == 1 && Duo2 == 1)
						{
							cout << "Oh... Oh my god... You BOTH got it correct! There are a total of 999 ghosts haunting the Haunted Mansion!" << endl << endl;

							cout << FirstName << " won a total of " << Points1 << " points, and " << FirstName2 << " won a total of " << Points2 << " points this game! " << endl;
							cout << "You've answered " << QuestionsRight1 + 1 << " and " << QuestionsRight2 + 1 << " questions correctly." << endl << endl;

							if (Duo1 >= 80 || Duo2 >= 80)
								cout << "You both won! Very impressive! \n \n** WINNERS = BOTH **" << endl << endl;

							else if (Duo1 >= 80 || Duo2 < 80)
								cout << FirstName << " has won! Very impressive! \n \n** WINNER = PLAYER 1 ** " << endl << endl;

							else if (Duo1 < 80 || Duo2 >= 80)
								cout << FirstName2 << " has won! Very impressive! \n \n** WINNER = PLAYER 2 ** " << endl << endl;

							else if (Duo1 < 80 || Duo2 < 80)
								cout << "Both of you have lost :(. Come again next time! \n \n ** WINNER = NONE **" << endl << endl;

							cout << "Have a good day, " << FirstName << " and " << FirstName2 << "!" << endl;
							return 0;
						}

						else if (Duo1 == 0 && Duo2 == 0)
						{
							cout << "Oh, what a shame. You've lost the bet! Thank you for the points! " << FirstName << " won a total of " << Points1 << " points and " << FirstName2 << " has won a total of " << Points2 << " points. You've answered " << QuestionsRight1 << " and " << QuestionsRight2 << " correctly. ";

							if (Points1 >= 80 && Points2 >= 80)
							{
								cout << "You both still beat the game! Congrats, " << FirstName << " and " << FirstName2 << "!" << endl << endl;
								cout << "** WINNERS = BOTH **" << endl;
							}

							if (Points1 >= 80 && Points2 < 80)
							{
								cout << "Looks like " << FirstName << " is the winner out of the two of you! Congratulations! See you next time~" << endl << endl;
								cout << "** WINNERS = PLAYER 1 **" << endl;
							}

							if (Points2 >= 80 && Points1 < 80)
							{
								cout << "Looks like " << FirstName2 << " is the winner out of the two of you! Congratulations! See you next time~" << endl << endl;
								cout << "** WINNERS = PLAYER 2 **" << endl;

							}

							if (Points1 < 80 || Points2 < 80)
							{
								cout << "You've both lost. Sorry! Thanks for playing, " << FirstName << " and " << FirstName2 << "~" << endl << endl;
								cout << "** WINNERS = NONE **" << endl;
							}

							return 0;
						}

					}

					if (PointsBet1 < 0 || PointsBet2 < 0)
					{
						cout << "Did you think you could break the system? Shame on you! You've both lost! I've taken away all of your points. You both now have a total of 0 points. Good bye, " << FirstName << " and " << FirstName2 << "! >:(" << endl << endl;
						cout << "** WINNERS = NONE **" << endl;
						return 0;
					}

				}


				else
					cout << "That's okay! You've both won anyways, answering a total of " << QuestionsRight1 << " questions and " << QuestionsRight2 << " correctly! Enjoy the rest of your day, " << FirstName << " and " << FirstName2 << "!" << endl << endl;
				cout << "** WINNERS = BOTH **" << endl;
				return 0;
			}


			if (Points < 80)
			{
				cout << "Bummer, you lost! I'm sorry that neither of you didn't earn enough points. " << FirstName << "earned " << Points1 << " points, which is " << 80 - Points1 << " away from winning, while " << FirstName2 << " earned a total of " << Points2 << " points, which is " << 80 - Points2 << " from winning." << endl;
				cout << FirstName << " answered a total of " << QuestionsRight1 << " questions correctly, while " << FirstName2 << " answered a total of " << QuestionsRight2 << " questions correctly." << endl;

				cout << "See you later, " << FirstName << " and " << FirstName2 << "!" << endl << endl;
				cout << "** WINNERS = NONE **" << endl;
				return 0;
			}
		}
	}
}

