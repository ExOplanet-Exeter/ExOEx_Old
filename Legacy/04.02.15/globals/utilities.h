/*==============================================================
----------------------------------------------------------------
                      88  88  88           88
               ,d     ""  88  ""    ,d     ""
               88         88        88
88       88  MM88MMM  88  88  88  MM88MMM  88   ,adPPYba,
88       88    88     88  88  88    88     88  a8P_____88
88       88    88     88  88  88    88     88  8PP"""""""
"8a,   ,a88    88,    88  88  88    88,    88  "8b,   ,aa
 `"YbbdP'Y8    "Y888  88  88  88    "Y888  88   `"Ybbd8"'
                                                     88
                                                     88
                                                     88
                                     ,adPPYba,       88,dPPYba,
                                     I8[    ""       88P'    "8a
                                      `"Y8ba,        88       88
                                     aa    ]8I  888  88       88
                                     `"YbbdP"'  888  88       88
----------------------------------------------------------------
         Contains all the global variables used in Arc.
 Be careful when editing as it will cause global changes (duh!)
----------------------------------------------------------------
==============================================================*/


//== INCLUDES ==================================================


//== FUNCTION PROTOTYPES =======================================
int arcProgress(int,int,int);
double arcRand(double,double);
double arcDot(double,double,double,double,double,double);


//== COMPLETED FUNCTIONS =======================================
int arcProgress(int current, int total, int cur){
  int percent;
  percent = (current * 100)/total;
  percent = percent / 10;
  percent = percent * 10;
  if (percent != cur){
    printf("%i%%\n",percent);
  }
  return percent;
}


double arcRand(double min, double max){
    double range = max - min;
    double div = RAND_MAX / range;
    return min + (rand() / div);
}


double arcDot(double Ax, double Ay, double Az, double Bx,
	      double By, double Bz){
    return (Ax*Bx)+(Ay*By)+(Az*Bz);
}
