#include <iostream> 
#include <string> 

using namespace std;

int main() {

// Declaring Variables:
  string name;

  int steps;
  double hrsSlept;
  string favExcersize;
  string Gender;
  string corrGender1 = "M", corrGender2 = "m", corrGender3 = "F", corrGender4 = "f", corrGender5 = "Male", corrGender6 = "male", corrGender7 = "Female", corrGender8 = "female";

  cout << "What's your name?: ";
  cin >> name;

  cout << "What's your gender? (M/F): "; 
  cin >> Gender;

  if (Gender == corrGender1 || Gender == corrGender2 || Gender == corrGender5 || Gender == corrGender6) {

  cout << "Hello Mr. " << name << "!" << " I hope we were productive today! Speaking of productivity, how many steps did you take on this fine day?: "; 

  }else{
    cout << "Hello Ms. " << name << "!" << " I hope we were productive today! Speaking of productivity, how many steps did you take on this fine day?: ";

  }

  cin >> steps;

  if (steps >= 10000){

    cout << "Wow, we got the next Mr. Olympia over here, get a load of this guy, " << steps << " steps is no joke, keep it up! Oh also, what's your favorite excersize? ";

  }else{

    cout << "bruh, " << steps << " step is actually laughable, you're a disgrace, NOW GET UP AND WALK DUDE, DAMN BRUH. But before you go, what's your favorite excersize? ";


  }

  cin >> favExcersize;


  if ((steps >= 10000 ) && ((favExcersize == "Running") || (favExcersize == "running") || (favExcersize == "Run") || (favExcersize == "run" )))  {

    cout << "Honestly it makes sense since you totalled " << steps << " steps today, no surprise there! You're amazing dude, keep it up! However, I have one last question for you, how many hours did you sleep last night?: " << endl; 

  }

  if ((steps < 10000) && ((favExcersize == "Running") || (favExcersize == "running") || (favExcersize == "Run") || (favExcersize == "run" ))){

    cout << "Bro, how is your favorite excercise Running? you literally only took " << steps << " today and you call yourself a runner? GET UP AND RUN AND CLAIM THAT TITLE!!! Before you run however, how many hours did you sleep last night?: ";

  } 

  if ((steps >= 10000) && ((favExcersize == "Walking") || (favExcersize == "walking") || (favExcersize == "Walk") || (favExcersize == "walk"))) {

  cout << "Honestly it makes sense since you walked " << steps << " steps today, no surprise there! You're amazing dude, keep it up! However, I need to know how many hours you slept last night?: ";

  }

  if ((steps < 10000) && ((favExcersize == "Walking") || (favExcersize == "walking") || (favExcersize == "Walk") || (favExcersize == "walk"))){

    cout << "Your favorite excercise is walking? You literally only walked " << steps << " today and you call yourself a walker? GET UP AND WALK AND CLAIM THAT TITLE!!! Before you walk however, how many hours did you sleep last night?" ;

  }

  cin >> hrsSlept;
       // end of if statement for favExcercise == running
  if (hrsSlept < 7){

    cout << "..." << hrsSlept << " hours is not enough sleep. You seriously need to sleep some more dude. Since you walked " << steps << " , favorite excersise is " << favExcersize << " and a dude? Sleep more. " ;
      }else{

    cout << "Well done! Mr. " << name << "!" << " Today was a great day for you! You totalled " << steps << " Steps, and stated that your favorite excersize is " <<favExcersize<< ", I'm so proud of you :) ";



  } 
  return 0;
}