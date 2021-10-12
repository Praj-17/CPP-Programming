// A turbine, operating under steady-flow conditions, receives 4500 kg of steam per hour. The steam enters the turbine at a velocity of 2800 m/min, an elevation of 5.5 m and a specific enthalpy of 2800 kJ/kg. It leaves the turbine at a velocity of 5600 m/min, an elevation of 1.5 m and a specific enthalpy of 2300 kJ/kg. Heat losses from the turbine to the surroundings amount to 16000 kJ/h. Determine the power output of the turbine.
 #include <iostream>
 using namespace std;
  int main()
  {
      float m, h1, c1,z1,g,q,h2,c2,z2,w;
      cout<<"Enter the value of mass in kg/hr"<<endl;
      cin>>m;
      cout<<"Enter the values of velocities in m/min"<<endl;
      cin>>c1>>c2;
      cout<<"Enter the values of Elevations in m"<<endl;
      cin>>z1>>z2;
      cout<<"Enter the values of Enthalpies in kj/kg"<<endl;
      cin>>h1>>h2;
      cout<<"Enter the value of Heat loss in Kj/hr "<<endl;
      cin>>q;
       cout<<"Enter the value of g"<<endl;
      cin>>g;
    w = -(q/3600) - (m/3600)*((h2-h1)) + ((c2*c2-c1*c1)/2000)+((z2-z1)*g/1000);
    cout<<"The Power Generated is: "<<w<<endl;
    
      return 0;
  }   