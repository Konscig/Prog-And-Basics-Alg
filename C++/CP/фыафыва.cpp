#include <iostream>
#include <string>

std::string Vigenere(const std::string& text, const std::string& key, bool encoding)
{
    int textLen = text.length();
    int keyLen = key.length();
    std::string extendedKey;

    for (int i = 0; i < textLen; i++)
    {
        extendedKey += key[i % keyLen];
    }

    std::string outputText;

    for (int i = 0; i < textLen; i++)
    {
        if (!isalpha(text[i]))
        {
            outputText += text[i];
            continue;
        }

        if (encoding)
        {
            char symbol = static_cast<char>(((text[i] + extendedKey[i]) % 32) + 'a');
            outputText += symbol;
        }
        else
        {
            char c = static_cast<char>((((text[i] - extendedKey[i]) + 32) % 32) + 'a');
            outputText += c;
        }
    }

    return outputText;
}

int main()
{
    setlocale(LC_ALL, ""); // Для корректной работы с русскими символами в консоли

    while (true)
    {
        std::cout << "Выберите необходимый пункт: \n";
        std::cout << "1. Зашифровать\n";
        std::cout << "2. Расшифровать\n";
        std::cout << "0. Выход\n";

        int choice;
        std::cin >> choice;

        if (choice == 0)
            break;

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cout << "Введите текст: ";
        std::string text;
        std::getline(std::cin, text);

        std::cout << "Введите ключ: ";
        std::string key;
        std::getline(std::cin, key);

        std::cout << "Введите количество итераций: ";
        int iterations;
        std::cin >> iterations;

        bool encoding = true;

        switch (choice)
        {
            case 1:
                break;
            case 2:
                encoding = false;
                break;
        }

        for (int i = 0; i < iterations; i++)
        {
            text = Vigenere(text, key, encoding);

            if ((i + 1) % 100 == 0)
                std::cout << i + 1 << ". " << text << std::endl;
        }
    }

    return 0;
}
