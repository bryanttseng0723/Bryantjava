#include<iostream>

using namespace std;

int main()
{
    cout <<"WELCOME TO MITCHELL'S TINY ADVENTURE! \n" ;
    
    cout <<"You are in a creepy house!  Would you like to go upstairs or into the kitchen? \n" ;
    string answer;
    cin >> answer;

    if(answer == "upstairs")
    {
        cout <<"Upstairs you see a hallway.  At the end of the hallway is the master bedroom. There is also a bathroom off the hallway.  Where would you like to go? (bedroom or bathroom) \n" ;
        string answer2;
        cin >> answer2;
        if(answer2 == "bedroom")
        {
            cout <<"You are in a plush bedroom, with expensive-looking hardwood furniture.  The bed is unmade.  In the back of the room, the closet door is ajar.  Do you want to see the bed or the cabinet? (bed or cabinet)\n";
            string answer3;
            cin >> answer3;
            if(answer3 == "bed")
            {
                cout <<"There is a small table next to the bed. There are some sundries on the table. The bed is a little messy. It has not been used for a long time. Check the bed or table?(bed or table) \n";
                string answer4;
                cin >> answer4;
                if(answer4 == "bed")
                {
                    cout <<"The bed has been out of use for a long time. Double check?(yes or no) \n";
                    string answer5;
                    cin >> answer5;
                    if(answer5 == "yes")
                    {
                        cout <<"There's some blood on the bed and something happened! \n";
                    }
                    else if(answer5 == "no")
                    {
                        cout <<"you get nothing and left! \n";
                    }
                }
                else if(answer4 == "table")
                {
                    cout <<"There are some debris on the table and do you want to check?(yes or no) \n";
                    string answer6;
                    cin >> answer6;
                    if(answer6 == "yes")
                    {
                        cout <<"Get a diary and it will show some message! \n";
                    }
                    else if(answer6 == "no")
                    {
                        cout <<"I feel scary! Leave right now!! \n";
                    }
                }
                

            }
            else if(answer3 == "cabinet")
            {
                cout <<"This is an old wardrobe with beautiful decorations. There are some old clothes and a suitcase inside. Do you want to check the clothes or the suitcase?(clothes or suitcase) \n";
                string answer7;
                cin >> answer7;
                if(answer7 == "clothing")
                {
                    cout <<"These clothes are rare. confirm?(yes or no) \n";
                    string answer8;
                    cin >> answer8;

                    if(answer8 == "yes")
                    {
                        cout <<"the style is old... \n";
                    }
                    else if(answer8 == "no")
                    {
                        cout <<"Maybe this is a good choice.... \n";
                    }
                }
                else if(answer7 == "suitcase")
                {
                    cout <<"Weird suitcase.... do you really want to open it?(yes or no) \n";
                    string answer9;
                    cin >> answer9;

                    if(answer9 == "yes")
                    {
                        cout <<"you were killed by a creepy creature! \n";
                    }
                    else if(answer9 == "no")
                    {
                        cout <<"the suitcase is moving.... Don't open it! \n";
                    }
                }
            }

        }
        else if(answer2 == "bathroom")
        {
            cout <<"An old bathroom. Check the washbasin or the bathtub?(washbasin or bathtub)\n";
            string answer10;
            cin >> answer10;
            
            if(answer10 == "washbasin")
            {
                cout <<"The old washbasin and the old-fashioned mirror!they look ordinary....(washbasin or mirror)\n";
                string answer11;
                cin >> answer11;
                if(answer11 == "washbasin")
                {
                    cout <<"looks ordinary.... double check? (yes or no) \n";
                    string answer12;
                    cin >> answer12;
                    if(answer12 == "yes")
                    {
                        cout <<"Nothing happened.... \n";
                    }
                    else if(answer12 == "no")
                    {
                        cout <<"The sink suddenly exploded! You are dead... \n";
                    }
                }
                else if(answer11 == "mirror")
                {
                    cout <<"Mirror in an old bathroom with dirty surface.... check?(yes or no) \n";
                    string answer13;
                    cin >> answer13;
                    if(answer13 == "yes")
                    {
                        cout <<"A shadow suddenly appeared in the mirror!!!"
                    }
                    else if(answer13 == "no")
                    {
                        cout <<"I feel scary! Leave right now!! \n";
                    }
                }

            }
            else if(answer10 == "bathtub")
            {
                cout <<"Very nice bathtub... it seems clean and some debris around it....(bathtub or debris) \n";
                string answer14;
                cin >> answer14;
                if(answer14 == "bathtub")
                {
                    cout <<"clean bathtub??... check?(yes or no) \n";
                    string answer15;
                    cin >> answer15;
                    if(answer15 == "yes")
                    {
                        cout <<"some dried petals in it... maybe a woman used... \n";
                    }
                    else if(answer15 == "no")
                    {
                        cout <<"I feel scary! Leave right now!! \n";
                    }
                }
                else if(answer14 == "debris")
                {
                    cout <<"Lots of jars...check?(yes or no) \n";
                    string answer16;
                    cin >> answer16;

                    if(answer16 == "yes")
                    {
                        cout <<"These shampoos are gone... \n";
                    }
                    else if(answer16 == "no")
                    {
                        cout <<"Is something missing?.... \n";
                    }
                }
            }

        }


    }

    else if(answer == "kitchen")
    {
        cout <<"There is a long countertop with dirty dishes everywhere.  Off to one sidevthere is, as you'd expect, a refrigerator. You may open the refrigerator or look in a cabinet.\n";
        cout <<"(refrigerator or cabinet)\n";
        string answer17;
        cin >> answer17;

        if(answer17 == "refrigerator")
        {
            cout <<"Inside the refrigerator, you see food and some drinks that have been there for a period of time(food or drink)\n";
            string answer18;
            cin >> answer18;

            if(answer18 == "food")
            {
                cout <<"These food looks good! eat?...(yes or no)\n";
                string answer19;
                cin >> answer19;
                if(answer19 == "yes")
                {
                    cout <<"This food is spoiled and you died of food poisoning.";
                    
                }
                else if(answer19 == "no")
                {
                    cout <<"I feel weird.... put it back! \n";
                }

            }

            else if(answer18 == "drink")
            {
                cout <<"Transparent drinks and I think it is drinkable.(yes or no)\n";
                    string answer20;
                    cin >> answer20;
                    if(answer20 == "yes")
                    {
                        cout <<"The drink contains alcohol and you're drunk all day\n";
                    }
                    else if(answer20 == "no")
                    {
                        cout <<"you are dead due to massive dehydration\n";
                    }
                
            }
        }
        else if(answer17 =="cabinet")
        {
            cout <<"There are some pans and knives in the cabinet. What do you want to check?(pans or knives)\n";
            string answer21;
            cin >> answer21;

            if(answer21 =="pans")
            {
                cout <<"Some dust and dirt on them... check?(yes or no)\n";
                string answer22;
                cin >>answer22;
                if(answer22 == "yes")
                {
                    cout <<"There is some grease left. take it back!\n";
                }
                else if(answer22 == "no")
                {
                    cout <<"It's a bit dirty. I don't want to touch it! Leave the house...\n";
                }

            }
            else if(answer21 == "knives")
            {
                cout <<"There are some table knives in the cabinet and some used traces on them. check?(yes or no)\n";
                string answer23;
                cin >> answer23;
                if(answer23 == "yes")
                {
                    cout <<"It's a good knife with some blood on it! take it back!\n";
                }
                else if(answer23 == "no")
                {
                    cout <<"I feel bad! Don't touch them! Leave the house...\n";
                }

            }

        }

    }
    


}