#include <iostream>
using namespace std;
using List = struct List_Node *;

struct List_Node
{
  char type;
  int rownr;
  List next;
};


bool empty(const List open);
bool check_char(List & open, const char c, const int rownr);    //True om lyckas, False om error
bool remove(List & open, const char c, const int rownr);


                           /*----------MAIN----------*/
int main()
{
  char c{};
  List open{};
  int rownr{};


  while(c = cin.get())
    {
      if(c == '\n')
	++rownr;
      else if(check_char(open,c))
	{

	}
    }

  if(empty(open))
    cout << "Korrekt!" << endl;
  else
    cout << "Fel! Alla parenteser ej stängda!" << endl;


  return 0;
}

                           /*-------FUNKTIONER-------*/



bool check_char(List & open, const char c, const int rownr)
{

  if(c == '(' || c == '[' || c == '{')
    {
      List temp{new List_Node};
      temp->type = c;
      temp->rownr = rownr;
      temp->next = open;
      return true;
    }

  else if(c == ')' || c == ']' || c == '}')
    {
      return remove(open,c,rownr)
    }

  else
    return true;
}

bool remove(List & open, const char c, const int rownr)
{


}

bool empty(const List open)
{
  if(open == nullptr)
    return true;
  else
    return false;
}
