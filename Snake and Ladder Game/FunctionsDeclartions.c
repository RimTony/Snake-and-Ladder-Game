static int winner = 0;
static int start= 0;

//BulidWindow.c
void BulidWindowGame();
void display_callback();
void reshape_callback(int width, int height);
void init();


/*-------------------------------------------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------*/


//DrawGrid.c
void initGrid(int x, int y);
void unit();
void drawGrid();
void select_color();
void drawNumbers();




/*-------------------------------------------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------*/

//DrawLadders.c
void lines(double a, double b, double c, double d);
void drawLadders();
void ladder1();
void ladder2();
void ladder3();
void ladder4();
void ladder5();
void ladder6();
void ladder7();



/*-------------------------------------------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------*/


//DrawSnakes.c
void select_colorSankes();
void drawPoint(double a, double b);
void drawSnakes();
void Snake1();
void Snake2();
void Snake3();
void Snake4();
void Snake5();
void Snake6();
void Snake7();


/*-------------------------------------------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------*/
//MouseInput.c
static int DiceRollerOrder = 1;
static int PlayerOrder = 0;
static int onTurnMouse = 0;
static int onStopMouse = 0;
static int  edit = 0;

void mouseClicks(int button, int state, int x, int y);
void drawBlocksCircles();
void drawDiceRectangle();
void cleckedMouseTurn();
void cleckedMouseStop();
void nextPlayer(int player);


/*-------------------------------------------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------*/

//PlayerBlocks.c
static int edit1 = 0, edit2 = 0, edit3 = 0, edit4 = 0, edit5 = 0;
struct Player
{
	char* playername;
	int color;
};
struct Player p1, p2, p3, p4, p5;

void select_colorBlock(int color);
void drawRectangle(double a1, double b1, int color);
void NumberofPlayer();
void displayPlayerInformation(char playerName[30], int  PlayerOrder, double y);

static char N1[20], N2[20], N3[20], N4[20], N5[20];
static double Yy1 = 0.58, Yy2 = 0.39, Yy3 = 0.213, Yy4 = 0.03, Yy5 = -0.152;
void displaychar(int c, double y);
void keyPressed(char key, int x, int y);

void storeStruct();



/*-------------------------------------------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------*/

//Dice.c
void turnORstopRectangle();
void dicePoint(double a, double b);
void one();
void two();
void there();
void four();
void five();
void six();

/*-------------------------------------------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------*/

//Players.c
static double
player1X = 10.5, player1Y = 0.19,
player2X = 11.0, player2Y = 0.19,
player3X = 11.5, player3Y = 0.19,
player4X = 12.0, player4Y = 0.19,
player5X = 12.5, player5Y = 0.19;
static int s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
int visted[101] ;
static double arrX[101] =
{
	0.0,0.5 ,1.5 ,2.5 ,3.5 ,4.5 ,5.5  ,6.5  ,7.5  ,8.5  ,9.5 ,
	9.5 ,8.5 ,7.5 ,6.5 ,5.5 ,4.5  ,3.5  ,2.5  ,1.5  ,0.5 ,
	0.5 ,1.5 ,2.5 ,3.5 ,4.5 ,5.5  ,6.5  ,7.5  ,8.5  ,9.5 ,
	9.5 ,8.5 ,7.5 ,6.5 ,5.5 ,4.5  ,3.5  ,2.5  ,1.5  ,0.5 ,
	0.5 ,1.5 ,2.5 ,3.5 ,4.5 ,5.5  ,6.5  ,7.5  ,8.5  ,9.5 ,
	9.5 ,8.5 ,7.5 ,6.5 ,5.5 ,4.5  ,3.5  ,2.5  ,1.5  ,0.5 ,
	0.5 ,1.5 ,2.5 ,3.5 ,4.5 ,5.5  ,6.5  ,7.5  ,8.5  ,9.5 ,
	9.5 ,8.5 ,7.5 ,6.5 ,5.5 ,4.5  ,3.5  ,2.5  ,1.5  ,0.5 ,
	0.5 ,1.5 ,2.5 ,3.5 ,4.5 ,5.5  ,6.5  ,7.5  ,8.5  ,9.5 ,
	9.5 ,8.5 ,7.5 ,6.5 ,5.5 ,4.5  ,3.5  ,2.5  ,1.5  ,0.5

};

static double arrY[101] =
{
	0.0,0.19 ,0.19 ,0.19, 0.19 ,0.19 ,0.19 ,0.19 ,0.19, 0.19 ,0.19,
	1.19 ,1.19 ,1.19, 1.19 ,1.19 ,1.19 ,1.19 ,1.19, 1.19 ,1.19,
	2.19 ,2.19 ,2.19, 2.19 ,2.19 ,2.19 ,2.19 ,2.19, 2.19 ,2.19,
	3.19 ,3.19 ,3.19, 3.19 ,3.19 ,3.19 ,3.19 ,3.19, 3.19 ,3.19,
	4.19 ,4.19 ,4.19, 4.19 ,4.19 ,4.19 ,4.19 ,4.19, 4.19 ,4.19,
	5.19 ,5.19 ,5.19, 5.19 ,5.19 ,5.19 ,5.19 ,5.19, 5.19 ,5.19,
	6.19 ,6.19 ,6.19, 6.19 ,6.19 ,6.19 ,6.19 ,6.19, 6.19 ,6.19,
	7.19 ,7.19 ,7.19, 7.19 ,7.19 ,7.19 ,7.19 ,7.19, 7.19 ,7.19,
	8.19 ,8.19 ,8.19, 8.19 ,8.19 ,8.19 ,8.19 ,8.19, 8.19 ,8.19,
	9.19 ,9.19 ,9.19, 9.19 ,9.19 ,9.19 ,9.19 ,9.19, 9.19 ,9.19


};

void Playercircle(double xx, double yy, int color);
void drawAllCircle(int PlayersNumbers1);
void TurntoPlay(int Player_Order, int steps,int timer3);
int if_Ladders(int l);
int if_Snakes(int s);


/*-------------------------------------------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------*/

//ViewWinner.c
void drawWinnerRectangle();
void display(int s);