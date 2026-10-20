    #include <iostream>
    using namespace std;

    // Base Class
    class Reptile
    {
    protected:
        string color;
        int age;

    public:
        void setReptileDetails(string c, int a)
        {
            color = c;
            age = a;
        }

        void displayReptileDetails()
        {
            cout << "Color: " << color << endl;
            cout << "Age: " << age << " years" << endl;
        }
    };

    // Derived Class
    class Snake : public Reptile
    {
    protected:
        string name;
        double length;
        bool venomous;

    public:
        void setSnakeDetails( string n,double l, bool v)
        {
            name = n;
            length = l;
            venomous = v;
        }

        void displaySnakeDetails()
        {
            cout << "Name: " << name << endl;
            cout << "Length: " << length << " meters" << endl;

            if (venomous)
                cout << "Venomous: Yes" << endl;
            else
                cout << "Venomous: No" << endl;
        }
    };

    // Derived from Snake
    class Cobra : public Snake
    {
    private:
        double hoodSize;

    public:
        void setCobraDetails(double h)
        {
            hoodSize = h;
        }

        void displayCobraDetails()
        {
            cout << "Hood Size: " << hoodSize << " cm" << endl;
        }

        void displayAllDetails()
        {
            cout << "\n=== Snake Information ===\n";

            displayReptileDetails();
            displaySnakeDetails();
            displayCobraDetails();
        }
    };

    int main()
    {
        Cobra kingCobra;

        kingCobra.setReptileDetails("Brown", 5);
        kingCobra.setSnakeDetails("King Cobra", 4.2, true);
        kingCobra.setCobraDetails(25);

        kingCobra.displayAllDetails();


        Cobra boomslang;

        boomslang.setReptileDetails("Green", 4);
        boomslang.setSnakeDetails("Boomslang",1.5, true);
        boomslang.setCobraDetails(15);

        boomslang.displayAllDetails();

        
        return 0;
    }
