#include <iostream>
#include <fstream>

using namespace std;
 
int main()
{
   ifstream file("file.txt");
   
   char first_ch = ' ';
   char last_ch = '\0';
   char tmp_ch;
   
   int count = 0; //Количество слов
   
   while (file.get(tmp_ch).good())
   {
      cout << tmp_ch;             //  ": 0x" << hex << ((int) tmp_ch & 0xff) << endl;
      
      if (first_ch == ' ' || first_ch == '\n')
          first_ch = tmp_ch;
      else
      {
         if (tmp_ch == ' ' || tmp_ch == '\n')
         {
             if (first_ch == last_ch)
             {
                count++;
                if (count == 1)
                    cout << "!" << tmp_ch;
             }
             first_ch = tmp_ch;
         }
         else 
         {       
             if (last_ch == ' ' || last_ch == '\n')
             {
                 first_ch = tmp_ch;
             }
             else
                 last_ch = tmp_ch;
         }
       }   
   }
   
   cout << endl;
   cout << "Количество слов: " << count;
   
   file.close();

   return 0;
}