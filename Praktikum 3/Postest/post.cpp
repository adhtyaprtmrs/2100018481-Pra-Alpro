#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   int x;
   int y;
   int i;
   int pangkat;

   raptor_prompt_variable_zzyz ="Masukkan X Bilangan Real";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> x;
   raptor_prompt_variable_zzyz ="Masukkan Y Bilangan Bulat";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> y;
   pangkat =1;
   i =1;
   while (!(i>y))
   {
      pangkat =pangkat*x;
      i =i+1;
   }
   cout << x <<" Pangkat "<<y <<" = "<<pangkat;
   return 0;
}
