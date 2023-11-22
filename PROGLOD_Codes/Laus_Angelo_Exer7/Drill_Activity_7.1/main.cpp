/*

Using call by value, create a simple zodiac sign program. The system should ask the birth month and the birth date of a person. (remember you already did this program from previous exercise). The output should display the zodiac sign and its corresponding horoscope prediction

The corresponding horoscope predictions should be in a function.

*/

#include <iostream>
#include <string>
using namespace std;

void Aries();
void Taurus();
void Gemini();
void Cancer();
void Leo();
void Virgo();
void Libra();
void Scorpio();
void Sagittarius();
void Capricorn();
void Aquarius();
void Pisces();

        char input;

void main() {

    do {

        int month, day;

        cout << "Enter your month of birth: ";
        cin >> month;
        cout << "\nEnter your day of birth: ";
        cin >> day;
        cout << "\n\n";

            if (month == 1)
        {
            if (day <= 19)
            {
                Capricorn();
            }
            else
            {
                Aquarius();
            }
        }
        else if (month == 2)
        {
            if (day <= 18)
            {
                Aquarius();
            }
            else
            {
                Pisces();
            }
        }
        else if (month == 3)
        {
            if (day <= 20)
            {
                Pisces();
            }
            else
            {
                Aries();
            }
        }
        else if (month == 4)
        {
            if (day <= 19)
            {
                Aries();
            }
            else
            {
                Taurus();
            }
        }
        else if (month == 5)
        {
            if (day <= 20)
            {
                Taurus();
            }
            else
            {
            Gemini();
            }
        }
        else if (month == 6)
        {
            if (day <= 20)
            {
            Gemini();
            }
            else
            {
                Cancer();
            }
        }
        else if (month == 7)
        {
            if (day <= 22)
            {
                Cancer();
            }
            else
            {
                Leo();
            }
        }
        else if (month == 8)
        {
            if (day <= 22)
            {
            Leo();
            }
            else
            {
                Virgo();
            }
        }
        else if (month == 9)
        {
            if (day <= 22)
            {
                Virgo();
            }
            else
            {
                Libra();
            }
        }
        else if (month == 10)
        {
            if (day <= 22)
            {
                Libra();
            }
            else
            {
                Scorpio();
            }
        }
        else if (month == 11)
        {
            if (day <= 21)
            {
            Scorpio();
            }
            else
            {
                Sagittarius();
            }
        }
        else if (month == 12)
        {
            if (day <= 21)
            {
            Sagittarius();
            }
            else
            {
                Capricorn();
            }
        }
        else
        {
            cout << "Invalid input.";
        }

        cout << " \n\nQuit? (Y/N): ";
        cin >> input;

    } while (input != 'Y' || input != 'y');

    cout << "Goodbye!";
    system("cls");
    cout << "\n";

}

void Aries() {

    cout << "Your zodiac sign is Aries.\n";
    cout << "Publications could bring some fascinating new knowledge your way. You'll want to discuss it with friends. Conversations about any subject should be informative and beneficial since your mind is so perceptive and retentive. Affection for friends, relatives, and your special someone should fill your heart today. An intimate evening with your partner will be especially fulfilling.";

}

void Taurus() {

    cout << "Your zodiac sign is Taurus.\n";
    cout << "Valuable tips to increase your income could come your way today, possibly from a close friend or colleague. You should feel well and look particularly attractive. Your approach to others may be more outgoing than usual. Pets could be a source of joy. Enjoy it while you can! In the evening, indulge your artistic streak.";
}

void Gemini() {

    cout << "Your zodiac sign is Gemini.\n";
    cout << "Romance and art are the keys today. You could feel spiritually inspired by great music, paintings, poetry, or drama. You might want to share these feelings with a special someone. Children could also be a source of pleasure. Their innocence make you feel young again. In the evening, write your impressions of the day.";

}

void Cancer() {

    cout << "Your zodiac sign is Cancer.\n";
    cout << "Today you won't be indifferent to anything. Good news could elevate you to near ecstasy. Bad news could send you to the depths of despair. Visitors provide a welcome distraction, while spiritual pursuits may be your favorite topic of conversation. This isn't going to be a predictable day, but it will be wonderful.";

}

void Leo() {

    cout << "Your zodiac sign is Leo.\n";
    cout << "A desire to learn through a group activity - a lecture or workshop, perhaps - might put you in the middle of a crowd. You'll find it exhilarating. If you're planning to attend such an event, don't go alone. Your enjoyment will be heightened by the presence of a close friend or your partner.";

}

void Virgo() {

    cout << "Your zodiac sign is Virgo.\n";
    cout << "You've had recent success in your profession. You've worked hard and learned things, and this hasn't been lost on those above you in the hierarchy. You have earned new respect for yourself and your skills. You might want to put one of your gifts to work. This could be an artistic talent or the gift of healing. Make the most of it!";

}

void Libra() {

    cout << "Your zodiac sign is Libra.\n";
    cout << "Today should be very fortunate, particularly where love is concerned. Relations with your special someone could be closer than ever. You might even feel warm and loving toward everyone, even strangers. Your spiritual beliefs could have as much to do with this as anything else. You should feel especially intuitive. Optimism and enthusiasm rule, but don't forget to be realistic!";
    
}

void Scorpio() {

    cout << "Your zodiac sign is Scorpio.\n";
    cout << "You should feel especially romantic and sexy today. Tonight should be wonderful if you can spend it in the company of your significant other. Some vivid dreams could haunt your sleep tonight, almost to the point where you don't want to wake up. Write them down and try to figure out what they mean later.";

}

void Sagittarius() {

    cout << "Your zodiac sign is Sagittarius.\n";
    cout << "Social events could take up a lot of your time tonight, and you may enjoy being in contact with friends you haven't seen for a while. Conversations should be fascinating. You may even discover a new interest. An encounter with your partner could prove more passionate than usual. This should be a thoroughly enjoyable day as long as you conserve your energy.";

}

void Capricorn() {

    cout << "Your zodiac sign is Capricorn.\n";
    cout << "Work and career matters could finally bring you the success and good fortune you've been hoping for. This may be acknowledgement for effort and dedication as well as hard work. Expect a raise, and increased respect and status among friends and co-workers. Don't celebrate so much that you suffer the effects of overindulging!";

}

void Aquarius() {

    cout << "Your zodiac sign is Aquarius\n";
    cout << "Love of someone from far away could be very much on your mind today, and perhaps love for the place where the person lives. You may be bored with your routine and anxious to embrace adventure. This is a good time to plan a vacation, particularly if accompanied by a partner or close friend. Your artistic instincts could also be inspired by geniuses from other cultures.";

}

void Pisces() {

    cout << "Your zodiac sign is Pisces.\n";
    cout << "A number of interesting visitors could show up today. Perhaps you're having a party or hosting an activity. These callers could include people in the sciences, or people who deal with money, such as bankers, investment counselors, or real estate brokers. Listen to what they have to say. You could learn something that boosts your financial standing.";
    
}