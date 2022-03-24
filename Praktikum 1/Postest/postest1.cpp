#include <iostream>
#include <string>
#include <math.h>

using namespace std;
 void hitung (
       float x;
       float y;
       float_Variable *hsl)
{

   hsl =sqrt(x+y);
}
int main()
{
   string raptor_prompt_variable_zzyz;
   float y1;
   float a;
   float hasil;
   float jarak;
   float x2;
   float y2;
   float b;
   float x1;

   raptor_prompt_variable_zzyz ="Masukkan Titik A (x1) : ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> x1;
   raptor_prompt_variable_zzyz ="Masukkan Titik A (y1) : ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> y1;
   raptor_prompt_variable_zzyz ="Masukkan Titik B (x2) : ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> x2;
   raptor_prompt_variable_zzyz ="Masukkan Titik B (y2) : ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> y2;
   a =(x2-x1) ** 2;
   b =(y2-y1) ** 2;
   jarak =sqrt(a+b);
   cout << "Jarak Titik A ke Titik B = "+jarak << endl;   hitung(a,b,hasil);
   cout << "Jarak Antar 2 Titik Fungsi Adalah : "+hasil << endl;
   return 0;
}
