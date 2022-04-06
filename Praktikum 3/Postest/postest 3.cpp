#include <iostream>
#include <string>

using namespace std;
 void Hitung (
       int a, int b, int pgkt)
{
   int i;

   pgkt =1;
   i =1;
   while (!(i>b))
   {
      pgkt =pgkt*b;
      i =i+1;
   }
}
int main()
{
   string raptor_prompt_variable_zzyz;
   int x, pangkat, hsl, y, i;

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
   cout << x <<" Pangkat " <<y <<" = "<<pangkat << endl;   
   
   Hitung(x,y,hsl);
   cout << x <<" Pangkat Fungsi "<<y <<" = "<<pangkat << endl;
   return 0;
}
