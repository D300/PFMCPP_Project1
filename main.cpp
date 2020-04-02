#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    e
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 
 5) When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:       snail     
//  action 1:   a snail cringes
snail.cringe();
//  action 2:   a snail drinks
snail.drink();
//  action 3:   a snail inflates (to suprise)
snail.inflate();
 
//  2)
//  Noun:       cocacola
//  action 1:   cocacola sucks
cocaCola.suck();
//  action 2:   cocacola overloads
cocaCola.overload();
//  action 3:   cocacola sticks
cocaCola.stick();

//  3)
//  Noun:       bear
//  action 1:   bear hunts
bear.hunt();
//  action 2:   bear eats
bear.eat();
//  action 3:   bear hits
bear.hit();

//  4)
//  Noun:       bird
//  action 1:   bird plays sax
bird.playSax();
//  action 2:   bird smokes dope
bird.smokeDope();
//  action 3:   bird nails
bird.nail();

//  5)
//  Noun:       rhythm
//  action 1:   rhythm resonates 
rhythm.resonate();
//  action 2:   rhythm connects
rhythm.connect();
//  action 3:   rhythm plays
rhythm.play();

//  6)
//  Noun:       bassdrum
//  action 1:   bassdrum blasts
bassDrum.blast();   
//  action 2:   bassdrum gets muted (although its passive I think its ok)
bassDrum.mute();
//  action 3:   bassdrum hits
bassDrum.hit();

//  7)          
//  Noun:       kangaroo
//  action 1:   kangaroo jumps
kangaroo.jump();
//  action 2:   kangaroo kisses
kangaroo.kiss();
//  action 3:   kangaroo chills
kangaroo.chill();

//  8)
//  Noun:       pattern
//  action 1:   pattern changes
pattern.change();
//  action 2:   pattern permutate
pattern.permutate();
//  action 3:   pattern counterpoints
pattern.counterpoint();

//  9)
//  Noun:       phone
//  action 1:   phone rings
phone.ring();
//  action 2:   phone annoys
phone.annoy();
//  action 3:   phone vibrates
phone.vibrate();

//  10)
//  Noun:       noun
//  action 1:   noun makes actions
noun.makeAction();
//  action 2:   noun entertains
noun.entertain();
//  action 3:   noun illuminates
noun.illuminate();

// additional change for another commit because first commit&push didnt work

#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
