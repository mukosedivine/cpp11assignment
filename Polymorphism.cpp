    #include <iostream>
    using namespace std;

    // Parent Class
    class Snake
    {
    public:
        virtual void displayVenomEffect()
        {
            cout << "This snake has venom effects." << endl;
        }
    };

    // Derived Class 1
    class Cobra : public Snake
    {
    public:
        void displayVenomEffect() override
        {
            cout << "Cobra venom attacks the nervous system." << endl;
        }
    };

    // Derived Class 2
    class Boomslang : public Snake
    {
    public:
        void displayVenomEffect() override
        {
            cout << "Boomslang venom affects blood clotting and causes severe bleeding." << endl;
        }
    };

    int main()
    {
        Cobra kingCobra;
        Boomslang africanBoomslang;

        Snake* snakePtr;

        snakePtr = &kingCobra;
        snakePtr->displayVenomEffect();

        snakePtr = &africanBoomslang;
        snakePtr->displayVenomEffect();

        return 0;
    }
