// #include <fstream>
// #include <iostream>

// int main()
// {
//   std::ifstream k("text.txt");
//   if(!k.is_open())
//   {
//     exit(0);
//   }
//   int x;
//   while(!k.eof())
//   {
//     f1 >> x;
//     std::cout << x <<std::endl;
//   }
//   k.close();
// }

#include <iostream>
#include <fstream>

int main()
{
  std::ifstream f1("text.txt");
  char a, b;
  std::cin >> a >> b;
  std::string c;
  std::ofstream ob("textr");
  while(std::getline(f1, c), !f1.eof())
  {
    for(int i = 0; i < c.size(); ++i)
    {
      if(c[i] == a)
      {
        c[i] = b;
      }
    }
    ob << c << std::endl;
  }
  f1.close();
  ob.close();
}
