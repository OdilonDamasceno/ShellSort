#include <iostream>
#include "Shell.h"

void shell::ordVet(){
    int g = tamV;
    for(int y = (g/2)+1; y!=0 ; y/=2){
        for (int i = 0,q= y; q<g ; i++, q++)
        {
            if (vect[i]> vect[y+i])
            {
                data aux = vect[i];
                vect[i] = vect[y+i];
                vect[y+i] = aux;
                show();
            }
        } 
    }
    std::cout << std::endl;
}
int main()
{
    shell x;
    //x.fillVect();
    x.show();
    x.ordVet();
    x.show();
    return 0;
}
