void  choixCouleur(int uneCouleur,int &r,int &g,int &b)

    {
        switch (uneCouleur)
        {
            case 0
                r,g,b = 255,0,0
            break;
            case 1
                r,g,b = 0,255,0
            break;
            case 2
                 r,g,b = 0,0,255
                 break;
            case 3
                r,g,b = 255,0,0
                break;
        
        default:
            break;
        }
            
    }

void allumerColonneCouleur(int unX1,unY1,unNbPixels,uneCouleur1)
    {
        int r,g,b
        choixCouleur(uneCouleur1,r,g,b)
        for (int y = unY1; y<(unY1+unNbPixels); y++)
        {
            senseSetRGBpixel(unX1,y,r, g, b)
        }
    }

void allumerLigneCouleur(int unX1,unY1,unNbPixels,uneCouleur1)
    {
        int r,g,b
        choixCouleur(uneCouleur1,r,g,b)
        for (int x = unX1; x<(unX1+unNbPixels); x++)
        {
            senseSetRGBpixel(x,unY1,r, g, b)
        }
    }

PROGRAMME Carré_en_couleur
    declaration variables local
        int x,y,i
    {
        POUR(i=0)QUAND(i<4)SUIVANT(i <-- i +1)
            allumerColonneCouleur(i,i,(8-2*i),i)
            allumerLigneCouleur(i,i,(8-2*i),i)

            allumerColonneCouleur(7-i,i,(8-2*i),i)
            allumerLigneCouleur(i,7-i,(8-2*i),i)
        FIN_POUR
    }
FIN_PROGRAMME
