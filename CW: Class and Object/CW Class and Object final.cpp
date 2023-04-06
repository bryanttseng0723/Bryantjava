
#include <iostream>
#include <string>
using namespace std;

class Moon 
{
public:
    string name;
    double distance;
    double mass;
    double diameter;
    
    Moon(string name, double distance, double mass, double diameter) 
    {
        this->name = name;
        this->distance = distance;
        this->mass = mass;
        this->diameter = diameter;
    }

    Moon() {}
};

class Planet 
{
public:
    string name;
    double distance;
    double mass;
    double diameter;
    int numMoons;
    Moon topMoons[3];
    
    Planet(string name, double distance, double mass, double diameter, int numMoons, Moon& moon1, Moon& moon2, Moon& moon3) 
    {
        this->name = name;
        this->distance = distance;
        this->mass = mass;
        this->diameter = diameter;
        this->numMoons = numMoons;
        topMoons[0] = moon1;
        topMoons[1] = moon2;
        topMoons[2] = moon3;
    }
};

double distanceP(Planet a, Planet b) 
{
    return abs(a.distance - b.distance);
}

string findMoon(Moon x, Planet arr[9]) 
{
    for (int i = 0; i < 9; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            if (x.name == arr[i].topMoons[j].name) 
            {
                return arr[i].name;
            }
        }
    }
    return "Not found";
}



int main()
{
    Moon moon0(" ", 0, 0, 0);

    Moon moon1("Moon", 0.384400, 0.07346, 3474);

    Moon moon2("Phobos", 0.009378, 0.0000000108, 22.2);
    Moon moon3("Deimos", 0.023460, 0.0000000024, 12.4);

    Moon moon4("Io", 0.421700, 0.0893, 3643);
    Moon moon5("Europa", 0.671100, 0.048, 3122);
    Moon moon6("Ganymede", 1.070000, 0.148, 5268);
 
    Moon moon7("Titan", 1.221870, 0.135, 5150);
    Moon moon8("Rhea", 0.527108, 0.00231, 1527);
    Moon moon9("Iapetus", 3.560820, 0.0018056352, 1469);
   
    Moon moon10("Titania", 0.435910, 0.00349, 1577);
    Moon moon11("Oberon", 0.582600, 0.00301, 1523);
    Moon moon12("Umbriel", 0.266000, 0.00127, 1169);

    Moon moon13("Triton", 0.354759, 0.0214, 2707.2);
    Moon moon14("Proteus", 0.117647, 0.0000517, 420);
    Moon moon15("Nereid", 5.513813, 0.000031, 340);

    Moon moon16("Charon", 0.019571, 0.00152, 1207.2);
    Moon moon17("Nix", 0.048694, 0.000000045, 49);
    Moon moon18("Hydra", 0.061400, 0.000000042, 65);


    Moon moonArr[18] = {moon1, moon2, moon3, moon4, moon5, moon6, moon7, moon8, moon9,
                        moon10, moon11, moon12, moon13, moon14, moon15, moon16, moon17, moon18};

    Moon topMoons1[3] = {moon0, moon0, moon0};
    Moon topMoons2[3] = {moon0, moon0, moon0};
    Moon topMoons3[3] = {moon1, moon0, moon0};
    Moon topMoons4[3] = {moon2, moon3, moon0};
    Moon topMoons5[3] = {moon4, moon5, moon6};
    Moon topMoons6[3] = {moon7, moon8, moon9};
    Moon topMoons7[3] = {moon10, moon11, moon12};
    Moon topMoons8[3] = {moon13, moon14, moon15};
    Moon topMoons9[3] = {moon16, moon17, moon18};

    Planet planet1("Mercury", 57.909176, 0.3285, 4879, 0, moon0, moon0, moon0);
    Planet planet2("Venus", 108.209475, 4.867, 12104, 0, moon0, moon0, moon0);
    Planet planet3("Earth", 147.098291, 5.9722, 12756, 1, moon1, moon0, moon0);
    Planet planet4("Mars", 227.943824, 0.64169, 6779, 2, moon2, moon3, moon0);
    Planet planet5("Jupiter", 778.340821, 1898, 139822, 79, moon4, moon5, moon6);
    Planet planet6("Saturn", 1426.666422, 568.3, 116460, 82, moon7, moon8, moon9);
    Planet planet7("Uranus", 2870.658186, 86.81, 50724, 27, moon10, moon11, moon12);
    Planet planet8("Neptune", 4498.396441, 102.4, 49244, 14, moon13, moon14, moon15);
    Planet planet9("Pluto", 5906.440628, 0.01309, 2370, 5, moon16, moon17, moon18);

    Planet solarSystem[9] = {planet1, planet2, planet3, planet4, planet5, planet6, planet7, planet8, planet9};

    cout << "Distances between planets:" << endl;
    for (int i = 0; i < 9; i++) 
    {
        for (int j = i+1; j < 9; j++) 
        {
            cout << solarSystem[i].name << " and " << solarSystem[j].name << ": " << distanceP(solarSystem[i], solarSystem[j]) << endl;
        }
    }

    cout << endl << "Moons orbiting each planet:" << endl;
    for (int i = 0; i < 9; i++)
    {
        cout << solarSystem[i].name << ": ";
        for (int j = 0; j < 3; j++)
        {
            cout << solarSystem[i].topMoons[j].name << ", ";
        }
        cout << endl;
    }

    cout << endl << "Planets with Moon: " << moon1.name << endl;
    cout << findMoon(moon1, solarSystem) << endl;

    cout << endl << "Planets with Moon: " << moon14.name << endl;
    cout << findMoon(moon14, solarSystem) << endl;

    cout << endl << "Planets with Moon: " << moon7.name << endl;
    cout << findMoon(moon7, solarSystem) << endl;

    cout << endl << "Planets with Moon: " << moon3.name << endl;
    cout << findMoon(moon3, solarSystem) << endl;
    
    cout << endl << "Planets with Moon: " << endl;
    string input ;
    cin >> input ;
    Moon INPUT(input,0,0,0);
    cout << findMoon(INPUT, solarSystem) ;

    return 0;
}
