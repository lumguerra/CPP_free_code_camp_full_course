#include <iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

using namespace std;

int main(){
   
	
	Engineer egn1("Lucas Guerra", 34, "Av Ordem e Progresso", 4);

	Engineer egn2{egn1};

	cout << "------------------------------\n";

	cout << egn2;

    return 0;
}