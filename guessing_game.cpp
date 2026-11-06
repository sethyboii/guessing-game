#include <iostream>
#include <random>
#include <thread>
#include <chrono>
using namespace std; 


int main(){

    int guess;

    cout <<"yo welcome to the fucking game haha " << endl;
    this_thread::sleep_for(chrono::seconds(3));
    cout <<"so here's the instructions:" << endl;
    this_thread::sleep_for(chrono::seconds(3));

    cout <<"please pick a no. from fucking 1-100" << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout <<"."<< endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout <<"."<< endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout <<"."<< endl;
    this_thread::sleep_for(chrono::seconds(1));

    cout <<"you only got 10 chances to guess" << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout <<"."<< endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout <<"."<< endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout <<"."<< endl;
    this_thread::sleep_for(chrono::seconds(1));

    cout <<"you got this bitch!" << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout <<"."<< endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout <<"."<< endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout <<"."<< endl;
    this_thread::sleep_for(chrono::seconds(1));

    cout <<"so good fucking luck you piece of shit" << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout <<"."<< endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout <<"."<< endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout <<"."<< endl;
    this_thread::sleep_for(chrono::seconds(1));

    // generating of a random number
    
    random_device rd;
    mt19937 generatedNumber(rd());
    uniform_int_distribution<> range(1,100);

    int chosenNumber = range(generatedNumber);

    for(int i = 4; i >= 1; i--){
        
        cout << "remaining tries: " << i << endl;
        cout << "guess bitch:" << endl;
        cin >> guess;
        if(guess == chosenNumber){
            cout << "Congratulations, tama ka yayy" << endl;
            return 0;
        }
        else{
            if(guess > chosenNumber){
                cout << "lower bes" << endl;
            }
            else if(guess < chosenNumber){
                cout << "higher bes" << endl;
            }
        }
    }

    cout << "eengkkk" << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "ran out of tries" << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "the correct number is: " << chosenNumber << endl;
    cout << "better luck next time, tanga" << endl;
    

    




}