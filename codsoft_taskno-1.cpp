#include<iostream>
#include<cstdlib>
#include<ctime>
int main()
{
    srand(time(0));
    int input_1,count_1=0,reference=0;
    int random_1=(rand()%10)+1;
    std::cout<<"Welcome to the Number Guessing Game!!\n";
    std::cout<<"This Game consists of Two rounds.\n";
    std::cout<<"  "<<"\n";
    std::cout<<"Round 1:\n";
    std::cout<<"1. You can attempt guessing the number for several times!!\n";
    std::cout<<"2. You will be selected to the second round only if the number of attempts in guessing the correct number is less than or equal to 6!!\n";
    std::cout<<"  "<<"\n";
    std::cout<<"Guess a number from 1 to 10: ";
    std::cin>>input_1;
    std::cout<<"\n";
    while(input_1!=random_1)
    {
        if(input_1>random_1)
        {
            std::cout<<"Your guess is too high!!\n";
            std::cout<<"Try again : ";
            std::cin>>input_1;
            std::cout<<"\n";
            count_1++;
        }
        if(input_1<random_1)
        {
            std::cout<<"Your guess is too low!!\n";
            std::cout<<"Try again : ";
            std::cin>>input_1;
            std::cout<<"\n";
            count_1++;
        }
    }
    if(input_1==random_1)
    {
        std::cout<<"  "<<"\n";
        std::cout<<"Hurray!! You've Guessed the right one!!\n";
        if(count_1<=6)
        {
            std::cout<<"Congratulations !! You've been selected for the second round!!\n";
            reference++;
        }
        else
        {
            std::cout<<"Sorry!! You've used more than 6 chances!! you are not eligible for the second round!!\n";
        }
    }
    if(reference>0)
    {
        std::cout<<"  "<<"\n";
        std::cout<<"Round 2:\n";
        std::cout<<"1. You can attempt guessing the number for several times!!\n";
        std::cout<<"2. You will be declared as WINNER OF THE GAME,only if the number of attempts in guessing the correct number is less than or equal to 3!!\n";
        std::cout<<" 3. You will be declared as RUNNER OF THE GAME, if you've used more than 3 attempts!!\n";
        std::cout<<"  "<<"\n";
        int random_2=(rand()%10)+1;
        int input_2,count_2=0;
        std::cout<<"Only three chances\n";
        std::cout<<"Guess the number from 1 to 10: ";
        std::cin>>input_2;
        std::cout<<"\n";
        while(input_2!=random_2)
        {
            if(input_2>random_2)
            {
                std::cout<<"Your guess is too high!!\n";
                std::cout<<"Try again : ";
                std::cin>>input_2;
                std::cout<<"\n";
                count_2++;
            }
            if(input_2<random_2)
            {
                std::cout<<"Your guess is too low!!\n";
                std::cout<<"Try again : ";
                std::cin>>input_2;
                std::cout<<"\n";
                count_2++;
            }
        }
        if(input_2==random_2)
        {
            std::cout<<"Hurray!! You've Guessed the right one!!\n";
            if(count_2<=3)
            {
                std::cout<<"Congratulations !! You're the WINNER OF THE GAME!!\n";
            }
            else
            {
                std::cout<<"Congratulations !! You're the RUNNER OF THE GAME!!\n";
            }
        }
    }
    return 0;
}
