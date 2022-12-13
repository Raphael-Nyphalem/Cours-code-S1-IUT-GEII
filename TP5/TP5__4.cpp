void  choixCouleur(int uneCouleur,int &r,int &g,int &b)

    {
        switch (uneCouleur)
        {
            case 0:
                r,g,b = 255,0,0;
            break;
            case 1:
                r,g,b = 0,255,0;
            break;
            case 2:
                 r,g,b = 0,0,255;
                 break;
            case 3:
                r,g,b = 255,0,0;
                break;
        
        default:
            break;
        }
            
    }

void allumerColonneCouleur(int unX1,int unY1,int unNbPixels,int uneCouleur1)
    {
        int r,g,b;
        choixCouleur(uneCouleur1,r,g,b);
        for (int y = unY1; y<(unY1+unNbPixels); y++)
        {
           // senseSetRGBpixel(unX1,y,r, g, b)
        }
    }

void allumerLigneCouleur(int unX1,int unY1,int unNbPixels,int uneCouleur1)
    {
        int r,g,b;
        choixCouleur(uneCouleur1,r,g,b);
        for (int x = unX1; x<(unX1+unNbPixels); x++)
        {
            //senseSetRGBpixel(x,unY1,r, g, b)
        }
    }



int main(int argc, char const *argv[])
{
    for (int i = 0; i < 4; i++)
    {
        allumerColonneCouleur(i,i,(8-2*i),i);
        allumerLigneCouleur(i,i,(8-2*i),i);

        allumerColonneCouleur(7-i,i,(8-2*i),i);
        allumerLigneCouleur(i,7-i,(8-2*i),i);
    }
    

    return 0;
}

