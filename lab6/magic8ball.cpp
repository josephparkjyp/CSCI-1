#include <iostream>
#include <string>
using namespace std;

int main(void) {
    
    const string responses[] = {
        "It is certain",
        "It is decidedly so",
        "Without a doubt",
        "Yes definitely",
        "You may rely on it",
        "As I see it, yes",
        "Most likely",
        "Outlook good",
        "Yes",
        "Signs point to yes",
        "Reply hazy, try again",
        "Ask again later",
        "Better not tell you now",
        "Cannot predict now",
        "Concentrate and ask again",
        "Don't count on it",
        "My reply is no",
        "My sources say no",
        "Outlook not so good",
        "Very doubtful"
    };
    
    string question;
    srand(time(0));

    cout << "\n\nMAGIC 8 BALL";
    cout <<"\nASK ANY QUESTION, AND THE MAGIC 8 BALL WILL GIVE YOU AN ANSWER";

    do {
        cout <<"\n\nYour question (type \"n\" to quit): ";
        getline(cin, question);
        if (question == "n") break;

        cout << responses[rand() % 20];

    } while (true);
    
    return 0;
}