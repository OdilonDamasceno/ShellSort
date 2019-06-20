#ifndef _SHELL_H_
#define _SHELL_H_
#define tamV 10
typedef int data;
class shell{
public:
    data vect[tamV]={64,32,89,67,13,4,5,7,32,0};
public:
    void fillVect(){
         for(int i = tamV-1, j = 0; j < tamV; i--,j++){
            vect[j]= i;
        }
    }
    void ordVet();
    void show(){
        for (int i = 0; i < tamV; i++)
        {
            printf("%d, ", vect[i]);
        }
    std::cout<<std::endl;
}
};
#endif