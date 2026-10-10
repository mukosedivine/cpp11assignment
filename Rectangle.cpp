    #include <iostream>
    using namespace std;

    class Rectangle {
    private:
        double width;
        double length;

    public:
        
        Rectangle() {
            width = 0;
            length = 0;
        }
        
        Rectangle(double w, double l) {
            width = w;
            length = l;
        }

 // set width
        void setWidth(double w) {
            if (w > 0) {
                width = w;
            } else {
                cout << "Width must be positive!" << endl;
            }
        }
          //get width
        double getWidth() {
            return width;
        }

        // Set the length
        void setLength(double l) {
            if (l > 0) {
                length = l;
            } else {
                cout << "Length must be positive!" << endl;
            }
        }

        // Get length
        double getLength() {
            return length;
        }

        // Calculate and return area
        double getArea() {
            return width *length;
        }

        // Calculate and return perimeter
        double getPerimeter() {
            return 2 *(width+length);
        }

        // Display rectangle details
        void displayDetails() {
            cout << "= = = Rectangle Details = = =" << endl;
            cout << "Width: " << width << endl;
            cout << "Length: " << length << endl;
            cout << "Area: " << getArea() << endl;
            cout << "Perimeter: " << getPerimeter() << endl;
            cout << "=  = =  = =  =  =  = =" << endl;
        }
    };

    int main() {
        cout << "= = =  RECTANGLE CLASS  = = =" << endl;
        
        // Example 1: Using default constructor
        cout << "\n--- Example 1: Default Constructor ---" << endl;
        Rectangle rect1;
        rect1.setWidth(5);
        rect1.setLength(10);
        rect1.displayDetails();
        
        // parameterized constructor
        cout << "\n--- Example 2: Parameterized Constructor ---" << endl;
        Rectangle rect2(8, 6);
        rect2.displayDetails();
        
        // Creating and modifying rectangle
        cout << "\n--- Example 3: Creating and Modifying Rectangle ---" << endl;
        Rectangle rect3(4, 12);
        cout << "Original rectangle:" << endl;
        rect3.displayDetails();
        
        cout << "\nModifying dimensions..." << endl;
        rect3.setWidth(7);
        rect3.setLength(9);
        cout << "Updated rectangle:" << endl;
        rect3.displayDetails();
        
        //Demonstrating getters
        cout << "\n--- Example 4: Using Individual Getters ---" << endl;
        Rectangle rect4(15, 8);
        cout << "Width of rectangle: " << rect4.getWidth() << endl;
        cout << "Length of rectangle: " << rect4.getLength() << endl;
        cout << "Area of rectangle: " << rect4.getArea() << endl;
        cout << "Perimeter of rectangle: " << rect4.getPerimeter() << endl;
        
        // Example 5: Invalid input handling
        
        Rectangle rect5;
        cout << "Invalid" << endl;
        rect5.setWidth(-5);
        cout << "Invalid input" << endl;
        rect5.setWidth(10);
        cout << "Width set successfully to: " << rect5.getWidth() << endl;
        
        
        return 0;
    }
