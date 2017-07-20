#include <string>
#include <iostream>
#include <thread>
#include <chrono>  

using namespace std;


void delayScroll(int delayMS, int lineCount);
 
void delayScroll(int delayMS, int lineCount)
{
    for (int i = 0; i < lineCount; i++)
    {
        cout << "" << endl;
        this_thread::sleep_for(chrono::milliseconds(delayMS));
    }
} 
bool timeToTroll();
 
bool timeToTroll()
{
    char confirmation;
    cout << "Enter 'y' to launch or 'n' to cancel." << endl;
    cin >> confirmation;
     
    if (confirmation == 'y')
        return true;
 
    else
        return false;    
}
 
int main()
{
    bool launch;
    launch = timeToTroll();
 
    if (launch == true)
    {
        for (int i = 10; i > 0; i--)
        {
            cout << i << " seconds until launch" << endl;
            this_thread::sleep_for(chrono::milliseconds(1000));
    delayScroll(10, 30);
        }
        cout << "We're no strangers to love" << endl <<
"You know the rules an d so d o I" << endl <<
"A full commitments what Im thinking of" << endl <<
"You wouldn't get this from any other guy"<< endl <<
"i just want to tell you how I'm feeling" << endl <<
"gotta make you understand" << endl <<

"Never gonna give you up, never gonna let you down" << endl <<
"Never gonna run around an d desert you" << endl <<
"Never gonna make you cry, never gonna say goodbye" << endl <<
"Never gonna tell a lie an d hurt you" << endl <<

"We've known each other for so long" << endl <<
"Your hearts been aching but youre too shy to say it" << endl <<
"Inside we both know what's been going on" << endl <<
"we know the game an d we're gonna play it" << endl <<

"And If you ask me how I'm feeling" << endl <<
"Dont tell me youre too blind to see" << endl <<

"Never gonna give you up, never gonna let you down"<< endl <<
"Never gonna run around an desert you"<< endl <<
"Never gonna make you cry, never gonna say goodbye"<< endl <<
"Never gonna tell a lie an hurt you"<< endl <<

"Never gonna give you up, never gonna let you down" << endl <<
"Never gonna run around an desert you" << endl <<
"Never gonna make you cry, never gonna say goodbye" << endl <<
"Never gonna tell a lie an hurt you" << endl <<

"We've known each other for so long" << endl <<
"Your hearts been aching but youre too shy to say it" << endl <<
"Inside we both know what's been going on" << endl <<
"We know the game an d we're gonna play it" << endl <<

"I just want to tell you how I'm feeling" << endl <<
"Gotta make you understand" << endl <<

"Never gonna give you up, never gonna let you down" << endl <<
"Never gonna run around an desert you" << endl <<
"Never gonna make you cry, never gonna say goodbye" << endl <<
"Never gonna tell a lie an hurt you" << endl;


"I ain't the sharpest tool in the shed" << endl <<
"he was looking kind of dumb with her finger and her thumb" << endl <<
"In the shape of an L on her forehead" << endl <<

"Well the years start coming and they don't stop coming"<< endl <<
"ed to the rules and I hit the ground running"<< endl <<
"Didn't make sense not to live for fun"<< endl <<
"Your brain gets smart but your head gets dumb"<< endl <<
"So much to do, so much to see"<< endl <<
"So what's wrong with taking the back streets?"<< endl <<
"You'll never know if you don't go"<< endl <<
"You'll never shine if you don't glow"<< endl <<

"Hey now, you're an all-star, get your game on, go play"<< endl <<
"Hey now, you're a rock star, get the show on, get paid"<< endl <<
"And all that glitters is gold"<< endl <<
"only shooting stars break the mold"<< endl <<

"It's a cool place and they say it gets colder"<< endl <<
"You're bundled up now, wait till you get older"<< endl <<
"But the meteor men beg to differ"<< endl <<
"Judging by the hole in the satellite picture"<< endl <<
"The ice we skate is getting pretty thin"<< endl <<
"The water's getting warm so you might as well swim"<< endl <<
"My world's on fire, how about yours?"<< endl <<
"That's the way I like it and I never get bored"<< endl <<

"Hey now, you're an all-star, get your game on, go play"<< endl <<
"Hey now, you're a rock star, get the show on, get paid"<< endl <<
"All that glitters is gold"<< endl <<
"Only shooting stars break the mold"<< endl <<

"Hey now, you're an all-star, get your game on, go play"<< endl <<
"Hey now, you're a rock star, get the show, on get paid"<< endl <<
"And all that glitters is gold"<< endl <<
"Only shooting stars"<< endl <<

"somebody once asked could I spare some change for gas?"<< endl <<
"I need to get myself away from this place"<< endl <<
"I said yep what a concept"<< endl <<
"I could use a little fuel myself"<< endl <<
"And we could all use a little change"<< endl <<

"Well, the years start coming and they don't stop coming"<< endl <<
"Fed to the rules and I hit the ground running"<< endl <<
"Didn't make sense not to live for fun"<< endl <<
"Your brain gets smart but your head gets dumb"<< endl <<
"So much to do, so much to see"<< endl <<
"So what's wrong with taking the back streets?":<< endl <<
"You'll never know if you don't go (go!)"<< endl <<
"You'll never shine if you don't glow"<< endl <<

"Hey now, you're an all-star, get your game on, go play" << endl << 
"Hey now, you're a rock star, get the show on, get paid" << endl <<
"And all that glitters is gold" << endl <<
"Only shooting stars break the mold" << endl <<

"And all that glitters is gold"<< endl <<
"Only shooting stars break the mold"<< endl;
    }
    else
    {
        cout << "The launch has been aborted." << endl;
    }

    
    
}

