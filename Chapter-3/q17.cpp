// Program: Horoscope Fortune Teller

#include <iostream>
#include <string>
using namespace std;


string getZodiac(int month, int day) {
    if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) return "Aries";
    else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) return "Taurus";
    else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) return "Gemini";
    else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) return "Cancer";
    else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) return "Leo";
    else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) return "Virgo";
    else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) return "Libra";
    else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) return "Scorpio";
    else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) return "Sagittarius";
    else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) return "Capricorn";
    else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) return "Aquarius";
    else return "Pisces"; 
}


string getFortune(string sign) {
    if (sign == "Aries") return "Aries debug faster than compilers. Today, a bug surrenders before you even run the code.";
    if (sign == "Taurus") return "Taurus stay calm when programs crash. Patience saves you from stack overflows today.";
    if (sign == "Gemini") return "Gemini are experts at figuring out the behavior of complicated programs. Tonight, your clever patch wins applause.";
    if (sign == "Cancer") return "Cancer sense where memory leaks hide. Trust your instincts, your pointer arithmetic is strong.";
    if (sign == "Leo") return "Leo shine in meetings. Today, your pull request merges without conflicts.";
    if (sign == "Virgo") return "Virgo write code so clean even linters take a day off. Expect compliments from your teammates.";
    if (sign == "Libra") return "Libra balance tabs and spaces. Today, harmony returns to your project repo.";
    if (sign == "Scorpio") return "Scorpio transform legacy code into gold. Beware though, a hidden bug tests your resolve.";
    if (sign == "Sagittarius") return "Sagittarius aim high with algorithms. Today, your Big-O improves dramatically.";
    if (sign == "Capricorn") return "Capricorn grind through deadlines like pros. Tonight, enjoy the reward of zero compile errors.";
    if (sign == "Aquarius") return "Aquarius dream in futuristic frameworks. A bold idea you suggest today changes everything.";
    if (sign == "Pisces") return "Pisces feel where bugs swim in the depths. Trust your intuition, and you'll find the fix.";
    return "The stars are rebooting. Try again later!";
}

int main() {
    int month, day;
    cout << "Please enter your birthday (month and day): ";
    cin >> month >> day;

    string sign = getZodiac(month, day);
    cout << sign << ": " << getFortune(sign) << endl;

    return 0;
}
