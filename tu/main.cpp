#include<iostream>
using namespace std;
#include <winbgim.h> 
void text(int x, int y, const char *str)
{
	setcolor(15);
	outtextxy(x,y,str);
	delay(50);
}
int main(int argc, char *argv[])
{
	initwindow(800, 500);	
	setbkcolor(2);		
	cleardevice();
					
	setcolor(15);
	settextstyle(10,0,5);					
	outtextxy(300,200,"GRAB");
	delay(1500);
	int x = 0;
	char *s = new char[5];
	while (x <= 100){
		cleardevice();
		sprintf (s,"%d",x);
		setcolor (15);
		outtextxy (350,200,strcat(s,"%"));
		if (x == 100)
			delay (500);
		delay (20);
		x++;
	}
	while(true)
	{
		x1:
		cleardevice();
		//setbkcolor(10);
		clearmouseclick(WM_LBUTTONDOWN);
		while(!ismouseclick(WM_LBUTTONDOWN)|| mousex() < 290 || mousex() > 500 || mousey() < 170 || mousey() > 300)
		{
			settextstyle(10,0,4);
			text(330,180,"LOGIN");
			text(300,270,"RIGISTER");
		}	
		//clearmouseclick(WM_LBUTTONDOWN);
		if(ismouseclick(WM_LBUTTONDOWN)&& mousex() > 290 && mousex() < 500 && mousey() > 170 && mousey() < 300)
		{
		if(mousey() <= 230)
		{
			x2:
			cleardevice();
			//setbkcolor(10);
			clearmouseclick(WM_LBUTTONDOWN);
			while(!ismouseclick(WM_LBUTTONDOWN)|| mousex() < 190 || mousex() > 640 || mousey() < 30 || mousey() > 450)
			{
				//setbkcolor(10);
				settextstyle(10,0,4);
				text(200,60,"THONG TIN CA NHAN");
				text(320,160,"DAT XE");
				text(220,260,"LICH SU BOOK XE");
				text(320,360,"THOAT");
			}
			if(ismouseclick(WM_LBUTTONDOWN) && mousex() > 190 && mousex() < 640 && mousey() > 30 && mousey() < 450)
			{
				if(mousey() <= 120)
				{
					x3:
					cleardevice();
					//setbkcolor(100);
					clearmouseclick(WM_LBUTTONDOWN);
					while(!ismouseclick(WM_LBUTTONDOWN) || mousex() < 140 || mousex() > 680 || mousey() < 190 || mousey()>330)
					{
						setbkcolor(2);
						settextstyle(10,0,4);
						text(150,200,"SUA THONG TIN CA NHAN");
						text(305,280,"QUAY LAI");
					}
					//clearmouseclick(WM_LBUTTONDOWN);
					if(ismouseclick(WM_LBUTTONDOWN) && mousex() > 140 && mousex() < 680 && mousey() > 190 && mousey() < 330)
					{
						if(mousey() <= 240)
						{
							cleardevice();
							setcolor(14);
							settextstyle(10,0,4);
							outtextxy(340,220,"DONE");
							delay(1000);
							goto x3;
						}
						else if(mousey() <= 320)
						{
							goto x2;
							delay(50);
						}		
					}
				}
				else if(mousey() <= 220)
				{
					cleardevice();
					clearmouseclick(WM_LBUTTONDOWN);
					while(!ismouseclick(WM_LBUTTONDOWN) || mousex() < 90 || mousex() > 700  || mousey() < 200 || mousey() > 260)
					{
						settextstyle(10,0,4);
						text(100,220,"NHAP THONG TIN DI CHUYEN");
					}
					if(ismouseclick(WM_LBUTTONDOWN) && mousex() > 90 && mousex() < 700  && mousey() > 200 && mousey() < 260)
					{
					
						if(mousey() < 280)
						{
							cleardevice();
							clearmouseclick(WM_LBUTTONDOWN);
							while(!ismouseclick(WM_LBUTTONDOWN) || mousex() < 170 || mousex() > 630  || mousey() < 190 || mousey() > 330)
							{
								settextstyle(10,0,4);
								text(180,200,"CHAP NHAN BOOK XE");
								text(250,280,"HUY BOOK XE");
							}
							//clearmouseclick(WM_LBUTTONDOWN);
							if(ismouseclick(WM_LBUTTONDOWN) && mousex() > 170 && mousex() < 630  && mousey() > 190 && mousey() < 330)
							{
								if(mousey() < 240)
								{
									cleardevice();
									settextstyle(10,0,4);
									text(120,220,"----- XE DANG DI CHUYEN -----");
									delay(2000);
									cleardevice();
									clearmouseclick(WM_LBUTTONDOWN);
									while(!ismouseclick(WM_LBUTTONDOWN) || mousex() < 100 || mousex() > 590  || mousey() < 210 || mousey() > 280)
									{
										settextstyle(10,0,4);
										text(105,220,"HOAN THANH VA THANH TOAN");
									}
									if(ismouseclick(WM_LBUTTONDOWN) && mousex() > 100 && mousex() < 590  && mousey() > 210 && mousey() < 280)
									{
										cleardevice();
										settextstyle(10,0,4);
										text(340,220,"DONE");
										delay(500);
										goto x2;
									}
								}
								else if(mousey() < 320)
								{
									cleardevice();
									settextstyle(10,0,4);
									text(340,220,"DONE");
									delay(500);
									goto x2;
								}
							}
						}
					}
				}
				else if(mousey()<320)
				{
					cleardevice();
					settextstyle(10,0,4);
					text(270,220,"---LICH SU---");
					delay(1000);
					goto x2;	
				}
				else if(mousey()<420)
				{
					return 0;
				}	
			}
		}
		else if(mousey()<300)
		{
			cleardevice();
			settextstyle(10,0,4);
			text(270,220,"---LOADING---");
			delay(1000);
			goto x1;
		}
		}
	}
	while(!kbhit()) delay(1);			
	return 0;
}
