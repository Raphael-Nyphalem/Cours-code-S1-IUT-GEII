#include<iostream>
#include<limits>



void calcul_min_max_moy()
{
     int nb, var,min,max,nb_val;
    float moy;

    nb = 0;
    nb_val = 0;
    min = std::numeric_limits<int>::max();
    max = 0;

    do{
        std::cout <<"donnez une valeur de la serie (ecire un nombre negatif pour stop la saisi)\n";
        std::cin >> var;
        if (var>=0)
        {
            nb +=var;
            nb_val++;
            if (var >max)
            {
                max=var;
            }
            if (var < min)
            {
                min = var;
            }
            

        }
         
    }while(var >=0);
    if (min !=std::numeric_limits<int>::max())
    {
        moy = nb/(nb_val*1.0);
        std::cout <<"min: "<<min<<"\nmax: "<<max<<"\nmoyenne: "<<moy<<std::endl;
    }
    else
    {
        std::cout << "erreur saisie";
    }
    
}

void affichage_table_multiplication()
{
    int nb_lu,i,result;
    std::cout<< "quelle table: ";
    std::cin >> nb_lu;
    if (nb_lu<10)
    {
        for (i = 1; i <= 10; i++)
        {
            result = i*nb_lu;
            if ((result < 10)&&(i!=10))
            {
                std::cout<<"| "<<nb_lu<<"x "<<i<<"=   "<<result<<" |"<<std::endl;
            }
            else if ((result >= 10)&&(i!=10))
            {
                std::cout<<"| "<<nb_lu<<"x "<<i<<"=  "<<result<<" |"<<std::endl;            
            }
            else
            {
                std::cout<<"| "<<nb_lu<<"x"<<i<<"=  "<<result<<" |"<<std::endl;
            } 
        }
    }
    else
    {
        std::cout<< "valeur supperieur ou = a 10\n";
    }
}
void affichage_jusqua_table_multiplication()
{
    int nb_lu,i,result,a;
    std::cout<< "jusqu'a quelle table: ";
    std::cin >> nb_lu;
    if (nb_lu<10)
    {
        for (i = 1; i <= 10; i++)
        {
            for ( a = 1; a <= nb_lu; a++)
            {
                
                result = i*a;
                if ((result < 10)&&(i!=10))
                {
                    std::cout<<a<<"x "<<i<<"=   "<<result<<" | ";
                }
                else if ((result >= 10)&&(i!=10))
                {
                    std::cout<<a<<"x "<<i<<"=  "<<result<<" | ";            
                }
                else
                {
                    std::cout<<a<<"x"<<i<<"=  "<<result<<" | ";
                } 
            }
            std::cout << std::endl;
        }
    }
    else
    {
        std::cout<< "valeur supperieur ou = a 10\n";
    }
}

int main(int argc, char const *argv[])
{
   //calcul_min_max_moy();
   //affichage_table_multiplication();
   affichage_jusqua_table_multiplication();
    return 0;
}
