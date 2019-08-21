
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>
#include <windows.h>
main()
{
int dice1, dice2, dice3, dice4, dice5, dice6, diceB, diceC, diceE, diceF, diceG, diceL, diceM, diceN, diceP = 0, diceQ = 0, diceR = 0, diceQ1 = 0;
int ctr = 0, ctr2 = 0, playerhp = 5, enemyhp = 5, contest = 0, consecvic = 0, consecvic2 = 0, consectr = 0, spctrbon = 0, ctrbonon = 0, ctrbondef = 0, consecvic3 = 0, spctrbon2 = 0;
int spatt = 0, supspatt = 0, hypsp = 0, enspcomb1 = 0, enspcomb2 = 0, enspcomb3 = 0, enemspcombC = 0;
int spmag = 0, spmag2 = 0, magsp = 0, magsp2 = 0, normag = 0, magsp3 = 0, sumag2 = 0, sumag = 0, magsp7 = 0, consecvic5 = 0, consecvic7 = 0, spctrbon7 = 0;
int diflev = 0, posdef = 0, posmag = 0, posbon = 0, bonchn = 0, bonchn2 = 0, cpusp = 0, consecvic4 = 0, spctrbon3 = 0, ultsp = 0, ultsp3 = 0, ultsp4 = 0;
int ans6 = 1, sumag5 = 0, spmag5 = 0, spmag6 = 0, magchn = 0, posmag2 = 0, cpusp3 = 0, spctrdf = 0, mspatt = 0, emgspcom = 0, mspatt2 = 0, emgspcom2 = 0, emgsupatt = 0, emagsup = 0, emagsup6 = 0;
int mspatt3 = 0, emgspcom3 = 0, hypsp2 = 0, spatt2 = 0, supspatt2 = 0, emgspcom4 = 0, mspatt4 = 0, new0 = 1, bonrec5 = 0;
int emgspcom5 = 0, emagsup5 = 0, mspatt5 = 0, enspcomb6 = 0, bonrec = 0, magrec = 0, bonrec2 = 0, magrec2 = 0, spmag3 = 0, fghton = 0, fghton2 = 0, new9 = 0;
int wnct = 0, cpuwn = 0, wnct2 = 0, wnctrec = 0, new1 = 0, new2 = 0, new3 = 0, new4 = 0, new5 = 0, new6 = 0, cpuwnct = 0, cpuwn2 = 0, new7 = 0, cpuwn3 = 0, wnct3 = 0, new10 = 0, new8 = 0;
int cpuwn4 = 0, wnct4 = 0, cpuwn5 = 0, wnct5 = 0, wnct6 = 0, cpuwn6 = 0, spoff = 0, spoff2 = 0, emgspcom7 = 0, enspcomb1b = 0, enspcomb2b = 0, enspcomb3b = 0, mgoff = 0, mspatt8 = 0, magcom = 0;
int maghyp = 0, maghyp1 = 0, maghyp2 = 0, wnct7 = 0, wnctrec7 = 0, fghton3 = 0, magcom2 = 0, cpulow = 0, boncncl = 0, magcncl = 0, hypsp3 = 0, wnctrecA = 0, prntcor = 0, highcor = 0;
float wnrt = 0, wnrtrec = 0, torwnrt = 0, torwnrt2 = 0, torwnrt3 = 0, wnrt2 = 0, wnrtrec2 = 0, wnrtrec3 = 0, wnrtrec4 = 0, wnrtrec5 = 0, wnrt3 = 0, wnrt6 = 0, wnrt5 = 0, wnrt4 = 0, cpuwnrt = 0, cpuwnrt2 = 0;
time_t t;
char choice, ans, ans2, ans3;
srand(time(&t));
do {
++diflev;
enemyhp = 5;
playerhp = 5;
posdef = 0;
torwnrt = 0;
wnrtrec = 0;
if (diflev > 1)
{
enemyhp = (enemyhp) + (10 * diflev);
playerhp = (playerhp) + (5 * diflev);
}
for (contest = 1; contest < 5; contest++)
{
do {
if (posdef == 0)
{
if (diflev < 2)
printf("\n\n\n");
printf("     WELCOME TO TEXT FIGHTER %d\n\n\n\n", diflev);
}
else
{
if ((cpuwn2 >= 1) && (fghton == 0))
printf("\n");
printf("\n\n     TEXT FIGHTER %d\n\n", diflev);
printf("     FIGHT TEXT %d \n\n\n", contest);
++fghton;
}
printf("     Player HP: %d\n\n", playerhp);
printf("     CPU HP: %d\n\n", enemyhp);
if (cpusp3 > 1)
{
if (new1 < 2)
printf("\n");
if (new1 > 1)
{
printf("\n     NEW RECORD!\n");
new1 = 0;
}
printf("     Special Round Chain Record: %d\n", cpusp3);
new0 = 1;
}
if (bonrec2 > 2)
{
if ((new2 < 1) && (bonrec2 > 2))
{
printf("\n");
}
if (new2 > 0)
{
printf("\n     NEW RECORD!\n");
new2 = 0;
}
printf("     Bonus Round Chain Record: %d\n", bonrec2);
}
if (magrec2 > 2)
{
if ((new3 < 1) && (magrec2 > 2))
printf("\n");
if (new3 > 0)
{
printf("\n     NEW RECORD!\n");
new3 = 0;
}
printf("     Magic Bonus Round Chain Record: %d\n", magrec2);
}
if ((wnctrec7 > 2) && (new6 > 0) && (wnctrec > 1) && (wnctrecA > 0))
{
printf("\n     NEW RECORD!");
new6 = 0;
}
if (wnctrec > 1)
++wnctrecA;
if ((posdef > 0) && (wnctrec > 1))
{
printf("\n     Consecutive Matches Won: %d\n", wnctrec);
}
if ((posdef > 0) && (wnctrec < 2) && (wnctrec7 > 2))
{
printf("\n     Consecutive Matches Won: 0\n");
}
if (wnctrec7 > 2)
{
printf("\n     Consecutive Match Win Record: %d\n", wnctrec7);
}
if (((cpusp3 > 1) && (wnctrec > 1)) || ((wnctrec7 > 2) && (cpusp3 > 1)))
printf("\n");
else
if (((bonrec2  > 2) && (magrec2 > 2)) || ((magrec2 > 2) && (bonrec > 2)))
printf("\n");
else
if (((cpusp3  > 1) && (magrec2 > 2)) || ((bonrec > 2) && (wnctrec > 1)) || ((wnctrec7 > 2) && (bonrec2 > 2)) || ((wnctrec > 1) && (bonrec2 > 2)) || ((wnctrec7 > 2) && (bonrec > 2)))
printf("\n");
else
if (((wnctrec  > 1) && (magrec2 > 2)) || ((wnctrec7  > 2) && (magrec2 > 2)))
printf("\n");
else
if (((bonrec > 2) && (cpusp3 > 1)) || ((bonrec2 > 2) && (cpusp3 > 1)))
printf("\n");
if (ctr2 > 0)
{
printf("\n     Total Won/Lost: %d/%d\n\n", wnct, cpuwn);
printf("     Total Rounds Played: %d\n\n", ctr2);
}
if ((posdef > 0) && ((wnrtrec3 > 0) || (wnrtrec > 0) || (torwnrt > 0) || (wnrt > 0) || (torwnrt == 0)))
printf("\n");
if ((posdef > 0) && ((cpuwnct == 1) && (wnct == 0)))
printf("\n");
if (wnrt > wnrtrec)
{
wnrtrec = wnrt;
++new5;
}
if (wnrtrec3 < wnrtrec5)
{
wnrtrec5 = wnrtrec3;
}
if (((fghton > 0) || (cpuwn > 0)) || ((fghton2 < 2) && (cpuwn > 0)))
{
Sleep (300);
if (posdef > 0)
printf("     Tournament Win Rate: %.2f%%", torwnrt);
Sleep(300);
if (((posdef > 0) && (wnrt > 0)) || ((posdef > 0) && (wnrt < 1) && (cpuwn > 0)))
printf("  ");
if (posdef < 1)
printf("     ");
printf("Total Win Rate: %.2f%%\n", wnrt);
if (((wnrtrec > wnrtrec3) && (torwnrt >= wnrt) && (wnrtrec >= wnrt) && (wnrtrec >= torwnrt) && (cpuwn2 <= 1)) || ((wnrtrec > wnrtrec3) && (torwnrt <= wnrt) && (wnrtrec >= wnrt) && (wnrtrec >= torwnrt) && (cpuwn2 <= 1)))
{
Sleep (300);
if (highcor == 1)
{
wnrtrec = torwnrt;
highcor = 0;
}
if ((posdef > 0) && (torwnrt > 0))
printf("\n     Tournament Win Rate High: %.2f%%", wnrtrec);
}
}
if (cpuwn2 > 0)
Sleep(300);
if (cpuwn2 > 0)
{

if ((torwnrt < 1) && ((cpuwn2 == 1) && (torwnrt < wnrt) && (wnrtrec > wnrtrec3) && (wnrtrec > wnrt) && (torwnrt == wnrtrec3)))
{
printf("\n     ");
++prntcor;
}
if ((cpuwn2 > 1) && (torwnrt < wnrt) && (wnrtrec > wnrtrec3))
{
printf("\n     ");
++prntcor;
}
if (((cpuwn2 > 0) && (torwnrt == wnrt) && (wnrtrec == wnrtrec3) && (wnrt == wnrtrec3)) || ((cpuwn2 > 1) && (torwnrt == wnrt) && (wnrtrec > wnrtrec3) && (wnrt == wnrtrec3)))
{
printf("\n     ");
++prntcor;
}
if (prntcor < 1)
{
if ((cpuwn2 == 1) && (torwnrt == wnrt) && (wnrtrec > wnrtrec3) && (wnrt == wnrtrec3))
{
printf("  ");
}
if ((cpuwn2 >= 1) && (torwnrt < wnrt) && (wnrtrec > wnrtrec3) && (wnrt > wnrtrec3) && (wnrtrec > wnrt))
{
printf("  ");
++prntcor;
}
if (((cpuwn2 > 0) && (torwnrt == wnrt) && (wnrtrec > wnrtrec3) && (wnrt > wnrtrec3)) || ((cpuwn2 > 0) && (torwnrt > wnrt) && (wnrtrec > wnrtrec3) && (wnrt > wnrtrec3)) || ((cpuwn2 > 0) && (torwnrt > wnrt) && (wnrtrec > wnrtrec3) && (wnrt < wnrtrec3)))
{
printf("  ");
}
if (((cpuwn2 > 0) && (torwnrt == wnrt) && (wnrtrec == wnrtrec3) && (wnrt == wnrtrec3)) || ((cpuwn2 == 0) && (torwnrt == wnrt) && (wnrtrec > wnrtrec3) && (wnrtrec3 == torwnrt)) || ((cpuwn2 > 0) && (torwnrt == wnrt) && (wnrtrec <= wnrtrec3) && (wnrtrec3 == torwnrt)))
{
printf("  ");
}
if ((torwnrt > 0) && ((cpuwn2 == 1) && (torwnrt < wnrt) && (wnrtrec > wnrtrec3) && (wnrtrec > wnrt) && (torwnrt == wnrtrec3) && (prntcor == 0)))
{
printf("  ");
}
if ((torwnrt > 0) && (cpuwn2 >= 1) && (torwnrt < wnrt) && (wnrtrec > wnrtrec3) && (wnrtrec == wnrt) && (torwnrt == wnrtrec3))//new
{
printf("  ");
}//new
}
printf("Tournament Win Rate Low: %.2f%%\n", wnrtrec3);
prntcor = 0;
if ((wnrtrec3 == 0) && (torwnrt == 0))
highcor = 1;
}
do {
if (posdef < 1)
{
if (diflev > 1)
printf("\n");
printf("\n\n     Will you enter the Text Fighter? Press (y) for yes, (n) for no\n\n\n");
printf("  ");
scanf("  %c", &ans);
while ( getchar() != '\n' );
{
printf("\n\n");
}
}
if (ans == 'N')
{
ans = 'n';
}
if (ans == 'n')
{
printf("     Don't be a chicken! You have to fight!\n\n\n");
}
if (ans == 'Y')
{
ans = 'y';
}
if ((ans != 'y') && (ans != 'n'))
{
printf("     You pressed the wrong key, try again\n\n\n");
}
} while (ans != 'y');
if (ans == 'y');
{
ans = 'y';
if (posdef < 1)
{
printf("     Fight Text %d starts now!\n\n\n", contest);
}
if (posdef > 0)
{
if (cpuwn2 < 1)
printf("\n");
printf("\n\n\n     Enter the Text Fighter!\n\n\n");
}
do {
printf("     Round %d\n\n\n", ++ctr);
printf("     Press (n) for Normal Attack   (m) for Magic Heal   (s) for Special Attack\n\n");
printf("  ");
scanf (" %c", &choice);
while ( getchar() != '\n' );
{
printf("  ");
}
if (choice == 'N')
{
choice = 'n';
}
if (choice == 'M')
{
choice = 'm';
}
if (choice == 'S')
{
choice = 's';
}
if ((choice != 'n') && (choice != 'm') && (choice != 's'))
{
printf("\n     You pressed the wrong key, try again\n\n\n");
--ctr;
continue;
} while  ((choice != 'n') && (choice != 'm') && (choice != 's'));
diceQ = (rand() % 4) + 1;
if (choice == 'n')
{
{
dice1 = (rand() % 70 + cpusp + diflev) + 1;//was 7 now 70
dice2 = (rand() % 50) + 1;//was 5
}
if (dice1 > dice2)
{
if (enemyhp <= 2)
++cpulow;
enemyhp = (enemyhp - 2);//was 2
printf("\n     You execute the Normal Attack!\n");
printf("     CPU HP at %d\n", enemyhp);
++consecvic;
++consectr;
posmag = 0;
posbon = 0;
cpusp = 0;
if ((consecvic > 2) && (enemyhp > 0))
{
if (bonchn <= 1)
enemyhp = (enemyhp - 1);//1
if (bonchn >= 2)
enemyhp = (enemyhp - 2);
printf("\n     You get a Bonus Attack!\n");
printf("     CPU HP at %d\n", enemyhp);
if (playerhp > 0)
{
++spctrbon;
++bonchn;
if ((consecvic > 2) && (enemyhp < 1))
++posbon;
}
if (enemyhp < 1)
{
magcncl = magchn;
magchn = 0;
posmag = 0;
}
}
if ((normag > 0) && (enemyhp > 0))
{
if (magchn <= 1)
enemyhp = (enemyhp - 1);//1
if (magchn >= 2)
enemyhp = (enemyhp - 2);
printf("\n     You get a Magic Bonus Attack!\n");
printf("     CPU HP at %d\n", enemyhp);
if (playerhp > 0)
{
++spmag;
++sumag;
++posmag;
++magchn;
if (magchn > 1)
{
diceL = (rand() % 10) + 1;
if (diceL < 5)  //5
consecvic = 1;
}
if ((magchn > 2) && (enemyhp < 1))
++posmag2;
if (spmag3 < 2)
normag = 0;
}
if (enemyhp < 1)
{
boncncl = bonchn;
bonchn = 0;
posbon = 0;
}
}
if (enemyhp < 1)
{
++wnct7;
if (wnct7 > wnctrec7)
{
wnctrec7 = wnct7;
if ((wnctrec7 > 2) && (wnctrecA > 0))
++new6;
}
printf("     You defeated the CPU!\n");
if (new6 > 0)
printf("\n     You have a new Consecutive Match Win Record!");
if ((cpulow > 0) && (new6 > 0))
printf("\n");
if (cpulow < 1)
printf("\n     You won in %d rounds with the Normal Attack!\n", ctr);
if (cpulow > 0)
printf("     You won in round %d with the Normal Attack!\n", ctr);
if ((new6 > 0) && (cpulow > 0))
{
if ((posbon < 1) && (posmag < 1))
{
if (contest <= 2)
{//NEW
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     Stay focused for the next fight!\n\n");
if (diceQ == 2)
printf("\n     You used good straightforward technique!\n\n");
if (diceQ == 3)
printf("\n     Keep it up!\n\n");
}//NEW
if (contest >= 3)
{//NEW
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     It was a straight path to victory!\n\n");
if (diceQ == 2)
printf("\n     A direct path to victory!\n\n");
if (diceQ == 3)
printf("\n     A direct route to victory!\n\n");
}//NEW
}
}
if ((ctr < 5) && (new6 < 1) && (posbon < 1) && (posmag < 1))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     A good early victory!\n");
if (diceQ == 2)
printf("\n     You beat the opponent easily!\n");
if (diceQ == 3)
printf("\n     Not bad!\n");
if  ((posbon < 1) && (posmag < 1))
printf("\n");
}
if ((ctr > 4) && (new6 < 1) && (cpulow > 0))
{
printf("\n");
}
if ((ctr < 5) && (new6 > 0) && (posbon < 1) && (posmag < 1))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     Well-fought!\n");
if (diceQ == 2)
printf("     You fought well!\n");
if (diceQ == 3)
printf("     Excellent!\n");
if  ((posbon < 1) && (posmag < 1))
printf("\n");
}
if ((posbon > 0) && (bonchn < 3))
{
printf("     And you finished the contest with the Bonus!\n");
if (new6 > 0)
{//NEW
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     A good victory!\n\n");
if (diceQ == 2)
printf("\n     That was a great move!\n\n");
if (diceQ == 3)
printf("\n     That was great!\n\n");
}//NEW
if (new6 < 1)
{//NEW
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     Nice move!\n\n");
if (diceQ == 2)
printf("\n     It was a good move!\n\n");
if (diceQ == 3)
printf("\n     That was a good technique!\n\n");
posmag = 0;
}
}//NEW
if ((posmag > 0) && (magchn < 3))
{
printf("     And you ended the fight with the Magic Bonus!\n");
if (new6 > 0)
{//NEW
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     Good skill!\n\n");
if (diceQ == 2)
printf("\n     Great move!\n\n");
if (diceQ == 3)
printf("\n     Good game!\n\n");
}//NEW
if (new6 < 1)
{//NEW
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     Good move!\n\n");
if (diceQ == 2)
printf("\n     That was a good move!\n\n");
if (diceQ == 3)
printf("\n     That was a nice move!\n\n");
posmag = 0;
}
}//NEW
if ((bonchn > 2) && (posbon > 0))
{
bonrec = bonchn;
if (bonrec > bonrec2)
{
++bonrec5;
bonrec2 = bonrec;
if (bonrec5 > 1)
{
++new2;
}
}
if ((new2 > 0) && (new6 > 0) && (bonchn > 4))
printf("\n");
if (new2 > 0)
{//NEW
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     You used some amazing tactics!\n");
if (diceQ == 2)
printf("     It was an incredible strategy!\n");
if (diceQ == 3)
printf("     That was expert strategy!\n");
}//NEW
if ((bonchn > 4) && (new2 > 0))
{//NEW
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     Phenomenal!\n");
if (diceQ == 2)
printf("     Absolutely incredible!\n");
if (diceQ == 3)
printf("     Unbelievable!\n");
}//NEW
if (((new2 > 0) && (new6 > 0)) || ((new2 < 1) && (new6 > 0)) || ((new2 > 0) && (new6 < 1)))
printf("\n");
printf("     You ended the fight with a Bonus Chain of %d!\n", bonchn);
bonrec5 = 1;
if ((new2 > 0) && (new10 > 1))
{//new
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     A new record!\n");
if (diceQ == 2)
printf("     A new Bonus Chain Record!\n");
if (diceQ == 3)
printf("     It's a new Bonus Chain Record!\n");
}//new
if ((bonchn > 4) && (new2 < 1))
{//NEW
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     Those were great tactics!\n");
if (diceQ == 2)
printf("     A fantastic strategy!\n");
if (diceQ == 3)
printf("     Superb strategy!\n");
}//NEW
if ((bonchn >= 2 ) && (bonchn <= 4))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     It was a fantastic finish!\n");
if (diceQ == 2)
printf("     It was an amazing finish!\n");
if (diceQ == 3)
printf("     It was a special finish!\n");
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     You showed great skill!\n\n");
if (diceQ == 2)
printf("\n     A very skilled technique!\n\n");
if (diceQ == 3)
printf("\n     Nice technique!\n\n");
}
if ((bonchn > 4) && (new2 < 1))
{//NEW
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     That was an awesome fight!\n\n");
if (diceQ == 2)
printf("\n     That was completely outstanding!\n\n");
if (diceQ == 3)
printf("\n     That was phenomenal!\n\n");
}//NEW
if ((bonchn > 4) && (new2 > 0))
{//NEW
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     It was a fantastic contest!\n\n");
if (diceQ == 2)
printf("\n     A magnificent contest!\n\n");
if (diceQ == 3)
printf("\n     What an amazing contest!\n\n");
}
bonrec = bonchn;
posbon = 0;
}//NEW
if ((magchn > 2) && (posmag2 > 0))
{
++new8;
magrec = magchn;
if (magrec > magrec2)
{
magrec2 = magrec;
if (new8 > 1)
++new3;
}
if ((new3 > 0) && (new6 > 0) && (magchn > 4))
printf("\n");
if (new3 > 0)
{//NEW
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     That was an amazing strategy!\n");
if (diceQ == 2)
printf("     Those were awesome tactics!\n");
if (diceQ == 3)
printf("     That was a fantastic strategy!\n");
}//NEW
if ((magchn > 4) && (new3 > 0))
{//NEW
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     You didn't fail to impress!\n");
if (diceQ == 2)
printf("     You didn't let up!\n");
if (diceQ == 3)
printf("     How do you do it?\n");
}//NEW
if (((new3 > 0) && (new6 > 0)) || ((new3 < 1) && (new6 > 0)) || ((new3 > 0) && (new6 < 1)))
printf("\n");
printf("     You ended the fight with a Magic Bonus Chain of %d!\n", magchn);
if (new3 > 0)
{//new
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     A new record!\n");
if (diceQ == 2)
printf("     And it's a new Magic Bonus Chain Record!\n");
if (diceQ == 3)
printf("     It's a new Magic Bonus Chain Record!\n");
}//new
if ((magchn > 4) && (new3 < 1))
{//NEW
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     Formidable magic tactics!\n");
if (diceQ == 2)
printf("     A brilliant magic strategy!\n");
if (diceQ == 3)
printf("     A skillful magic strategy!\n");
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     That was awesome!\n\n");
if (diceQ == 2)
printf("\n     That was an amazing fight!\n\n");
if (diceQ == 3)
printf("\n     That was an incredible contest!\n\n");
if ((magchn > 4) && (new3 > 0))
{//NEW
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     It was an absolutely fantastic performance!\n\n");
if (diceQ == 2)
printf("\n     An incredible demonstration of skill!\n\n");
if (diceQ == 3)
printf("\n     An amazingly skilled performance!\n\n");
}//NEW
}//NEW
if (((magchn >= 2) && (magchn <= 4)))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     It was a superb match!\n");
if (diceQ == 2)
printf("     It was a great match!\n");
if (diceQ == 3)
printf("     It was an excellent match!\n");
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     You performed well!\n\n");
if (diceQ == 2)
printf("\n     You fought very well!\n\n");
if (diceQ == 3)
printf("\n     You were on form!\n\n");
}
normag = 0;
posmag2 = 0;
cpulow = 0;
bonchn = boncncl;
boncncl = 0;
magchn = magcncl;
magcncl = 0;
posmag = 0;
posmag2 = 0;
}
break;
}
}
if (dice2 > dice1)
{
printf("\n     You execute the Normal Attack!\n");
printf("     CPU evades!\n\n");
printf("     CPU counter-attacks!\n");
printf("     Player HP at %d\n", --playerhp);
consecvic = 0;
consecvic2 = 0;
normag = 0;
sumag = 0;
magsp2 = 0;
magsp3 = 0;
sumag2 = 0;
consectr = 0;
magsp = 0;
bonchn = 0;
cpusp = 0;
ultsp = 0;
magsp7 = 0;
ultsp3 = 0;
ultsp4 = 0;
magchn = 0;
spmag3 = 0;
}
if (dice1 == dice2)
{
printf("\n     You execute the Normal Attack!\n");
printf("     CPU defends!\n");
consecvic = 0;
consecvic2 = 0;
normag = 0;
sumag = 0;
magsp2 = 0;
magsp3 = 0;
sumag2 = 0;
magsp = 0;
bonchn = 0;
cpusp = 0;
ultsp = 0;
magsp7 = 0;
ultsp3 = 0;
ultsp4 = 0;
magchn = 0;
spmag3 = 0;
}
}
if (choice == 'm')
{
dice3 = (rand() % 14 + cpusp) + 1; //14
dice4 = (rand() % 11) + 1;
if (dice3 > dice4)
{
++spmag;
++spmag2;
++consecvic2;
++normag;
++magsp;
++consectr;
++spmag3;
if (magchn > 2)
{
sumag5 = sumag2;
spmag6 = spmag2;
spmag5 = spmag;
spmag = 0;
spmag2 = 0;
sumag2 = 0;
}
}
if ((dice3 > dice4) && (spmag < 3) && (spmag2 < 4) && (sumag2 != 1) && (magchn < 3))
{
playerhp = (playerhp + 4);
printf("\n     You cast Magic Heal!\n");
printf("     Player HP at %d\n", playerhp);
cpusp = 0;
}
if ((dice3 > dice4) && (spmag > 2) && (spmag2 < 4) && (sumag2 != 1) && (magchn < 3))
{
playerhp = (playerhp + 6);
printf("\n     You get the Magic Heal Bonus!\n");
printf("     Player HP at %d\n", playerhp);
spmag = 0;
cpusp = 0;
}
if (magsp2 > 0)
{
++magsp3;
}
if ((sumag2 > 0) && (spmag2 > 3) && (dice3 > dice4) && (spmag >= 0))
{
enemyhp = (enemyhp - 30);
printf("\n     You activate the ALPHA MAGIC SUPER SPECIAL COMBO ATTACK!\n");
printf("     CPU HP at %d\n", enemyhp);
++magsp;
spmag2 = 2;
sumag2 = 0;
++cpusp;
if (magsp2 > 0)
{
magsp3 = 1;
}
}
if (enemyhp < 1)
{
++wnct7;
if (wnct7 > wnctrec7)
{
wnctrec7 = wnct7;
if ((wnctrec7 > 2) && (wnctrecA > 0))
++new6;
}
if ((ctr > 6) && (cpusp < 2) && (new6 < 1))
{
diceQ = (rand() % 2) + 1;
if (diceQ == 1)
printf("     Awesome technique!\n");
if (diceQ == 2)
printf("     A phenomenal move!\n");
}
if ((ctr < 7) && (cpusp > 1) && (new6 > 0))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     Completely unbelievable!\n");
if (diceQ == 2)
printf("     This is fantastic!\n");
if (diceQ == 3)
printf("     This is unbelievable!\n");
}
if (((ctr < 7) && (cpusp > 1) && (new6 < 1)) || ((ctr > 6) &&  (cpusp < 2) && (new6 > 0))  || ((ctr > 6) &&  (cpusp > 1) && (new6 < 1)) || ((ctr < 7) &&  (cpusp < 2) && (new6 < 1))) //|| ((ctr < 7) &&  (cpusp < 2) && (new6 > 0)))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     Absolutely incredible!\n");
if (diceQ == 2)
printf("     An amazing performance!\n");
if (diceQ == 3)
printf("     This is incredible!\n");
}
if (((ctr < 7) &&  (cpusp > 1) && (new6 > 0)) || ((ctr < 7) &&  (cpusp < 2) && (new6 < 1)) || ((ctr < 7) &&  (cpusp < 2) && (new6 > 0)) || ((ctr < 7) && (cpusp > 1) && (new6 < 1)))
printf("     You must be a Text Fight Master!\n");
if (((ctr > 6) && (cpusp > 1) && (new6 > 0)) || ((ctr > 6) && (cpusp < 2) && (new6 > 0)) || ((ctr > 6) && (cpusp > 1) && (new6 < 1)))
printf("     Aren't you a Text Fighting Master?\n");
printf("\n");
if (cpusp > 1)
printf("     You performed Special Attacks in %d consecutive rounds!\n", cpusp);
printf("     You won in %d rounds with the Alpha Magic Super Special Combo Attack!\n", ctr);
if (new6 > 0)
printf("     And you have a new Consecutive Match Win Record!\n");
if (((ctr < 7) &&  (cpusp > 1) && (new6 > 0)) || ((ctr > 6) && (cpusp > 1) && (new6 > 0)))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     Could anyone have ever doubted the outcome of this contest?\n");
if (diceQ == 2)
printf("\n     How is it possible for anyone to be able to even do this?\n");
if (diceQ == 2)
printf("\n     Only the most dedicated to their training can attain such abilities!\n");
}
if (((ctr < 7) &&  (cpusp < 2) && (new6 > 0)) || ((ctr > 6) &&  (cpusp > 1) && (new6 < 1)) || ((ctr < 7) &&  (cpusp < 2) && (new6 < 1)) || ((ctr > 6) &&  (cpusp < 2) && (new6 > 0)) || ((ctr > 6) &&  (cpusp < 2) && (new6 < 1)) || ((ctr < 7) && (cpusp > 1) && (new6 < 1)))
printf("     How did you do that!\n");
if  ((ctr > 6) && (cpusp < 2) && (new6 < 1))
printf("     That was absolutely incredible!\n");
if  ((ctr < 7) && (cpusp < 2) && (new6 < 1))
printf("     That was an amazing technique!\n");
if (((cpusp < 2) && (ctr < 7) && (new6 < 1)) || ((new6 < 1) && (cpusp > 1) && (ctr > 6)) || ((ctr > 6) &&  (cpusp < 2) && (new6 > 0)) || ((ctr < 7) &&  (cpusp < 2) && (new6 > 0)))
printf("\n");
if ((ctr > 6) &&  (cpusp < 2) && (new6 > 0))
printf("     That really was fantastic!\n");
if (((ctr > 6) && (cpusp > 1) && (new6 > 0)) || ((ctr < 7) &&  (cpusp < 2) && (new6 > 0)))
printf("     That was totally awesome!\n");
if ((cpusp > 1) && (ctr < 7) && (new6 > 0))
printf("     You have entered the Text Fighter Hall of Fame!\n");
if (((ctr < 7) && (cpusp < 2)) || ((new6 < 1) && (cpusp > 1) && (ctr > 6)))
printf("     A phenomenal finish!\n");
if  ((ctr > 6) && (cpusp < 2) && (new6 < 1))
printf("\n     You're a Text Fighting genius!\n\n");
if (((ctr < 7) && (cpusp < 2)) || ((ctr < 7) && (new6 < 1) && (cpusp > 1)) || ((ctr < 7) && (new6 > 0) && (cpusp > 1)) || ((ctr > 6) && (new6 > 0) && (cpusp > 1)))
printf("\n");
if (((ctr < 7) && (cpusp > 1)) || ((ctr > 6) && (new6 > 0) && (cpusp > 1)) || ((ctr < 7) &&  (cpusp < 2) && (new6 > 0)))
{
printf("     Only a Text Fighting Master could achieve something like this!\n\n");
}
break;
}
if ((dice3 > dice4) && (spmag2 > 3) && (spmag >= 0))
{
enemyhp = (enemyhp - 12);
printf("\n     You execute the MAGIC SUPER ATTACK!\n");
printf("     CPU HP at %d\n", enemyhp);
spmag2 = 0;
++cpusp;
++magsp;
if (magsp2 > 0)
{
magsp3 = 1;
}
}
if (enemyhp < 1)
{
++wnct7;
if (wnct7 > wnctrec7)
{
wnctrec7 = wnct7;
if ((wnctrec7 > 2) && (wnctrecA > 0))
++new6;
}
if (diceQ == 1)
printf("     An incredible move!\n");
if (diceQ == 2)
printf("     Fantastic moves!\n");
if (diceQ == 3)
printf("     A brilliant move!\n");
if (diceQ == 4)
printf("     An excellent move!\n");
if (((cpusp < 2) && (ctr > 4) && (new6 > 0)) || ((cpusp < 2) && (ctr < 5) && (new6 < 1)) || ((cpusp > 1) && (ctr > 4) && (new6 < 1)) || ((cpusp > 1) && (ctr < 5) && (new6 < 1)))
printf("\n");
if (new6 > 0)
printf("     And an impressive finish!\n");
if (((cpusp > 1) && (ctr < 5) && (new6 > 0)) || ((cpusp < 2) && (ctr < 5) && (new6 > 0)) || ((cpusp > 1) && (ctr > 4) && (new6 > 0)))
printf("\n");
if (ctr < 5)
printf("     The contest ended early!\n");
if (new6 > 0)
printf("     You've got a new Consecutive Match Win Record!\n");
if ((cpusp > 1) && (ctr < 5) && (new6 > 0))
printf("\n");
if (cpusp > 1)
printf("     You have a Special Round Chain of %d!\n", cpusp);
printf("     You won in Round %d with the Magic Super Attack!\n", ctr);
if (((new6 < 1) && (ctr > 4) && (cpusp < 2)) || ((cpusp < 2) && (ctr < 5) && (new6 < 1))) //|| ((cpusp < 2) && (ctr < 5) && (new6 < 1)))    //(new6 < 1) && (ctr > 4) && (cpusp < 2))
printf("\n     It was a good fight!\n\n");
if (((new6 < 1) && (ctr > 4) && (cpusp > 1)) || ((new6 > 0) && (ctr > 4) && (cpusp < 2)) || ((cpusp < 2) && (ctr < 5) && (new6 > 0)))  //|| ((new6 > 0) && (ctr < 5) && (cpusp < 2)))
printf("\n     Amazing skill!\n\n");
if (((new6 < 1) && (ctr < 5) && (cpusp > 1)) || ((new6 > 0) && (ctr > 4) && (cpusp > 1)))       //((new6 > 0) && (ctr < 5) && (cpusp < 2))) ((new6 < 1) && (ctr > 4) && (cpusp < 2))
printf("\n     That was great magic technique!\n\n");
if  ((new6 > 0) && (ctr < 5) && (cpusp > 1))
printf("\n     It was an amazing fight!\n\n");
break;
}
if ((dice3 > dice4) && (sumag2 > 0) && (spmag2 >= 0) && (spmag >= 0))
{
enemyhp = (enemyhp - 20);
printf("\n     You execute the MAGIC SUPER SPECIAL COMBO ATTACK!\n");
printf("     CPU HP at %d\n", enemyhp);
sumag2 = 0;
++magsp;
++cpusp;
if (magsp2 > 0)
{
magsp3 = 1;//added
}
}
if (enemyhp < 1)
{
++wnct7;
if (wnct7 > wnctrec7)
{
wnctrec7 = wnct7;
if ((wnctrec7 > 2) && (wnctrecA > 0))
++new6;
}
if (diceQ == 1)
printf("     What a move!\n");
if (diceQ == 2)
printf("     Thrilling action!\n");
if (diceQ == 3)
printf("     Did you see those moves!\n");
if (diceQ == 4)
printf("     Did you see that!\n");
if (((new6 < 1) && (ctr > 5) && (cpusp > 1)) || ((new6 < 1) && (ctr > 5) && (cpusp < 2)) || ((new6 < 1) && (ctr < 6) && (cpusp > 1)))
printf("\n");
if (ctr < 6)
printf("     That came out of nowhere!\n");
if (((new6 < 1)  && (cpusp < 2) && (ctr < 6)) || ((new6 < 1) && (cpusp > 1) && (ctr < 6)))
printf("\n");
if (new6 > 0)
printf("\n     You have a new Consecutive Match Win Record!\n");
if (cpusp > 1)
printf("     You performed Special Attacks in %d consecutive rounds!\n", cpusp);
printf("     You won in %d rounds with the Magic Super Special Combo Attack!\n", ctr);
if (((new6 > 0) && (cpusp > 1) && (ctr < 6)) || ((new6 > 0) && (cpusp > 1) && (ctr > 5)) || ((new6 < 1) && (cpusp > 1) && (ctr > 5)))
printf("\n");
diceQ = (rand() % 3) + 1;
{
if (diceQ == 1)
printf("     It was an excellent combo!\n");
if (diceQ == 2)
printf("     That was a fantastic combo!\n");
if (diceQ == 3)
printf("     It was an amazing combination!\n");
}
if (((new6 < 1)  && (cpusp  > 1) && (ctr < 6)) || ((new6 > 0) && (cpusp < 2) && (ctr < 6)) ||  ((new6 < 1)  && (cpusp < 2) && (ctr < 6)) || ((new6 < 1)  && (cpusp < 2) && (ctr > 5)))
printf("\n");
if (((new6 > 0) && (cpusp < 2) && (ctr < 6)) || ((new6 > 0) && (cpusp > 1) && (ctr > 5)))
printf("     And a phenomenal finish!\n");
if (((new6 < 1) && (cpusp > 1) && (ctr < 6)) ||  ((new6 < 1)  && (cpusp < 2) && (ctr < 6)) || ((new6 < 1)  && (cpusp < 2) && (ctr > 5)))
printf("     Incredible technique!\n");
if ((new6 < 1) && (cpusp > 1) && (ctr > 5))
printf("     Fantastic strategy!\n");
if (((new6 < 1)  && (cpusp < 2) && (ctr < 6)) || ((new6 > 0) && (cpusp > 1) && (ctr > 5)) || ((new6 > 0) && (cpusp < 2) && (ctr > 5)))
printf("\n");
if ((new6 < 1) && (cpusp > 1) && (ctr > 5))
printf("\n");
if (((new6 > 0) && (cpusp < 2) && (ctr > 5)) || ((new6 < 1) && (cpusp > 1) && (ctr > 5)))
printf("     That was a magnificent contest!\n\n");
if (((new6 > 0) && (cpusp > 1) && (ctr < 6)) || ((new6 > 0) && (cpusp > 1) && (ctr > 5)))
printf("     You put on a spellbinding show!\n");
if ((new6 > 0) && (cpusp > 1) && (ctr < 6))
printf("     A masterclass in magic technique!\n");
if (((new6 < 1) && (ctr > 5) && (cpusp > 1)) || ((new6 < 1) && (ctr > 5) && (cpusp < 2)) || ((new6 < 1) && (ctr < 6) && (cpusp > 1)) || ((new6 < 1)  && (cpusp < 2) && (ctr < 6)) || ((new6 < 1)  && (cpusp < 2) && (ctr > 5)))
printf("\n");
if ((new6 > 0) && (cpusp > 1) && (ctr < 6))
printf("\n     You are the Master Magician!\n\n");
break;
}
if ((dice3 > dice4) && (magchn > 2) && (sumag2 == 0) && (spmag2 == 0) && (spmag == 0))
{
enemyhp = (enemyhp - 18);
printf("\n     You execute the HYPER MAGIC BONUS ATTACK!\n");
printf("     CPU HP at %d\n", enemyhp);
++magsp;
magchn = 0;
++cpusp;
sumag2 = sumag5;
spmag2 = spmag6;
spmag = spmag5;
spmag5 = 0;
spmag6 = 0;
sumag5 = 0;
if (magsp2 > 0)
{
magsp3 = 1;
}
}
if (enemyhp < 1)
{
++wnct7;
if (wnct7 > wnctrec7)
{
wnctrec7 = wnct7;
if ((wnctrec7 > 2) && (wnctrecA > 0))
++new6;
}
if (diceQ == 1)
printf("     That was a great fight!\n");
if (diceQ == 2)
printf("     That was insane!\n");
if (diceQ == 3)
printf("     That was an unreal contest!\n");
if (diceQ == 4)
printf("     That was a magnificent fight!\n");
if (((cpusp < 2) && (ctr < 8) && (new6 > 0)) || ((cpusp < 2) && (ctr < 8) && (new6 < 1)) || ((cpusp < 2) && (ctr > 7) && (new6 > 0)) || ((ctr > 8) && (cpusp > 1) && (new6 > 0)))
printf("\n");
if (((ctr < 8) && (new6 > 0) && (cpusp > 1)) || ((ctr > 7) && (new6 < 1) && (cpusp > 1)) || ((ctr < 8) && (new6 < 1) && (cpusp > 1)))
printf("\n");
if (ctr < 8)
printf("     You made that look easy!\n");
diceQ = (rand() % 3) + 1;
{
if (diceQ == 1)
printf("     It was a superb follow-up!\n");
if (diceQ == 2)
printf("     It was a powerful follow-up attack!\n");
if (diceQ == 3)
printf("     It was a fantastic follow-up!\n");
}
if (((ctr < 8) && (cpusp > 1) && (new6 < 1)) || ((ctr > 7) && (cpusp < 2) && (new6 < 1)))
printf("\n");
if (new6 > 0)
printf("     And an incredible finish!\n");
if (((cpusp < 2) && (ctr < 8) && (new6 > 0)) || ((cpusp < 2) && (ctr > 7) && (new6 > 0)) || ((cpusp > 1) && (ctr < 8) && (new6 > 0)))
printf("\n");
if (new6 > 0)
printf("     You've got a new Consecutive Match Win Record!\n");
if ((cpusp > 1) && (ctr > 7) && (new6 > 0))
printf("\n");
if (cpusp > 1)
printf("     You have a Special Round Chain of %d!\n", cpusp);
printf("     You won in %d rounds with the Hyper Magic Bonus Attack!\n", ctr);
if (((cpusp > 1) && (ctr < 8)) || ((cpusp < 2) && (ctr < 8) && (new6 < 1)))
printf("\n");
if (((cpusp > 1) && (ctr > 7)) || ((cpusp < 2) && (new6 > 0) && (ctr > 7)))
printf("\n");
if (((cpusp < 2) && (ctr < 8) && (new6 > 0)) || ((ctr > 7) && (cpusp < 2) && (new6 < 1)))
printf("\n");
if (((ctr > 7) && (cpusp > 1) &&  (new6 < 0)) || ((ctr > 7) && (new6 > 0) && (cpusp < 2)) || ((ctr > 7) && (new6 < 1) && (cpusp > 1)))
printf("     Unstoppable magic tactics!\n\n");
if (((ctr < 8) && (cpusp < 2) && (new6 < 1)) || ((ctr < 8) && (new6 > 0) && (cpusp < 2)))
printf("     Hyper magic skill!\n\n");
if (((ctr < 8) && (cpusp > 1) && (new6 < 1)) ||  ((ctr > 7) && (new6 > 0) && (cpusp > 1)))
printf("     Text Fighting just got better!\n\n");
if ((ctr < 8) && (new6 > 0) && (cpusp > 1))
printf("     A victory of champions!\n\n");
break;
}
if (dice4 > dice3)
{
playerhp = (playerhp - 2);
printf("\n     CPU cancels Magic Heal!\n\n");
printf("     CPU counter-attacks!\n");
printf("     Player HP at %d\n", playerhp);
consecvic2 = 0;
spmag = 0;
spmag2 = 0;
magsp = 0;
normag = 0;
magsp2 = 0;
magsp3 = 0;
sumag2 = 0;
sumag = 0;
consecvic = 0;
consectr = 0;
bonchn = 0;
cpusp = 0;
ultsp = 0;
magsp7 = 0;
ultsp3 = 0;
ultsp4 = 0;
magchn = 0;
spmag3 = 0;
}
if (dice3 == dice4)
{
printf("\n     CPU cancels Magic Heal!\n");
consecvic2 = 0;
spmag = 0;
spmag2 = 0;
magsp = 0;
normag = 0;
magsp2 = 0;
magsp3 = 0;
sumag2 = 0;
sumag = 0;
consecvic = 0;
bonchn = 0;
cpusp = 0;
ultsp = 0;
magsp7 = 0;
ultsp3 = 0;
ultsp4 = 0;
magchn = 0;
spmag3 = 0;
}
}
if (choice == 's')
{
{
dice5 = (rand() % 28 + (diflev + cpusp));// 14 then was 17 THEN 18 then 19 NOW 20 OR 21??? 22 23 24 26 27 28 29 -1
dice6 = (rand() % 31) + 1;//30-40 30
}
if (dice5 > dice6)
{
++consecvic2;
++consectr;
++ultsp;
bonchn2 = bonchn;
bonchn = 0;
if (magsp7 > 0)
magsp3 = 1;
if ((ultsp3 > 0) || (ultsp4 > 0))
ultsp = 4;
}
if (bonchn2 > 2)
{
spctrbon7 = spctrbon;
consecvic7 = consecvic2;
spctrbon = 0;
consecvic2 = 0;
magsp7 = magsp3;
magsp3 = 0;
if (ultsp > 3)
{
ultsp4 = ultsp;
ultsp = 0;if (diceQ < 7)
printf("\n");
}
}
if (magsp3 == 1)
{
spctrbon2 = spctrbon;
spctrbon = 0;
consecvic5 = consecvic2;
consecvic2 = 0;
if (ultsp > 3)
{
ultsp3 = ultsp;
ultsp = 0;
}
}
if (ultsp > 3)
{
spctrbon3 = spctrbon;
consecvic4 = consecvic2;
spctrbon = 0;
consecvic2 = 0;
}
if ((consecvic2 < 3) && (spctrbon < 2) && (dice5 > dice6) && (magsp < 1) && (magsp3 < 1) && (bonchn2 < 3) && (ultsp < 4))
{
printf("\n     You execute the SPECIAL ATTACK!\n");
enemyhp = (enemyhp - 6); //was minus 4, before that minus 5
printf("     CPU HP at %d\n", enemyhp);
++cpusp;
}
if (enemyhp < 1)
{
++wnct7;
if (wnct7 > wnctrec7)
{
wnctrec7 = wnct7;
if ((wnctrec7 > 2) && (wnctrecA > 0))
++new6;
}
if (ctr == 1)
{
if (diceQ == 1)
printf("     The match is over already?\n");
if (diceQ == 2)
printf("     You already beat the opponent?\n");
if (diceQ == 3)
printf("     You didn't waste time!\n");
if (diceQ == 4)
printf("     The match is already over?\n");
printf("     You won in the first round with the Special Attack!\n\n");
printf("     Fantastic skill!\n\n");
}
if ((ctr > 1) && (ctr <= 4))
{
if (diceQ == 1)
printf("     A decisive early victory!\n");
if (diceQ == 2)
printf("     A good early victory!\n");
if (diceQ == 3)
printf("     It was a quick finish!\n");
if (diceQ == 4)
printf("     An impressive early victory!\n");
if (((cpusp < 2) && (new6 > 0)) || ((cpusp > 1) && (new6 > 0)) || ((cpusp < 2) && (new6 > 0)))
printf("\n");
if (new6 > 0)
printf("     You've got a new Consecutive Match Win Record!\n");
if ((cpusp > 1) && (new6 < 1))
printf("\n");
if (cpusp > 1)
printf("     You performed Special Attacks in %d consecutive rounds!\n", cpusp);
printf("     You won in round %d with the Special Attack!\n\n", ctr);
if ((new6 < 1) && (cpusp  > 1))
printf("     Good skill!\n\n");
if ((new6 > 0) && (cpusp < 2))
printf("     Nice technique!\n\n");
if ((new6 < 1) && (cpusp < 2))
printf("     Excellent tactics!\n\n");
if ((new6 > 0) && (cpusp > 1))
printf("     Great technique!\n\n");
}
if (ctr > 4)
{
if (diceQ == 1)
printf("     That was a good finish!\n");
if (diceQ == 2)
printf("     A strong finish!\n");
if (diceQ == 3)
printf("     A nice victory!\n");
if (diceQ == 4)
printf("     That was a strong finish!\n");
if (((cpusp > 1) && (new6 > 0)) || ((cpusp > 1) && (new6 < 1)) || ((cpusp < 2) && (new6 > 0)))
printf("\n");
if (new6 > 0)
printf("     A new Consecutive Match Win Record!\n");
if (cpusp > 1)
printf("     You have a Special Round Chain of %d!\n", cpusp);
printf("     You won in round %d with the Special Attack!\n", ctr);
if ((new6 < 1) && (cpusp  > 1))
printf("\n     You fought well!\n\n");
if ((new6 > 0) && (cpusp < 2))
printf("\n     It was a good fight!\n\n");
if ((new6 < 1) && (cpusp < 2))
printf("\n     Effective tactics!\n\n");
if ((new6 > 0) && (cpusp > 1))
printf("\n     There's no stopping you!\n\n");
}
break;
}
if ((consecvic2 < 3) && (spctrbon < 2) && (dice5 > dice6) && (magsp > 0) && (magsp3 < 1) && (bonchn2 < 3) && (ultsp < 4))
{
printf("\n     You execute the MAGIC SPECIAL ATTACK!\n");
enemyhp = (enemyhp - 10); //was minus 4, before that minus 5 was 7
printf("     CPU HP at %d\n", enemyhp);
++spmag2;
++spmag;
--magsp;
++magsp2;
++cpusp;
if (sumag > 0)
{
++sumag2;
sumag = 0;
}
}
if (enemyhp < 1)
{
++wnct7;
if (wnct7 > wnctrec7)
{
wnctrec7 = wnct7;
if ((wnctrec7 > 2) && (wnctrecA > 0))
++new6;
}
if (diceQ == 1)
printf("     A fantastic finish!\n");
if (diceQ == 2)
printf("     Incredible action!\n");
if (diceQ == 3)
printf("     An impressive victory!\n");
if (diceQ == 4)
printf("     An excellent finish!\n");
if (((cpusp < 2) && (ctr > 4) && (new6 > 0)) || ((cpusp < 2) && (ctr < 5) && (new6 < 1)) || ((cpusp > 1) && (ctr > 4) && (new6 < 1)) || ((cpusp > 1) && (ctr < 5) && (new6 < 1)))
printf("\n");
if (new6 > 0)
printf("     It was a great fight!\n");
if (((cpusp > 1) && (ctr < 5) && (new6 > 0)) || ((cpusp < 2) && (ctr < 5) && (new6 > 0)) || ((cpusp > 1) && (ctr > 4) && (new6 > 0)))
printf("\n");
if (new6 > 0)
printf("     A new Consecutive Match Win Record!\n");
if (ctr < 5)
printf("     The contest ended early! \n");
if ((cpusp > 1) && (ctr < 5) && (new6 > 0))
printf("\n");
if (cpusp > 1)
printf("     You have a Special Round Chain of %d!\n", cpusp);

printf("     You won in Round %d with the Magic Special Attack!\n", ctr);
if (((new6 < 1) && (ctr > 4) && (cpusp < 2)) || ((cpusp < 2) && (ctr < 5) && (new6 < 1)))
printf("\n     Great move!\n\n");
if (((new6 < 1) && (ctr > 4) && (cpusp > 1)) || ((new6 > 0) && (ctr > 4) && (cpusp < 2)) || ((new6 > 0) && (ctr < 5) && (cpusp < 2)))
printf("\n     Good skill!\n\n");
if (((new6 < 1) && (ctr < 5) && (cpusp > 1)) || ((new6 > 0) && (ctr > 4) && (cpusp > 1)))
printf("\n     That was very skillful!\n\n");
if  ((new6 > 0) && (ctr < 5) && (cpusp > 1))
printf("\n     That's amazing technique!\n\n");
break;
}
if ((consecvic2 > 2) && (spctrbon > 1) && (dice5 > dice6) && (magsp3 < 1) && (magsp >= 0) && (bonchn2 < 3) && (ultsp < 4))
{
enemyhp = (enemyhp - 24);
printf("\n     You activate the SUPER SPECIAL BONUS COMBO ATTACK!\n");
printf("     CPU HP at %d\n", enemyhp);
++consecvic;
++ultsp;
consecvic2 = 1;
spctrbon = 1;
++cpusp;
}
if (enemyhp < 1)
{
++wnct7;
if (wnct7 > wnctrec7)
{
wnctrec7 = wnct7;
if ((wnctrec7 > 2) && (wnctrecA > 0))
++new6;
}
if (diceQ == 1)
printf("     A very skillful move!\n\n");
if (diceQ == 2)
printf("     Fantastic technique!\n\n");
if (diceQ == 3)
printf("     A very powerful move!\n\n");
if (diceQ == 4)
printf("     An excellent move!\n\n");
if (ctr < 5)
printf("     An early finish to the fight!\n");
if (new6 > 0)
printf("     You have a new Consecutive Match Win Record!\n");
if ((cpusp > 1) && (ctr < 5) && (new6 > 0))
printf("     It was a fantastic contest!\n");
if ((cpusp > 1) && (ctr < 5) && (new6 > 0))
printf("\n");
if (cpusp > 1)
printf("     You performed Special Attacks in %d consecutive rounds!\n", cpusp);
if ((cpusp > 1) && (ctr > 4) && (new6 > 0))
printf("\n");
printf("     You won in %d rounds with the Super Special Bonus Combo Attack!\n", ctr);
if (((cpusp < 2) && (ctr < 5) && (new6 > 0)) || ((cpusp > 1) && (ctr < 5) && (new6 < 1)))
printf("\n");
diceQ = (rand() % 3) + 1;
{
if (diceQ == 1)
printf("     This is just incredible!\n");
if (diceQ == 2)
printf("     That was unbelievable!\n");
if (diceQ == 3)
printf("     I cannot believe what just happened!\n");
}
if ((cpusp > 1) && (ctr < 5) && (new6 < 1))
printf("     Did you see that?\n");
if (((cpusp < 2) && (ctr > 4) && (new6 < 1)) || ((cpusp > 1) && (ctr > 4) && (new6 < 1)) || ((cpusp < 2) && (ctr < 5) && (new6 < 1))) //|| ((new6 > 0) && (ctr < 5) && (cpusp < 2)))
printf("\n     That really was crazy!\n\n");
if (((cpusp > 1) && (ctr < 5) && (new6 < 1)) || ((cpusp < 2) && (ctr > 4) && (new6 > 0)))// || ((new6 > 0) && (ctr < 5) && (cpusp < 2)))
printf("\n     That was completely insane!\n\n");
if ((cpusp > 1) && (ctr > 4) && (new6 > 0))
printf("\n     That was awesome!\n\n");
if ((cpusp > 1) && (ctr < 5) && (new6 > 0))
printf("\n     This is what Text Fighting is all about!\n\n");
break;
}
if ((spctrbon > 1) && (dice5 > dice6) && (magsp3 < 1) && (magsp >= 0) && (ultsp < 4))
{
enemyhp = (enemyhp - 12);//was 8
printf("\n     You execute the SPECIAL BONUS ATTACK!\n");
printf("     CPU HP at %d\n", enemyhp);
spctrbon = 0;
++cpusp;
}
if (enemyhp < 1)
{
++wnct7;
if (wnct7 > wnctrec7)
{
wnctrec7 = wnct7;
if ((wnctrec7 > 2) && (wnctrecA > 0))
++new6;
}
if (diceQ == 1)
printf("     Incredible action!\n");
if (diceQ == 2)
printf("     Amazing action!\n");
if (diceQ == 3)
printf("     A decisive move!\n");
if (diceQ == 4)
printf("     A superb performance!\n");
if (((cpusp < 2) && (ctr > 4) && (new6 > 0)) || ((cpusp < 2) && (ctr < 5) && (new6 < 1)) || ((cpusp > 1) && (ctr > 4) && (new6 < 1)) || ((cpusp > 1) && (ctr < 5) && (new6 < 1)))
printf("\n");
if (new6 > 0)
printf("     It was a great fight!\n");
if (((cpusp > 1) && (ctr < 5) && (new6 > 0)) || ((cpusp < 2) && (ctr < 5) && (new6 > 0)) || ((cpusp > 1) && (ctr > 4) && (new6 > 0)))
printf("\n");
if (new6 > 0)
printf("     A new Consecutive Match Win Record!\n");
if (ctr < 5)
printf("     And a quick finish to the contest!\n");
if ((cpusp > 1) && (ctr < 5) && (new6 > 0))
printf("\n");
if (cpusp > 1)
printf("     You have a Special Round Chain of %d!\n", cpusp);
printf("     You won in Round %d with the Special Bonus Attack!\n", ctr);
if (((new6 < 1) && (ctr > 4) && (cpusp < 2)) || ((cpusp < 2) && (ctr < 5) && (new6 < 1)))   //((cpusp < 2) && (ctr < 5) && (new6 < 1))) (
printf("\n     That really was something!\n\n");
if (((new6 < 1) && (ctr > 4) && (cpusp > 1)) || ((new6 > 0) && (ctr > 4) && (cpusp < 2)) || ((new6 > 0) && (ctr < 5) && (cpusp < 2)))
printf("\n     Great skills!\n\n");
if (((new6 < 1) && (ctr < 5) && (cpusp > 1)) || ((new6 > 0) && (ctr > 4) && (cpusp > 1)))
printf("\n     That was an impressive victory!\n\n");
if ((new6 > 0) && (ctr < 5) && (cpusp > 1))
printf("\n     That's incredible technique!\n\n");
break;
}
if ((consecvic2 > 2) && (dice5 > dice6) && (magsp3 < 1) && (magsp >= 0) && (bonchn2 < 3) && (ultsp < 4))
{
enemyhp = (enemyhp - 16); //was 11 12
printf("\n     You perform the SUPER SPECIAL ATTACK!\n");
printf("     CPU HP at %d\n", enemyhp);
consecvic2 = 0;
++cpusp;
}
if (enemyhp < 1)
{
++wnct7;
if (wnct7 > wnctrec7)
{
wnctrec7 = wnct7;
if ((wnctrec7 > 2) && (wnctrecA > 0))
++new6;
}
if (diceQ == 1)
printf("     Amazing technique!\n\n");
if (diceQ == 2)
printf("     A brilliant move!\n\n");
if (diceQ == 3)
printf("     An excellent move!\n\n");
if (diceQ == 4)
printf("     Superb technique!\n\n");
if (ctr < 5)
printf("     A quick end to the contest!\n");
if (new6 > 0)
printf("     You have a new Consecutive Match Win Record!\n");
if ((cpusp > 1) && (ctr < 5) && (new6 > 0))
printf("     It was an awesome fight!\n");
if ((cpusp > 1) && (ctr < 5) && (new6 > 0))
printf("\n");
if (cpusp > 1)
printf("     You have a Special Round Chain of %d!\n", cpusp);
if (((cpusp > 1) && (ctr > 4) && (new6 > 0)) || ((cpusp > 1) && (ctr < 5) && (new6 < 1)))
printf("\n");
printf("     You won in round %d with the Super Special Attack!\n", ctr);
if ((cpusp < 2) && (ctr < 5) && (new6 > 0))
printf("\n");
diceQ = (rand() % 3) + 1;
{
if (diceQ == 1)
printf("     That was very skilled!\n");
if (diceQ == 2)
printf("     That was superbly skilled!\n");
if (diceQ == 3)
printf("     That was pure skill!\n");
}
if (((cpusp < 2) && (ctr > 4) && (new6 < 1)) || ((cpusp > 1) && (ctr > 4) && (new6 < 1)) || ((cpusp < 2) && (ctr < 5) && (new6 < 1)))
printf("\n     It was a great fight!\n\n");
if (((cpusp > 1) && (ctr < 5) && (new6 < 1)) || ((cpusp < 2) && (ctr > 4) && (new6 > 0)))
printf("\n     It was a fantastic fight!\n\n");
if ((cpusp > 1) && (ctr > 4) && (new6 > 0))
printf("\n     Completely outstanding!\n\n");
if ((cpusp > 1) && (ctr < 5) && (new6 > 0))
printf("\n     An incredible victory!\n\n");
break;
}
if ((ultsp > 3) && (bonchn2 >= 0) && (dice5 > dice6) && (magsp3 == 0) && (magsp >= 0) && (consecvic2 == 0) && (spctrbon == 0))
{
enemyhp = (enemyhp - 22);//was 8
printf("\n     You execute the ULTRA SUPER SPECIAL ATTACK!\n");
printf("     CPU HP at %d\n", enemyhp);
spctrbon = spctrbon3;
consecvic2 = consecvic4;
spctrbon3 = 0;
consecvic4 = 0;
++cpusp;
ultsp = 0;
ultsp4 = 0;
ultsp3 = 0;
consecvic = 2;
}
if (enemyhp < 1)
{
++wnct7;
if (wnct7 > wnctrec7)
{
wnctrec7 = wnct7;
if ((wnctrec7 > 2) && (wnctrecA > 0))
++new6;
}
printf("     This game is over!\n\n");
if (diceQ == 1)
printf("     That's a superb victory!\n");
if (diceQ == 2)
printf("     That was an awesome fight!\n");
if (diceQ == 3)
printf("     A thrilling victory!\n");
if (diceQ == 4)
printf("     It was an excellent fight!\n");
if (ctr < 6)
printf("     That was incredibly skillful!\n");
if ((cpusp > 1) && (ctr < 6) && (new6 < 1))
printf("\n");
if (new6 > 0)
printf("     You have a new Consecutive Match Win Record!\n\n", wnctrec7);
if (cpusp > 1)
printf("     You performed %d Special Attacks in as many rounds!\n", cpusp);
printf("     You won in %d rounds with the Ultra Super Special Attack!\n", ctr);
if ((cpusp > 1) && (ctr < 6) && (new6 < 1))
printf("\n");
if ((cpusp > 1) && (ctr > 5))
printf("\n");
if (((cpusp < 2) && (ctr < 6) && (new6 < 1)) || ((ctr > 5) && (cpusp < 2) && (new6 < 1)))
printf("\n");
if (((ctr > 5) && (cpusp < 2) && (new6 < 1)) || ((ctr > 5) && (cpusp < 2) && (new6 > 0)) || ((ctr > 5) && (cpusp < 2) && (new6 < 1)) || ((ctr < 6) && (cpusp < 2) && (new6 < 1)))
printf("     A powerful finish!\n");
if (((ctr > 5) && (cpusp > 1) && (new6 > 0)) || ((ctr < 6) && (cpusp > 1) && (new6 > 0)) || ((ctr < 6) && (cpusp > 1) && (new6 < 1)))
printf("     An expert finish!\n");
if ((ctr > 5) && (cpusp > 1) && (new6 < 1))
printf("     A spectacular finish!\n");
if ((ctr < 6) && (cpusp > 1) && (new6 > 0))
{
printf("\n     Text Fighting at it's best!\n");
}
printf("\n");
break;
}
if ((bonchn2 > 2) && (dice5 > dice6) && (magsp3 >= 0) && (magsp >= 0) && (consecvic2 == 0) && (spctrbon == 0) && (ultsp >= 0))
{
enemyhp = (enemyhp - 20);
printf("\n     You execute the SPECIAL HYPER BONUS ATTACK!\n");
printf("     CPU HP at %d\n", enemyhp);
spctrbon = spctrbon7;
consecvic2 = consecvic7;
spctrbon7 = 0;
consecvic7 = 0;
bonchn2 = 0;
consecvic = 2;
++cpusp;
}
if (enemyhp < 1)
{
++wnct7;
if (wnct7 > wnctrec7)
{
wnctrec7 = wnct7;
if ((wnctrec7 > 2) && (wnctrecA > 0))
++new6;
}
if (diceQ == 1)
printf("     A formidable victory!\n");
if (diceQ == 2)
printf("     Unbelievable moves!\n");
if (diceQ == 3)
printf("     Thrilling technique!\n");
if (diceQ == 4)
printf("     A phenomenal move!\n");
if (((cpusp < 2) && (ctr < 9) && (new6 < 1)) || ((cpusp < 2) && (ctr > 8) && (new6 < 1)) || ((cpusp > 1) && (ctr > 8) && (new6 < 1)) || ((ctr < 9) && (cpusp > 1) && (new6 < 1)) || ((ctr > 8) && (cpusp > 1) && (new6 > 0)))
printf("\n");
if ((ctr > 8) && (cpusp < 2) && (new6 > 0))
printf("\n");
printf("     It was an incredible fight!\n");
if ((ctr < 9) && (cpusp < 2) && (new6 > 0))
printf("\n");
if (ctr < 9)
printf("     A very skillful finish!\n");
if ((cpusp > 1) && (ctr < 9) && (new6 < 1))
printf("\n");
if (new6 > 0)
printf("     You've got a new Consecutive Match Win Record!\n", wnctrec7);
if ((ctr < 9) && (cpusp > 1) && (new6 > 0))
printf("\n");
if (cpusp > 1)
printf("     You performed Special Attacks in %d consecutive rounds!\n", cpusp);
if ((ctr > 8) && (cpusp > 1) && (new6 > 0))
printf("\n");
printf("     You won in %d rounds with the Special Hyper Bonus Attack!\n", ctr);
if ((ctr < 9) && (cpusp < 2) && (new6 > 0))
printf("\n");
if (((cpusp > 1) && (ctr > 8) && (new6 < 1))  || ((ctr > 8) && (cpusp < 2) && (new6 > 0)))
printf("\n");
if (((cpusp < 2) && (ctr < 9) && (new6 < 1)) || ((ctr > 8) && (cpusp < 2) && (new6 < 1)))
printf("\n");
if (((ctr > 8) && (cpusp < 2) && (new6 < 1)) || ((ctr > 8) && (cpusp < 2) && (new6 > 0)) || ((ctr > 8) && (cpusp < 2) && (new6 < 1)) || ((cpusp > 1) && (ctr > 8) && (new6 < 1)))
printf("     Raw power!\n\n");
if (((ctr > 8) && (cpusp > 1) && (new6 > 0)) || ((ctr < 9) && (cpusp > 1) && (new6 > 0))  || ((ctr < 9) && (cpusp < 2) && (new6 > 0)) || ((cpusp < 2) && (ctr < 9) && (new6 < 1)))
printf("     Expert tactics!\n");
if (((ctr > 8) && (cpusp > 1) && (new6 > 0)) || ((ctr < 9) && (cpusp > 1) && (new6 < 1)))
printf("\n     It's another great day for Text Fighting!\n\n");
if ((ctr < 9) && (cpusp > 1) && (new6 > 0))
{
printf("\n     Text Fighting has a new contender!\n\n");
}
if (((ctr > 8) && (cpusp > 1) && (new6 > 0)) || ((ctr < 9) && (cpusp < 2) && (new6 > 0)) || ((cpusp < 2) && (ctr < 9) && (new6 < 1)))
printf("\n");
break;
}
if ((consecvic2 == 0) && (spctrbon == 0) && (dice5 > dice6) && (magsp >= 0) && (magsp3 > 0) && (bonchn2 >= 0) && (ultsp >= 0))
{
enemyhp = (enemyhp - 18);//was 14
printf("\n     You perform the SUPER SPECIAL MAGIC COMBO ATTACK!\n");
printf("     CPU HP at %d\n", enemyhp);
magsp3 = 0;
magsp2 = 0;
spctrbon = spctrbon2;
consecvic2 = consecvic5;
consecvic5 = 0;
spctrbon2 = 0;
magsp7 = 0;
++cpusp;
if (enemyhp < 1)
{
++wnct7;
if (wnct7 > wnctrec7)
{
wnctrec7 = wnct7;
if ((wnctrec7 > 2) && (wnctrecA > 0))
++new6;
}
if (diceQ == 1)
printf("     An amazing victory!\n");
if (diceQ == 2)
printf("     A fantastic conclusion!\n");
if (diceQ == 3)
printf("     An incredible outcome!\n");
if (diceQ == 4)
printf("     A magnificent victory!\n");
if (((new6 < 1) && (ctr > 5) && (cpusp > 1)) || ((new6 < 1) && (ctr > 5) && (cpusp < 2)) || ((new6 < 1) && (ctr < 6) && (cpusp > 1)))
printf("\n");
if (ctr < 6)
printf("     You made that look easy!\n");
if (((new6 < 1)  && (cpusp < 2) && (ctr < 6)) || ((new6 < 1) && (cpusp > 1) && (ctr < 6)))
printf("\n");
if (new6 > 0)
printf("\n     You have a new Consecutive Match Win Record!\n");
if (cpusp > 1)
printf("     You performed Special Attacks in %d consecutive rounds!\n", cpusp);
printf("     You won in %d rounds with the Super Special Magic Combo Attack!\n", ctr);
if (((new6 > 0) && (cpusp > 1) && (ctr < 6)) || ((new6 > 0) && (cpusp > 1) && (ctr > 5)) || ((new6 < 1) && (cpusp > 1) && (ctr > 5)))
printf("\n");
diceQ = (rand() % 3) + 1;
{
if (diceQ == 1)
printf("     That was a brilliant combination!\n");
if (diceQ == 2)
printf("     That was an awesome combo!\n");
if (diceQ == 3)
printf("     That was a very impressive combo!\n");
}
if (((new6 < 1)  && (cpusp  > 1) && (ctr < 6)) || ((new6 > 0) && (cpusp < 2) && (ctr < 6)) ||  ((new6 < 1)  && (cpusp < 2) && (ctr < 6)) || ((new6 < 1)  && (cpusp < 2) && (ctr > 5)))
printf("\n");
if (((new6 > 0) && (cpusp < 2) && (ctr < 6)) || ((new6 > 0) && (cpusp > 1) && (ctr > 5)))
printf("     You demonstrated great skill!\n");
if (((new6 < 1) && (cpusp > 1) && (ctr < 6)) ||  ((new6 < 1)  && (cpusp < 2) && (ctr < 6)) || ((new6 < 1)  && (cpusp < 2) && (ctr > 5)))
printf("     Powerful technique!\n");
if ((new6 < 1) && (cpusp > 1) && (ctr > 5))
printf("     And an excellent follow-up!\n");
if (((new6 < 1)  && (cpusp < 2) && (ctr < 6)) || ((new6 < 1)  && (cpusp < 2) && (ctr > 5)) || ((new6 > 0) && (cpusp > 1) && (ctr > 5)) || ((new6 > 0) && (cpusp < 2) && (ctr > 5)))
printf("\n");
if ((new6 < 1) && (cpusp > 1) && (ctr > 5))
printf("\n");
if (((new6 > 0) && (cpusp < 2) && (ctr > 5)) || ((new6 < 1) && (cpusp > 1) && (ctr > 5)))
printf("     It was a great fight!\n\n");
if (((new6 > 0) && (cpusp > 1) && (ctr < 6)) || ((new6 > 0) && (cpusp > 1) && (ctr > 5)))
printf("     An outstanding performance!\n");
if ((new6 > 0) && (cpusp > 1) && (ctr < 6))
printf("     It was a fantastic finish!\n");
if (((new6 < 1) && (ctr > 5) && (cpusp > 1)) || ((new6 < 1) && (ctr > 5) && (cpusp < 2)) || ((new6 < 1) && (ctr < 6) && (cpusp > 1)) || ((new6 < 1)  && (cpusp < 2) && (ctr < 6)))
printf("\n");
if ((new6 > 0) && (cpusp > 1) && (ctr < 6))
printf("\n     You're a Text Fighting Super Star!\n\n");
break;
}
}
if (dice6 > dice5)
{
playerhp = (playerhp - 2);
printf("\n     You execute the SPECIAL ATTACK!\n");
printf("     CPU evades!\n\n");
printf("     CPU counter-attacks!\n");
printf("     Player HP at %d\n", playerhp);
consecvic2 = 0;
magsp = 0;
magsp2 = 0;
magsp3 = 0;
sumag = 0;
sumag2 = 0;
consectr = 0;
normag = 0;
consecvic = 0;
bonchn = 0;
bonchn2 = 0;
cpusp = 0;
ultsp = 0;
magsp7 = 0;
ultsp3 = 0;
ultsp4 = 0;
magchn = 0;
spmag3 = 0;
}
if (dice5 == dice6)
{
printf("\n     You execute the SPECIAL ATTACK!\n");
printf("     CPU defends!\n");
consecvic2 = 0;
magsp = 0;
magsp2 = 0;
magsp3 = 0;
sumag = 0;
sumag2 = 0;
normag = 0;
consecvic = 0;
bonchn = 0;
bonchn2 = 0;
cpusp = 0;
ultsp = 0;
magsp7 = 0;
ultsp3 = 0;
ultsp4 = 0;
magchn = 0;
spmag3 = 0;
}
}
if ((enemyhp > 0) && (playerhp > 0) && (cpusp <= 1))
diceB = (rand() % 12) + 1;
if ((enemyhp > 0) && (playerhp > 0) && (cpusp == 2))
diceB = (rand() % 11) + 1;
if ((enemyhp > 0) && (playerhp > 0) && (cpusp == 3))
diceB = (rand() % 10) + 1;
if ((enemyhp > 0) && (playerhp > 0) && (cpusp > 3) && (cpusp <= 6))
diceB = (rand() % 9) + 1;//7
if ((enemyhp > 0) && (playerhp > 0) && (cpusp > 6))
diceB = (rand() % 8) + 1;//7
if ((diceB >= 2) && (diceB <= 6) && (playerhp > 0))
{
playerhp = (playerhp - 1);
printf("\n     CPU executes Normal Attack!\n");
printf("     Player HP at %d\n", playerhp);
}
if (((choice == 'm') || (choice == 's')) && (choice != 'n'))
{
diceE = (rand() % 24 + diflev + diceR) + 1;//maybe 28 ????????????? was 24 20
}
else
{
if ((choice == 'n') && (choice != 'm') && (choice != 's'))
diceE = (rand() % 32 + diflev) + 1;//maybe 32 0r 34?????????????? 30
}
if  ((diceE > 20) && (diceB >= 4) && (diceB <= 6) && (playerhp > 0) && (emagsup < 1) && (emagsup5 < 1) && (emagsup6 < 1))//diceE was > 18 then 17, 50 32  = 18 SO 25 16 = 9 25 - 4 21 SO 22
{//&& (enemyhp < 5)) DICE E ORIGINALLY 16
playerhp = (playerhp - 6);
printf("\n     CPU executes SPECIAL ATTACK!\n");
printf("     Player HP at %d\n", playerhp);
spatt = 1;
spatt2 = 1;
Sleep (500);
if (playerhp < 1)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     THAT'S AN IMPRESSIVE CPU FINISH!\n\n");
if (diceQ == 2)
printf("\n     IT WAS A STRONG CPU FINISH!\n\n");
if (diceQ == 3)
printf("\n     THAT'S A GREAT CPU WIN!\n\n");
}
}
if ((playerhp < 1) || (emagsup > 0))
{
diceF = 15;
}//added
else
{//added
if (((choice == 's') || (choice == 'n')) && (choice != 'm'))
diceF = (rand() % 42 + diflev + diceR) + 1; //42
else
if ((choice == 'm') && (choice != 's') && (choice != 'n'))
diceF = (rand() % 54 + diflev) + 1; //54
}
if  ((diceF > 30) && (diceB >= 5) && (diceB <= 6) && (playerhp > 0) && (emagsup < 1)) //&& (emagsup6 < 1))
{
playerhp = (playerhp - 8);
printf("\n     CPU executes SUPER SPECIAL ATTACK!\n");
printf("     Player HP at %d\n", playerhp);
Sleep (500);
if ((playerhp < 1) && (spatt != 1))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     AN AMAZING CPU FINISH!\n\n");
if (diceQ == 2)
printf("\n     IT WAS A POWERFUL CPU FINISH!\n\n");
if (diceQ == 3)
printf("\n     AN EXCELLENT CPU PERFORMANCE!\n\n");
}
supspatt = 1;
supspatt2 = 1;
}
if ((spatt = 1) && (supspatt = 1))
{
enspcomb1 = 1;
}
if ((playerhp < 1) || (emagsup > 0) || (emagsup5 > 0) || (emagsup6 > 0))
{
diceC = 15;
}
else
{//added
if (((choice == 'm') || (choice == 'n')) && (choice != 's'))
diceC = (rand() % 72 + diflev) + 1; //72
else
if ((choice == 's') && (choice != 'm') && (choice != 'n'))
diceC = (rand() % 86 + diflev + diceR) + 1; //86
}//added
if  ((diceC > 48) && (diceB == 5) && (playerhp > 0) && (emagsup < 1) && (emagsup5 < 1) && (emagsup6 < 1))//48
{
playerhp = (playerhp - 10);//was 7
printf("\n     CPU executes HYPER SUPER SPECIAL ATTACK!\n");
printf("     Player HP at %d\n", playerhp);
Sleep (500);
if ((playerhp < 1) && (spatt2 != 1) && (supspatt2 != 1))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     THAT'S AN INCREDIBLE CPU FINISH!\n\n");
if (diceQ == 2)
printf("\n     IT WAS A FANTASTIC CPU FINISH!\n\n");
if (diceQ == 3)
printf("\n     THIS GAME IS OVER!\n\n");
}
hypsp = 1;
hypsp2 = 1;
if ((hypsp = 1) && (enspcomb1 = 1))
{
enspcomb2 = 1;
}
if ((enspcomb1 = 1) && (enspcomb2 = 1))
{
enspcomb3 = 1;
}
}
if ((enspcomb3 == 1) && ((diceE > 20) && (diceB >= 4) && (diceB <= 6)) && ((diceF > 30) && (diceB >= 5) && (diceB <= 6)) && ((diceC > 48) && (diceB == 5)) && (emagsup < 1) && (emagsup5 < 1)  && (emagsup6 < 1))
{

printf("\n     THE CPU ULTRA HYPER SUPER SPECIAL COMBO!\n");
printf("     THE ULTIMATE CPU SPECIAL COMBO!\n");
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     PHENOMENAL POWER!\n\n");
if (diceQ == 2)
printf("     COMPLETELY INCREDIBLE!\n\n");
if (diceQ == 3)
printf("     ABSOLUTELY INCREDIBLE!\n\n");
if (playerhp < 1)
{
printf("     THE ULTIMATE FINISHER!\n\n");
}
spatt = 0;
supspatt = 0;
hypsp = 0;
enspcomb3 = 0;
enspcomb2 = 0;
enspcomb1 = 0;
enemspcombC = 1;
}
if (enemspcombC != 1)
{
if ((enspcomb1 == 1) && ((diceE > 20) && (diceB >= 4) && (diceB <= 6)) && ((diceF > 30) && (diceB >= 5) && (diceB <= 6)) && (emagsup < 1) && (emagsup5 < 1) && (emagsup6 < 1))
{
printf("\n     THE CPU SUPER SPECIAL COMBO!\n");
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     THAT'S AN INCREDIBLE CPU COMBO!\n");
if (diceQ == 2)
printf("     A SPECTACULAR CPU ATTACK!\n");
if (diceQ == 3)
printf("     THAT'S A POWERFUL CPU COMBO!\n");
enspcomb6 = 1;
if (playerhp < 1)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     AND A FANTASTIC VICTORY!\n\n");
if (diceQ == 2)
printf("     IT WAS AN AWESOME CPU WIN!\n\n");
if (diceQ == 3)
printf("     AND AN AMAZING CPU FINISH!\n\n");
}
spatt = 0;
supspatt = 0;
enspcomb1 = 1;
}
if ((enspcomb2 == 1) && ((diceE > 20) && (diceB >= 4) && (diceB <= 6)) && ((diceC > 48) && (diceB == 5)) && (emagsup < 1) && (emagsup5 < 1) && (emagsup6 < 1))
{
printf("\n     THE CPU HYPER SPECIAL COMBO!\n");
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     THAT'S AN AMAZING CPU COMBO!\n");
if (diceQ == 2)
printf("     AN EXCELLENT CPU ATTACK!\n");
if (diceQ == 3)
printf("     A VERY IMPRESSIVE COMBO!\n");
if (playerhp < 1)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     AND THAT'S A GREAT CPU WIN!\n\n");
if (diceQ == 2)
printf("     AND A FANTASTIC CPU FINISH!\n\n");
if (diceQ == 3)
printf("     AND AN AWESOME CPU VICTORY!\n\n");
}
spatt = 0;
hypsp = 0;
enspcomb2 = 0;
enspcomb1 = 0;
}
if ((enspcomb2 == 1) && ((diceC > 48) && (diceB == 5)) && ((diceF > 30) && (diceB >= 5) && (diceB <= 6)) && (emagsup < 1) && (emagsup5 < 1) && (emagsup6 < 1))
{
printf("\n     THE CPU HYPER SUPER SPECIAL COMBO!\n");
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     THAT'S AN UNBEATABLE CPU COMBO!\n");
if (diceQ == 2)
printf("     A SPECTACULAR CPU COMBO ATTACK!\n");
if (diceQ == 3)
printf("     THAT'S A MAGNIFICENT CPU COMBO!\n");
if (playerhp < 1)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     AND AN OUTSTANDING CPU WIN!\n\n");
if (diceQ == 2)
printf("     AN AMAZING CPU VICTORY!\n\n");
if (diceQ == 3)
printf("     AND AN AWESOME CPU WIN!\n\n");
}
supspatt = 0;
hypsp = 0;
enspcomb2 = 0;
enspcomb1 = 0;
}
enemspcombC = 0;
}
if ((playerhp < 1) || ((spatt2 == 1) && (supspatt2 == 1)))
{
diceM = 15;
}
else
{
diceM = ((rand() % 70 + 1) + (diflev + 3));//78 60
if (diceR == 1)///NEW START, PLACE SOMEWHERE ELSE MAYBE? do these blocks end up completely cancelling mag in combo with high freq of sp attacks later in game? or even work as intended?
{
diceR = (rand() % 6) + 1;
if (diceR == 1)
diceM = 0;
diceR = 0;
}///NEW END
if (((diceM > 40) && (diceB >= 4) && (diceB <= 6)) && (playerhp > 0) && (hypsp2 < 1) && (enspcomb6 < 1))//was 20 enspcomb1 != 1!!!!!
{//&& (enemyhp < 5)) DICE E ORIGINALLY 16
{
playerhp = (playerhp - 4); //6
printf("\n     CPU executes MAGIC ATTACK!\n");
printf("     Player HP at %d\n", playerhp);
mspatt = 1;
mspatt3 = 1;
Sleep (500);
if ((mspatt == 1) && (spatt2 == 1) && (supspatt2 != 1))
emgspcom5 = 1;
if ((mspatt == 1) && (supspatt2 == 1) && (spatt2 !=1))
emgspcom = 1;
if ((playerhp < 1) && (spatt2 != 1) && (supspatt2 != 1))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("\n     A FANTASTIC CPU MAGIC FINISH!\n\n");
if (diceQ == 2)
printf("\n     THAT WAS A GREAT CPU WIN!\n\n");
if (diceQ == 3)
printf("\n     AN IMPRESSIVE MAGIC FINISH!\n\n");
}
}
if ((emgspcom == 1) && (emgspcom5 != 1) && ((diceF > 30) && (diceB >= 5) && (diceB <= 6) && (diceM > 40)))
{
printf("\n     THE CPU MAGIC SUPER SPECIAL COMBO!\n");//
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     A FANTASTIC MAGIC SPECIAL ATTACK!\n");
if (diceQ == 2)
printf("     AN INCREDIBLE MAGIC SPECIAL COMBO!\n");
if (diceQ == 3)
printf("     A FORMIDABLE MAGIC SPECIAL ATTACK!\n");
emgspcom = 0;
emagsup = 1;
emagsup6 = 0;
if (playerhp < 1)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     IT WAS A SPECTACULAR CPU VICTORY!\n\n");
if (diceQ == 2)
printf("     IT WAS AN AMAZING CPU VICTORY!\n\n");
if (diceQ == 3)
printf("     AND AN OUTSTANDING CPU WIN!\n\n");
}
}
if ((emgspcom5 == 1) && (emgspcom != 1) && ((diceE > 20) && (diceB >= 4) && (diceB <= 6) && (diceM > 40)))
{
printf("\n     THE CPU MAGIC SPECIAL COMBO!\n");
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     A GREAT MAGIC SPECIAL ATTACK!\n");
if (diceQ == 2)
printf("     A SUPERB MAGIC SPECIAL ATTACK!\n");
if (diceQ == 3)
printf("     A GREAT MAGIC SPECIAL COMBO!\n");
emgspcom5 = 0;
if (playerhp < 1)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     AND A FANTASTIC CPU WIN!\n\n");
if (diceQ == 2)
printf("     AND AN AMAZING CPU MAGIC WIN!\n\n");
if (diceQ == 3)
printf("     AND AN EXCELLENT CPU FINISH!\n\n");
}
}
if (playerhp < 1)
{
diceN = 15;
}
else
{
diceN = ((rand() % 116 + 1) + (diflev + 3));//174, 164 130
}
if ((emagsup > 0) && ((diceN > 40) && (diceB >= 4) && (diceB <= 6)) && (playerhp > 0) && ((spatt2 < 1) && (supspatt2 < 1)))
{
playerhp = (playerhp - 8); //6
printf("\n     CPU executes SUPER MAGIC!\n");
printf("     Player HP at %d\n", playerhp);
mspatt4 = 1;
diceR = (rand() % 5) + 1;
if (diceR == 1)
{
emagsup = 0;
emagsup5 = 0;
emagsup6 = 0;
mspatt4 = 0;
}
if (playerhp < 1)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     AN OUTSTANDING WIN!\n\n");
if (diceQ == 2)
printf("     THE CPU IS ON TOP FORM!\n\n");
if (diceQ == 3)
printf("     INCREDIBLE POWER!\n\n");
}
Sleep (500);
{
if ((spatt2 < 1) && (supspatt2 < 1))
mspatt2 = 0;
if ((mspatt3 == 1) && (mspatt4 == 1))
{
emgspcom4 = 1;
if (playerhp < 1)
{
diceP = 15;
}
else
{
diceP = ((rand() % 108 + 1) + (diflev + 3));//180, 170 136
}
if ((emagsup5 > 0) && ((diceP > 40) && (diceB >= 4) && (diceB <= 6)) && ((diceN > 40) && (diceB >= 4) && (diceB <= 6)) && ((diceM > 40) && (diceB >= 4) && (diceB <= 6)) && (playerhp > 0) && ((spatt2 < 1) && (supspatt2 < 1) && (hypsp2 < 1)))// diceN at 80 vs 200 quite rare
{//
playerhp = (playerhp - 10); //6
printf("\n     CPU executes HYPER MAGIC!\n");
printf("     Player HP at %d\n", playerhp);
mspatt5 = 1;
Sleep (500);
if (playerhp < 1)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     THAT WAS AN AMAZING MAGIC VICTORY!\n\n");
if (diceQ == 2)
printf("     IT WAS AN INCREDIBLE MAGIC WIN!\n\n");
if (diceQ == 3)
printf("     THAT WAS VERY POWERFUL MAGIC!\n\n");
}
}
}
}
if ((emgspcom4 == 1) && (mspatt5 == 1))
{
emgspcom4 = 0;
emgspcom3 = 1;
}
if ((emgspcom4 == 1) && ((diceN > 40) && (diceB >= 4) && (diceB <= 6)) && ((diceM > 40) && (diceB >= 4) && (diceB <= 6)) && ((mspatt3 > 0) && (mspatt4 > 0)))////////////////&& (playerhp > 0)) //&& (diceB >= ) && (diceB <= 6)))
{
printf("\n     THE CPU MAGIC SUPER MAGIC ATTACK COMBO!\n");////
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     AN OUTSTANDING CPU MAGIC COMBO!\n");
if (diceQ == 2)
printf("     THAT'S AN AWESOME CPU MAGIC COMBO!\n");
if (diceQ == 3)
printf("     THAT'S A PHENOMENAL CPU MAGIC COMBO!n");
emgspcom4 = 0;
mspatt = 0;
mspatt2 = 0;
mspatt3 = 0;
mspatt4 = 0;
emagsup5 = 1;
if (playerhp < 1)
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     IT WAS A MAGNIFICENT CPU MAGIC WIN!\n\n");
if (diceQ == 2)
printf("     THAT WAS AN UNBEATABLE MAGIC WIN!\n\n");
if (diceQ == 3)
printf("     AND AN UNBEATABLE MAGIC VICTORY!\n\n");
}
}
if ((emgspcom3 == 1) && ((diceP > 40) && (diceB >= 4) && (diceB <= 6)) && ((diceN > 40) && (diceB >= 4) && (diceB <= 6)) && ((diceM > 40) && (diceB >= 4) && (diceB <= 6)) && ((mspatt3 > 0) && (mspatt4 > 0) && (mspatt5 > 0))) //&& (playerhp > 0)) //&& (diceB >= ) && (diceB <= 6)))
{
printf("\n     THE CPU ULTRA HYPER MAGIC SUPER COMBO!\n");
printf("     THE ULTIMATE CPU MAGIC COMBO!\n");
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     HOW LONG CAN THE OPPONENT LAST?\n\n");
if (diceQ == 2)
printf("     THE CPU HAS INCREDIBLE POWER!\n\n");
if (diceQ == 3)
printf("     THE CPU CONTROLS THE CONTEST!\n\n");
emagsup = 0;
emagsup5 = 0;
emgspcom3 = 0;
if (playerhp < 1)
printf("     THE ULTIMATE CPU MAGIC FINISHER!\n\n");
}
}
}
}
if (((diceM > 40) && (diceB >= 4) && (diceB <= 6)) && (playerhp > 0) && (hypsp2 > 0) && (spatt2 > 0) && (enspcomb6 < 1) && (diflev > 6))
emagsup6 = 1;
if ((diceB > 6) && (playerhp > 0))// 5
{
enemyhp = (enemyhp - 1);
printf("\n     CPU executes Normal Attack!\n");
printf("     You evade!\n\n");
printf("     You counter-attack!\n");
printf("     CPU HP at %d\n\n", enemyhp);
if (choice = 'n')
diceG = (rand() % 11) + 1; //11
if ((choice = 'm') || (choice = 's'))
diceG = (rand() % 10) + 1; //10
if ((diceG > 6) && (consectr < 2))
consectr = (consectr + 1);
else
if ((diceG > 8) && (consectr < 1))
consectr = (consectr + 2);
}
if (enemyhp < 1)
{
++wnct7;
if (wnct7 > wnctrec7)
{
wnctrec7 = wnct7;
if ((wnctrec7 > 2) && (wnctrecA > 0))
++new6;
}
if ((ctr > 4) && (new6 < 1) && (cpusp  < 2))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     That was a very effective technique!\n");
if (diceQ == 2)
printf("     That was a very well-timed manoeuvre!\n");
if (diceQ == 3)
printf("     You outtimed the opponent perfectly!\n");
}
if (ctr < 5)
printf("     The contest came to an early finish!\n");
if (cpusp > 1)
printf("     You had a Special Round Chain of %d!\n", cpusp);
if ((cpusp > 1) && (ctr < 5) && (new6 > 0))
printf("\n");
if (new6 > 0)
printf("     It's a Consecutive Match Win Record!\n");
printf("     You won with the counter-attack!\n");
diceQ = (rand() % 2) + 1;
if (diceQ == 1)
{
if (((new6 < 1) && (cpusp  > 1) && (ctr > 4)) || ((ctr < 5) && (new6 < 1) && (cpusp  > 1)))
printf("\n     That was a nice defence!\n\n");
if (((new6 > 0) && (cpusp < 2)  && (ctr > 4)) || ((ctr < 5) && (new6 > 0) && (cpusp < 2)))
printf("\n     That was great technique!\n\n");
if (((new6 < 1) && (cpusp < 2) && (ctr < 5)) || ((ctr > 4) && (new6 < 1) && (cpusp  < 2)))
printf("\n     You showed excellent evasive skill!\n\n");
if (((new6 > 0) && (cpusp > 1) && (ctr > 4)) || ((ctr < 5) && (new6 > 0) && (cpusp  > 1)))
printf("\n     You fought back well!\n\n");
}
if (diceQ == 2)
{
if (((new6 < 1) && (cpusp  > 1) && (ctr > 4)) || ((ctr < 5) && (new6 < 1) && (cpusp  > 1)))
printf("\n     Great defence!\n\n");
if (((new6 > 0) && (cpusp < 2)  && (ctr > 4)) || ((ctr < 5) && (new6 > 0) && (cpusp < 2)))
printf("\n     That was good technique!\n\n");
if (((new6 < 1) && (cpusp < 2) && (ctr < 5)) || ((ctr > 4) && (new6 < 1) && (cpusp  < 2)))
printf("\n     Good defence!\n\n");
if (((new6 > 0) && (cpusp > 1) && (ctr > 4)) || ((ctr < 5) && (new6 > 0) && (cpusp  > 1)))
printf("\n     Excellent defence!\n\n");
}
break;
}
if ((consectr > 1) && (diceB > 6) && (playerhp > 0))
{
enemyhp = (enemyhp - 1);
printf("     You get a Counter Bonus!\n");
printf("     CPU HP at %d\n\n", enemyhp);
++ctrbonon;
++consecvic;
++spctrbon;
consectr = 0;
}
if ((enemyhp < 1) && (ctrbonon > 0))
{
++wnct7;
if (wnct7 > wnctrec7)
{
wnctrec7 = wnct7;
if ((wnctrec7 > 2) && (wnctrecA > 0))
++new6;
}
if ((ctr > 4) && (new6 < 1) && (cpusp  < 2))
{
diceQ = (rand() % 3) + 1;
if (diceQ == 1)
printf("     That was an excellent finishing move!\n");
if (diceQ == 2)
printf("     You saw the opening and didn't let up!\n");
if (diceQ == 3)
printf("     That was a nice finish to the fight!\n");
}
if (ctr < 5)
printf("     The contest came to an early finish!\n");
if (new6 > 0)
printf("     It's a Consecutive Match Win Record!\n");
if ((cpusp > 1) && (ctr < 5) && (new6 > 0))
printf("\n");
if (cpusp > 1)
printf("     You had a Special Round Chain of %d!\n", cpusp);
printf("     You won with the Counter Bonus!\n");
diceQ = (rand() % 2) + 1;
if (diceQ == 1)
{
if (((new6 < 1) && (cpusp  > 1) && (ctr > 4)) || ((ctr > 4) && (new6 < 1) && (cpusp  < 2)))
printf("\n     It was a great counter-attack!\n\n");
if (((new6 > 0) && (cpusp < 2)  && (ctr > 4)) || ((ctr < 5) && (new6 > 0) && (cpusp > 1)))
printf("\n     That was a fantastic follow-up!\n\n");
if (((new6 < 1) && (cpusp < 2) && (ctr < 5)) || ((ctr < 5) && (new6 < 1) && (cpusp  > 1)))
printf("\n     You showed strong defensive skills!\n\n");
if (((new6 > 0) && (cpusp > 1) && (ctr > 4)) || ((ctr < 5) && (new6 > 0) && (cpusp  > 1)))
printf("\n     You beat the opponent in style!\n\n");
}
if (diceQ == 2)
{
if (((new6 < 1) && (cpusp  > 1) && (ctr > 4)) || ((ctr > 4) && (new6 < 1) && (cpusp  < 2)))
printf("\n     Great counter-fighting!\n\n");
if (((new6 > 0) && (cpusp < 2)  && (ctr > 4)) || ((ctr < 5) && (new6 > 0) && (cpusp > 1)))
printf("\n     That was a great follow-up!\n\n");
if (((new6 < 1) && (cpusp < 2) && (ctr < 5)) || ((ctr < 5) && (new6 < 1) && (cpusp  > 1)))
printf("\n     That was a strong defence!\n\n");
if (((new6 > 0) && (cpusp > 1) && (ctr > 4)) || ((ctr < 5) && (new6 > 0) && (cpusp  > 1)))
printf("\n     The opponent was outmatched!\n\n");
}
break;
}
if ((diceB == 1) && (playerhp > 0))
{
printf("\n     CPU executes Normal Attack!\n");
printf("     You defend!\n");
}
if (playerhp < 1)
{
wnct7 = 0;
wnct2 = 0;
fghton = 0;
new6 = 0;
wnctrec = 0;
wnctrecA = 0;
++cpuwn;
++cpuwn2;
++cpuwn3;
++cpuwn4;
++cpuwn5;
++cpuwn6;
wnrt = (float)wnct / (wnct + cpuwn) * 100.0;
wnrt4 = (float)wnct4 / (wnct4 + cpuwn4) * 100.0;
wnrt3 = (float)wnct3 / (wnct3 + cpuwn3) * 100.0;
wnrt5 = (float)wnct5 / (wnct5 + cpuwn5) * 100.0;
if ((cpuwn < 1) && (wnct < 1))
wnrtrec3 = 101;
if (wnrt4 < wnrtrec3)
{
wnrtrec3 = wnrt4;
fghton3 = 0;
++new7;
}
torwnrt = wnrt3;
if (wnrt5 > wnrtrec)
{
wnrtrec = wnrt5;
++new5;
}
if (cpuwn3 > cpuwnct)
{
cpuwnct = cpuwn3;
}
cpuwnrt = (float) cpuwnct / (cpuwnct + wnct3) * 100.0;
if (cpuwnrt > cpuwnrt2)
{
cpuwnrt2 = cpuwnrt;
if (cpuwnct > 1)
++new9;
}
if ((new9 > 0) && (cpuwnct > 1))
printf("\n\n     NEW RECORD!\n");
if (new9 < 1)
printf("\n\n");
printf("     CPU Tournament Win Rate: %.2f%%\n", cpuwnrt);
new9 = 0;
cpuwnct = 0;
if (new9 < 1)
printf("\n");
printf("     You lost the contest!\n");
if ((diceB == 2) || (diceB == 3) || (diceB == 4) || (diceB == 5) || (diceB == 6))
{
diceQ = (rand() % 40) + 1;//12 24 32 38
if (diceQ < 10)
printf("\n");
if (diceQ == 1)
printf("     Better luck next time!\n\n");
if (diceQ == 2)
printf("     But you can still win!\n\n");
if (diceQ == 3)
printf("     The opponent was tough!\n\n");
if (diceQ == 4)
printf("     The opponent fought well!\n\n");
if (diceQ == 5)
printf("     It was a tough fight!\n\n");
if (diceQ == 6)
printf("     You were outmatched!\n\n");
if (diceQ == 7)
printf("     Maybe your timing's out?\n\n");
if (diceQ == 8)
printf("     Maybe you should use another strategy!\n\n");
if (diceQ == 9)
printf("     You have to keep your guard up!\n\n");
diceQ1 = (rand() % 44) + 1;//14 16 32 38 42
if ((diceQ > 9) && (diceQ1 < 11))
printf("\n");
if (diceQ1 == 1)
printf("     There's always another Text Fight!\n\n");
if (diceQ1 == 2)
printf("     Keep Text Fighting!\n\n");
if (diceQ1 == 3)
printf("     Don't stop Text Fighting!\n\n");
if (diceQ1 == 4)
printf("     Don't give up!\n\n");
if (diceQ1 == 5)
printf("     Don't let it get you down!\n\n");
if (diceQ1 == 6)
printf("     Ready for another Fight Text?\n\n");
if (diceQ1 == 7)
printf("     Keep practising your technique!\n\n");
if (diceQ1 == 8)
printf("     You need to train harder!\n\n");
if (diceQ1 == 9)
printf("     Work on your evasive skills!\n\n");
if (diceQ1 == 10)
printf("     Work on your attacks!\n\n");
}
printf("\n     Enter (0) to exit, any other key to continue\n\n\n");
scanf( " %d", &ans6);
while ( getchar() != '\n' );
{
Sleep (999);
system("cls");
}
if (contest > 1)
{
--contest;
}
if (ans6 == 0)
{
exit (0);
}
}
hypsp2 = 0;
spatt2 = 0;
supspatt2 = 0;
supspatt = 0;
hypsp = 0;
spatt = 0;
mspatt3 = 0;
mspatt4 = 0;
mspatt5 = 0;
mspatt = 0;
spoff = 0;
spoff2 = 0;
mgoff = 0;
magcom = 0;
if (playerhp > 0)
printf("\n\n     The next round begins!\n\n\n");
}while  (playerhp > 0);
}
if (cpusp < cpusp3)
{
cpusp = 0;
}
if ((cpusp > cpusp3) && (cpusp > 1))
{
cpusp3 = cpusp;
if (new0 > 0)
++new1;
}
if (wnrt5 > wnrtrec)
{
wnrtrec = wnrt5;
++new5;
}
if (wnrt4 > wnrtrec3)
{
wnrtrec3 = wnrt4;
++new7;
}
if (enemyhp < 1)
{
++fghton2;
++fghton3;
++contest;
++wnct;
++wnct2;
++wnct3;
++wnct4;
++wnct5;
++wnct6;
++new10;
if (cpuwn2 == 1)
cpuwn2 = 0;
if (cpuwn2 > 1)
cpuwn2 = 1;
if (wnct7 > wnctrec7)
{
wnctrec7 = wnct7;
++new6;
}
if (wnct2 > wnctrec)
{
wnctrec = wnct2;
++new4;
}
wnrt = (float)wnct / (wnct + cpuwn) * 100.0;
if ((cpuwn < 1) && (wnct < 1))
wnrtrec3 = 101;
if (wnrtrec3 < wnrt4)
wnrtrec3 = wnrt4;
wnrt5 = (float)wnct5 / (wnct5 + cpuwn5) * 100.0;
if (wnrtrec < wnrt5)
wnrtrec = wnrt5;
wnrt3 = (float)wnct3 / (wnct3 + cpuwn3) * 100.0;
torwnrt = wnrt3;
wnrt6 = (float)wnct6 / (wnct6 + cpuwn6) * 100.0;
if (wnrt6 > torwnrt3)
{
torwnrt3 = wnrt6;
}
if ((cpusp > cpusp3) && (cpusp > 1))
{
cpusp3 = cpusp;
if (new0 > 0)
++new1;
}
}
enemyhp = 5 + (10 * (contest - 1));
playerhp = 5 + (5 * (contest - 1));
ctr2 = (ctr + ctr2);
consecvic = 0;
consecvic2 = 0;
consectr = 0;
ctr = 0;
spctrbon = 0;
ctrbonon = 0;
ctrbondef = 0;
enemspcombC = 0;
enspcomb1 = 0;
enspcomb2 = 0;
enspcomb3 = 0;
spmag = 0;
spmag2 = 0;
magsp = 0;
magsp2 = 0;
normag = 0;
magsp3 = 0;
sumag = 0;
sumag2 = 0;
bonchn = 0;
bonchn2 = 0;
cpusp = 0;
ultsp = 0;
++posdef;
magsp7 = 0;
ultsp4 = 0;
ultsp3 = 0;
magchn = 0;
mspatt = 0;
spatt = 0;
emgspcom = 0;
mspatt3 = 0;
mspatt2 = 0;
emgsupatt = 0;
emgspcom = 0;
mspatt3 = 0;
hypsp2 = 0;
spatt2 = 0;
emgspcom2 = 0;
supspatt2 = 0;
emgspcom4 = 0;
emgspcom5 = 0;
mspatt5 = 0;
enspcomb6 = 0;
bonrec = 0;
magrec = 0;
spmag3 = 0;
cpulow = 0;
if (diflev < 6)
{
emagsup = 0;
emagsup5 = 0;
}
if (diflev > 1)
{
enemyhp = (enemyhp) + (10 * diflev);
playerhp = (playerhp) + (5 * diflev);
}
} while (contest != 5);
if ((cpuwn < 1) && (wnct < 1))
wnrtrec3 = 101;
if (wnrtrec3 < wnrt4)
wnrtrec3 = wnrt4;
printf("\n\n\n\n     ****************************************\n");
printf("     You won the Tournament! Congratulations!\n");
printf("     ****************************************\n\n");
printf("     You are the Text Fighter %d Champion!\n\n\n", diflev);
if (torwnrt < 100)
printf("\n");
printf("     Tournament Win Rate: %.2f%%\n\n", torwnrt);
wnct6 = 0;
cpuwn6 = 0;
wnrt6 = 0;
wnct3 = 0;
cpuwn3 = 0;
wnrt3 = 0;
if (diflev > 1)
{
printf("     Win Rate Last Tournament: %.2f%%\n\n", torwnrt2);
}
if (torwnrt < 100)
printf("     Tournament Win Rate High: %.2f%%\n\n", wnrtrec);
if (cpuwn > 0)
printf("     Tournament Win Rate Low: %.2f%%\n\n\n", wnrtrec3);
printf("     Win Rate Total: %.2f%%\n\n", wnrt);
wnct4 = 0;
cpuwn4 = 0;
wnrt4 = 0;
wnct5 = 0;
cpuwn5 = 0;
wnrt5 = 0;
wnrtrec = 0;
wnrtrec3 = 0;
printf("     Total Won/Lost: %d/%d\n\n", wnct, cpuwn);
printf("     Total Rounds Played: %d\n\n\n", ctr2);
if (new6 > 0)
{
printf("     NEW RECORD!\n");
new6 = 0;
}
printf("     Consecutive Matches Won: %d\n\n", wnctrec);
printf("     Consecutive Match Win Record: %d\n\n", wnctrec7);
if (cpusp3 > 1)
{
if (new1 > 1)
{
printf("     NEW RECORD!\n");
new1 = 0;
}
printf("     Special Round Chain Record: %d\n\n", cpusp3);
new0 = 1;
}
if (bonrec2 > 2)
{
if (new2 > 0)
{
printf("     NEW RECORD!\n");
new2 = 0;
}
printf("     Bonus Round Chain Record: %d\n\n", bonrec2);
}
if (magrec2 > 2)
{
if (new3 > 0)
{
printf("     NEW RECORD!\n");
new3 = 0;
}
printf("     Magic Bonus Round Chain Record: %d\n\n", magrec2);
}
printf("\n\n\n     GAME OVER!\n\n\n");
torwnrt2 = torwnrt;
torwnrt = 0;
wnrtrec = 0;
cpuwnct = 0;
cpuwnrt = 0;
cpuwnrt2 = 0;
}
printf("\n     Enter (0) to exit, any other key to continue\n\n\n");
printf("  ");
scanf( " %c", &ans);
while ( getchar() != '\n' );
{
Sleep (999);
system("cls");
}
if (ans != '0')
{
printf("\n\n\n");
}
} while (ans != '0');
if (diflev < 7)
{
emagsup = 0;
emagsup5 = 0;
}
if (ans != '0')
{
return(main);
}
return(0);
}

