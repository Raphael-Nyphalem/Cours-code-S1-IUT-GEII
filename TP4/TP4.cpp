void ex1()
{
    int x,y;
    for (x = 0; x <= 7; x++)
    {
        for (y = 0; y <=7; y++)
        {
            //senseSetRGBpixel(x,y,0,255,0)
            //sleep_for(milliseconds(300))
        } 
    }
}
void ex2()
{
        int x,y;
    for (y = 0; y <=7; y++)
    {
        for (x = 0; x <= 7; x++)
        {
            //senseSetRGBpixel(x,y,0,0,255);
            //sleep_for(milliseconds(300));
        }
    }
}

void ex3()
{
    int x,y;
    unsigned short r,g,b;
    r,g,b = 31,127,255;

    for (y = 0; y <=7; y++)
    {
        for (x = 0; x <= 7; x++)
        {
            //senseSetRGBpixel(x,y,r,g,b);
        }
        //sleep_for(milliseconds(300));
        r+=32;
        g+=32;
        b-=32;
    }
}
void ex4()
{
    int x,y;
    unsigned short r,g,b,save_r;
    r,g,b = 0,255,127;

    for (y = 7; y >=0; y--)
    {
        for (x = 0; x <= 7; x++)
        {
            //senseSetRGBpixel(x,y,r,g,b);
        }
        //sleep_for(milliseconds(300));
        save_r = r,
        r = g;
        g=b;
        b=save_r;
    }
}
void ex5()
{
    int x,y,i;
    unsigned short r,g,b;
    r,g,b = 255,0,0;

    for (i = 0; i <=7; i++)
    {
        for (x = i; x <= 7; x++)
        {
            //senseSetRGBpixel(x,i,r,g,b);
        }
        for (y = i; y <=7; y++)
        {
            //senseSetRGBpixel(x,y,r,g,b);
        }
        //sleep_for(milliseconds(300));
        switch (i+1)
        {
            case 1:
                r,g,b=0,0,255;
                break;
            case 2:
                r,g,b=0,255,0;
                break;
            case 3:
                r,g,b=255,0,0;
                break;
            case 4:
                r,g,b=50,50,200;
                break;
            case 5:
                r,g,b=50,200,50;
                break;
            case 6:
                r,g,b=255,0,255;
                break;
            case 7:
                r,g,b=70,70,255;
                break;
            
            default:
                break;
        }
    }
}
void ex6()
{
    int x,y,i;
    unsigned short r,g,b;
    r,g,b = 255,0,0;

    for (i = 0; i <=7; i++)
    {
        for (x = i; x <= 7-i; x++)
        {
            //senseSetRGBpixel(x,i,r,g,b);
        }
        for (y = i; y <=7-i; y++)
        {
            //senseSetRGBpixel(i,y,r,g,b);
        }
        for (x = i; x <= 7-i; x++)
        {
            //senseSetRGBpixel(x,7-i,r,g,b);
        }
        for (y = i; y <=7-i; y++)
        {
            //senseSetRGBpixel(7-i,y,r,g,b);
        }
        //sleep_for(milliseconds(300));
        switch (i+1)
        {
            case 1:
                r,g,b=0,0,255;
                break;
            case 2:
                r,g,b=0,255,0;
                break;
            case 3:
                r,g,b=255,0,0;
                break;
            case 4:
                r,g,b=50,50,200;
                break; 
            default:
                break;
        }
    }
}

int main(int argc, char const *argv[])
{
    ex1();
    ex2();
    ex3();
    ex4();
    ex5();
    return 0;
}
