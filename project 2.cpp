#include<iostream>
class Calculator
{
    public:
    int choice,number_1,number_2;
    void Options()
    {
        std::cout<<"Operations:\n";
        std::cout<<"1.Addition\n";
        std::cout<<"2.Subtraction\n";
        std::cout<<"3.Multiplication\n";
        std::cout<<"4.Division\n";
        std::cout<<"5.Quit\n";
        std::cout<<"Choose The operation: ";
        std::cin>>choice;
        std::cout<<"\n";
    }
    void Process()
    {
        if(choice==1)
        {
            std::cout<<"Enter the first number to add: ";
            std::cin>>number_1;
            std::cout<<"Enter the second number to add: ";
            std::cin>>number_2;
            std::cout<<"The Sum of "<<number_1<<" and "<<number_2<<" is : "<<number_1+number_2<<"\n";
            std::cout<<" \n";
        }
        else if(choice==2)
        {
            std::cout<<"Enter the first number to Subtract: ";
            std::cin>>number_1;
            std::cout<<"Enter the second number to Subtract: ";
            std::cin>>number_2;
            std::cout<<"The Difference between "<<number_1<<" and "<<number_2<<" is : "<<number_1-number_2<<"\n";
            std::cout<<" \n";
        }
        else if(choice==3)
        {
            std::cout<<"Enter the first number to Multiply: ";
            std::cin>>number_1;
            std::cout<<"Enter the second number to Multiply: ";
            std::cin>>number_2;
            std::cout<<"The Product of "<<number_1<<" and "<<number_2<<" is : "<<number_1*number_2<<"\n";
            std::cout<<" \n";
        }
        else if(choice==4)
        {
            std::cout<<"Enter the first number to Divide: ";
            std::cin>>number_1;
            std::cout<<"Enter the second number to Divide: ";
            std::cin>>number_2;
            std::cout<<"The Quotient on dividing "<<number_1<<" and "<<number_2<<" is : "<<number_1/number_2<<"\n";
            std::cout<<"The Remainder on dividing "<<number_1<<" and "<<number_2<<" is : "<<number_1%number_2<<"\n";
            std::cout<<" \n";
        }
        else if(choice==5)
        {
            std::cout<<"Thank you!! Have a nice day!!\n";
            return;
        }
        else
        {
            std::cout<<"Try giving Valid Input!!\n";
            return;
        }
        Options();
        Process();
    }
};    
int main()
{
    std::cout<<"Welcome to Simple Calculator!!\n";
    Calculator object;
    object.Options();
    object.Process();
    return 0;
}