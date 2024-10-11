#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>


using namespace std;
void Show_menu()
{
    cout << "Menu " << endl;
    cout << "=========================" << endl;
    cout << "1. Guess number " << endl;
    cout << "2. Rock, Paper, Scissors" << endl;
    cout << "3. Dice " << endl;
    cout << "4. Hangman " << endl;
    cout << "5. Exit " << endl;
    cout << "=========================" << endl;
}
// clear console 
static void clearConsole() {
    system("cls");
}
// Угадай число 
void game1() // Угадай число 
{
    srand(time(NULL));
    clearConsole();
    int bot_chislo = rand() % 101, us_chislo, count = 0;
    bool stop_igra = true;
    cout << "Welcome to the game - Guess the Number! " << endl;
    cout << "Your goal is to guess the number that the Robot has chosen from 0 to 100" << endl;
    while (stop_igra) {
        cout << "Please enter your number: ";
        cin >> us_chislo;
        count++;

        if (bot_chislo > us_chislo)
        {
            cout << "The guessed number is higher" << endl << endl;
        }

        else if (bot_chislo < us_chislo)
        {
            cout << "The guessed number is lower" << endl << endl;
        }

        else if (bot_chislo == us_chislo)
        {
            cin.get();
            cout << "Congratulations! Number - "<< bot_chislo << "\nYou guessed the number in " << count << " attempts!" << endl;
            cin.get();
            stop_igra = false;
            clearConsole();
        }
    }
}
// К Н Б
 void game2()
{ 
    clearConsole();
    string nick, bot, us;
    string s = "Scissors", r = "Rock", p = "Paper";
    string spisok[] = { s,r,p };
    cout << "Welcome to the game Rock,Paper,Scissors!" << endl << endl;
   /* cout << "Please, enter your name: ";
    cin >> nick;*/
    cout << "Please choose move:\n===================================\n" << r << '\n' << '\n' << p << '\n' << '\n' << s << '\n' << "===================================" << '\n' << endl;
    cin >> us;
    if (us == r) 
    {
        bot = spisok[rand() % 3];
        if (bot == s) 
        {
            cout << "You win!" << endl ; cout << "Rock VS " << bot << endl;
        }
        else if (bot == r) {
            cout << "Draw!" << endl ; cout << "Rock VS " << bot << endl;
        }
        else if (bot == p) {
            cout << "You lose!" << endl; cout << "Rock VS " << bot << endl;
        }
    }
    else if (us == p) {
        bot = spisok[rand() % 3];
        if (bot == r) {
            cout << "You win!" << endl ; cout << "Paper VS " << bot << endl;
        }
        else if (bot == p) {
            cout << "Draw!" << endl ; cout << "Paper VS " << bot << endl;
        }
        else if (bot == s) {
            cin.get();
            cout << "You lose!" << endl ; cout << "Paper VS " << bot << endl;
            cin.get();
            clearConsole();

        }
    }
    else if (us == s) {
        bot = spisok[rand() % 3];
        if (bot == p) {
            cin.get();
            cout << "You win!" << endl ; cout << "Scissors VS " << bot << endl;
            cin.get();
            clearConsole();
        }
        else if (bot == s) {
            cout << "Draw!" << endl ; cout << "Scissors VS " << bot << endl;
        }
        else if (bot == r) {
            cout << "You lose!" << endl ; cout << "Scissors VS " << bot << endl;
        }
    }
    cin.get();
    cin.get();
    clearConsole();
}
// Комплектующие костей 
static void print_1()
{
    cout << "##########" << endl;
    cout << "##########" << endl;
    cout << "##########" << endl;
    cout << "####  ####" << endl;
    cout << "##########" << endl;
    cout << "##########" << endl;
    cout << "##########" << endl << endl;
}
static void print_2()
{
    cout << "##########" << endl;
    cout << "#######  #" << endl;
    cout << "##########" << endl;
    cout << "##########" << endl;
    cout << "##########" << endl;
    cout << "##  ######" << endl;
    cout << "##########" << endl << endl;
}
static void print_3()
{
    cout << "##########" << endl;
    cout << "#######  #" << endl;
    cout << "##########" << endl;
    cout << "####  ####" << endl;
    cout << "##########" << endl;
    cout << "##  ######" << endl;
    cout << "##########" << endl << endl;
}
static void print_4()
{
    cout << "##########" << endl;
    cout << "#  ####  #" << endl;
    cout << "##########" << endl;
    cout << "##########" << endl;
    cout << "##########" << endl;
    cout << "#  ####  #" << endl;
    cout << "##########" << endl << endl;
}
static void print_5()
{
    cout << "##########" << endl;
    cout << "#  ####  #" << endl;
    cout << "##########" << endl;
    cout << "####  ####" << endl;
    cout << "##########" << endl;
    cout << "#  ####  #" << endl;
    cout << "##########" << endl << endl;
}
static void print_6()
{
    cout << "##########" << endl;
    cout << "#  ####  #" << endl;
    cout << "##########" << endl;
    cout << "#  ####  #" << endl;
    cout << "##########" << endl;
    cout << "#  ####  #" << endl;
    cout << "##########" << endl << endl;
}
// Игральные кости 
void game3(int user_ar[], int bot_ar[], int size)
{
    srand(time(NULL));
    int sum_user = 0, sum_bot = 0;
    cout << "Press Enter to start... ";
    cin.get();
    clearConsole();

    for (int i = 0; i < size; ++i)
    {
        int roundNumber = i + 1;
        cin.get(); // Wait for key press
        cout << "====================" << endl;
        cout << "Round number - " << roundNumber << endl << endl;

        // User's roll
        user_ar[i] = rand() % 6 + 1;
        cout << " user - " << user_ar[i] << endl << endl;
        switch (user_ar[i])
        {
        case 1:
            print_1();
            break;
        case 2:
            print_2();
            break;
        case 3:
            print_3();
            break;
        case 4:
            print_4();
            break;
        case 5:
            print_5();
            break;
        case 6:
            print_6();
            break;
        default:
            cout << "Error" << endl;
            break;
        }
        sum_user += user_ar[i];

        // Bot's roll
        bot_ar[i] = rand() % 6 + 1;
        cout << " bot - " << bot_ar[i] << endl << endl;
        switch (bot_ar[i])
        {
        case 1:
            print_1();
            break;
        case 2:
            print_2();
            break;
        case 3:
            print_3();
            break;
        case 4:
            print_4();
            break;
        case 5:
            print_5();
            break;
        case 6:
            print_6();
            break;
        default:
            cout << "Error" << endl;
            break;
        }
        sum_bot += bot_ar[i];

        // Intermediate result
        cout << "Intermediate result: user - " << sum_user << ", bot - " << sum_bot << endl;
    }

    // Final result
    cin.get();
    cout << "====================" << endl;
    cout << "Final result: user - " << sum_user << ", bot - " << sum_bot << endl;

    if (sum_user > sum_bot)
        cout << "User wins!" << endl;
    else if (sum_user < sum_bot)
        cout << "Bot wins!" << endl;
    else
        cout << "Draw!" << endl;
    cin.get();
    clearConsole();
}

// Виселица 
string spisok[100] = {
    "apple", "book", "cat", "dog", "elephant", "fish", "giraffe", "house", "ice", "juice",
    "king", "lion", "mountain", "night", "orange", "pencil", "queen", "river", "sun", "tree",
    "umbrella", "violin", "water", "xylophone", "yacht", "zebra", "airplane", "ball", "car", "door",
    "egg", "flower", "garden", "hat", "island", "jacket", "kite", "lamp", "moon", "notebook",
    "ocean", "plane", "question", "road", "star", "train", "universe", "vase", "window", "x-ray",
    "yard", "zoo", "ant", "butterfly", "clock", "desk", "earth", "flag", "globe", "hill",
    "insect", "jungle", "key", "ladder", "mirror", "nest", "owl", "piano", "quilt", "ring",
    "ship", "tiger", "umbrella", "valley", "whale", "xenon", "yogurt", "zipper", "arch", "bridge",
    "city", "drum", "eagle", "forest", "gate", "honey", "iceberg", "jewel", "knife", "lizard",
    "mountain", "necklace", "octopus", "park", "quartz", "robot", "sand", "tower", "uniform", "volcano"
    };

string Lined_def(string word) {
        for (int i = 0; i < word.length(); i++) {
            word[i] = '_';  // Замена всех букв на "_"
        }
        return word;
    }

void Check(int size_word, string word, string& lined_word)
{  // Передаем строку по ссылке
    bool running = true;
    while (running)
    {
        cout << "Enter a letter: ";
        char user_input;
        cin >> user_input;  // Правильный ввод одного символа
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Очистка буфера после ввода

        bool found = false;
        for (int i = 0; i < word.length(); i++)
        {
            if (user_input == word[i])
            {
                lined_word[i] = user_input;  // Обновляем угаданную букву в скрытом слове
                found = true;
            }
        }
        if (found)
        {
            cout << "Right! " << endl;  // Если буква угадана, выводим сообщение и текущее состояние
        }
        else
        {
            cout << "Wrong, try another letter." << endl;  // Если буква не угадана, выводим это сообщение
        }

        cout << lined_word << endl;  // Отображение текущего состояния угадывания

        if (lined_word == word) {
            running = false;
            cout << "You win!" << endl;  // Сообщение о победе
            cout << "Press Enter to return to the menu...";
            cin.get();
            clearConsole();
        }


    }

}
void game4()


{
    cout << "Welcome to Hangman!\nYou must guess the word : ";
    string word = spisok[rand() % 100];  // Выбираем случайное слово из списка

    string lined_word = Lined_def(word);  // Инициализация скрытой версии слова
    cout << lined_word << endl;
    cout << "*all words begin with a small letter" << endl;

    Check(word.length(), word, lined_word);  // Вызов функции для игры 
}

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));
    bool running = true;
    int user_choise;
    cout << "Welcome to Mini Games by Chikzz!" << endl;
    while(running)
    {
        Show_menu();
        cin >> user_choise;
        switch (user_choise)
        {
        case 1:
            clearConsole();
            game1();
            break;
        case 2:
            clearConsole();
            game2();
            break;
        case  3:
            clearConsole();
            int user_point[4], bot_point[4];
            game3(user_point, bot_point, 4);
            break;
        case 4:
            clearConsole();

            game4();
            break;
        case 5:
            running = false;
            cout << "Exiting the program" << endl;
            break;
        default:
            cout << "\nError, please try again " << endl;
            break;
        }
    }
    if (running)
    {
        cout << "Press Enter to return to the menu..." << endl;
        cin.ignore();
        cin.get();
    }
}



