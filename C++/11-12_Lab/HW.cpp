#include <iostream>
#include <string>

class BankAccount {
private:
    int accountNumber;
    double balance;
    std::string ownerName;

public:
    BankAccount(int accNumber, double initialBalance, std::string owner) {
        accountNumber = accNumber;
        balance = initialBalance;
        ownerName = owner;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            std::cout << "Ошибка: на счете недостаточно средств." << std::endl;
        }
    }

    void displayAccountInfo() {
        std::cout << "Номер счета: " << accountNumber << std::endl;
        std::cout << "Имя владельца: " << ownerName << std::endl;
        std::cout << "Баланс счета: $" << balance << std::endl;
    }
};

int main() {
    // Создание объекта класса "Банковский счет"
    BankAccount account(12345, 0.00, "John Doe");

    // Внесение депозита на счет
    account.deposit(500.00);
    std::cout << "Пополнение счета на $500.00" << std::endl;

    // Снятие средств со счета
    account.withdraw(200.00);
    std::cout << "Снятие со счета $200.00" << std::endl;

    // Вывод информации о счете
    std::cout << std::endl << "Обновленная информация о счете:" << std::endl;
    account.displayAccountInfo();

    return 0;
}