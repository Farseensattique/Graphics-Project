#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <mmsystem.h>
#include<cstdio>


///////////////// Cover Page ////////////////////

void renderBitmapString(float x, float y, void *font, const char *string) {
    const char *c;
    glRasterPos2f(x, y);
    for (c = string; *c != '\0'; c++) {
        glutBitmapCharacter(font, *c);
    }
}

void drawTable() {
    glBegin(GL_LINES);
        glVertex2f(-40, 0);
        glVertex2f(40, 0);

        glVertex2f(-40, -4);
        glVertex2f(40, -4);

        glVertex2f(-40, -9);
        glVertex2f(40, -9);

        glVertex2f(-40, -14);
        glVertex2f(40, -14);

        glVertex2f(-40, -19);
        glVertex2f(40, -19);

        glVertex2f(-40, -24);
        glVertex2f(40, -24);

        glVertex2f(-40, -29);
        glVertex2f(40, -29);

        glVertex2f(-40, 0);
        glVertex2f(-40, -29);

        glVertex2f(-25, 0);
        glVertex2f(-25, -29);

        glVertex2f(0, 0);
        glVertex2f(0, -29);

        glVertex2f(12, 0);
        glVertex2f(12, -29);

        glVertex2f(40, 0);
        glVertex2f(40, -29);
    glEnd();
}

void displayCover() {
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0, 0.0, 0.0);
    renderBitmapString(-20, 38, GLUT_BITMAP_HELVETICA_18, "AMERICAN INTERNATIONAL UNIVERSITY-BANGLADESH");
    renderBitmapString(-15, 34.5, GLUT_BITMAP_HELVETICA_18, "FACULTY OF SCIENCE & TECHNOLOGY");
    glColor3f(0.25, 0.55, 0.75);
    renderBitmapString(-8, 31, GLUT_BITMAP_HELVETICA_18, "COMPUTER GRAPHICS");
    glColor3f(0.0, 0.0, 0.0);
    renderBitmapString(-5, 27.5, GLUT_BITMAP_HELVETICA_18, "Spring 24-25");
    glColor3f(0.25, 0.55, 0.75);
    renderBitmapString(-4, 24, GLUT_BITMAP_HELVETICA_18, "Section: F");
    glColor3f(0.0, 0.0, 0.0);
    renderBitmapString(-12, 20.5, GLUT_BITMAP_HELVETICA_18, "Submission Type: Final Project Report");
    glColor3f(0.15, 0.30, 0.55);
    renderBitmapString(-20, 17, GLUT_BITMAP_HELVETICA_18, "Project Title: A Journey of Ship from Saint Martin to Singapore");
    glColor3f(0.0, 0.0, 0.0);
    renderBitmapString(-12, 13.5, GLUT_BITMAP_HELVETICA_18, "Submission Date: June 26, 2025");
    glColor3f(0.25, 0.55, 0.75);
    renderBitmapString(-13, 10, GLUT_BITMAP_HELVETICA_18, "Submitted To: MAHFUJUR RAHMAN");
    glColor3f(0.0, 0.0, 0.0);
    renderBitmapString(-11, 6.5, GLUT_BITMAP_HELVETICA_18, "Assistant Professor, Faculty");
    glColor3f(0.0, 0.0, 0.0);
    renderBitmapString(-12, 3, GLUT_BITMAP_HELVETICA_18, "Department of Computer Science");
    renderBitmapString(-36, -3, GLUT_BITMAP_HELVETICA_18, "Serial");
    renderBitmapString(-15, -3, GLUT_BITMAP_HELVETICA_18, "Name");
    renderBitmapString(5, -3, GLUT_BITMAP_HELVETICA_18, "ID");
    renderBitmapString(22, -3, GLUT_BITMAP_HELVETICA_18, "Contribution");

    renderBitmapString(-35, -7, GLUT_BITMAP_HELVETICA_18, "18");
    renderBitmapString(-22, -7, GLUT_BITMAP_HELVETICA_18, "MD. FARSEEN ISLAM SATTIQUE");
    renderBitmapString(2, -7, GLUT_BITMAP_HELVETICA_18, "22-48691-3");
    renderBitmapString(24, -7, GLUT_BITMAP_HELVETICA_18, "23%");

    renderBitmapString(-35, -12, GLUT_BITMAP_HELVETICA_18, "19");
    renderBitmapString(-22, -12, GLUT_BITMAP_HELVETICA_18, "MD. TOWFIQ BIN HASAN");
    renderBitmapString(2, -12, GLUT_BITMAP_HELVETICA_18, "22-48732-3");
    renderBitmapString(24, -12, GLUT_BITMAP_HELVETICA_18, "20%");

    renderBitmapString(-34.5, -17, GLUT_BITMAP_HELVETICA_18, "8");
    renderBitmapString(-22, -17, GLUT_BITMAP_HELVETICA_18, "MD. HACHIBUR RAHMAN");
    renderBitmapString(2, -17, GLUT_BITMAP_HELVETICA_18, "22-46426-1");
    renderBitmapString(24, -17, GLUT_BITMAP_HELVETICA_18, "19%");

    renderBitmapString(-35, -22, GLUT_BITMAP_HELVETICA_18, "38");
    renderBitmapString(-22, -22, GLUT_BITMAP_HELVETICA_18, "AFSANA KHATUN");
    renderBitmapString(2, -22, GLUT_BITMAP_HELVETICA_18, "22-49849-3");
    renderBitmapString(24, -22, GLUT_BITMAP_HELVETICA_18, "19%");


    renderBitmapString(-35, -27, GLUT_BITMAP_HELVETICA_18, "12");
    renderBitmapString(-22, -27, GLUT_BITMAP_HELVETICA_18, "USHMITA MALLICK");
    renderBitmapString(2, -27, GLUT_BITMAP_HELVETICA_18, "22-47703-2");
    renderBitmapString(24, -27, GLUT_BITMAP_HELVETICA_18, "19%");

    glColor3f(0.0, 0.0, 0.0);
    drawTable();

    glFlush();
}

///////////////// Instructions ////////////////////

void drawLines() {
    glBegin(GL_LINES);
    glVertex2f(-5, 37);
    glVertex2f(-5, -39);
    glEnd();
}

void displayInstructions() {
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.55, 0.0, 0.0);
    renderBitmapString(-8, 38, GLUT_BITMAP_HELVETICA_18, "Instructions");
    glColor3f(0.25, 0.55, 0.75);
    renderBitmapString(-43, 35, GLUT_BITMAP_HELVETICA_18, "Keyboard Functionalities:");
    glColor3f(0.0, 0.0, 0.0);
    renderBitmapString(-43, 32, GLUT_BITMAP_HELVETICA_18, "To display Cover Page");
    glColor3f(1.0, 0.0, 0.0);
    renderBitmapString(-29, 32, GLUT_BITMAP_HELVETICA_18, " (Done by Farseen)");
    glColor3f(0.0, 0.0, 0.0);
    renderBitmapString(-17, 32, GLUT_BITMAP_HELVETICA_18, ": click 'p' or 'P'");

    glColor3f(0.0, 0.0, 0.0);
    renderBitmapString(-43, 29, GLUT_BITMAP_HELVETICA_18, "To display Instructions");
    glColor3f(1.0, 0.0, 0.0);
    renderBitmapString(-29, 29, GLUT_BITMAP_HELVETICA_18, " (Done by Farseen)");
    glColor3f(0.0, 0.0, 0.0);
    renderBitmapString(-17, 29, GLUT_BITMAP_HELVETICA_18, ": click 'i' or 'I'");

    glColor3f(0.0, 0.0, 0.0);
    renderBitmapString(-43, 26, GLUT_BITMAP_HELVETICA_18, "To display Scene-1");
    glColor3f(1.0, 0.0, 0.0);
    renderBitmapString(-31, 26, GLUT_BITMAP_HELVETICA_18, " (Done by Farseen)");
    glColor3f(0.0, 0.0, 0.0);
    renderBitmapString(-19, 26, GLUT_BITMAP_HELVETICA_18, ": click '1'");

    glColor3f(0.0, 0.0, 0.0);
    renderBitmapString(-43, 23, GLUT_BITMAP_HELVETICA_18, "To display Scene-2");
    glColor3f(1.0, 0.0, 0.0);
    renderBitmapString(-31, 23, GLUT_BITMAP_HELVETICA_18, " (Done by Towfiq)");
    glColor3f(0.0, 0.0, 0.0);
    renderBitmapString(-19.5, 23, GLUT_BITMAP_HELVETICA_18, ": click '2'");

    glColor3f(0.0, 0.0, 0.0);
    renderBitmapString(-43, 20, GLUT_BITMAP_HELVETICA_18, "To display Scene-3");
    glColor3f(1.0, 0.0, 0.0);
    renderBitmapString(-31, 20, GLUT_BITMAP_HELVETICA_18, " (Done by Hachib)");
    glColor3f(0.0, 0.0, 0.0);
    renderBitmapString(-19.5, 20, GLUT_BITMAP_HELVETICA_18, ": click '3'");

    glColor3f(0.0, 0.0, 0.0);
    renderBitmapString(-43, 17, GLUT_BITMAP_HELVETICA_18, "To display Scene-4");
    glColor3f(1.0, 0.0, 0.0);
    renderBitmapString(-31, 17, GLUT_BITMAP_HELVETICA_18, " (Done by Afsana)");
    glColor3f(0.0, 0.0, 0.0);
    renderBitmapString(-19.5, 17, GLUT_BITMAP_HELVETICA_18, ": click '4'");

    glColor3f(0.0, 0.0, 0.0);
    renderBitmapString(-43, 14, GLUT_BITMAP_HELVETICA_18, "To display Scene-5");
    glColor3f(1.0, 0.0, 0.0);
    renderBitmapString(-31, 14, GLUT_BITMAP_HELVETICA_18, " (Done by Ushmita)");
    glColor3f(0.0, 0.0, 0.0);
    renderBitmapString(-19, 14, GLUT_BITMAP_HELVETICA_18, ": click '5'");

    glColor3f(0.4, 0.0, 0.4);
    renderBitmapString(-32, 10, GLUT_BITMAP_HELVETICA_18, "Keys for Scene-1");
    glColor3f(0.0, 0.0, 0.0);
    renderBitmapString(-43, 7, GLUT_BITMAP_HELVETICA_18, "To display Night View: click 'n' or 'N'");
    renderBitmapString(-43, 4, GLUT_BITMAP_HELVETICA_18, "To display Day View: click 'd' or 'D'");
    renderBitmapString(-43, 1, GLUT_BITMAP_HELVETICA_18, "To generate Rain along with Sound: click 'r' or 'R'");
    renderBitmapString(-43, -2, GLUT_BITMAP_HELVETICA_18, "To stop Rain along with Sound: click 't' or 'T'");
    renderBitmapString(-43, -5, GLUT_BITMAP_HELVETICA_18, "To move & stop Clouds: click 'c' or 'C'");
    renderBitmapString(-43, -8, GLUT_BITMAP_HELVETICA_18, "To start & stop rotating the Windmill: click 'w' or 'W'");
    renderBitmapString(-43, -11, GLUT_BITMAP_HELVETICA_18, "To start moving the Ship: click 's' or 'S'");
    renderBitmapString(-43, -14, GLUT_BITMAP_HELVETICA_18, "To reset the whole Scene-1: click 'z' or 'Z'");

    glColor3f(0.4, 0.0, 0.4);
    renderBitmapString(-32, -18, GLUT_BITMAP_HELVETICA_18, "Keys for Scene-2");
    glColor3f(0.0, 0.0, 0.0);
    renderBitmapString(-43, -21, GLUT_BITMAP_HELVETICA_18, "To move the Ship along with Horn generation: click 'x' or 'X'");
    renderBitmapString(-43, -24, GLUT_BITMAP_HELVETICA_18, "To pause the Ship along with sound: click 'v' or 'V'");
    renderBitmapString(-43, -27, GLUT_BITMAP_HELVETICA_18, "To play the sound of Sea Wave: click 'k' or 'K'");
    renderBitmapString(-43, -30, GLUT_BITMAP_HELVETICA_18, "To mute the sounds across all the scenes: click 'e' or 'E'");
    renderBitmapString(-43, -33, GLUT_BITMAP_HELVETICA_18, "To move the Helicopter Diagonally: click 'm' or 'M'");
    renderBitmapString(-43, -36, GLUT_BITMAP_HELVETICA_18, "To move both the Mini ships: click 'l' or 'L'");
    renderBitmapString(-43, -39, GLUT_BITMAP_HELVETICA_18, "To move the mini ship at the right side only: click 'o' or 'O'");

    glColor3f(0.4, 0.0, 0.4);
    renderBitmapString(12, 32, GLUT_BITMAP_HELVETICA_18, "Keys for Scene-3");
    glColor3f(0.0, 0.0, 0.0);
    renderBitmapString(0, 29, GLUT_BITMAP_HELVETICA_18, "To move & stop the ship: click 'u' or 'U'");
    renderBitmapString(0, 26, GLUT_BITMAP_HELVETICA_18, "To move & stop the clouds: click 'q' or 'Q'");
    renderBitmapString(0, 23, GLUT_BITMAP_HELVETICA_18, "To start & stop rotating the Windmill: click 'y' or 'Y'");
    renderBitmapString(0, 20, GLUT_BITMAP_HELVETICA_18, "To view the Night Scene & switch to Day: click 'f' or 'F'");
    renderBitmapString(0, 17, GLUT_BITMAP_HELVETICA_18, "To start & stop the rain: click 'a' or 'A'");
    renderBitmapString(0, 14, GLUT_BITMAP_HELVETICA_18, "To play the sound of Sea Water: click 'g' or 'G'");

    glColor3f(0.4, 0.0, 0.4);
    renderBitmapString(12, 10, GLUT_BITMAP_HELVETICA_18, "Keys for Scene-4");
    glColor3f(0.0, 0.0, 0.0);
    renderBitmapString(0, 7, GLUT_BITMAP_HELVETICA_18, "To move the Human: click 'b' or 'B'");
    renderBitmapString(0, 4, GLUT_BITMAP_HELVETICA_18, "To play the sound of Sea & Seagull: click 'j' or 'J'");

    glColor3f(0.4, 0.0, 0.4);
    renderBitmapString(12, 0, GLUT_BITMAP_HELVETICA_18, "Keys for Scene-5");
    glColor3f(0.0, 0.0, 0.0);
    renderBitmapString(0, -3, GLUT_BITMAP_HELVETICA_18, "To view the Night Scene: click 'h' or 'H'");
    renderBitmapString(0, -6, GLUT_BITMAP_HELVETICA_18, "To view the Day Scene: click '0'");
    renderBitmapString(0, -9, GLUT_BITMAP_HELVETICA_18, "To generate Rain along with Sound: click '8'");
    renderBitmapString(0, -12, GLUT_BITMAP_HELVETICA_18, "To play a soothing music in the sea-side resort: click '9'");

    glColor3f(0.25, 0.55, 0.75);
    renderBitmapString(0, -16, GLUT_BITMAP_HELVETICA_18, "Mouse Functionalities:");
    glColor3f(0.4, 0.0, 0.4);
    renderBitmapString(0, -19, GLUT_BITMAP_HELVETICA_18, "Scene-1:");
    glColor3f(0.0, 0.0, 0.0);
    renderBitmapString(6, -19, GLUT_BITMAP_HELVETICA_18, "'Press Right Button' to move & stop the Ship");

    glColor3f(0.4, 0.0, 0.4);
    renderBitmapString(0, -22, GLUT_BITMAP_HELVETICA_18, "Scene-2:");
    glColor3f(0.0, 0.0, 0.0);
    renderBitmapString(6, -22, GLUT_BITMAP_HELVETICA_18, "'Press Right Button' to pause the movement of the Mini ships");

    glColor3f(0.4, 0.0, 0.4);
    renderBitmapString(0, -25, GLUT_BITMAP_HELVETICA_18, "Scene-2:");
    glColor3f(0.0, 0.0, 0.0);
    renderBitmapString(6, -25, GLUT_BITMAP_HELVETICA_18, "'Press Left Button' to resume the movement of the Mini ships");

    glColor3f(0.4, 0.0, 0.4);
    renderBitmapString(0, -28, GLUT_BITMAP_HELVETICA_18, "Scene-3:");
    glColor3f(0.0, 0.0, 0.0);
    renderBitmapString(6, -28, GLUT_BITMAP_HELVETICA_18, "'Press Right Button' to start & stop the movement of the ship");

    glColor3f(0.4, 0.0, 0.4);
    renderBitmapString(0, -31, GLUT_BITMAP_HELVETICA_18, "Scene-4:");
    glColor3f(0.0, 0.0, 0.0);
    renderBitmapString(6, -31, GLUT_BITMAP_HELVETICA_18, "'Press Left Button' to view the Night Scene & switch to Day");

    glColor3f(0.4, 0.0, 0.4);
    renderBitmapString(0, -34, GLUT_BITMAP_HELVETICA_18, "Scene-5:");
    glColor3f(0.0, 0.0, 0.0);
    renderBitmapString(6, -34, GLUT_BITMAP_HELVETICA_18, "'Press Right Button' to move & gradually increase the speed of the boat");

    glColor3f(0.4, 0.0, 0.4);
    renderBitmapString(0, -37, GLUT_BITMAP_HELVETICA_18, "Scene-5:");
    glColor3f(0.0, 0.0, 0.0);
    renderBitmapString(6, -37, GLUT_BITMAP_HELVETICA_18, "'Press Left Button' to gradually decrease the speed of the boat & stop it");

    drawLines();

    glFlush();
}

///////////////// Scene-1 (Farseen) Global Variables ////////////////////

bool isNightMode = false;
bool rainday = false;
bool moveClouds = false;
bool startRotation = false;
int f = 0;
float rain = 0.0;
float cloudTranslationX = 0.0f;
float rotateAngle = 0.0f;
float rotationSpeed = 3.0f;
float ship3TranslationX = 0.0f;
bool shipMoving = false;
float shipspeed = 0.0f;
bool isShipMoved = false;
bool shipComeBack = false;
int currentScene = 1;

///////////////// Scene-2 (Towfiq) Global Variables ////////////////////

float X = 0.0f;
float Y = 0.0f;
float xrigth=0.0f;
float yright=0.0f;
float PI = 3.1416;
float moveShipX = 0.0f;
float moveShipY = 0.0f;
float shipSpeed =0.3f;
float savedShipSpeed = 0.0f;
bool shipPaused = true;
bool CloudPaused = false;
float moveCloud = 0;
float CloudSpeed = 0.2;
int CloudDirection = 1;
bool wavePaused = false;
float moveWave = 0;
float WaveSpeed = 2;
int waveDirection = 1;
float moveHelicopterX = 0.0f;
float moveHelicopterY = 0.0f;
float helicopterSpeedX = 2.0;
float helicopterSpeedY = 1.0;
float savedHelicopterSpeed = 0.0f;
bool helicopterPaused = false;
bool helicopterStoppedOnce = false;
float moveMiniship1 = 0;
float Miniship1Speed =0.3f;
float savedMiniship1Speed = 0.0f;
bool miniship1Paused = false;
float moveMiniship2 = 0;
float Miniship2Speed =0.3f;
float savedMiniship2Speed = 0.0f;
bool miniship2Paused = false;
int currentSound = 0;
bool helicopterStarted = false;
bool miniship1Started = false;
bool miniship2Started = false;

///////////////// Scene-3 (Hachib) Global Variables ////////////////////

float hshipX = 0.0f;
float hshipSpeed = 0.1f;
bool hshipMoving = false;
bool hisNightMode = false;
bool hstartRotation = false;
float hrotateAngle = 0.0f;
float hcloudX = 0.0f;
float hcloudSpeed = 0.05f;
bool hcloudMoving = false;
const int numDrops = 100;
float rainX[numDrops];
float rainY[numDrops];
bool isRaining = false;

///////////////// Scene-4 (Afsana) Global Variables ////////////////////

float aX = 0.0f;
float aY = 0.0f;
float axrigth=0.0f;
float ayright=0.0f;
double posX = -32.5892504531902;
double posY = -31.4185347980396;
double targetX = 31.2057044031471;
double targetY = -5.2631307633609;
bool aisMoving = false;
int moveDirection = 0;
double speed = 0.1;
bool aisDay = true;
bool aisMovingForward = false;
float cloudX = 0.0f;
float asteroidX = -60.0f;
float asteroidY = 35.0f;
int direction = 1;


///////////////// Scene-5 (Ushmita) Global Variables ////////////////////

float cloudOffset = 0.0f;
float boatOffset = 0.0f;
float boatSpeed = 0.0007f;
bool uisNight = false;
const int MAX_RAIN = 1000;
float urainX[MAX_RAIN];
float urainY[MAX_RAIN];
float rainSpeed = 0.4f;
bool uisRaining = false;

///////////////// Scene-1 (Farseen) Functions ////////////////////

void skyMorning(){
    glBegin(GL_POLYGON);
    glColor3ub(216,232,240);
    glVertex2f(50.0f, 40.0f);
    glColor3ub(204,228,240);
    glVertex2f(-50.0f, 40.0f);
    glColor3ub(192,224,240);
    glVertex2f(-50.0f, 25.0f);
    glColor3ub(125,193,227);
    glVertex2f(50.0f, 25.0f);
    glEnd();
}
void skyNight(){
    glBegin(GL_POLYGON);
    glColor3ub(8, 32, 64);
    glVertex2f(50.0f, 40.0f);
    glColor3ub(50, 54, 59);
    glVertex2f(-50.0f, 40.0f);
    glColor3ub(3, 30, 64);
    glVertex2f(-50.0f, 25.0f);
    glColor3ub(2, 19, 41);
    glVertex2f(50.0f, 25.0f);
    glEnd();
}

void sea(){
    glBegin(GL_POLYGON);
    if (isNightMode) {
        glColor3ub(10, 70, 90);
        glVertex2f(-50.0f, 25.0f);
        glColor3ub(20, 80, 100);
        glVertex2f(50.0f, 25.0f);
        glColor3ub(50, 100, 120);
        glVertex2f(50.0f, -40.0f);
        glColor3ub(70, 110, 130);
        glVertex2f(-50.0f, -40.0f);
    } else {
        glColor3ub(17, 109, 130);
        glVertex2f(-50.0f, 25.0f);
        glColor3ub(38, 136, 158);
        glVertex2f(50.0f, 25.0f);
        glColor3ub(101, 181, 199);
        glVertex2f(50.0f, -40.0f);
        glColor3ub(129, 198, 214);
        glVertex2f(-50.0f, -40.0f);
    }
    glEnd();
}

void ship() {
    glBegin(GL_POLYGON);
      if (isNightMode) {
          glColor3ub(150, 120, 80);
      } else {
          glColor3ub(204, 157, 110);
      }
      glVertex2f(-13.5f, 21.0f);
      glVertex2f(-12.0f, 10.0f);
      glVertex2f(-6.3f, 11.5f);
      glVertex2f(-9.0f, 21.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
      if (isNightMode) {
          glColor3ub(150, 120, 80);
      } else {
          glColor3ub(204, 157, 110);
      }
      glVertex2f(-12.0f, 10.0f);
      glVertex2f(-6.3f, 11.5f);
      glVertex2f(-7.0f, 7.0f);
    glEnd();

    glBegin(GL_POLYGON);
      if (isNightMode) {
          glColor3ub(180, 140, 100);
      } else {
          glColor3ub(232, 181, 130);
      }
      glVertex2f(-12.8f, 21.7f);
      glVertex2f(-12.3f, 14.0f);
      glVertex2f(-7.0f, 15.0f);
      glVertex2f(-9.0f, 21.7f);
    glEnd();

    glBegin(GL_POLYGON);
      if (isNightMode) {
          glColor3ub(180, 140, 100);
      } else {
          glColor3ub(232, 181, 130);
      }
      glVertex2f(-12.0f, 23.0f);
      glVertex2f(-9.0f, 23.5f);
      glVertex2f(-8.0f, 18.5f);
      glVertex2f(-11.0f, 18.0f);
    glEnd();

    glBegin(GL_POLYGON);
      if (isNightMode) {
          glColor3ub(150, 120, 80);
      } else {
          glColor3ub(204, 157, 110);
      }
      glVertex2f(-8.0f, 18.5f);
      glVertex2f(-11.0f, 18.0f);
      glVertex2f(-11.0f, 17.2f);
      glVertex2f(-8.0f, 17.7f);
    glEnd();

    glBegin(GL_POLYGON);
      if (isNightMode) {
          glColor3ub(160, 160, 160);
      } else {
          glColor3ub(219, 218, 217);
      }
      glVertex2f(-11.8f, 22.4f);
      glVertex2f(-12.0f, 20.0f);
      glVertex2f(-11.5f, 15.5f);
      glVertex2f(-10.9f, 18.2f);
    glEnd();

    glBegin(GL_POLYGON);
      if (isNightMode) {
          glColor3ub(200, 200, 200);
      } else {
          glColor3ub(255, 255, 255);
      }
      glVertex2f(-11.2f, 17.2f);
      glVertex2f(-11.5f, 15.5f);
      glVertex2f(-7.8f, 16.0f);
      glVertex2f(-8.0f, 17.7f);
    glEnd();

    glBegin(GL_POLYGON);
      if (isNightMode) {
          glColor3ub(255, 215, 0);
      } else {
          glColor3ub(30, 42, 87);
      }
      glVertex2f(-8.0f, 17.7f);
      glVertex2f(-11.0f, 17.2f);
      glVertex2f(-10.9f, 16.2f);
      glVertex2f(-8.3f, 16.6f);
    glEnd();

    glBegin(GL_POLYGON);
      if (isNightMode) {
          glColor3ub(200, 200, 200);
      } else {
          glColor3ub(255, 255, 255);
      }
      glVertex2f(-6.9f, 13.4f);
      glVertex2f(-6.5f, 12.0f);
      glVertex2f(-12.0f, 11.0f);
      glVertex2f(-12.0f, 12.3f);
    glEnd();

    glBegin(GL_POLYGON);
      if (isNightMode) {
          glColor3ub(160, 160, 160);
      } else {
          glColor3ub(219, 218, 217);
      }
      glVertex2f(-7.5f, 14.8f);
      glVertex2f(-7.0f, 13.4f);
      glVertex2f(-12.0f, 12.3f);
      glVertex2f(-11.8f, 13.9f);
    glEnd();

    glBegin(GL_POLYGON);
      if (isNightMode) {
          glColor3ub(255,215,0);
      } else {
          glColor3ub(30, 42, 87);
      }
      glVertex2f(-7.4f, 14.7f);
      glVertex2f(-7.2f, 13.5f);
      glVertex2f(-11.7f, 12.5f);
      glVertex2f(-11.7f, 13.8f);
    glEnd();

    glBegin(GL_POLYGON);
      if (isNightMode) {
          glColor3ub(100, 70, 40);
      } else {
          glColor3ub(138, 102, 66);
      }
      glVertex2f(-13.5f, 21.0f);
      glVertex2f(-12.0f, 10.0f);
      glVertex2f(-12.5f, 9.0f);
      glVertex2f(-13.2f, 12.5f);
    glEnd();

    glBegin(GL_POLYGON);
      if (isNightMode) {
          glColor3ub(100, 70, 40);
      } else {
          glColor3ub(138, 102, 66);
      }
      glVertex2f(-12.0f, 10.0f);
      glVertex2f(-12.5f, 9.0f);
      glVertex2f(-6.8f, 5.9f);
      glVertex2f(-7.0f, 7.0f);
    glEnd();

    glBegin(GL_POLYGON);
      if (isNightMode) {
          glColor3ub(100, 70, 40);
      } else {
          glColor3ub(138, 102, 66);
      }
      glVertex2f(-6.8f, 5.9f);
      glVertex2f(-7.0f, 7.0f);
      glVertex2f(-6.4f, 11.0f);
      glVertex2f(-6.3f, 11.5f);
    glEnd();

    glBegin(GL_LINES);
      if (isNightMode) {
          glColor3ub(200, 200, 200);
      } else {
          glColor3ub(255, 255, 255);
      }
      glVertex2f(-7.0f, 7.0f);
      glVertex2f(-7.2f, 7.8f);
    glEnd();

    glBegin(GL_LINES);
      if (isNightMode) {
          glColor3ub(200, 200, 200);
      } else {
          glColor3ub(255, 255, 255);
      }
      glVertex2f(-12.0f, 10.0f);
      glVertex2f(-12.0f, 10.8f);
    glEnd();

    glBegin(GL_LINES);
      if (isNightMode) {
          glColor3ub(200, 200, 200);
      } else {
          glColor3ub(255, 255, 255);
      }
      glVertex2f(-7.2f, 7.8f);
      glVertex2f(-12.0f, 10.8f);
    glEnd();

    glBegin(GL_LINES);
      if (isNightMode) {
          glColor3ub(200, 200, 200);
      } else {
          glColor3ub(255, 255, 255);
      }
      glVertex2f(-7.2f, 7.8f);
      glVertex2f(-6.3f, 11.5f);
    glEnd();
}

void ship2() {
    glBegin(GL_POLYGON);
      if (isNightMode) {
          glColor3ub(150, 120, 80);
      } else {
          glColor3ub(204, 157, 110);
      }
      glVertex2f(13.5f, 21.0f);
      glVertex2f(12.0f, 10.0f);
      glVertex2f(6.3f, 11.5f);
      glVertex2f(9.0f, 21.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
      if (isNightMode) {
          glColor3ub(150, 120, 80);
      } else {
          glColor3ub(204, 157, 110);
      }
      glVertex2f(12.0f, 10.0f);
      glVertex2f(6.3f, 11.5f);
      glVertex2f(7.0f, 7.0f);
    glEnd();

    glBegin(GL_POLYGON);
      if (isNightMode) {
          glColor3ub(180, 140, 100);
      } else {
          glColor3ub(232, 181, 130);
      }
      glVertex2f(12.8f, 21.7f);
      glVertex2f(12.3f, 14.0f);
      glVertex2f(7.0f, 15.0f);
      glVertex2f(9.0f, 21.7f);
    glEnd();

    glBegin(GL_POLYGON);
      if (isNightMode) {
          glColor3ub(180, 140, 100);
      } else {
          glColor3ub(232, 181, 130);
      }
      glVertex2f(12.0f, 23.0f);
      glVertex2f(9.0f, 23.5f);
      glVertex2f(8.0f, 18.5f);
      glVertex2f(11.0f, 18.0f);
    glEnd();

    glBegin(GL_POLYGON);
      if (isNightMode) {
          glColor3ub(150, 120, 80);
      } else {
          glColor3ub(204, 157, 110);
      }
      glVertex2f(8.0f, 18.5f);
      glVertex2f(11.0f, 18.0f);
      glVertex2f(11.0f, 17.2f);
      glVertex2f(8.0f, 17.7f);
    glEnd();

    glBegin(GL_POLYGON);
      if (isNightMode) {
          glColor3ub(160, 160, 160);
      } else {
          glColor3ub(219, 218, 217);
      }
      glVertex2f(11.8f, 22.4f);
      glVertex2f(12.0f, 20.0f);
      glVertex2f(11.5f, 15.5f);
      glVertex2f(10.9f, 18.2f);
    glEnd();

    glBegin(GL_POLYGON);
      if (isNightMode) {
          glColor3ub(200, 200, 200);
      } else {
          glColor3ub(255, 255, 255);
      }
      glVertex2f(11.2f, 17.2f);
      glVertex2f(11.5f, 15.5f);
      glVertex2f(7.8f, 16.0f);
      glVertex2f(8.0f, 17.7f);
    glEnd();

    glBegin(GL_POLYGON);
      if (isNightMode) {
          glColor3ub(255, 215, 0);
      } else {
          glColor3ub(30, 42, 87);
      }
      glVertex2f(8.0f, 17.7f);
      glVertex2f(11.0f, 17.2f);
      glVertex2f(10.9f, 16.2f);
      glVertex2f(8.3f, 16.6f);
    glEnd();

    glBegin(GL_POLYGON);
      if (isNightMode) {
          glColor3ub(200, 200, 200);
      } else {
          glColor3ub(255, 255, 255);
      }
      glVertex2f(6.9f, 13.4f);
      glVertex2f(6.5f, 12.0f);
      glVertex2f(12.0f, 11.0f);
      glVertex2f(12.0f, 12.3f);
    glEnd();

    glBegin(GL_POLYGON);
      if (isNightMode) {
          glColor3ub(160, 160, 160);
      } else {
          glColor3ub(219, 218, 217);
      }
      glVertex2f(7.5f, 14.8f);
      glVertex2f(7.0f, 13.4f);
      glVertex2f(12.0f, 12.3f);
      glVertex2f(11.8f, 13.9f);
    glEnd();

    glBegin(GL_POLYGON);
      if (isNightMode) {
          glColor3ub(255, 215, 0);
      } else {
          glColor3ub(30, 42, 87);
      }
      glVertex2f(7.4f, 14.7f);
      glVertex2f(7.2f, 13.5f);
      glVertex2f(11.7f, 12.5f);
      glVertex2f(11.7f, 13.8f);
    glEnd();

    glBegin(GL_POLYGON);
      if (isNightMode) {
          glColor3ub(100, 70, 40);
      } else {
          glColor3ub(138, 102, 66);
      }
      glVertex2f(13.5f, 21.0f);
      glVertex2f(12.0f, 10.0f);
      glVertex2f(12.5f, 9.0f);
      glVertex2f(13.2f, 12.5f);
    glEnd();

    glBegin(GL_POLYGON);
      if (isNightMode) {
          glColor3ub(100, 70, 40);
      } else {
          glColor3ub(138, 102, 66);
      }
      glVertex2f(12.0f, 10.0f);
      glVertex2f(12.5f, 9.0f);
      glVertex2f(6.8f, 5.9f);
      glVertex2f(7.0f, 7.0f);
    glEnd();

    glBegin(GL_POLYGON);
      if (isNightMode) {
          glColor3ub(100, 70, 40);
      } else {
          glColor3ub(138, 102, 66);
      }
      glVertex2f(6.8f, 5.9f);
      glVertex2f(7.0f, 7.0f);
      glVertex2f(6.4f, 11.0f);
      glVertex2f(6.3f, 11.5f);
    glEnd();

    glBegin(GL_LINES);
      if (isNightMode) {
          glColor3ub(200, 200, 200);
      } else {
          glColor3ub(255, 255, 255);
      }
      glVertex2f(7.0f, 7.0f);
      glVertex2f(7.2f, 7.8f);
    glEnd();

    glBegin(GL_LINES);
      if (isNightMode) {
          glColor3ub(200, 200, 200);
      } else {
          glColor3ub(255, 255, 255);
      }
      glVertex2f(12.0f, 10.0f);
      glVertex2f(12.0f, 10.8f);
    glEnd();

    glBegin(GL_LINES);
      if (isNightMode) {
          glColor3ub(200, 200, 200);
      } else {
          glColor3ub(255, 255, 255);
      }
      glVertex2f(7.2f, 7.8f);
      glVertex2f(12.0f, 10.8f);
    glEnd();

    glBegin(GL_LINES);
      if (isNightMode) {
          glColor3ub(200, 200, 200);
      } else {
          glColor3ub(255, 255, 255);
      }
      glVertex2f(7.2f, 7.8f);
      glVertex2f(6.3f, 11.5f);
    glEnd();
}

void ship3(){
    glPushMatrix();
    glTranslatef(ship3TranslationX, 0.0f, 0.0f);

    glBegin(GL_POLYGON);
    glColor3ub(216,232,240);
    glVertex2f(-30,-4);
    glColor3ub(204,228,240);
    glVertex2f(-26,-4);
    glVertex2f(-26,-8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(216,232,240);
    glVertex2f(-26,-4);
    glColor3ub(25,10,227);
    glVertex2f(-25,-5);
    glVertex2f(-25,-8);
    glVertex2f(-26,-8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(216,232,240);
    glVertex2f(-25,-5);
    glColor3ub(25,10,227);
    glVertex2f(-8,-5);
    glVertex2f(-8,-8);
    glVertex2f(-25,-8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(216,232,240);
    glVertex2f(-8,-4);
    glColor3ub(25,10,227);
    glVertex2f(-7,-4);
    glVertex2f(-7,-8);
    glVertex2f(-8,-8);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-25,0);
    glVertex2f(-19,0);
    glVertex2f(-19,-5);
    glVertex2f(-25,-5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-19,-1);
    glVertex2f(-11,-1);
    glVertex2f(-11,-5);
    glVertex2f(-19,-5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-11,0);
    glVertex2f(-8,0);
    glVertex2f(-8,-5);
    glVertex2f(-11,-5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-13,1);
    glVertex2f(-8,1);
    glVertex2f(-8,0);
    glVertex2f(-13,0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-14,2);
    glVertex2f(-7,2);
    glVertex2f(-7,1);
    glVertex2f(-14,1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-12,3);
    glVertex2f(-9,3);
    glVertex2f(-9,2);
    glVertex2f(-12,2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-11,4);
    glVertex2f(-10,4);
    glVertex2f(-10,3);
    glVertex2f(-11,3);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-27,-1);
    glVertex2f(-25,-1);
    glVertex2f(-25,-5);
    glVertex2f(-26,-4);
    glVertex2f(-27,-4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(216,200,240);
    glVertex2f(-23,1);
    glVertex2f(-21,1);
    glVertex2f(-21,0);
    glVertex2f(-23,0);
    glEnd();

    ///boxes

    glBegin(GL_POLYGON);
    glColor3ub(180,0,0);
    glVertex2f(-27,-1);
    glColor3ub(177,0,0);
    glVertex2f(-26,-1);
    glColor3ub(160,0,0);
    glVertex2f(-26,-2);
    glColor3ub(162,0,0);
    glVertex2f(-27,-2);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 69, 0);
    glVertex2f(-27,-2);
    glColor3ub(255, 65, 0);
    glVertex2f(-26,-2);
    glColor3ub(255, 63, 0);
    glVertex2f(-26,-3);
    glColor3ub(255, 60, 0);
    glVertex2f(-27,-3);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 140, 0);
    glVertex2f(-27,-3);
    glVertex2f(-26,-3);
    glVertex2f(-26,-4);
    glVertex2f(-27,-4);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 215, 200);
    glVertex2f(-27,-4);
    glColor3ub(255, 215, 100);
    glVertex2f(-26,-4);
    glColor3ub(255, 215,150);
    glVertex2f(-26,-5);
    glColor3ub(255, 215, 120);
    glVertex2f(-27,-5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(31, 139, 34);
    glVertex2f(-26,-1);
    glColor3ub(32, 139, 34);
    glVertex2f(-25,-1);
    glColor3ub(34, 139, 34);
    glVertex2f(-25,-2);
    glColor3ub(33, 139, 34);
    glVertex2f(-26,-2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(46, 139, 87);
    glVertex2f(-26,-2);
    glVertex2f(-25,-2);
    glVertex2f(-25,-3);
    glVertex2f(-26,-3);
    glEnd();

    glBegin(GL_POLYGON);
     glColor3ub(60, 179, 113);
    glVertex2f(-26,-3);
    glVertex2f(-25,-3);
    glVertex2f(-25,-4);
    glVertex2f(-26,-4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 255);
    glVertex2f(-26,-4);
    glVertex2f(-25,-4);
    glVertex2f(-25,-5);
    glVertex2f(-26,-5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(30, 144, 255);
    glVertex2f(-25,-1);
    glVertex2f(-24,-1);
    glVertex2f(-24,-2);
    glVertex2f(-25,-2);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-25,-2);
    glVertex2f(-24,-2);
    glVertex2f(-24,-3);
    glVertex2f(-25,-3);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 102);
    glVertex2f(-25,-3);
    glVertex2f(-24,-3);
    glVertex2f(-24,-4);
    glVertex2f(-25,-4);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(120,100,230);
    glVertex2f(-25,-4);
    glVertex2f(-24,-4);
    glVertex2f(-24,-5);
    glVertex2f(-25,-5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(100,200,230);
    glVertex2f(-24,-1);
    glVertex2f(-23,-1);
    glVertex2f(-23,-2);
    glVertex2f(-24,-2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(204, 255, 153);
    glVertex2f(-24,-2);
    glVertex2f(-23,-2);
    glVertex2f(-23,-3);
    glVertex2f(-24,-3);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 102, 0);
    glVertex2f(-24,-3);
    glVertex2f(-23,-3);
    glVertex2f(-23,-4);
    glVertex2f(-24,-4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(204, 255, 153);
    glVertex2f(-24,-4);
    glVertex2f(-23,-4);
    glVertex2f(-23,-5);
    glVertex2f(-24,-5);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(255, 255, 102);
    glVertex2f(-23,-1);
    glVertex2f(-19,-1);
    glVertex2f(-19,-2);
    glVertex2f(-23,-2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51, 153, 255);
    glVertex2f(-23,-2);
    glVertex2f(-19,-2);
    glVertex2f(-19,-3);
    glVertex2f(-23,-3);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(204, 153, 0);
    glVertex2f(-23,-3);
    glVertex2f(-19,-3);
    glVertex2f(-19,-4);
    glVertex2f(-23,-4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(153, 102, 51);
    glVertex2f(-23,-4);
    glVertex2f(-19,-4);
    glVertex2f(-19,-5);
    glVertex2f(-23,-5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(101,101,101);
    glVertex2f(-25,0);
    glVertex2f(-23,0);
    glVertex2f(-23,-1);
    glVertex2f(-25,-1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(191,191,191);
    glVertex2f(-23,0);
    glVertex2f(-22,0);
    glVertex2f(-22,-1);
    glVertex2f(-23,-1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(100,100,100);
    glVertex2f(-22,0);
    glVertex2f(-20,0);
    glVertex2f(-20,-1);
    glVertex2f(-22,-1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(153, 255, 102);
    glVertex2f(-20,0);
    glVertex2f(-19,0);
    glVertex2f(-19,-1);
    glVertex2f(-20,-1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(000,101,101);
    glVertex2f(-23,1);
    glVertex2f(-21,1);
    glVertex2f(-21,0);
    glVertex2f(-23,0);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(255, 153, 51);
    glVertex2f(-19,-1);
    glVertex2f(-17,-1);
    glVertex2f(-17,-2);
    glVertex2f(-19,-2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(153, 255, 102);
    glVertex2f(-19,-2);
    glVertex2f(-17,-2);
    glVertex2f(-17,-3);
    glVertex2f(-19,-3);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 153, 153);
    glVertex2f(-19,-3);
    glVertex2f(-15,-3);
    glVertex2f(-15,-4);
    glVertex2f(-19,-4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(204, 102, 0);
    glVertex2f(-19,-4);
    glVertex2f(-15,-4);
    glVertex2f(-15,-5);
    glVertex2f(-19,-5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(70, 130,0);
    glVertex2f(-17,-1);
    glColor3ub(70, 130, 18);
    glVertex2f(-16,-1);
    glColor3ub(70, 130, 15);
    glVertex2f(-16,-2);
    glColor3ub(70, 130,0);
    glVertex2f(-17,-2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51, 51, 204);
    glVertex2f(-17,-2);
    glVertex2f(-16,-2);
    glVertex2f(-16,-3);
    glVertex2f(-17,-3);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(0, 51, 0);
    glVertex2f(-16,-1);
    glVertex2f(-15,-1);
    glVertex2f(-15,-2);
    glVertex2f(-16,-2);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(102, 255, 255);
    glVertex2f(-16,-2);
    glVertex2f(-15,-2);
    glVertex2f(-15,-3);
    glVertex2f(-16,-3);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 102, 0);
    glVertex2f(-15,-1);
    glVertex2f(-10,-1);
    glVertex2f(-10,-2);
    glVertex2f(-15,-2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 51, 0);
    glVertex2f(-15,-2);
    glVertex2f(-10,-2);
    glVertex2f(-10,-3);
    glVertex2f(-15,-3);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(204, 102, 0);
    glVertex2f(-15,-3);
    glVertex2f(-10,-3);
    glVertex2f(-10,-4);
    glVertex2f(-15,-4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 0);
    glVertex2f(-15,-4);
    glVertex2f(-10,-4);
    glVertex2f(-10,-5);
    glVertex2f(-15,-5);
    glEnd();

    /// Line
    glLineWidth(1.0f);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-13,0);
    glVertex2f(-8,0);
    glEnd();
    glLineWidth(1.0f);

    glLineWidth(1.0f);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-10,0);
    glVertex2f(-10,-5);
    glEnd();
    glLineWidth(1.0f);

    glLineWidth(1.0f);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-9,0);
    glVertex2f(-9,-5);
    glEnd();
    glLineWidth(1.0f);

    glLineWidth(1.0f);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-8,1);
    glVertex2f(-8,-5);
    glEnd();
    glLineWidth(1.0f);

    glLineWidth(1.0f);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-14,1);
    glVertex2f(-7,1);
    glEnd();
    glLineWidth(1.0f);

    glLineWidth(1.0f);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-12,2);
    glVertex2f(-9,2);
    glEnd();
    glLineWidth(1.0f);

    glLineWidth(1.0f);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-11,3);
    glVertex2f(-10,3);
    glEnd();
    glLineWidth(1.0f);

    glPopMatrix();
}

void bridge(){
    glBegin(GL_POLYGON);
    glColor3ub(71, 71, 71);
    glVertex2f(5.3f, 7.0f);
    glVertex2f(5.3f, -43.0f);
    glVertex2f(-4.7f, -43.0f);
    glVertex2f(-4.7f, 7.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(5.3f, 7.0f);
    glVertex2f(5.3f, -43.0f);
    glVertex2f(6.8f, -43.0f);
    glVertex2f(6.8f, 7.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(-6.7f, 7.0f);
    glVertex2f(-6.7f, -43.0f);
    glVertex2f(-4.7f, -43.0f);
    glVertex2f(-4.7f, 7.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.3f, 7.0f);
    glVertex2f(0.3f, -43.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.2f, 7.0f);
    glVertex2f(-0.2f, -43.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(4.8f, 7.0f);
    glVertex2f(4.8f, -43.1f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,255,0);
    glVertex2f(-4.4f, 7.0f);
    glVertex2f(-4.4f, -43.1f);
    glEnd();
}

void land(){
    glBegin(GL_POLYGON);
        if (isNightMode) {
            glColor3ub(44, 83, 53);
        } else {
            glColor3ub(88, 166, 106);
        }
        glVertex2f(-45.0f, 25.0f);

        if (isNightMode) {
            glColor3ub(44, 83, 53);
        } else {
            glColor3ub(88, 166, 106);
        }
        glVertex2f(-45.0f, 27.0f);

        if (isNightMode) {
            glColor3ub(44, 83, 53);
        } else {
            glColor3ub(88, 166, 106);
        }
        glVertex2f(50.0f, 27.0f);

        if (isNightMode) {
            glColor3ub(44, 83, 53);
        } else {
            glColor3ub(88, 166, 106);
        }
        glVertex2f(50.0f, 25.0f);
    glEnd();

    glBegin(GL_POLYGON);
        if (isNightMode) {
            glColor3ub(44, 83, 53);
        } else {
            glColor3ub(88, 166, 106);
        }
        glVertex2f(-50.0f, 30.0f);

        if (isNightMode) {
            glColor3ub(1, 125, 29);
        } else {
            glColor3ub(2, 250, 59);
        }
        glVertex2f(-40.0f, 30.0f);

        if (isNightMode) {
            glColor3ub(50, 79, 57);
        } else {
            glColor3ub(101, 158, 114);
        }
        glVertex2f(-35.0f, 25.0f);

        if (isNightMode) {
            glColor3ub(22, 58, 31);
        } else {
            glColor3ub(45, 117, 62);
        }
        glVertex2f(-50.0f, 25.0f);
    glEnd();
}

void circle(float radius, float xc, float yc, float r, float g, float b)
{
    glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            glColor3ub(r,g,b);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+xc,y+yc);
        }
     glEnd();
}

void sun()
{
    circle(1.5, 43.7, 36.0f, 252, 252, 3);
}

void moon()
{
    circle(1.5, 43.7f, 36.0f, 246, 241, 213);
}

void singleCloud(float translationX, float translationY) {
    if (isNightMode) {
        circle(0.6, 45.0f + translationX, 35.0f + translationY, 200, 200, 200);
        circle(0.6, 45.0f + translationX, 34.2f + translationY, 200, 200, 200);
        circle(0.6, 43.8f + translationX, 35.0f + translationY, 200, 200, 200);
        circle(0.6, 43.8f + translationX, 34.2f + translationY, 200, 200, 200);
        circle(0.6, 43.0f + translationX, 34.6f + translationY, 200, 200, 200);
        circle(0.6, 46.0f + translationX, 34.6f + translationY, 200, 200, 200);
        circle(0.6, 44.0f + translationX, 34.6f + translationY, 200, 200, 200);
    } else {
        circle(0.6, 45.0f + translationX, 35.0f + translationY, 255, 255, 255);
        circle(0.6, 45.0f + translationX, 34.2f + translationY, 255, 255, 255);
        circle(0.6, 43.8f + translationX, 35.0f + translationY, 255, 255, 255);
        circle(0.6, 43.8f + translationX, 34.2f + translationY, 255, 255, 255);
        circle(0.6, 43.0f + translationX, 34.6f + translationY, 255, 255, 255);
        circle(0.6, 46.0f + translationX, 34.6f + translationY, 255, 255, 255);
        circle(0.6, 44.0f + translationX, 34.6f + translationY, 255, 255, 255);
    }
}

void cloud(float translationX, float translationY) {
    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 0.0f);
    singleCloud(translationX, translationY);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-20.0f, 0.0f, 0.0f);
    singleCloud(translationX, translationY);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-35.0f, 1.50f, 0.0f);
    singleCloud(translationX, translationY);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-53.0f, 3.0f, 0.0f);
    singleCloud(translationX, translationY);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-70.0f, 3.0f, 0.0f);
    singleCloud(translationX, translationY);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-88.0f, 2.0f, 0.0f);
    singleCloud(translationX, translationY);
    glPopMatrix();
}

void treeTriangle(float translationX, float translationY) {
    glPushMatrix();
    glTranslatef(translationX, translationY, 0.0f);

    glBegin(GL_POLYGON);
        if (isNightMode) {
            glColor3ub(35, 25, 20);
        } else {
            glColor3ub(71, 50, 41);
        }
        glVertex2f(-48.0f, 30.0f);

        if (isNightMode) {
            glColor3ub(41, 30, 26);
        } else {
            glColor3ub(82, 61, 52);
        }
        glVertex2f(-48.0f, 31.5f);

        if (isNightMode) {
            glColor3ub(84, 52, 38);
        } else {
            glColor3ub(168, 105, 77);
        }
        glVertex2f(-48.3f, 31.5f);

        if (isNightMode) {
            glColor3ub(95, 58, 42);
        } else {
            glColor3ub(191, 117, 84);
        }
        glVertex2f(-48.3f, 30.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
        if (isNightMode) {
            glColor3ub(3, 121, 71);
        } else {
            glColor3ub(7, 242, 142);
        }
        glVertex2f(-47.3f, 31.2f);

        if (isNightMode) {
            glColor3ub(2, 93, 54);
        } else {
            glColor3ub(4, 186, 108);
        }
        glVertex2f(-48.1f, 32.5f);

        if (isNightMode) {
            glColor3ub(2, 67, 39);
        } else {
            glColor3ub(5, 135, 79);
        }
        glVertex2f(-49.0f, 31.2f);
    glEnd();

    glBegin(GL_TRIANGLES);
        if (isNightMode) {
            glColor3ub(3, 121, 71);
        } else {
            glColor3ub(7, 242, 142);
        }
        glVertex2f(-47.5f, 32.0f);

        if (isNightMode) {
            glColor3ub(2, 93, 54);
        } else {
            glColor3ub(4, 186, 108);
        }
        glVertex2f(-48.1f, 33.3f);

        if (isNightMode) {
            glColor3ub(2, 67, 39);
        } else {
            glColor3ub(5, 135, 79);
        }
        glVertex2f(-48.8f, 32.0f);
    glEnd();

    glPopMatrix();
}

void treeCircle(float translationX, float translationY) {
    glPushMatrix();
    glTranslatef(translationX, translationY, 0.0f);

    glBegin(GL_POLYGON);
        if (isNightMode) {
            glColor3ub(35, 25, 20);
        } else {
            glColor3ub(71, 50, 41);
        }
        glVertex2f(-44.0f, 30.0f);

        if (isNightMode) {
            glColor3ub(41, 30, 26);
        } else {
            glColor3ub(82, 61, 52);
        }
        glVertex2f(-44.0f, 31.5f);

        if (isNightMode) {
            glColor3ub(84, 52, 38);
        } else {
            glColor3ub(168, 105, 77);
        }
        glVertex2f(-44.3f, 31.5f);

        if (isNightMode) {
            glColor3ub(95, 58, 42);
        } else {
            glColor3ub(191, 117, 84);
        }
        glVertex2f(-44.3f, 30.0f);
    glEnd();

    if (isNightMode) {
        circle(0.8, -44.15f, 32.1f, 2, 123, 73);
        circle(0.8, -44.25f, 32.1f, 2, 116, 68);
        circle(0.5, -44.15f, 32.9f, 2, 123, 73);
        circle(0.5, -44.25f, 32.9f, 2, 116, 68);
    } else {
        circle(0.8, -44.15f, 32.1f, 5, 247, 146);
        circle(0.8, -44.25f, 32.1f, 5, 232, 137);
        circle(0.5, -44.15f, 32.9f, 5, 247, 146);
        circle(0.5, -44.25f, 32.9f, 5, 232, 137);
    }

    glPopMatrix();
}

void windmillBlades(float translationX, float translationY)
{
    glPushMatrix();
    glTranslatef(-14.9f + translationX, 34.0f + translationY, 0.0f);

    if (startRotation)
    {
        glRotatef(rotateAngle, 0.0f, 0.0f, 1.0f);
    }

    glTranslatef(14.9f - translationX, -34.0f - translationY, 0.0f);

    GLuint bladeR, bladeG, bladeB;
    if (isNightMode) {
        bladeR = 80; bladeG = 80; bladeB = 80;
    } else {
        bladeR = 151; bladeG = 153; bladeB = 151;
    }

    glBegin(GL_TRIANGLES);
      glColor3ub(bladeR, bladeG, bladeB);
      glVertex2f(-14.9f + translationX, 34.0f + translationY);
      glVertex2f(-17.0f + translationX, 37.0f + translationY);
      glVertex2f(-17.5f + translationX, 36.2f + translationY);
    glEnd();

    glBegin(GL_TRIANGLES);
      glColor3ub(bladeR, bladeG, bladeB);
      glVertex2f(-14.9f + translationX, 34.0f + translationY);
      glVertex2f(-12.0f + translationX, 37.0f + translationY);
      glVertex2f(-12.5f + translationX, 37.5f + translationY);
    glEnd();

    glBegin(GL_TRIANGLES);
      glColor3ub(bladeR, bladeG, bladeB);
      glVertex2f(-14.9f + translationX, 34.0f + translationY);
      glVertex2f(-14.1f + translationX, 30.0f + translationY);
      glVertex2f(-13.7f + translationX, 30.5f + translationY);
    glEnd();

    glPopMatrix();
}

void windmill(float translationX, float translationY){
    GLuint millR, millG, millB;
    if (isNightMode) {
        millR = 80; millG = 80; millB = 80;
    } else {
        millR = 151; millG = 153; millB = 151;
    }

    glBegin(GL_POLYGON);
      glColor3ub(millR, millG, millB);
      glVertex2f(-15.0f + translationX, 25.0f + translationY);
      glVertex2f(-15.0f + translationX, 34.0f + translationY);
      glVertex2f(-14.8f + translationX, 34.0f + translationY);
      glVertex2f(-14.8f + translationX, 25.0f + translationY);
    glEnd();

    if (isNightMode) {
        circle(0.3, -14.9f + translationX, 34.0f + translationY, 120, 120, 120);
    } else {
        circle(0.3, -14.9f + translationX, 34.0f + translationY, 184, 186, 184);
    }

    windmillBlades(0.0f, 0.0f);
    windmillBlades(20.0f, 0.0f);
}

void grass(float translationX, float translationY) {
    glPushMatrix();
    glTranslatef(translationX, translationY, 0.0f);

    if (isNightMode) {
        circle(2.0, 45.0f, 28.0f, 20, 40, 20);
        circle(1.5, 42.5f, 27.5f, 20, 40, 20);
        circle(1.5, 47.5f, 27.5f, 20, 40, 20);
        circle(1.0, 41.0f, 27.0f, 20, 40, 20);
        circle(1.0, 49.0f, 27.0f, 20, 40, 20);
    } else {
        circle(2.0, 45.0f, 28.0f, 35, 69, 35);
        circle(1.5, 42.5f, 27.5f, 35, 69, 35);
        circle(1.5, 47.5f, 27.5f, 35, 69, 35);
        circle(1.0, 41.0f, 27.0f, 35, 69, 35);
        circle(1.0, 49.0f, 27.0f, 35, 69, 35);
    }

    glPopMatrix();
}


void Rain(int value){

if(rainday){

    rain += 0.01f;

    glBegin(GL_POINTS);
    for (int i = 0; i < 1000; i++)
    {
        int x = rand() % 100 - 50;
        int y = rand() % 80 - 40;

        glBegin(GL_LINES);
        glColor3f(1.0, 1.0, 1.0);
        glVertex2d(x, y);
        glVertex2d(x + 1, y - 2);
        glEnd();
    }

	glutPostRedisplay();
	glutTimerFunc(5, Rain, 0);

    glFlush();

    }
}

void updateClouds(int value)
{
    if (moveClouds)
    {
        cloudTranslationX += 0.02f;
        if (cloudTranslationX > 50.0f)
        {
            cloudTranslationX = -50.0f;
        }
        glutPostRedisplay();
        glutTimerFunc(16, updateClouds, 0);
    }
}

void updateWindmill(int value)
{if (startRotation)
    {
        rotateAngle += rotationSpeed;
        if (rotateAngle > 360.0f)
        {
            rotateAngle -= 360.0f;
        }
    }
    glutPostRedisplay();
    glutTimerFunc(28, updateWindmill, 0);
}

void updateShip3(int value) {
    if (shipMoving) {
        shipspeed += 0.03f;
        if (shipspeed > 90.0f) {
            shipspeed = 90.0f;
            isShipMoved = true;
        }

        ship3TranslationX -= 0.1f;

        if (ship3TranslationX < -50.0f && !shipComeBack) {
            ship3TranslationX = 60.0f;
            shipComeBack = true;
        }

        if (shipComeBack && ship3TranslationX <= 37.0f) {
            shipMoving = false;
            shipspeed = 0.0f;
            isShipMoved = false;
        }
    } else {
        shipspeed = 0.0f;
        isShipMoved = false;
    }

    glutPostRedisplay();
    glutTimerFunc(16, updateShip3, 0);
}

void resetScene1() {
    f=0;
    moveClouds = false;
    cloudTranslationX = 0.0f;
    startRotation = false;
    rotateAngle = 0.0f;
    moveClouds =  false;
    cloudTranslationX = 0.0;
    rainday = false;
    rain = 0.0;
    sndPlaySound(NULL,SND_ASYNC);
    shipMoving = false;
    ship3TranslationX = 0.0f;
    shipComeBack = false;
    glutPostRedisplay();
}

void displayScene1() {
    glClear(GL_COLOR_BUFFER_BIT);

    if(f==0)
    {
        isNightMode = false;
        skyMorning();
        sea();
        ship();
        ship2();
        ship3();
        bridge();
        Rain(rain);
        sun();
        cloud(cloudTranslationX, 0.0);
        land();
        treeTriangle(0.0f, 0.0f);
        treeTriangle(2.0f, 0.0f);
        treeTriangle(79.0f, -3.0f);
        treeTriangle(75.0f, -3.0f);
        treeTriangle(73.0f, -3.0f);
        treeTriangle(77.0f, -3.0f);
        treeTriangle(81.0f, -3.0f);
        treeCircle(0.0f, 0.0f);
        treeCircle(2.0f, 0.0f);
        windmill(0.0, 0.0);
        windmill(20.0, 0.0);
        grass(0.0f, 0.0f);
        grass(-30.0f, 0.0f);
        grass(-70.0f, 0.0f);
    }

    else if(f==1)
    {
        isNightMode = true;
        skyNight();
        moon();
        sea();
        ship();
        ship2();
        ship3();
        bridge();
        Rain(rain);
        cloud(cloudTranslationX, 0.0);
        land();
        treeTriangle(0.0f, 0.0f);
        treeTriangle(2.0f, 0.0f);
        treeTriangle(79.0f, -3.0f);
        treeTriangle(75.0f, -3.0f);
        treeTriangle(73.0f, -3.0f);
        treeTriangle(77.0f, -3.0f);
        treeTriangle(81.0f, -3.0f);
        treeCircle(0.0f, 0.0f);
        treeCircle(2.0f, 0.0f);
        windmill(0.0, 0.0);
        windmill(20.0, 0.0);
        grass(0.0f, 0.0f);
        grass(-30.0f, 0.0f);
        grass(-70.0f, 0.0f);
    }
    glFlush();
}

///////////////// Scene-2 (Towfiq) Functions ////////////////////

void hdrawSky() {
    if (hisNightMode) {
        glColor3f(0.1f, 0.1f, 0.3f);
    } else {
        glColor3f(0.5f, 0.8f, 0.95f);
    }
    glBegin(GL_QUADS);
    glVertex2f(-50.0f, 0.0f);
    glVertex2f(50.0f, 0.0f);
    glVertex2f(50.0f, 40.0f);
    glVertex2f(-50.0f, 40.0f);
    glEnd();
}

void hdrawCloud(float x, float y, float scale = 1.0f) {
    glColor3f(1.0f, 1.0f, 1.0f);
    float radius = 3.0f * scale;
    for (int i = 0; i < 3; i++) {
        float cx = x + i * radius * 0.8f;
        float cy = y;
        glBegin(GL_TRIANGLE_FAN);
        glVertex2f(cx, cy);
        for (int angle = 0; angle <= 360; angle += 30) {
            float rad = angle * 3.14159f / 180.0f;
            glVertex2f(cx + cos(rad) * radius, cy + sin(rad) * radius * 0.6f);
        }
        glEnd();
    }
}

void hdrawSun() {
    if (hisNightMode) {

        GLfloat x = -40.0f;
        GLfloat y = 30.0f;
        GLfloat radius = 4.0f;
        glColor3f(1.0f, 1.0f, 1.0f);
        int triangleAmount = 100;
        GLfloat twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x, y); // Center
            for (int i = 0; i <= triangleAmount; i++) {
                glVertex2f(
                    x + (radius * cos(i * twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();
    } else {

        GLfloat x = -40.0f;
        GLfloat y = 30.0f;
        GLfloat radius = 4.0f;
        int triangleAmount = 100;
        GLfloat twicePi = 2.0f * PI;

        glColor3f(1.0f, 1.0f, 0.0f);

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x, y);
            for (int i = 0; i <= triangleAmount; i++) {
                glVertex2f(
                    x + (radius * cos(i * twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();
    }
}

void hdrawSea() {
    if (hisNightMode) {
        glColor3f(0.0f, 0.0f, 0.5f);
    } else {
        glColor3f(0.1f, 0.3f, 0.8f);
    }
    glBegin(GL_QUADS);
    glVertex2f(-50.0f, -40.0f);
    glVertex2f(50.0f, -40.0f);
    glVertex2f(50.0f, -10.0f);
    glVertex2f(-50.0f, -10.0f);
    glEnd();
}

void hdrawLand() {
    glColor3f(0.6f, 0.4f, 0.2f);
    glBegin(GL_QUADS);
    glVertex2f(-50.0f, -10.0f);
    glVertex2f(50.0f, -10.0f);
    glVertex2f(50.0f, 0.0f);
    glVertex2f(-50.0f, 0.0f);
    glEnd();
}

void hdrawGrass() {
    if (hisNightMode) {
        glColor3f(0.0f, 0.3f, 0.0f);
    } else {
        glColor3f(0.0f, 0.6f, 0.0f);
    }

    for (float x = -50.0f; x < 50.0f; x += 1.0f) {
        glPushMatrix();
        glTranslatef(x, 0.0f, 0.0f);

        glBegin(GL_TRIANGLES);
        glVertex2f(0.0f, -10.0f);
        glVertex2f(0.5f, -8.5f);
        glVertex2f(1.0f, -10.0f);
        glEnd();

        glPopMatrix();
    }
}
void hdrawMountains() {
    glColor3f(0.5f, 0.4f, 0.3f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(-40.0f, 0.0f);
    glVertex2f(-30.0f, 20.0f);
    glVertex2f(-20.0f, 30.0f);
    glVertex2f(-10.0f, 10.0f);
    glVertex2f(-5.0f, 0.0f);
    glEnd();

    glColor3f(0.45f, 0.35f, 0.25f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(-20.0f, 0.0f);
    glVertex2f(-10.0f, 25.0f);
    glVertex2f(0.0f, 35.0f);
    glVertex2f(10.0f, 20.0f);
    glVertex2f(20.0f, 0.0f);
    glEnd();

    glColor3f(0.4f, 0.3f, 0.2f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(5.0f, 0.0f);
    glVertex2f(15.0f, 15.0f);
    glVertex2f(30.0f, 28.0f);
    glVertex2f(40.0f, 10.0f);
    glVertex2f(45.0f, 0.0f);
    glEnd();
}

void hdrawTrees() {

    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glColor3f(0.76f, 0.60f, 0.42f);
    glVertex2f(-45.0f, -10.0f);
    glVertex2f(-45.0f, -1.0f);
    glEnd();
    if (hisNightMode)
        glColor3f(0.0f, 0.2f, 0.0f);
    else
        glColor3f(0.0f, 0.6f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-47.0f, -3.0f);
    glVertex2f(-45.0f, 0.0f);
    glVertex2f(-43.0f, -3.0f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(-47.0f, -1.0f);
    glVertex2f(-45.0f, 2.0f);
    glVertex2f(-43.0f, -1.0f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(-46.5f, 0.5f);
    glVertex2f(-45.0f, 3.0f);
    glVertex2f(-43.5f, 0.5f);
    glEnd();


    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glColor3f(0.76f, 0.60f, 0.42f);
    glVertex2f(-40.0f, -10.0f);
    glVertex2f(-40.0f, -1.0f);
    glEnd();
    if (hisNightMode)
        glColor3f(0.0f, 0.2f, 0.0f);
    else
        glColor3f(0.0f, 0.6f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-42.0f, -3.0f);
    glVertex2f(-40.0f, 0.0f);
    glVertex2f(-38.0f, -3.0f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(-42.0f, -1.0f);
    glVertex2f(-40.0f, 2.0f);
    glVertex2f(-38.0f, -1.0f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(-41.5f, 0.5f);
    glVertex2f(-40.0f, 3.0f);
    glVertex2f(-38.5f, 0.5f);
    glEnd();


    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glColor3f(0.76f, 0.60f, 0.42f);
    glVertex2f(-35.0f, -10.0f);
    glVertex2f(-35.0f, -1.0f);
    glEnd();
    if (hisNightMode)
        glColor3f(0.0f, 0.2f, 0.0f);
    else
        glColor3f(0.0f, 0.6f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-37.0f, -3.0f);
    glVertex2f(-35.0f, 0.0f);
    glVertex2f(-33.0f, -3.0f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(-37.0f, -1.0f);
    glVertex2f(-35.0f, 2.0f);
    glVertex2f(-33.0f, -1.0f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(-36.5f, 0.5f);
    glVertex2f(-35.0f, 3.0f);
    glVertex2f(-33.5f, 0.5f);
    glEnd();

    // Tree at x = -30
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glColor3f(0.76f, 0.60f, 0.42f);
    glVertex2f(-30.0f, -10.0f);
    glVertex2f(-30.0f, -1.0f);
    glEnd();
    if (hisNightMode)
        glColor3f(0.0f, 0.2f, 0.0f);
    else
        glColor3f(0.0f, 0.6f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-32.0f, -3.0f);
    glVertex2f(-30.0f, 0.0f);
    glVertex2f(-28.0f, -3.0f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(-32.0f, -1.0f);
    glVertex2f(-30.0f, 2.0f);
    glVertex2f(-28.0f, -1.0f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(-31.5f, 0.5f);
    glVertex2f(-30.0f, 3.0f);
    glVertex2f(-28.5f, 0.5f);
    glEnd();


    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glColor3f(0.76f, 0.60f, 0.42f);
    glVertex2f(-25.0f, -10.0f);
    glVertex2f(-25.0f, -1.0f);
    glEnd();
    if (hisNightMode)
        glColor3f(0.0f, 0.2f, 0.0f);
    else
        glColor3f(0.0f, 0.6f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-27.0f, -3.0f);
    glVertex2f(-25.0f, 0.0f);
    glVertex2f(-23.0f, -3.0f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(-27.0f, -1.0f);
    glVertex2f(-25.0f, 2.0f);
    glVertex2f(-23.0f, -1.0f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(-26.5f, 0.5f);
    glVertex2f(-25.0f, 3.0f);
    glVertex2f(-23.5f, 0.5f);
    glEnd();

    // Tree at x = -20
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glColor3f(0.76f, 0.60f, 0.42f);
    glVertex2f(-20.0f, -10.0f);
    glVertex2f(-20.0f, -1.0f);
    glEnd();
    if (hisNightMode)
        glColor3f(0.0f, 0.2f, 0.0f);
    else
        glColor3f(0.0f, 0.6f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-22.0f, -3.0f);
    glVertex2f(-20.0f, 0.0f);
    glVertex2f(-18.0f, -3.0f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(-22.0f, -1.0f);
    glVertex2f(-20.0f, 2.0f);
    glVertex2f(-18.0f, -1.0f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(-21.5f, 0.5f);
    glVertex2f(-20.0f, 3.0f);
    glVertex2f(-18.5f, 0.5f);
    glEnd();


    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glColor3f(0.76f, 0.60f, 0.42f);
    glVertex2f(-15.0f, -10.0f);
    glVertex2f(-15.0f, -1.0f);
    glEnd();
    if (hisNightMode)
        glColor3f(0.0f, 0.2f, 0.0f);
    else
        glColor3f(0.0f, 0.6f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-17.0f, -3.0f);
    glVertex2f(-15.0f, 0.0f);
    glVertex2f(-13.0f, -3.0f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(-17.0f, -1.0f);
    glVertex2f(-15.0f, 2.0f);
    glVertex2f(-13.0f, -1.0f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(-16.5f, 0.5f);
    glVertex2f(-15.0f, 3.0f);
    glVertex2f(-13.5f, 0.5f);
    glEnd();
}

void cCircle(float radius, float xc, float yc, float r, float g, float b)
{
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
    {
        glColor3ub(r,g,b);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float rr=radius;
        float x = rr * cos(A);
        float y = rr * sin(A);
        glVertex2f(x+xc,y+yc);
    }
    glEnd();
}

void drawSun() {

    GLfloat x = 45.0f;
    GLfloat y = 37.0f;
    GLfloat radius = 2.0f;
    int triangleAmount = 100;
    GLfloat twicePi = 2.0f * PI;
    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x, y);
        for (int i = 0; i <= triangleAmount; i++) {
            glVertex2f(
                x + (radius * cos(i * twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();
}
void seaTowfiq()
{
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f, 1.0f);
    glVertex2f(-50, 40);
    glVertex2f(-50, -40);
    glVertex2f(50, -40);
    glVertex2f(50, 40);
    glEnd();
}
void skyMorningTowfiq(){
    glBegin(GL_POLYGON);
    glColor3ub(216,232,240);
    glVertex2f(-50, 40);
    glColor3ub(204,228,240);
    glVertex2f(50, 40);
    glColor3ub(192,224,240);
    glVertex2f(50, 33.1);
    glColor3ub(125,193,227);
    glVertex2f(-50, 32.8);
    glEnd();
}
void treeTowfiq()
{
    glLineWidth(10.0f);
	glBegin(GL_LINE_STRIP);
    glColor3f(0.76f, 0.60f, 0.42f);
    glVertex2f(-43.98, 21.81);
    glVertex2f(-44.01, 32.24);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.8f, 0.0f);
    glVertex2f(-44, 33.24);
    glVertex2f(-46.39, 31.19);
    glVertex2f(-41.62, 31.19);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.8f, 0.0f);
    glVertex2f(-44, 31.83);
    glVertex2f(-46.58, 29.19);
    glVertex2f(-41.46, 29.19);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.8f, 0.0f);
    glVertex2f(-44, 29.78);
    glVertex2f(-46.79, 27.21);
    glVertex2f(-41.2, 27.21);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.8f, 0.0f);
    glVertex2f(-44, 27.78);
    glVertex2f(-47.01, 24.38);
    glVertex2f(-40.99, 24.38);
    glEnd();
glLineWidth(10.0f);
glBegin(GL_LINE_STRIP);
glColor3f(0.76f, 0.60f, 0.42f);
glVertex2f(43.98 - 78.09, 21.81 - 0.35);
glVertex2f(44.01 - 78.09, 32.24 - 0.35);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f(0.0f, 0.8f, 0.0f);
glVertex2f(44 - 78.09, 33.24 - 0.35);
glVertex2f(46.39 - 78.09, 31.19 - 0.35);
glVertex2f(41.62 - 78.09, 31.19 - 0.35);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f(0.0f, 0.8f, 0.0f);
glVertex2f(44 - 78.09, 31.83 - 0.35);
glVertex2f(46.58 - 78.09, 29.19 - 0.35);
glVertex2f(41.46 - 78.09, 29.19 - 0.35);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f(0.0f, 0.8f, 0.0f);
glVertex2f(44 - 78.09, 29.78 - 0.35);
glVertex2f(46.79 - 78.09, 27.21 - 0.35);
glVertex2f(41.2 - 78.09, 27.21 - 0.35);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f(0.0f, 0.8f, 0.0f);
glVertex2f(44 - 78.09, 27.78 - 0.35);
glVertex2f(47.01 - 78.09, 24.38 - 0.35);
glVertex2f(40.99 - 78.09, 24.38 - 0.35);
glEnd();
//tree03
glLineWidth(10.0f);
glBegin(GL_LINE_STRIP);
glColor3f(0.76f, 0.60f, 0.42f); // Brown
glVertex2f(43.98 - 82.93,21.54);
glVertex2f(44.01 - 82.93, 32.24 - 3.27);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f(0.0f, 0.8f, 0.0f);
glVertex2f(44 - 82.93, 33.24 - 3.27);
glVertex2f(46.39 - 82.93, 31.19 - 3.27);
glVertex2f(41.62 - 82.93, 31.19 - 3.27);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f(0.0f, 0.8f, 0.0f);
glVertex2f(44 - 82.93, 31.83 - 3.27);
glVertex2f(46.58 - 82.93, 29.19 - 3.27);
glVertex2f(41.46 - 82.93, 29.19 - 3.27);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f(0.0f, 0.8f, 0.0f);
glVertex2f(44 - 82.93, 29.78 - 3.27);
glVertex2f(46.79 - 82.93, 27.21 - 3.27);
glVertex2f(41.2 - 82.93, 27.21 - 3.27);
glEnd();
//tree4
float dx = 10.97;
float dy = 3.01;
glLineWidth(10.0f);
glBegin(GL_LINE_STRIP);
glColor3f(0.76f, 0.60f, 0.42f); // Brown
glVertex2f(43.98 - 82.93 + dx, 21.54 + dy);
glVertex2f(44.01 - 82.93 + dx, 32.24 - 3.27 + dy);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f(0.0f, 0.8f, 0.0f);
glVertex2f(44 - 82.93 + dx, 33.24 - 3.27 + dy);
glVertex2f(46.39 - 82.93 + dx, 31.19 - 3.27 + dy);
glVertex2f(41.62 - 82.93 + dx, 31.19 - 3.27 + dy);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f(0.0f, 0.8f, 0.0f);
glVertex2f(44 - 82.93 + dx, 31.83 - 3.27 + dy);
glVertex2f(46.58 - 82.93 + dx, 29.19 - 3.27 + dy);
glVertex2f(41.46 - 82.93 + dx, 29.19 - 3.27 + dy);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f(0.0f, 0.8f, 0.0f);
glVertex2f(44 - 82.93 + dx, 29.78 - 3.27 + dy);
glVertex2f(46.79 - 82.93 + dx, 27.21 - 3.27 + dy);
glVertex2f(41.2 - 82.93 + dx, 27.21 - 3.27 + dy);
glEnd();
//tree05
glLineWidth(10.0f);
glBegin(GL_LINE_STRIP);
glColor3f(0.76f, 0.60f, 0.42f);  // Brown trunk
glVertex2f(-43.98 + 20.83, 20.78);
glVertex2f(-44.01 + 20.83, 32.24 - 2.03);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f(0.0f, 0.8f, 0.0f);  // Bright Green
glVertex2f(-44 + 20.83, 33.24 - 2.03);
glVertex2f(-46.39 + 20.83, 31.19 - 2.03);
glVertex2f(-41.62 + 20.83, 31.19 - 2.03);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f(0.0f, 0.8f, 0.0f);
glVertex2f(-44 + 20.83, 31.83 - 2.03);
glVertex2f(-46.58 + 20.83, 29.19 - 2.03);
glVertex2f(-41.46 + 20.83, 29.19 - 2.03);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f(0.0f, 0.8f, 0.0f);
glVertex2f(-44 + 20.83, 29.78 - 2.03);
glVertex2f(-46.79 + 20.83, 27.21 - 2.03);
glVertex2f(-41.2 + 20.83, 27.21 - 2.03);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f(0.0f, 0.8f, 0.0f);
glVertex2f(-44 + 20.83, 27.78 - 2.03);
glVertex2f(-47.01 + 20.83, 24.38 - 2.03);
glVertex2f(-40.99 + 20.83, 24.38 - 2.03);
glEnd();
glLineWidth(10.0f);
glBegin(GL_LINE_STRIP);
glColor3f(0.76f, 0.60f, 0.42f);
glVertex2f(-43.98 + 27, 21.81 - 1);
glVertex2f(-44.01 + 27, 32.24 - 1);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f(0.0f, 0.8f, 0.0f);
glVertex2f(-44 + 27, 33.24 - 1);
glVertex2f(-46.39 + 27, 31.19 - 1);
glVertex2f(-41.62 + 27, 31.19 - 1);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f(0.0f, 0.8f, 0.0f);
glVertex2f(-44 + 27, 31.83 - 1);
glVertex2f(-46.58 + 27, 29.19 - 1);
glVertex2f(-41.46 + 27, 29.19 - 1);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f(0.0f, 0.8f, 0.0f);
glVertex2f(-44 + 27, 29.78 - 1);
glVertex2f(-46.79 + 27, 27.21 - 1);
glVertex2f(-41.2 + 27, 27.21 - 1);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f(0.0f, 0.8f, 0.0f);
glVertex2f(-44 + 27, 27.78 - 1);
glVertex2f(-47.01 + 27, 24.38 - 1);
glVertex2f(-40.99 + 27, 24.38 - 1);
glEnd();
}
void drawCoconutTree(float baseX, float baseY) {

   glLineWidth(10.0f);
   glColor3f(0.76f, 0.60f, 0.42f);
   glBegin(GL_LINE_STRIP);
   glVertex2f(baseX, baseY);
   glVertex2f(baseX, baseY + 8.0f);
   glEnd();
   glColor3f(0.0f, 0.8f, 0.0f);
   glBegin(GL_TRIANGLES);
        glVertex2f(baseX, baseY + 8.5f);
        glVertex2f(baseX - 3.0f, baseY + 12.0f);
        glVertex2f(baseX + 3.0f, baseY + 12.0f);
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(baseX, baseY + 8.0f);
        glVertex2f(baseX - 3.5f, baseY + 10.5f);
        glVertex2f(baseX - 1.0f, baseY + 11.5f);
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(baseX, baseY + 8.0f);
        glVertex2f(baseX + 3.5f, baseY + 10.5f);
        glVertex2f(baseX + 1.0f, baseY + 11.5f);
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(baseX, baseY + 7.5f);
        glVertex2f(baseX - 2.5f, baseY + 9.0f);
        glVertex2f(baseX - 0.5f, baseY + 10.0f);
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(baseX, baseY + 7.5f);
        glVertex2f(baseX + 2.5f, baseY + 9.0f);
        glVertex2f(baseX + 0.5f, baseY + 10.0f);
    glEnd();
    glColor3f(0.4f, 0.26f, 0.13f);
    float radius = 0.3f;
    for (int i = 0; i < 3; i++) {
        float centerX = baseX + (i - 1) * 0.8f;
        float centerY = baseY + 9.5f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(centerX, centerY);
            for (int angle = 0; angle <= 360; angle += 30) {
                float rad = angle * 3.14159f / 180.0f;
                glVertex2f(centerX + cos(rad) * radius, centerY + sin(rad) * radius);
            }
        glEnd();
    }
}
void drawCoconutTree1(float baseX, float baseY) {
   glLineWidth(10.0f);
   glColor3f(0.76f, 0.60f, 0.42f);
    glBegin(GL_LINE_STRIP);
        glVertex2f(baseX, baseY);
        glVertex2f(baseX, baseY + 8.0f);
    glEnd();
    glColor3f(0.0f, 0.8f, 0.0f);  // Bright green leaves
    glBegin(GL_TRIANGLES);
        glVertex2f(baseX, baseY + 8.5f);
        glVertex2f(baseX - 3.0f, baseY + 12.0f);
        glVertex2f(baseX + 3.0f, baseY + 12.0f);
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(baseX, baseY + 8.0f);
        glVertex2f(baseX - 3.5f, baseY + 10.5f);
        glVertex2f(baseX - 1.0f, baseY + 11.5f);
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(baseX, baseY + 8.0f);
        glVertex2f(baseX + 3.5f, baseY + 10.5f);
        glVertex2f(baseX + 1.0f, baseY + 11.5f);
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(baseX, baseY + 7.5f);
        glVertex2f(baseX - 2.5f, baseY + 9.0f);
        glVertex2f(baseX - 0.5f, baseY + 10.0f);
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(baseX, baseY + 7.5f);
        glVertex2f(baseX + 2.5f, baseY + 9.0f);
        glVertex2f(baseX + 0.5f, baseY + 10.0f);
    glEnd();
    glColor3f(0.4f, 0.26f, 0.13f);
    float radius = 0.3f;
    for (int i = 0; i < 3; i++) {
        float centerX = baseX + (i - 1) * 0.8f;
        float centerY = baseY + 9.5f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(centerX, centerY);
            for (int angle = 0; angle <= 360; angle += 30) {
                float rad = angle * 3.14159f / 180.0f;
                glVertex2f(centerX + cos(rad) * radius, centerY + sin(rad) * radius);
            }
        glEnd();
    }
}
void drawCoconutTree2(float baseX, float baseY) {
   glLineWidth(10.0f);
   glColor3f(0.76f, 0.60f, 0.42f);
    glBegin(GL_LINE_STRIP);
        glVertex2f(baseX, baseY);
        glVertex2f(baseX, baseY + 8.0f);
    glEnd();
   glColor3f(0.0f, 0.8f, 0.0f);  // Bright green leaves
   glBegin(GL_TRIANGLES);
        glVertex2f(baseX, baseY + 8.5f);
        glVertex2f(baseX - 3.0f, baseY + 12.0f);
        glVertex2f(baseX + 3.0f, baseY + 12.0f);
    glEnd();
glBegin(GL_TRIANGLES);
        glVertex2f(baseX, baseY + 8.0f);
        glVertex2f(baseX - 3.5f, baseY + 10.5f);
        glVertex2f(baseX - 1.0f, baseY + 11.5f);
    glEnd();
        glBegin(GL_TRIANGLES);
        glVertex2f(baseX, baseY + 8.0f);
        glVertex2f(baseX + 3.5f, baseY + 10.5f);
        glVertex2f(baseX + 1.0f, baseY + 11.5f);
    glEnd();
glBegin(GL_TRIANGLES);
        glVertex2f(baseX, baseY + 7.5f);
        glVertex2f(baseX - 2.5f, baseY + 9.0f);
        glVertex2f(baseX - 0.5f, baseY + 10.0f);
    glEnd();
glBegin(GL_TRIANGLES);
        glVertex2f(baseX, baseY + 7.5f);
        glVertex2f(baseX + 2.5f, baseY + 9.0f);
        glVertex2f(baseX + 0.5f, baseY + 10.0f);
    glEnd();
glColor3f(0.4f, 0.26f, 0.13f);
float radius = 0.3f;
    for (int i = 0; i < 3; i++) {
        float centerX = baseX + (i - 1) * 0.8f;
        float centerY = baseY + 9.5f;
glBegin(GL_TRIANGLE_FAN);
            glVertex2f(centerX, centerY);
            for (int angle = 0; angle <= 360; angle += 30) {
                float rad = angle * 3.14159f / 180.0f;
                glVertex2f(centerX + cos(rad) * radius, centerY + sin(rad) * radius);
            }
        glEnd();
    }
}
void drawBotTree(float baseX, float baseY) {
glLineWidth(6.0f);
     glColor3f(0.76f, 0.60f, 0.42f);
    glBegin(GL_LINES);
        glVertex2f(baseX, baseY);
        glVertex2f(baseX, baseY + 5.0f);
    glEnd();
glColor3f(0.0f, 0.8f, 0.0f); // Green
glBegin(GL_TRIANGLES);
        glVertex2f(baseX, baseY + 6.5f);
        glVertex2f(baseX - 2.0f, baseY + 5.0f);
        glVertex2f(baseX + 2.0f, baseY + 5.0f);
    glEnd();
glBegin(GL_TRIANGLES);
        glVertex2f(baseX, baseY + 5.8f);
        glVertex2f(baseX - 2.2f, baseY + 4.3f);
        glVertex2f(baseX + 2.2f, baseY + 4.3f);
    glEnd();
glBegin(GL_TRIANGLES);
        glVertex2f(baseX, baseY + 5.0f);
        glVertex2f(baseX - 2.5f, baseY + 3.0f);
        glVertex2f(baseX + 2.5f, baseY + 3.0f);
    glEnd();
}
void drawBotTree1(float baseX, float baseY) {
glLineWidth(6.0f);
     glColor3f(0.76f, 0.60f, 0.42f); // Brown
    glBegin(GL_LINES);
        glVertex2f(baseX, baseY);
        glVertex2f(baseX, baseY + 5.0f); // Height of trunk
    glEnd();
glColor3f(0.0f, 0.8f, 0.0f); // Green
glBegin(GL_TRIANGLES);
        glVertex2f(baseX, baseY + 6.5f);
        glVertex2f(baseX - 2.0f, baseY + 5.0f);
        glVertex2f(baseX + 2.0f, baseY + 5.0f);
    glEnd();
glBegin(GL_TRIANGLES);
        glVertex2f(baseX, baseY + 5.8f);
        glVertex2f(baseX - 2.2f, baseY + 4.3f);
        glVertex2f(baseX + 2.2f, baseY + 4.3f);
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(baseX, baseY + 5.0f);
        glVertex2f(baseX - 2.5f, baseY + 3.0f);
        glVertex2f(baseX + 2.5f, baseY + 3.0f);
    glEnd();
}
void drawBotTree2(float baseX, float baseY) {
    glLineWidth(6.0f);
     glColor3f(0.76f, 0.60f, 0.42f); // Brown
    glBegin(GL_LINES);
        glVertex2f(baseX, baseY);
        glVertex2f(baseX, baseY + 5.0f); // Height of trunk
    glEnd();
    glColor3f(0.0f, 0.8f, 0.0f); // Green
    glBegin(GL_TRIANGLES);
        glVertex2f(baseX, baseY + 6.5f);
        glVertex2f(baseX - 2.0f, baseY + 5.0f);
        glVertex2f(baseX + 2.0f, baseY + 5.0f);
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(baseX, baseY + 5.8f);
        glVertex2f(baseX - 2.2f, baseY + 4.3f);
        glVertex2f(baseX + 2.2f, baseY + 4.3f);
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(baseX, baseY + 5.0f);
        glVertex2f(baseX - 2.5f, baseY + 3.0f);
        glVertex2f(baseX + 2.5f, baseY + 3.0f);
    glEnd();
}
void drawBotTree3(float baseX, float baseY) {
    glLineWidth(6.0f);
     glColor3f(0.76f, 0.60f, 0.42f); // Brown
    glBegin(GL_LINES);
        glVertex2f(baseX, baseY);
        glVertex2f(baseX, baseY + 5.0f); // Height of trunk
    glEnd();
    glColor3f(0.0f, 0.8f, 0.0f); // Green
    glBegin(GL_TRIANGLES);
        glVertex2f(baseX, baseY + 6.5f);
        glVertex2f(baseX - 2.0f, baseY + 5.0f);
        glVertex2f(baseX + 2.0f, baseY + 5.0f);
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(baseX, baseY + 5.8f);
        glVertex2f(baseX - 2.2f, baseY + 4.3f);
        glVertex2f(baseX + 2.2f, baseY + 4.3f);
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(baseX, baseY + 5.0f);
        glVertex2f(baseX - 2.5f, baseY + 3.0f);
        glVertex2f(baseX + 2.5f, baseY + 3.0f);
    glEnd();
}
void drawBotTree4(float baseX, float baseY) {

    glLineWidth(6.0f);
     glColor3f(0.76f, 0.60f, 0.42f); // Brown
    glBegin(GL_LINES);
        glVertex2f(baseX, baseY);
        glVertex2f(baseX, baseY + 5.0f); // Height of trunk
    glEnd();
    glColor3f(0.0f, 0.8f, 0.0f); // Green
    glBegin(GL_TRIANGLES);
        glVertex2f(baseX, baseY + 6.5f);
        glVertex2f(baseX - 2.0f, baseY + 5.0f);
        glVertex2f(baseX + 2.0f, baseY + 5.0f);
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(baseX, baseY + 5.8f);
        glVertex2f(baseX - 2.2f, baseY + 4.3f);
        glVertex2f(baseX + 2.2f, baseY + 4.3f);
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(baseX, baseY + 5.0f);
        glVertex2f(baseX - 2.5f, baseY + 3.0f);
        glVertex2f(baseX + 2.5f, baseY + 3.0f);
    glEnd();
}

void drawBotTree5(float baseX, float baseY) {

    glLineWidth(6.0f);
     glColor3f(0.76f, 0.60f, 0.42f); // Brown
    glBegin(GL_LINES);
        glVertex2f(baseX, baseY);
        glVertex2f(baseX, baseY + 5.0f);
    glEnd();
glColor3f(0.0f, 0.8f, 0.0f); // Green
    glBegin(GL_TRIANGLES);
        glVertex2f(baseX, baseY + 6.5f);
        glVertex2f(baseX - 2.0f, baseY + 5.0f);
        glVertex2f(baseX + 2.0f, baseY + 5.0f);
    glEnd();
glBegin(GL_TRIANGLES);
        glVertex2f(baseX, baseY + 5.8f);
        glVertex2f(baseX - 2.2f, baseY + 4.3f);
        glVertex2f(baseX + 2.2f, baseY + 4.3f);
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex2f(baseX, baseY + 5.0f);
        glVertex2f(baseX - 2.5f, baseY + 3.0f);
        glVertex2f(baseX + 2.5f, baseY + 3.0f);
    glEnd();
}
void shipTowfiq(){
    glPushMatrix();
    glTranslatef(moveShipX, moveShipY, 0.0f);
    glBegin(GL_POLYGON);
	glColor3f(0.831f, 0.333f, 0.141f);
    glVertex2f(-30.75, -11.53);
	glVertex2f(-16.57, -30.32);
	glVertex2f(48.17, -12.82);
	glVertex2f(48.12, 5.22);
	glVertex2f(40.02, 1.92);
	glVertex2f(36.27, 0.92);
	glVertex2f(-19.2, -13.94);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-30.75, -11.53);
    glVertex2f(-22.69, -5.21);
    glVertex2f(47.87, 14.35);
    glVertex2f(48.11, 9.73);
    glVertex2f(48.12, 5.22);
	glVertex2f(40.02, 1.92);
	glVertex2f(-19.2,-13.94);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-19.2, -13.94);
    glVertex2f(-9.31, 3.38);
    glVertex2f(10, 8.54);
	glVertex2f(9.61, -6.22);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-22.69, -5.21);
    glVertex2f(-15.27, 10.65);
    glVertex2f(-9.31, 3.38);
	glVertex2f(-19.2, -13.94);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.6f, 1.0f, 0.6f);  // Mint green
    glVertex2f(-15.27, 10.65);
    glVertex2f(-9.31, 3.38);
    glVertex2f(10, 8.54);
	glVertex2f(4.03, 14.95);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);  // White color
    glVertex2f(27.84, 9.01);
    glVertex2f(27.8, 18.95);
    glVertex2f(36.53, 16.33);
	glVertex2f(36.27, 0.92);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);  // Black color
    glVertex2f(27.8, 18.95);
    glVertex2f(39.87, 22.29);
    glVertex2f(44.96, 19.09);
	glVertex2f(36.53, 16.33);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);  // Yellow color
    glVertex2f(36.53, 16.33);
    glVertex2f(44.96, 19.09);
    glVertex2f(47.87, 14.35);
     glVertex2f(48.11, 9.73);
	glVertex2f(48.12, 5.22);
	glVertex2f(40.02, 1.92);
	glVertex2f(36.27, 0.92);
    glEnd();
	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 1.0f);  // Blue color
    glVertex2f(12.59, 4.72);
    glVertex2f(23.95, 7.92);
    glVertex2f(27.12, -1.53);
     glVertex2f(15.28, -4.7);
    glEnd();
	glLineWidth(5.0f);
    glBegin(GL_LINE_STRIP);
    glColor3f(1.0f, 1.0f, 1.0f);  // White color
    glVertex2f(-8.22, 10.09);
    glVertex2f(0, 12.37);
    glEnd();
	glLineWidth(5.0f);
	glBegin(GL_LINE_STRIP);
    glColor3f(1.0f, 1.0f, 1.0f);  // White color
    glVertex2f(-6.1, 6.18);
    glVertex2f(1.56, 8.14);
    glEnd();
	glLineWidth(5.0f);
	glBegin(GL_LINE_STRIP);
    glColor3f(1.0f, 1.0f, 1.0f);  // White color
    glVertex2f(-3.65, 11.36);
    glVertex2f(-1.81, 7.28);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-13.39, -10.6);
    glVertex2f(-10, -10);
    glVertex2f(-10.45, -7.58);
     glVertex2f(-13.54, -8.32);
    glEnd();
    glBegin(GL_QUADS);
     glColor3f(0.0f, 0.0f, 0.0f);
     glVertex2f(-6.54, -9.35);
    glVertex2f(-6.76, -7.07);
    glVertex2f(-3.89, -6.4);
     glVertex2f(-3.52, -8.76);
    glEnd();
   glBegin(GL_QUADS);
     glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.35, -7.95);
    glVertex2f(-0.5, -5.96);
    glVertex2f(1.93, -5.37);
     glVertex2f(2.45, -7.36);
    glEnd();
   glBegin(GL_QUADS);
     glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(5.25, -6.55);
    glVertex2f(4.41, -4.34);
    glVertex2f(7.75, -3.53);
     glVertex2f(8.41, -5.74);
    glEnd();
   glBegin(GL_QUADS);
     glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(9.61, -6.22);
    glVertex2f(9.66, -4.02);
    glVertex2f(36.3, 3);
     glVertex2f(36.27, 0.92);
    glEnd();
   glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);//yellow
   glVertex2f(-15.4, -7.32);
    glVertex2f(-12.14, -1.65);
    glVertex2f(9.84, 2.42);
     glVertex2f(9.71, -2.19);
    glEnd();
   glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
   glVertex2f(-11.86, -5.73);
    glVertex2f(-12.14, -3.97);
    glVertex2f(-9.56, -3.31);
     glVertex2f(-9.22, -5.09);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
  glVertex2f(-11.92, -5.66);
    glVertex2f(-12.14, -3.97);
    glVertex2f(-9.88, -3.97);
     glVertex2f(-9.61, -5.2);
    glEnd();
   glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
   glVertex2f(-6.83, -4.43);
    glVertex2f(-4.6, -3.97);
    glVertex2f(-4.98, -2.43);
     glVertex2f(-6.99, -2.89);
    glEnd();
   glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
   glVertex2f(-1.17, -3.43);
    glVertex2f(-1.44, -2.04);
    glVertex2f(0.65, -1.46);
     glVertex2f(1.03, -2.93);
    glEnd();
   glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
   glVertex2f(4.96, -2.23);
    glVertex2f(4.58, -0.69);
    glVertex2f(6.81, -0.11);
     glVertex2f(7.2, -1.58);
    glEnd();
   glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 0.0f);
   glVertex2f(-12.14, -1.65);
    glVertex2f(9.84, 2.42);
    glVertex2f(10, 8.54);
     glVertex2f(-9.22, 3.42);
    glEnd();
   glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 0.0f);
   glVertex2f(-12.14, -1.65);
    glVertex2f(9.84, 2.42);
    glVertex2f(10, 8.54);
     glVertex2f(-9.22, 3.42);
    glEnd();
   glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
   glVertex2f(-7.67, -0.08);
    glVertex2f(-7.82, 1.72);
    glVertex2f(-5.43, 2.14);
     glVertex2f(-5.17, 0.45);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-3.33, 1);
    glVertex2f(-3.67, 2.51);
    glVertex2f(-1.22, 2.95);
     glVertex2f(-0.9, 1.52);
    glEnd();
   glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
   glVertex2f(0.54, 1.95);
    glVertex2f(0.27, 3.37);
    glVertex2f(2.02, 3.74);
     glVertex2f(2.46, 2.49);
    glEnd();
   glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(4.15, 2.91);
    glVertex2f(4.01, 4.15);
    glVertex2f(6.01, 4.56);
     glVertex2f(6.14, 3.35);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(7.49, 3.73);
    glVertex2f(7.25, 4.8);
    glVertex2f(8.94, 5.32);
     glVertex2f(9.14, 4.35);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-16.78, 4.06);
    glVertex2f(-15.24, 5.83);
    glVertex2f(-11.63, 1.77);
     glVertex2f(-13.03, 0.15);
    glEnd();
  glLineWidth(5.0f);
 glBegin(GL_LINE_STRIP);
  glColor3f(1.0f, 1.0f, 1.0f);  // White color
   glVertex2f(-13.53, 3.92);
    glVertex2f(-14.98, 2.18);
  glEnd();
glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
  glVertex2f(-18.16, 0.92);
    glVertex2f(-16.87, -0.5);
    glVertex2f(-18.33, -2.13);
     glVertex2f(-19.58, -0.81);
    glEnd();
   glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
  glVertex2f(-17.4, -3.72);
    glVertex2f(-15.68, -1.73);
    glVertex2f(-14.43, -3.46);
     glVertex2f(-16.2, -5.25);
    glEnd();
  glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
   glVertex2f(11.33, -5.01);
    glVertex2f(11.15, -4.28);
    glVertex2f(12, -4);
     glVertex2f(12.15, -4.72);
    glEnd();
  glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
  glVertex2f(13.41, -4.52);
    glVertex2f(13.28, -3.81);
    glVertex2f(14.01, -3.56);
     glVertex2f(14.18, -4.27);
    glEnd();
  glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
 glVertex2f(16.47, -3.81);
    glVertex2f(16.27, -3.09);
    glVertex2f(17.4, -2.71);
     glVertex2f(17.58, -3.46);
    glEnd();
  glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
  glVertex2f(14.74, -4.18);
    glVertex2f(14.52, -3.39);
    glVertex2f(15.73, -3.02);
     glVertex2f(15.96, -3.81);
    glEnd();
  glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
   glVertex2f(16.43, -3.71);
    glVertex2f(16.18, -2.94);
    glVertex2f(17.31, -2.55);
     glVertex2f(17.54, -3.36);
    glEnd();
  glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
  glVertex2f(18.74, -3.12);
    glVertex2f(18.47, -2.35);
    glVertex2f(19.53, -2.06);
     glVertex2f(19.78, -2.83);
    glEnd();
  glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
 glVertex2f(20.24, -2.72);
    glVertex2f(20, -2);
    glVertex2f(20.9, -1.7);
     glVertex2f(21.14, -2.43);
    glEnd();
 glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
 glVertex2f(21.51, -2.48);
    glVertex2f(21.24, -1.67);
    glVertex2f(22.14, -1.31);
     glVertex2f(22.44, -2.15);
    glEnd();
  glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
 glVertex2f(23.54, -1.95);
     glVertex2f(23.26, -1.11);
    glVertex2f(24.21, -1.11);
     glVertex2f(24.52, -1.66);
    glEnd();
 glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
  glVertex2f(25.49, -1.44);
    glVertex2f(25.2, -0.53);
    glVertex2f(26.13, -0.22);
     glVertex2f(26.44, -1.13);
    glEnd();
glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(27.57, -0.9);
    glVertex2f(27.41, 0);
    glVertex2f(35.5, 2.19);
     glVertex2f(35.55, 1.22);
    glEnd();
 glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(30.52, 5.09);
    glVertex2f(30.52, 12.54);
    glVertex2f(33.23, 11.39);
     glVertex2f(32.96, 4.34);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(38.13, 14.29);
    glVertex2f(44.9, 16.1);
    glVertex2f(45.11, 12.69);
     glVertex2f(38.23, 10.77);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(38.66, 4.9);
    glVertex2f(38.55, 8.1);
    glVertex2f(45, 10);
     glVertex2f(45.43, 7.03);
    glEnd();
glLineWidth(5.0f);
 glBegin(GL_LINE_STRIP);
  glColor3f(1.0f, 1.0f, 1.0f);  // White color
    glVertex2f(41.5, 15.19);
    glVertex2f(41.92, 11.8);
    glEnd();
    glLineWidth(5.0f);
 glBegin(GL_LINE_STRIP);
  glColor3f(1.0f, 1.0f, 1.0f);  // White color
      glVertex2f(41.99, 9.11);
    glVertex2f(42.3, 6.05);
glEnd();
glLineWidth(5.0f);
 glBegin(GL_LINE_STRIP);
  glColor3f(1.0f, 1.0f, 1.0f);  // White color
    glVertex2f(29.18, 0.48);
    glVertex2f(29.35, -0.43);
    glEnd();
    glLineWidth(5.0f);
 glBegin(GL_LINE_STRIP);
  glColor3f(1.0f, 1.0f, 1.0f);  // White color
    glVertex2f(32.57, 1.4);
    glVertex2f(32.74, 0.47);
    glEnd();
     glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(9.92, 5.71);
    glVertex2f(28.83, 10.83);
    glVertex2f(27.84, 8.56);
     glVertex2f(9.88, 3.56);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(11.44, 4.01);
    glVertex2f(11.14, 5.54);
    glVertex2f(12.71, 6.06);
     glVertex2f(13.08, 4.01);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(16.54, 5.2);
    glVertex2f(16.38, 6.89);
    glVertex2f(17.81, 7.36);
     glVertex2f(17.99, 5.5);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(22.84, 6.95);
    glVertex2f(22.48, 8.93);
    glVertex2f(24.16, 9.43);
     glVertex2f(24.53, 7.20);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-30.75, -11.53);
    glVertex2f(-19.2, -13.94);
    glVertex2f(-18.16, -12.12);
     glVertex2f(-30.87, -9.75);
    glEnd();
     glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-30.87, -9.75);
    glVertex2f(-21.71, -3.09);
    glVertex2f(-22.69, -5.21);
     glVertex2f(-30.75, -11.53);
    glEnd();
 glBegin(GL_POLYGON);
    glColor3f(0.847f, 0.310f, 0.141f);
    glVertex2f(32.52, 18.4);
    glVertex2f(32.89, 18.1);
    glVertex2f(33.29, 17.99);
     glVertex2f(34, 18);
     glVertex2f(34.57, 18.1);
    glVertex2f(35.1, 18.17);
    glVertex2f(35.68, 18.52);
     glVertex2f(35.68, 25.74);
     glVertex2f(35, 25);
    glVertex2f(33.81, 24.49);
    glVertex2f(32.89, 24.73);
     glVertex2f(32.45,25.66);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(32.45, 25.66);
    glVertex2f(33.13, 26.06);
    glVertex2f(33.81, 26.18);
     glVertex2f(34.45, 26.2);
     glVertex2f(34.97, 26.2);
    glVertex2f(35.53, 26.04);
    glVertex2f(35.68, 25.74);
     glVertex2f(35, 25);
     glVertex2f(33.81, 24.49);
    glVertex2f(32.89, 24.73);
    glEnd();
   float offsetX = 6.34f;
   float offsetY = 1.50f;
glBegin(GL_POLYGON);
glColor3f(0.847f, 0.310f, 0.141f);
glVertex2f(32.52 + offsetX, 18.4 + offsetY);
glVertex2f(32.89 + offsetX, 18.1 + offsetY);
glVertex2f(33.29 + offsetX, 17.99 + offsetY);
glVertex2f(34.00 + offsetX, 18.00 + offsetY);
glVertex2f(34.57 + offsetX, 18.1 + offsetY);
glVertex2f(35.1 + offsetX, 18.17 + offsetY);
glVertex2f(35.68 + offsetX, 18.52 + offsetY);
glVertex2f(35.68 + offsetX, 25.74 + offsetY);
glVertex2f(35.00 + offsetX, 25.00 + offsetY);
glVertex2f(33.81 + offsetX, 24.49 + offsetY);
glVertex2f(32.89 + offsetX, 24.73 + offsetY);
glVertex2f(32.45 + offsetX, 25.66 + offsetY);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(32.45 + offsetX, 25.66 + offsetY);
glVertex2f(33.13 + offsetX, 26.06 + offsetY);
glVertex2f(33.81 + offsetX, 26.18 + offsetY);
glVertex2f(34.45 + offsetX, 26.20 + offsetY);
glVertex2f(34.97 + offsetX, 26.20 + offsetY);
glVertex2f(35.53 + offsetX, 26.04 + offsetY);
glVertex2f(35.68 + offsetX, 25.74 + offsetY);
glVertex2f(35.00 + offsetX, 25.00 + offsetY);
glVertex2f(33.81 + offsetX, 24.49 + offsetY);
glVertex2f(32.89 + offsetX, 24.73 + offsetY);
glEnd();
 float baseX = 33.84f;
    float baseY = 27.2f;
    glColor3f(0.5f, 0.5f, 0.5f); // Gray smoke color
glBegin(GL_POLYGON);
        glVertex2f(baseX - 1.0f, baseY + 0.3f);
        glVertex2f(baseX - 0.5f, baseY + 0.9f);
        glVertex2f(baseX + 0.2f, baseY + 0.3f);
        glVertex2f(baseX - 0.2f, baseY - 0.3f);
        glVertex2f(baseX - 0.9f, baseY - 0.3f);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex2f(baseX - 0.5f, baseY + 1.0f);
        glVertex2f(baseX + 0.3f, baseY + 1.6f);
        glVertex2f(baseX + 1.1f, baseY + 1.0f);
        glVertex2f(baseX + 0.3f, baseY + 0.4f);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex2f(baseX + 0.4f, baseY + 0.3f);
        glVertex2f(baseX + 1.1f, baseY + 1.1f);
        glVertex2f(baseX + 1.8f, baseY + 0.3f);
        glVertex2f(baseX + 1.3f, baseY - 0.5f);
        glVertex2f(baseX + 0.6f, baseY - 0.5f);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex2f(baseX + 1.0f, baseY + 1.5f);
        glVertex2f(baseX + 1.7f, baseY + 2.5f);
        glVertex2f(baseX + 2.4f, baseY + 1.5f);
        glVertex2f(baseX + 1.8f, baseY + 0.8f);
    glEnd();
    float baseR = 38.84f;
    float baseG = 27.54f;
   glColor3f(0.5f, 0.5f, 0.5f); // Gray smoke color
    glBegin(GL_POLYGON);
        glVertex2f(baseR - 1.0f, baseG + 0.3f);
        glVertex2f(baseR - 0.5f, baseG + 0.9f);
        glVertex2f(baseR + 0.2f, baseG + 0.3f);
        glVertex2f(baseR - 0.2f, baseG - 0.3f);
        glVertex2f(baseR - 0.9f, baseG - 0.3f);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex2f(baseR - 0.5f, baseG + 1.0f);
        glVertex2f(baseR + 0.3f, baseG + 1.6f);
        glVertex2f(baseR + 1.1f, baseG + 1.0f);
        glVertex2f(baseR + 0.3f, baseG + 0.4f);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex2f(baseR + 0.4f, baseG + 0.3f);
        glVertex2f(baseR + 1.1f, baseG + 1.1f);
        glVertex2f(baseR + 1.8f, baseG + 0.3f);
        glVertex2f(baseR + 1.3f, baseG - 0.5f);
        glVertex2f(baseR + 0.6f, baseG - 0.5f);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex2f(baseR + 1.0f, baseG + 1.5f);
        glVertex2f(baseR + 1.7f, baseG + 2.5f);
        glVertex2f(baseR + 2.4f, baseG + 1.5f);
        glVertex2f(baseR + 1.8f, baseG + 0.8f);
    glEnd();
glPopMatrix();
}
void updateShip(int value)
{
    if (!shipPaused)
    {
        moveShipX -= shipSpeed;
        moveShipY -= shipSpeed;
        if (moveShipX < -940 || moveShipY > +940)
        {
            moveShipX = -200;
            moveShipY = 200;
        }
        glutPostRedisplay();
    }

    glutTimerFunc(200, updateShip, 0);
}
void landTowfiq(){
    glBegin(GL_POLYGON);
    glColor3f(0.545f, 0.271f, 0.075f);
    glVertex2f(-50, 20);
    glVertex2f(-38.91, 18.04);
    glVertex2f(-29.56, 22.1);
    glVertex2f(-20, 20);
    glVertex2f(-10.02, 26.7);
    glVertex2f(0, 22.72);
    glVertex2f(10.11, 25.4);
    glVertex2f(20, 20);
    glVertex2f(23.62, 26.84);
    glVertex2f(30, 30);
    glVertex2f(40.43, 33.07);
    glColor3f(0.133f, 0.545f, 0.133f);
    glVertex2f(-50, 32.8);
    glEnd();
}
void miniship1()
{
    glPushMatrix();
    glPushMatrix();
    glTranslatef(moveMiniship1, 0, 0);
    glBegin(GL_POLYGON);
	glColor3f(0.831f, 0.333f, 0.141f);
    glVertex2f(-42.55, 8.78);
	glVertex2f(-20, 8.78);
	glVertex2f(-22.79, 6.94);
	glVertex2f(-40.14,6.94);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-36.23,8.78);
	glVertex2f(-32.02, 15.48);
	glVertex2f(-32.12,8.78 );
    glEnd();
    glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-32.12, 8.78);
	glVertex2f(-32.12, 15.48);
	glVertex2f(-30.19, 8.78);
    glEnd();
    glPopMatrix();
}
void updateMiniship1(int value)
{
    if(miniship1Started && !miniship1Paused)
    {
        moveMiniship1 -= Miniship1Speed;

        if (moveMiniship1 < -940)
        {
            moveMiniship1 = 200;
        }

        glutPostRedisplay();
    }

    glutTimerFunc(150, updateMiniship1, 0);
}
void miniship2()
{
     glPushMatrix();
    glTranslatef(moveMiniship2, 0, 0);

    glBegin(GL_POLYGON);
    glColor3f(0.831f, 0.333f, 0.141f);
    glVertex2f(17.49,-33.3);
	glVertex2f(43.76, -33.33);
	glVertex2f(40,-35);
	glVertex2f(20, -35);
    glEnd();
glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(24.35, -33.3);
	glVertex2f(29.99, -22.65);
	glVertex2f(30.11, -33.3);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(30.11, -33.3);
	glVertex2f(29.99, -22.65);
	glVertex2f(34.39, -33.3);
    glEnd();
     glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(30.11, -33.3);
	glVertex2f(29.99, -22.65);
	glVertex2f(34.39, -33.3);
    glEnd();
glPopMatrix();
}
void updateMiniship2(int value)
{
    if(miniship2Started && !miniship2Paused)
    {
        moveMiniship2 += Miniship2Speed;

        if (moveMiniship2 < -940)
        {
            moveMiniship2 = 200;
        }

        glutPostRedisplay();
    }

    glutTimerFunc(250, updateMiniship2, 0);
}
void helicopter()
{
     glPushMatrix();
    glTranslatef(moveHelicopterX, moveHelicopterY, 0.0f);
     glBegin(GL_POLYGON);
   glColor3f(1.0f, 0.0f, 0.0f);  // Pure red
    glVertex2f(-48.76, 37.28);
    glVertex2f(-49.01, 37.73);
    glVertex2f(-46.7, 37.69);
    glVertex2f(-45.15, 38.5);
    glVertex2f(-43.15, 38.48);
    glVertex2f(-42.8, 37.92);
    glVertex2f(-42.49, 37.67);
    glVertex2f(-42.39, 36.84);
    glVertex2f(-42.78, 36.42);
    glVertex2f(-43.27, 36.42);
    glVertex2f(-45.71, 36.41);
    glVertex2f(-46.06, 36.4);
    glVertex2f(-46.37, 36.55);
    glVertex2f(-46.68, 36.94);
    glVertex2f(-48.99, 36.97);
    glVertex2f(-48.76, 37.28);
    glEnd();
    glLineWidth(2.0f);
	glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 0.0f, 0.3f);  // Darker deep blue
    glVertex2f(-48.76, 36.97);
    glVertex2f(-49.72, 35.96);
    glEnd();
    glLineWidth(2.0f);
	glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 0.0f, 0.3f);  // Darker deep blue
    glVertex2f(-49.01, 37.73);
    glVertex2f(-49.74, 38.59);
    glEnd();
    glLineWidth(2.0f);
	glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 0.0f, 0.3f);  // Darker deep blue
    glVertex2f(-45.71, 36.41);
    glVertex2f(-46.25, 35.61);
    glEnd();
    glLineWidth(2.0f);
	glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 0.0f, 0.3f);  // Darker deep blue
    glVertex2f(-43.27, 36.42);
    glVertex2f(-42.85, 35.61);
    glEnd();
    glLineWidth(2.0f);
	glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 0.0f, 0.3f);
    glVertex2f(-47.29, 35.61);
    glVertex2f(-41.88, 35.61);
    glEnd();
    glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 0.0f, 0.3f);  // Darker deep blue
    glVertex2f(-47.26, 39.29);
    glVertex2f(-44.77, 39.25);
    glEnd();
    glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 0.0f, 0.3f);  // Darker deep blue
    glVertex2f(-44.77, 39.25);
    glVertex2f(-44.4, 39.27);
    glEnd();
    glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 0.0f, 0.3f);  // Darker deep blue
    glVertex2f(-44.4, 39.27);
    glVertex2f(-42.14, 39.26);
    glEnd();
    glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 0.0f, 0.3f);  // Darker deep blue
    glVertex2f(-44.77, 39.25);
    glVertex2f(-44.79, 38.49);
    glEnd();
    glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 0.0f, 0.3f);  // Darker deep blue
    glVertex2f(-44.4, 39.27);
    glVertex2f(-44.42, 38.49);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.3f);
    glVertex2f(-42.97, 38.18);
	glVertex2f(-43.8, 38.18);
	glVertex2f(-43.8, 37.49);
    glVertex2f(-42.47, 37.49);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.3f);
    glVertex2f(-45.21, 37.89);
	glVertex2f(-44.25, 37.89);
	glVertex2f(-44.25, 36.72);
    glVertex2f(-45.21, 36.72);
    glEnd();
    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.3f);
    glVertex2f(-46, 38);
	glVertex2f(-45.5, 38);
	glVertex2f(-45.5, 37.5);
    glVertex2f(-46, 37.5);
    glEnd();
    glPopMatrix();
}
void updateHelicopter(int value)
{
    if (helicopterStarted && !helicopterPaused)
    {
        moveHelicopterX += helicopterSpeedX;
        moveHelicopterY -= helicopterSpeedY;
        helicopterSpeedX += 0.05;
        helicopterSpeedY += 0.05;

        if (!helicopterStoppedOnce && moveHelicopterX >= 25.0f && moveHelicopterY <= -25.0f)
        {
            helicopterPaused = true;
            helicopterStoppedOnce = true;
        }

        if (moveHelicopterX > 1000 || moveHelicopterY < -1000)
        {
            moveHelicopterX = -800;
            moveHelicopterY = 500;
            helicopterSpeedX = 2.0;
            helicopterSpeedY = 1.0;
            helicopterStoppedOnce = false;
        }

        glutPostRedisplay();
    }

    glutTimerFunc(250, updateHelicopter, 0);
}
void drawWave() {
     glPushMatrix();
    glTranslatef(moveWave, 0, 0);
float offsetX = -45.0f;
float offsetY = -5.0f;
glColor3f(1.0f, 1.0f, 1.0f); // White wave
glBegin(GL_POLYGON);
    glVertex2f(offsetX + 0.0f,   offsetY + 0.0f);
    glVertex2f(offsetX + 1.5f,   offsetY + 1.6f);
    glVertex2f(offsetX + 3.0f,   offsetY + 0.0f);
    glVertex2f(offsetX + 4.5f,   offsetY + 1.6f);
    glVertex2f(offsetX + 6.0f,   offsetY + 0.0f);
    glVertex2f(offsetX + 7.5f,   offsetY + 1.6f);
    glVertex2f(offsetX + 9.0f,   offsetY + 0.0f);
    glVertex2f(offsetX + 10.5f,  offsetY + 1.6f);
    glVertex2f(offsetX + 12.0f,  offsetY + 0.0f);
    glVertex2f(offsetX + 13.5f,  offsetY + 1.6f);
    glVertex2f(offsetX + 15.0f,  offsetY + 0.0f);
    glVertex2f(offsetX + 15.0f,  offsetY - 1.8f);
    glVertex2f(offsetX + 0.0f,   offsetY - 1.8f);
glEnd();
float offsetX1 = -43.31f;
float offsetY1 = 11.31f;
glColor3f(1.0f, 1.0f, 1.0f);
glBegin(GL_POLYGON);
    glVertex2f(offsetX1 + 0.0f,   offsetY1 + 0.0f);
    glVertex2f(offsetX1 + 1.5f,   offsetY1 + 1.6f);
    glVertex2f(offsetX1 + 3.0f,   offsetY1 + 0.0f);
    glVertex2f(offsetX1 + 4.5f,   offsetY1 + 1.6f);
    glVertex2f(offsetX1 + 6.0f,   offsetY1 + 0.0f);
    glVertex2f(offsetX1 + 7.5f,   offsetY1 + 1.6f);
    glVertex2f(offsetX1 + 9.0f,   offsetY1 + 0.0f);
    glVertex2f(offsetX1 + 10.5f,  offsetY1 + 1.6f);
    glVertex2f(offsetX1 + 12.0f,  offsetY1 + 0.0f);
    glVertex2f(offsetX1 + 13.5f,  offsetY1 + 1.6f);
    glVertex2f(offsetX1 + 15.0f,  offsetY1 + 0.0f);
    glVertex2f(offsetX1 + 15.0f,  offsetY1 - 1.8f);
    glVertex2f(offsetX1 + 0.0f,   offsetY1 - 1.8f);
glEnd();
float offsetX2 = -43.55f;
float offsetY2 = -25.33f;
glColor3f(0.85f, 0.90f, 1.0f);
glBegin(GL_POLYGON);
    glVertex2f(offsetX2 + 0.0f,   offsetY2 + 0.0f);
    glVertex2f(offsetX2 + 1.5f,   offsetY2 + 1.6f);
    glVertex2f(offsetX2 + 3.0f,   offsetY2 + 0.0f);
    glVertex2f(offsetX2 + 4.5f,   offsetY2 + 1.6f);
    glVertex2f(offsetX2 + 6.0f,   offsetY2 + 0.0f);
    glVertex2f(offsetX2 + 7.5f,   offsetY2 + 1.6f);
    glVertex2f(offsetX2 + 9.0f,   offsetY2 + 0.0f);
    glVertex2f(offsetX2 + 10.5f,  offsetY2 + 1.6f);
    glVertex2f(offsetX2 + 12.0f,  offsetY2 + 0.0f);
    glVertex2f(offsetX2 + 13.5f,  offsetY2 + 1.6f);
    glVertex2f(offsetX2 + 15.0f,  offsetY2 + 0.0f);
    glVertex2f(offsetX2 + 15.0f,  offsetY2 - 1.8f);
    glVertex2f(offsetX2 + 0.0f,   offsetY2 - 1.8f);
glEnd();
	  glPopMatrix();
}
void updateWave(int value)
{
    if (!wavePaused)
    {
        moveWave += WaveSpeed;
        if (moveWave > 85)
        {
            moveWave = -80;
        }

        glutPostRedisplay();
    }
    glutTimerFunc(40, updateWave, 0);
}
void circleTowfiq(float radius, float xc, float yc, float r, float g, float b)
{
    glBegin(GL_POLYGON);
    for (int i = 0; i < 200; i++)
    {
        float pi = 3.1416;
        float angle = (i * 2 * pi) / 200;
        float x = radius * cos(angle);
        float y = radius * sin(angle);
        glColor3ub(r, g, b);
        glVertex2f(x + xc, y + yc);
    }
    glEnd();
}

void cloudInSkyBox()
{
     glPushMatrix();
    glTranslatef(moveCloud, 0, 0);
    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
        glVertex2f(-20.0f, 34.8f);
        glVertex2f(-22.0f, 35.6f);
        glVertex2f(-21.0f, 36.8f);
        glVertex2f(-18.0f, 37.5f);
        glVertex2f(-15.0f, 37.0f);
        glVertex2f(-14.0f, 35.5f);
        glVertex2f(-15.0f, 34.8f);
    glEnd();
    circleTowfiq(1.2f, -21.5f, 36.2f, 255, 255, 255);
    circleTowfiq(1.5f, -18.0f, 37.2f, 255, 255, 255);
    circleTowfiq(1.0f, -15.5f, 36.0f, 255, 255, 255);
     glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
        glVertex2f(20.0f, 34.8f);
        glVertex2f(18.0f, 35.6f);
        glVertex2f(19.0f, 36.8f);
        glVertex2f(22.0f, 37.5f);
        glVertex2f(25.0f, 37.0f);
        glVertex2f(26.0f, 35.5f);
        glVertex2f(25.0f, 34.8f);
    glEnd();
    circleTowfiq(1.2f, 18.5f, 36.2f, 255, 255, 255);
    circleTowfiq(1.5f, 22.0f, 37.2f, 255, 255, 255);
    circleTowfiq(1.0f, 24.5f, 36.0f, 255, 255, 255);
    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2f(-5.0f, 34.8f);
    glVertex2f(-7.0f, 35.6f);
    glVertex2f(-6.0f, 36.8f);
    glVertex2f(-3.0f, 37.5f);
    glVertex2f(0.0f, 37.0f);
    glVertex2f(1.0f, 35.5f);
    glVertex2f(0.0f, 34.8f);
    glEnd();
    circleTowfiq(1.2f, -6.5f, 36.2f, 255, 255, 255);
    circleTowfiq(1.5f, -3.0f, 37.2f, 255, 255, 255);
    circleTowfiq(1.0f, -0.5f, 36.0f, 255, 255, 255);
    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2f(-40.0f, 35.5f);
    glVertex2f(-42.0f, 36.3f);
    glVertex2f(-41.0f, 37.4f);
    glVertex2f(-38.0f, 38.0f);
    glVertex2f(-35.0f, 37.5f);
    glVertex2f(-34.0f, 36.0f);
    glVertex2f(-35.0f, 35.5f);
    glEnd();
    circleTowfiq(1.2f, -41.5f, 36.8f, 255, 255, 255);
    circleTowfiq(1.5f, -38.0f, 38.0f, 255, 255, 255);
    circleTowfiq(1.0f, -35.5f, 37.0f, 255, 255, 255);
    glPopMatrix();
}
void updateCloud(int value)
{
    if (!CloudPaused)
    {
        moveCloud += CloudSpeed;
        if (moveCloud > 85)
        {
            moveCloud = -80;
        }
        glutPostRedisplay();
    }
    glutTimerFunc(150, updateCloud, 0);
}

void displayScene2() {
    glClear(GL_COLOR_BUFFER_BIT);
    seaTowfiq();
    drawWave();
    skyMorningTowfiq();
    miniship1();
    shipTowfiq();
    landTowfiq();
    drawSun();
    cloudInSkyBox();
    treeTowfiq();
    drawCoconutTree(-8.0f, 20.0f);
    drawCoconutTree1(1.16f, 20.96f);
    drawCoconutTree1(13.15f, 21.51f);
    drawBotTree(19.2f, 30.88f);
    drawBotTree1(24.12f, 28.88f);
    drawBotTree2(29.98f, 30.88f);
    drawBotTree3(20.05f, 22.08f);
    drawBotTree4(7.83f, 22.75f);
    drawBotTree5(-2.0f, 22.75f);
    miniship2();
    helicopter();
    glFlush();
}

///////////////// Scene-3 (Hachib) Functions ////////////////////

void drawBush(float centerX, float centerY) {
    glPushMatrix();


    if (hisNightMode) {

        cCircle(2.0, centerX, centerY, 20, 40, 20);
        cCircle(1.5, centerX - 2.5f, centerY - 0.5f, 20, 40, 20);
        cCircle(1.5, centerX + 2.5f, centerY - 0.5f, 20, 40, 20);
        cCircle(1.0, centerX - 4.0f, centerY, 20, 40, 20);
        cCircle(1.0, centerX + 4.0f, centerY, 20, 40, 20);
    } else {

        cCircle(2.0, centerX, centerY, 35, 69, 35);
        cCircle(1.5, centerX - 2.5f, centerY - 0.5f, 35, 69, 35);
        cCircle(1.5, centerX + 2.5f, centerY - 0.5f, 35, 69, 35);
        cCircle(1.0, centerX - 4.0f, centerY, 35, 69, 35);
        cCircle(1.0, centerX + 4.0f, centerY, 35, 69, 35);
    }

    glPopMatrix();
}

void drawBackgroundBushes() {

    for (float x = -48.0f; x < -12.0f; x += 6.0f) {

        drawBush(x, -9.0f);
    }
}
void drawWindmillBlades(float translationX, float translationY)
{
    glPushMatrix();
    glTranslatef(-14.9f + translationX, 34.0f + translationY, 0.0f);

    if (hstartRotation)
    {
        glRotatef(hrotateAngle, 0.0f, 0.0f, 1.0f);
    }

    glTranslatef(-( -14.9f + translationX), -(34.0f + translationY), 0.0f);

    GLuint bladeR, bladeG, bladeB;
    if (hisNightMode) {
        bladeR = 80; bladeG = 80; bladeB = 80;
    } else {
        bladeR = 151; bladeG = 153; bladeB = 151;
    }

    glBegin(GL_TRIANGLES);
        glColor3ub(bladeR, bladeG, bladeB);
        glVertex2f(-14.9f + translationX, 34.0f + translationY);
        glVertex2f(-18.0f + translationX, 39.0f + translationY);
        glVertex2f(-18.7f + translationX, 38.0f + translationY);
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3ub(bladeR, bladeG, bladeB);
        glVertex2f(-14.9f + translationX, 34.0f + translationY);
        glVertex2f(-11.0f + translationX, 39.0f + translationY);
        glVertex2f(-11.5f + translationX, 39.8f + translationY);
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3ub(bladeR, bladeG, bladeB);
        glVertex2f(-14.9f + translationX, 34.0f + translationY);
        glVertex2f(-14.0f + translationX, 28.0f + translationY);
        glVertex2f(-13.2f + translationX, 29.0f + translationY);
    glEnd();

    glPopMatrix();
}

void drawWindmill(float translationX, float translationY) {

    translationY -= 30.0f;
    translationX += 10.0f;

    GLuint millR, millG, millB;
    if (hisNightMode) {
        millR = 80; millG = 80; millB = 80;
    } else {
        millR = 151; millG = 153; millB = 151;
    }


    glBegin(GL_POLYGON);
        glColor3ub(millR, millG, millB);
        glVertex2f(-15.0f + translationX, 25.0f + translationY);
        glVertex2f(-15.0f + translationX, 34.0f + translationY);
        glVertex2f(-14.7f + translationX, 34.0f + translationY);
        glVertex2f(-14.7f + translationX, 25.0f + translationY);
    glEnd();


    if (hisNightMode) {
        cCircle(0.4, -14.85f + translationX, 34.0f + translationY, 120, 120, 120);
    } else {
        cCircle(0.4, -14.85f + translationX, 34.0f + translationY, 184, 186, 184);
    }


    drawWindmillBlades(translationX, translationY);
}


void drawCustomShip() {

 glPushMatrix();
    glTranslatef(hshipX, 0.0f, 0.0f);


glBegin(GL_POLYGON);
glColor3f(0.1f, 0.1f, 0.4f);
glVertex2f(-20.0f, -29.5f);
glVertex2f(20.0f, -29.5f);
glVertex2f(18.0f, -32.5f);
glVertex2f(-18.0f, -32.5f);
glEnd();


glBegin(GL_POLYGON);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(-16.0f, -29.5f);
glVertex2f(16.0f, -29.5f);
glVertex2f(14.0f, -22.0f);
glVertex2f(-14.0f, -22.0f);
glEnd();


glBegin(GL_POLYGON);
glColor3f(0.8f, 0.8f, 0.8f);
glVertex2f(-12.0f, -22.0f);
glVertex2f(12.0f, -22.0f);
glVertex2f(10.0f, -19.5f);
glVertex2f(-10.0f, -19.5f);
glEnd();


glColor3f(0.3f, 0.6f, 0.9f);
for (float x = -13.0f; x <= 10.0f; x += 4.0f) {
    glBegin(GL_QUADS);
    glVertex2f(x, -27.0f);
    glVertex2f(x + 2.0f, -27.0f);
    glVertex2f(x + 2.0f, -24.0f);
    glVertex2f(x, -24.0f);
    glEnd();
}


glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(-3.0f, -19.5f);
glVertex2f(3.0f, -19.5f);
glVertex2f(2.5f, -16.5f);
glVertex2f(-2.5f, -16.5f);
glEnd();


glLineWidth(2.0f);
glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.0f, -16.5f);
glVertex2f(0.0f, -15.0f);
glEnd();
glPopMatrix();

}

void hdrawMiniBoat() {

glBegin(GL_POLYGON);
glColor3f(0.8f, 0.1f, 0.1f);
glVertex2f(-17.0f, -9.5f);
glVertex2f(-13.0f, -9.5f);
glVertex2f(-13.5f, -10.5f);
glVertex2f(-16.5f, -10.5f);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.9f, 0.9f, 0.9f);
glVertex2f(-16.0f, -9.5f);
glVertex2f(-14.0f, -9.5f);
glVertex2f(-14.0f, -8.7f);
glVertex2f(-16.0f, -8.7f);
glEnd();

glLineWidth(2.0f);
glBegin(GL_LINES);
glColor3f(0.3f, 0.2f, 0.1f);
glVertex2f(-15.0f, -8.7f);
glVertex2f(-15.0f, -7.5f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(-15.0f, -7.5f);
glVertex2f(-15.0f, -8.5f);
glVertex2f(-13.8f, -8.0f);
glEnd();


glBegin(GL_POLYGON);
glColor3f(0.8f, 0.1f, 0.1f);
glVertex2f(16.0f, -9.5f);
glVertex2f(20.0f, -9.5f);
glVertex2f(19.5f, -10.5f);
glVertex2f(16.5f, -10.5f);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.9f, 0.9f, 0.9f);
glVertex2f(17.0f, -9.5f);
glVertex2f(19.0f, -9.5f);
glVertex2f(19.0f, -8.7f);
glVertex2f(17.0f, -8.7f);
glEnd();

glLineWidth(2.0f);
glBegin(GL_LINES);
glColor3f(0.3f, 0.2f, 0.1f);
glVertex2f(18.0f, -8.7f);
glVertex2f(18.0f, -7.5f);
glEnd();

glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(18.0f, -7.5f);
glVertex2f(18.0f, -8.5f);
glVertex2f(19.2f, -8.0f);
glEnd();


}
void initRain() {
    for (int i = 0; i < numDrops; i++) {
        rainX[i] = rand() % 100 - 50;
        rainY[i] = rand() % 100 - 60;
    }
}
void drawRain() {
    glColor3f(0.7f, 0.7f, 1.0f);
    glLineWidth(1.0f);
    for (int i = 0; i < numDrops; i++) {
        glBegin(GL_LINES);
        glVertex2f(rainX[i], rainY[i]);
        glVertex2f(rainX[i], rainY[i] - 2.0f);
        glEnd();
    }
}
void play() {

    PlaySound("H:\\Graphics\\Final_Project\\bin\\Debug\\sea-wave-34088.wav", NULL, SND_ASYNC | SND_FILENAME | SND_LOOP);

}

void uUpdate(int value) {

    if (hshipMoving) {
        hshipX += hshipSpeed;
        if (hshipX > 75.0f) hshipX = -55.0f;
    }

    if (hstartRotation) {
        hrotateAngle += 3.0f;
        if (hrotateAngle > 360.0f) hrotateAngle -= 360.0f;
    }

    if (hcloudMoving) {
        hcloudX += hcloudSpeed;
        if (hcloudX > 100.0f) hcloudX = -100.0f;
    }
    if (isRaining) {
    for (int i = 0; i < numDrops; i++) {
        rainY[i] -= 0.5f;
        if (rainY[i] < -10.0f) {
            rainY[i] = rand() % 20 + 50;
            rainX[i] = rand() % 100 - 50;
        }
    }
}


    if (hshipMoving || hstartRotation || hcloudMoving || isRaining) {
    glutPostRedisplay();
}


    glutTimerFunc(16, uUpdate, 0);
}

void displayScene3() {
    glClear(GL_COLOR_BUFFER_BIT);
    hdrawSky();
    hdrawCloud(-30.0f + hcloudX, 30.0f, 1.2f);
    hdrawCloud(10.0f + hcloudX, 32.0f, 0.9f);
    hdrawCloud(25.0f + hcloudX, 35.0f, 1.5f);

    hdrawSun();

    hdrawMountains();
    hdrawLand();
    hdrawGrass();
    drawBackgroundBushes();

    hdrawTrees();

    drawWindmill(0.0, 0.0);
    drawWindmill(20.0, 0.0);

    hdrawSea();
    drawCustomShip();
    hdrawMiniBoat();
    initRain();
    if (isRaining) {
    drawRain();
    }

    glutSwapBuffers();
    glFlush();
}

///////////////// Scene-4 (Afsana) Functions ////////////////////


void window1_down(){
     glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color
    glVertex2f(-50, 22);
	glVertex2f(-50.0029710201784, 28.483240370098);
	glVertex2f(-45.2854889927029, 26.4547928234649);
    glVertex2f(-45.4929352560878, 20.6908023007239);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(1.0f, 1.0f, 1.0f); //white color
    glVertex2f(-50, 22);
	glVertex2f(-49.341184255044, 28.1859448813099);
	glVertex2f(-48.7784408455447, 27.9983637448101);
    glVertex2f(-49.341184255044, 21.4330239673182);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(-34.7435026074489, 17.5555511115376);
	glVertex2f(-34.6620675116259, 22.767397244211);
	glVertex2f(-29.7817039093994, 20.7793230720098);
    glVertex2f(-29.8537666966597, 15.8790535383109);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(1.0f, 1.0f, 1.0f); //white color

    glVertex2f(-32.7021629787069, 16.5691954613666);
	glVertex2f(-32.4315969155019, 21.8452336938641);
	glVertex2f(-31.9130119610256, 21.6423091464603);
    glVertex2f(-32.2512195400319, 16.3662709139629);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(-17.2343447384244, 11.9103795331202);
	glVertex2f(-17.1647208702366, 15.6236525031385);
	glVertex2f(-14.4874900307544, 14.6122361334801);
    glVertex2f(-14.5688676667097, 11.1908263153014);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(1.0f, 1.0f, 1.0f); //white color

    glVertex2f(-16.1513347454401, 11.4669367343193);
	glVertex2f(-15.933475998703, 15.2016581069559);
	glVertex2f(-15.7156172519659, 15.0304833773767);
    glVertex2f(-15.886791981545, 11.4202527171613);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(-7.399774179213, 8.924336927906);
	glVertex2f(-7.336185159268, 11.9032516782123);
	glVertex2f(-5.578955342469, 11.1887736208325);
    glVertex2f(-5.6368859957701, 8.3694818268473);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(1.0f, 1.0f, 1.0f); //white color

    glVertex2f(-6.7693563302532, 8.5790108992907);
	glVertex2f(-6.6528598508945, 11.6502058990438);
	glVertex2f(-6.4163513960248, 11.5826320547953);
    glVertex2f(-6.5257096475746, 8.5236366532274);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(-0.7303032814993, 6.8024685160725);
	glVertex2f(-0.5791530710719, 9.2880497542123);
	glVertex2f(0.6972264836486, 8.6498599768521);
    glVertex2f(0.6468430801728, 6.2818400134892);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(1.0f, 1.0f, 1.0f); //white color

    glVertex2f(-0.2206336729551, 6.484738867844);
	glVertex2f(-0.1240809767312, 9.1370173808421);
	glVertex2f(0.1393486808192, 8.9194015767787);
    glVertex2f(0.0011053779221, 6.3738693424053);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(1.8715017111088, 5.9321445312668);
	glVertex2f(1.9707293257918, 8.2342251919132);
	glVertex2f(3.0820786102418, 7.7579326414346);
    glVertex2f(3.0026965184954, 5.5550795954713);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(1.0f, 1.0f, 1.0f); //white color

    glVertex2f(2.2949664909391, 5.565949691293);
	glVertex2f(2.3513199824289, 8.1018568083321);
	glVertex2f(2.6049106941328, 8.0314149439699);
    glVertex2f(2.5062920840257, 5.4532427083135);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(4.1525609591879, 5.1583392703941);
	glVertex2f(4.2084859383009, 7.3114509662462);
	glVertex2f(5.1452293384444, 6.9059948676766);
    glVertex2f(5.1452293384444, 4.8367706404941);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(1.0f, 1.0f, 1.0f); //white color

    glVertex2f(4.5, 5);
	glVertex2f(4.5105361756655, 7.2180243722743);
	glVertex2f(4.706482153254, 7.1426605347403);
    glVertex2f(4.6612638507336, 4.9269637112394);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(6.0501971822736, 4.5360005565452);
	glVertex2f(6.1195256687774, 6.5927456561571);
	glVertex2f(6.8821390203188, 6.1998842326357);
    glVertex2f(6.9283580113214, 4.2471318627795);
    glEnd();

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f); // white
    glVertex2f(6.4245758061219, 4.2518874925768);  // x, y
    glVertex2f(6.5, 6.5); // x, y
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(7.7256356061147, 4.0622558987695);
	glVertex2f(7.841183083621, 5.8994607911194);
	glVertex2f(8.6384606784144, 5.5643731063512);
    glVertex2f(8.5460226964093, 3.7849419527544);
    glEnd();

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f); // white color
    glVertex2f(8.1227824731357, 3.7933716924831); // x, y
    glVertex2f(8.1907107398163, 5.873674859575); // x, y
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(9.2317122726255, 3.5307375022405);
	glVertex2f(9.3043925303479, 5.3073660243437);
	glVertex2f(10.1038753652943, 5.0247205776455);
    glVertex2f(10.0311951075719, 3.2561676397337);
    glEnd();

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f); // white color
    glVertex2f(9.6424440713322, 3.2516329948389); // x, y
    glVertex2f(9.6927081164447, 5.2406530657176); // x, y
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(10.5927019819185, 3.2169521168973);
	glVertex2f(10.6443281612002, 4.868989853911);
	glVertex2f(11.3670946711437, 4.5592327782209);
    glVertex2f(11.2896554022212, 2.8684754067459);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(11.8268499301413, 2.6615360865561);
	glVertex2f(11.852899306738, 4.3156715004474);
	glVertex2f(12.5, 4);
    glVertex2f(12.5, 2.5);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(12.8965966434394, 2.3362418052533);
	glVertex2f(12.9181250538499, 3.9401083808361);
	glVertex2f(13.494010032331, 3.7409705845389);
    glVertex2f(13.4832458271258, 2.1640145219692);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(14, 2);
	glVertex2f(14.0184314346862, 3.5702111474192);
	glVertex2f(14.5566416949489, 3.3789463441854);
    glVertex2f(14.5121615081503, 1.8488279183146);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(14.8769227207481, 1.6814642448338);
	glVertex2f(14.9147131434655, 3.2086965929284);
	glVertex2f(15.3946024399282, 3.0626433287876);
    glVertex2f(15.3077469844279, 1.561790838256);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(15.6722270840516, 1.4325130710312);
	glVertex2f(15.7143780982336, 2.9680143019489);
	glVertex2f(16.1780392542362, 2.8174749655844);
    glVertex2f(16.1599745338725, 1.3301463223034);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(16.4777799027985, 1.1959077017694);
	glVertex2f(16.5120403073869, 2.6091493910434);
	glVertex2f(16.9171846522317, 2.4209234207563);
    glVertex2f(16.888918449302, 1.0853453323288);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(17.2, 1);
	glVertex2f(17.1995286554247, 2.3172637786739);
	glVertex2f(17.5335070380759, 2.2027569046221);
    glVertex2f(17.538278157828, 0.9002412122825);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(17.7482074269231, 0.7857343382306);
	glVertex2f(17.7720630256839, 2.1264189885875);
	glVertex2f(18.2110060428825, 1.9546586775098);
    glVertex2f(18.1442103663523, 0.6807697036831);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(18.378284392981, 0.5640321762407);
	glVertex2f(18.3700227137565, 1.8652466541024);
	glVertex2f(18.7170132411863, 1.7537139845714);
    glVertex2f(18.7004898827372, 0.4814153839955);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(18.8646219704559, 0.4047718740864);
	glVertex2f(18.8829978874243, 1.6613333896063);
	glVertex2f(19.2284862913588, 1.5524294361922);
    glVertex2f(19.1984438214514, 0.3319540962064);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(19.4772239991694, 0.2590636840629);
	glVertex2f(19.4506216740199, 1.4362165719289);
	glVertex2f(19.7698495758141, 1.3564095964803);
    glVertex2f(19.768875972076, 0.176525134204);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(19.9537701867547, 0.0770269763049);
	glVertex2f(19.9537701867547, 1.296466998116);
	glVertex2f(20.2553984607009, 1.1671977378533);
    glVertex2f(20.2252356333063, 0.0037743954894);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(20.3548966186, -0.0694781853261);
	glVertex2f(20.3979863720209, 1.1370349104587);
	glVertex2f(20.6682766434792, 1.0704416551719);
    glVertex2f(20.6291041403693, -0.1674094431008);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(20.7925603124369, -0.2368516077047);
	glVertex2f(20.8, 1);
	glVertex2f(21.0454010143281, 0.916956665714);
    glVertex2f(21.0418398776817, -0.2867075207537);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(21.1914076168286, -0.3436857070954);
	glVertex2f(21.2163355733531, 0.8279282495551);
	glVertex2f(21.5047876417078, 0.7175330135182);
    glVertex2f(21.4620540019515, -0.4184695766688);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(21.6105327984875, -0.4671188235814);
	glVertex2f(21.6164189747625, 0.6365392279746);
	glVertex2f(21.8489229376236, 0.5482465838502);
    glVertex2f(21.8489229376236, -0.5200944100561);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(22.0026682747194, -0.5490737076494);
	glVertex2f(21.9946882036252, 0.4883355345942);
	glVertex2f(22.2380803719978, 0.3965647170111);
    glVertex2f(22.2340903364507, -0.6368544896855);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(22.3363803386579, -0.6640592775065);
	glVertex2f(22.3442849973423, 0.4373485622603);
	glVertex2f(22.6284592481541, 0.3523618704287);
    glVertex2f(22.6045567410765, -0.7418417869028);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(22.7161017741055, -0.7843351328186);
	glVertex2f(22.7187576082252, 0.3072126903932);
	glVertex2f(23, 0.2);
    glVertex2f(23.002931859037, -0.850730985812);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(23.0992058458775, -0.8975002246606);
	glVertex2f(23.0962844283458, 0.1775814270089);
	glVertex2f(23.3183121607558, 0.0724103958673);
    glVertex2f(23.3007836555655, -0.9676142454217);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(23.415817464843, -0.9696467081678);
	glVertex2f(23.4229245822509, 0.0477305053058);
	glVertex2f(23.6, 0);
    glVertex2f(23.6094960752288, -1.0304914741904);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(23.718637566668, -1.0806959844211);
	glVertex2f(23.718637566668, -0.0786915387567);
	glVertex2f(23.8898892355633, -0.1406336317614);
    glVertex2f(23.8789582779743, -1.128063467307);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(23.9922427475337, -1.1671499217164);
	glVertex2f(24, -0.2);
	glVertex2f(24.1810501967994, -0.2562367892943);
    glVertex2f(24.1678005512369, -1.2168360925758);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(24.2870473612994, -1.2565850292633);
	glVertex2f(24.2737977157369, -0.3092353715443);
	glVertex2f(24.4294810510963, -0.3489843082318);
    glVertex2f(24.4261686397057, -1.2930215545602);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(24.5610741217966, -1.3258445401582);
	glVertex2f(24.5670966879614, -0.4164370492773);
	glVertex2f(24.7357285405751, -0.4585950124307);
    glVertex2f(24.7266946913279, -1.3740250694764);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(24.8485147796609, -1.3901764969183);
	glVertex2f(24.8403021894362, -0.5004792225766);
	glVertex2f(24.9963414037053, -0.5333295834754);
    glVertex2f(24.9936038736304, -1.4285019179669);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(25.0804582369158, -1.4591124815316);
	glVertex2f(25.0729922458025, -0.5706595390422);
	glVertex2f(25.2695966784542, -0.6179441494268);
    glVertex2f(25.2671080147497, -1.493953773394);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(25.3415416837283, -1.5086595134657);
	glVertex2f(25.3415416837283, -0.6466769031054);
	glVertex2f(25.4953863490945, -0.71681197114);
    glVertex2f(25.502173613743, -1.5493831013568);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(25.5858832110746, -1.5674824737528);
	glVertex2f(25.5836207895251, -0.7733725098776);
	glVertex2f(25.7578272488367, -0.8299330486151);
    glVertex2f(25.7510399841882, -1.6217805909408);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(25.8536716526611, -1.6295962290209);
	glVertex2f(25.8536716526611, -0.8829971176852);
	glVertex2f(25.9914736924944, -0.9446995235808);
    glVertex2f(25.987360198768, -1.6912986349164);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(26.0423351995822, -1.6805224209392);
	glVertex2f(26.0523634511317, -0.948178960938);
	glVertex2f(26.2, -1);
    glVertex2f(26.2113376178302, -1.7256690950308);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(26.26280937355, -1.7571240568595);
	glVertex2f(26.266448790621, -1.0385991436811);
	glVertex2f(26.4302225588202, -1.0983895669919);
    glVertex2f(26.4302225588202, -1.8158746467214);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(26.5056104838642, -1.8366713156991);
	glVertex2f(26.5056104838642, -1.1165866523473);
	glVertex2f(26.6719838356856, -1.1659787411693);
    glVertex2f(26.6719838356856, -1.8912625717655);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(26.752570927974, -1.9120592407431);
	glVertex2f(26.7551705115962, -1.199773328258);
	glVertex2f(26.9293426142842, -1.2777608369242);
    glVertex2f(26.926743030662, -1.9744492476761);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(27, -2);
	glVertex2f(27.0073301229505, -1.3037566731463);
	glVertex2f(27.1737034747718, -1.3843437654348);
    glVertex2f(27.176303058394, -2.0654346744534);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(27.2646889015491, -2.0940300942977);
	glVertex2f(27.2620893179269, -1.3947420999236);
	glVertex2f(27.4570580895926, -1.4649308577233);
    glVertex2f(27.4518589223481, -2.1642188520974);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(27.5298464310144, -2.1798163538306);
	glVertex2f(27.5272468473922, -1.4753291922121);
	glVertex2f(27.6884210319691, -1.5377191991451);
    glVertex2f(27.6858214483469, -2.234407609897);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(27.7534106225243, -2.2526046952525);
	glVertex2f(27.7560102061466, -1.5585158681228);
	glVertex2f(27.9093856398569, -1.6131071241892);
    glVertex2f(27.9041864726124, -2.3123951185633);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(27.9515934248502, -2.3284180067074);
	glVertex2f(27.957312508819, -1.6478470144132);
	glVertex2f(28.0831323561339, -1.6821615182264);
    glVertex2f(28.0831323561339, -2.3913279303649);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(28.1420894079157, -2.4224131439462);
	glVertex2f(28.1519426260005, -1.6932750056695);
	glVertex2f(28.2504748068487, -1.7392566900653);
    glVertex2f(28.2504748068487, -2.4519727982007);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(28.2997408972728, -2.4749636403986);
	glVertex2f(28.2947818970389, -1.7546924018093);
	glVertex2f(28.4, -1.8);
    glVertex2f(28.398273078121, -2.5143765127379);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(28.4572528457067, -2.5328796082454);
	glVertex2f(28.453376095514, -1.809478425797);
	glVertex2f(28.6029324582244, -1.8721324041744);
    glVertex2f(28.6, -2.6);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(28.6591535212183, -2.6247544298162);
	glVertex2f(28.6546715314122, -1.8836918451138);
	glVertex2f(28.8496997830483, -1.9702503631593);
    glVertex2f(28.845343161868, -2.6961271253986);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(28.9129288637081, -2.712561383923);
	glVertex2f(28.9162808572718, -2.0119947291126);
	glVertex2f(29.1408644260387, -2.1024985553321);
    glVertex2f(29.1408644260387, -2.7896572358877);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(29.2425732663248, -2.8276866186847);
	glVertex2f(29.2471303565473, -2.1646299913111);
	glVertex2f(29.5023274090072, -2.2762787017623);
    glVertex2f(29.500048863896, -2.9051571524672);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(29.6003048487909, -2.9484495095809);
	glVertex2f(29.6139761194584, -2.3400779648773);
	glVertex2f(29.8, -2.4);
    glVertex2f(29.8, -3);
    glEnd();

}

void redline(){

    glBegin(GL_POLYGON);
     	glColor3f(1.0f, 0.0f, 0.0f); //red color

    glVertex2f(-49.986853670812, 31.2461579741191);
	glVertex2f(-49.9967990839383, 34.4945401144804);
	glVertex2f(30.5562058294469, -2.143603662471);
    glVertex2f(30.5207695114506, -2.4979668424338);
    glEnd();
}

void window1_up(){

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(-34, 32);
	glVertex2f(-33.6371444969284, 37.3251357781806);
	glVertex2f(-28.8342385119888, 34.3150195848545);
    glVertex2f(-29.1883698288507, 29.4235807706996);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(1.0f, 1.0f, 1.0f); //white color

    glVertex2f(-31.8369224125917, 30.6792733697223);
	glVertex2f(-31.4918239574429, 36.0036495348751);
	glVertex2f(-31.0727758333336, 35.7078508590332);
    glVertex2f(-31.4178742884824, 30.358824804227);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(-23.4733755361937, 26.4229308037265);
	glVertex2f(-23.3473983018472, 30.7901415944064);
	glVertex2f(-19.8410319458685, 28.4805589647199);
    glVertex2f(-20.0299977973883, 24.3023140255599);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(1.0f, 1.0f, 1.0f); //white color

    glVertex2f(-21.9188142946143, 25.2553901744357);
	glVertex2f(-21.6595367174928, 29.7186684663139);
	glVertex2f(-21.4372987942457, 29.4964305430669);
    glVertex2f(-21.6410168905555, 25.0331522511887);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(-16.7808413840278, 22.6564613013543);
	glVertex2f(-16.6759581550645, 26.6000707103759);
	glVertex2f(-13.9909474936029, 24.8170558179991);
    glVertex2f(-14.1587606599443, 21.1041895126969);
    glEnd();

     glBegin(GL_POLYGON);
     	glColor3f(1.0f, 1.0f, 1.0f); //white color

    glVertex2f(-15.6994704650155, 21.8288622137537);
	glVertex2f(-15.563439985892, 25.9515691819653);
	glVertex2f(-15.2737447377117, 25.660393759487);
    glVertex2f(-15.4561986208419, 21.6261356769424);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(-11.389843415312, 19.8036374735515);
	glVertex2f(-11.201053603178, 23.3277139667197);
	glVertex2f(-8.9985057949478, 21.9013020528183);
    glVertex2f(-9.1663189612892, 18.4611321428208);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(1.0f, 1.0f, 1.0f); //white color

    glVertex2f(-10.440606912458, 19.0998377587777);
	glVertex2f(-10.3545361446368, 22.8562365774449);
	glVertex2f(-10.0510476815177, 22.6965058073822);
    glVertex2f(-10.20422677024, 18.9816476876687);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(-7.1913543267145, 17.3350407700436);
	glVertex2f(-7.0768628100127, 20.795506659513);
	glVertex2f(-5.1416734999068, 19.4570007200232);
    glVertex2f(-5.2792171295947, 16.3883839923664);
    glEnd();

     glBegin(GL_POLYGON);
     	glColor3f(1.0f, 1.0f, 1.0f); //white color

    glVertex2f(-6.4504599719688, 16.9407804211319);
	glVertex2f(-6.304995618384, 20.4319249071678);
	glVertex2f(-6.1283603318881, 20.348802419405);
    glVertex2f(-6.273824685473, 16.8057063785174);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(-3.4401119302178, 15.4957039751681);
	glVertex2f(-3.3554804993799, 18.5085829129951);
	glVertex2f(-1.7982621719636, 17.4591531706059);
    glVertex2f(-1.8828936028015, 14.8186525284653);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(1.0f, 1.0f, 1.0f); //white color

    glVertex2f(-2.8592164322498, 15.0063729657515);
	glVertex2f(-2.811774963731, 18.2323928250287);
	glVertex2f(-2.6220090896559, 18.1256495208614);
    glVertex2f(-2.7168920266935, 14.8877692944545);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(-0.5216560253816, 14.2102685765732);
	glVertex2f(-0.4422534773979, 16.8305526600353);
	glVertex2f(1.0663949342925, 15.8459610650374);
    glVertex2f(0.9075898383251, 13.2733185103656);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(1.0f, 1.0f, 1.0f); //white color

    glVertex2f(0.0271656410408, 13.6532128977726);
	glVertex2f(0.059512096849, 16.5428296166439);
	glVertex2f(0.296719439443, 16.4457902492191);
    glVertex2f(0.1888979200821, 13.5238270745395);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(2.0415011760752, 12.6849044669528);
	glVertex2f(2.1130887475105, 15.1785382052839);
	glVertex2f(3.2465586285701, 14.4149374433069);
    glVertex2f(3.1272460095112, 12.0286850621289);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(1.0f, 1.0f, 1.0f); //white color

    glVertex2f(2.3863801490143, 12.3185946497597);
	glVertex2f(2.5, 15);
	glVertex2f(2.6471860817558, 14.9266539771744);
    glVertex2f(2.5997668212573, 12.2316593388459);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(4.1962399146705, 11.3214102253275);
	glVertex2f(4.2224329822316, 13.7785463224035);
	glVertex2f(5.1846643906755, 13.0426018730966);
    glVertex2f(5.1383990348835, 10.8773832220302);
    glEnd();

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f); // white color
    glVertex2f(4.5792068608877, 11.086815659727);  // x, y
    glVertex2f(4.6869948646271, 13.5874973464803);// x, y
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(6.0452000084071, 10.4332358064269);
	glVertex2f(6.126605058557, 12.6525479114853);
	glVertex2f(6.9538018609048, 12.147038754495);
    glVertex2f(6.8594702703466, 9.9890883908235);
    glEnd();

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f); // white color
    glVertex2f(6.4421577056823, 10.1602842325426);  // x, y
    glVertex2f(6.5, 12.5); // x, y
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(7.7570181727117, 9.5541940463786);
	glVertex2f(7.8125365996621, 11.5806166300689);
	glVertex2f(8.6268068616016, 11.0624446451983);
    glVertex2f(8.5527822923344, 9.1378058442505);
    glEnd();

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f); // white color
    glVertex2f(8.06759123928, 9.2834081787208);  // x, y
    glVertex2f(8.1427958148431, 11.4643408700492);  // x, y
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(9.1884974133399, 8.7558887408949);
	glVertex2f(9.2596464730789, 10.7683907163704);
	glVertex2f(10.1947484010777, 10.2601831468059);
    glVertex2f(10.1134351899474, 8.2680094741129);
    glEnd();

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f); // white color
    glVertex2f(9.6473583249892, 8.3856211268255);  // x, y
    glVertex2f(9.6917405664587, 10.6158287606658);  // x, y
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(10.6013144567293, 8.0240698407219);
	glVertex2f(10.6622993650771, 9.9450944536759);
	glVertex2f(11.4449390222065, 9.5588567008068);
    glVertex2f(11.3432975082936, 7.6683245420268);
    glEnd();

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f); // white color
    glVertex2f(10.9206468194083, 7.776390666444); // x, y
    glVertex2f(11.0373544416045, 9.8021015374204); // x, y
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(11.7905201695104, 7.4243849086358);
	glVertex2f(11.8921616834233, 9.2539321590681);
	glVertex2f(12.5020107669008, 8.79654534646);
    glVertex2f(12.441025858553, 7.0178188529842);
    glEnd();

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f); // white color
    glVertex2f(12.0877230413701, 7.2011888141914); // x, y
    glVertex2f(12.1627493699248, 9.1768821327981); // x, y
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(12.9016437890549, 6.8221076588683);
	glVertex2f(12.9641563480634, 8.5959015207348);
	glVertex2f(13.5345834490161, 8.252082446188);
    glVertex2f(13.3939301912469, 6.6267559119667);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(13.9015667379116, 6.3382289993724);
	glVertex2f(13.9072630385553, 8.0015487873291);
	glVertex2f(14.5718314469855, 7.5553385702403);
    glVertex2f(14.6098067846101, 5.9129052179771);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(14.8618249343005, 5.7722238535951);
	glVertex2f(14.8618249343005, 7.4638525295992);
	glVertex2f(15.4141934815672, 7.1531452217617);
    glVertex2f(15.4076960960915, 5.4669634557372);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(15.6735571784302, 5.2853997897499);
	glVertex2f(15.6800415950726, 6.9972857833449);
	glVertex2f(16.1469195933258, 6.7443935342911);
    glVertex2f(16.1598884266106, 5.0519607906233);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(15.6735571784302, 5.2853997897499);
	glVertex2f(15.6800415950726, 6.9972857833449);
	glVertex2f(16.1469195933258, 6.7443935342911);
    glVertex2f(16.1598884266106, 5.0519607906233);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(16.4732840342535, 4.9051235873159);
	glVertex2f(16.478643056272, 6.5932155231487);
	glVertex2f(16.8966467737163, 6.2663151800192);
    glVertex2f(16.8966467737163, 4.6842078697261);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(17.1623834027337, 4.5247658923157);
	glVertex2f(17.1623834027337, 6.1014698911521);
	glVertex2f(17.5964198967954, 5.911025307023);
    glVertex2f(17.590392118299, 4.3171467468683);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(17.8, 4.2);
	glVertex2f(17.8107697534893, 5.7398788328759);
	glVertex2f(18.1510587490036, 5.5292237404147);
    glVertex2f(18.1575404441563, 4.0481563980331);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(18.3815874136802, 3.9425291204864);
	glVertex2f(18.3705305415259, 5.3939123701173);
	glVertex2f(18.7626628483871, 5.122933515798);
    glVertex2f(18.7621773696, 3.7385386525071);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(18.8462884717968, 3.6369044040193);
	glVertex2f(18.849793101055, 5.059783882848);
	glVertex2f(19.2598347242643, 4.8740385321634);
    glVertex2f(19.2563300950061, 3.4336359070438);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(19.4746918619869, 3.2937377825408);
	glVertex2f(19.4768979936123, 4.724969214595);
	glVertex2f(19.822497903607, 4.5456072359902);
    glVertex2f(19.822497903607, 3.1282101367714);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(19.9581130581619, 3.0757139479114);
	glVertex2f(19.9537383757569, 4.4624882702953);
	glVertex2f(20.2862142385367, 4.2656275620704);
    glVertex2f(20.2862142385367, 2.8832279220916);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(20.3868319338516, 2.8263570508266);
	glVertex2f(20.3729131158859, 4.1941895978399);
	glVertex2f(20.6828079733827, 4.0251560392053);
    glVertex2f(20.6828079733827, 2.6572363146993);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(20.7710241403469, 2.6293486232074);
	glVertex2f(20.7704550037858, 3.9719417707463);
	glVertex2f(21.0584381036819, 3.8279502207983);
    glVertex2f(21.0517745189153, 2.4868799782721);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(21.2129137149619, 2.4225676670989);
	glVertex2f(21.2129137149619, 3.7252644002523);
	glVertex2f(21.4483252197592, 3.5711037513829);
    glVertex2f(21.4468512180176, 2.2750922251629);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(21.6367561097854, 2.2248465558826);
	glVertex2f(21.6330892470379, 3.4504780599012);
	glVertex2f(21.85913782593, 3.3169038996467);
    glVertex2f(21.8540003582279, 2.0993240542507);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(22.0309758700296, 2.0163282636178);
	glVertex2f(22.0309758700296, 3.1970885150067);
	glVertex2f(22.2091256623444, 3.0727979622289);
    glVertex2f(22.2008396254926, 1.8837516739882);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(22.3405723378579, 1.8155801889798);
	glVertex2f(22.3497403105611, 2.9709587024658);
	glVertex2f(22.5364241179926, 2.8852322189461);
    glVertex2f(22.5324837870827, 1.7307393432591);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(22.7081179228864, 1.660337474477);
	glVertex2f(22.7044125613715, 2.7941780980196);
	glVertex2f(22.9860200364998, 2.690427975604);
    glVertex2f(22.9823146749849, 1.5491766290316);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(23.0924101407728, 1.4772856798804);
	glVertex2f(23.0924101407728, 2.5644759867618);
	glVertex2f(23.298317395864, 2.4162227630962);
    glVertex2f(23.2900811056604, 1.3660957621311);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(23.4068866758212, 1.3155548904269);
	glVertex2f(23.4068866758212, 2.3338598610597);
	glVertex2f(23.6053063943636, 2.2514969590232);
    glVertex2f(23.6015626260893, 1.2406795249392);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(23.7485906165015, 1.1773758068451);
	glVertex2f(23.7485906165015, 2.1881932409291);
	glVertex2f(23.9289721788128, 2.1167213011454);
    glVertex2f(23.9289721788128, 1.0922901642454);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(24.0178550319086, 1.0549931189273);
	glVertex2f(24.0150422833929, 2.0732080816076);
	glVertex2f(24.1950581883972, 1.9747618835584);
    glVertex2f(24.1922454398815, 0.9734234119723);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(24.2906916379307, 0.9256066872055);
	glVertex2f(24.2963171349621, 1.8903794280877);
	glVertex2f(24.4425800577781, 1.8088097211326);
    glVertex2f(24.4453928062937, 0.8384114832191);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(24.5863308742804, 0.7560353368793);
	glVertex2f(24.5823602080272, 1.6970832388867);
	glVertex2f(24.761040189421, 1.6136992475696);
    glVertex2f(24.7650108556742, 0.7004460093345);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(24.840453514485, 0.6430518334929);
	glVertex2f(24.840453514485, 1.5274274989774);
	glVertex2f(24.9848413782375, 1.4407947807259);
    glVertex2f(24.9848413782375, 0.5564191152413);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(25.0734430219039, 0.5278696967266);
	glVertex2f(25.0701614795459, 1.4171676757482);
	glVertex2f(25.2834617328167, 1.3482552862299);
    glVertex2f(25.2801801904587, 0.4458311377763);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(25.3717379342658, 0.4164328574781);
	glVertex2f(25.3771619712212, 1.2734306964302);
	glVertex2f(25.5588672092268, 1.1839340866662);
    glVertex2f(25.5507311537938, 0.3269362477141);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(25.6483638189908, 0.2943920259817);
	glVertex2f(25.6456518005131, 1.1134216062461);
	glVertex2f(25.8571892417735, 1.0157889410491);
    glVertex2f(25.8571892417735, 0.1859112868739);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(25.9673958108217, 0.1393138784843);
	glVertex2f(25.9673958108217, 0.9430575364199);
	glVertex2f(26.174495403664, 0.8567660394023);
    glVertex2f(26.174495403664, 0.0406950247499);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(26.3014023464738, -0.0462582725976);
	glVertex2f(26.3044163409411, 0.7584782501787);
	glVertex2f(26.6, 0.6);
    glVertex2f(26.6088297821412, -0.1698320457581);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(26.7678477528287, -0.246861095291);
	glVertex2f(26.7672793781293, 0.4994568464476);
	glVertex2f(26.9876307803099, 0.3955816004232);
    glVertex2f(26.985620402112, -0.3392499440889);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(27.096523779373, -0.39123590218);
	glVertex2f(27.096523779373, 0.333101780556);
	glVertex2f(27.3044676117374, 0.2187326727556);
    glVertex2f(27.3044676117374, -0.5056050099805);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(27.4632843000922, -0.5689449072894);
	glVertex2f(27.4678636812479, 0.1408591718435);
	glVertex2f(27.7059915013441, 0.0034777371727);
    glVertex2f(27.7059915013441, -0.6742706738704);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(27.8586965963031, -0.7488094926202);
	glVertex2f(27.8539146056301, -0.0984587611028);
	glVertex2f(28.1169240926408, -0.2275725092717);
    glVertex2f(28.1121421019679, -0.8970512034808);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(28.266035256351, -0.9361765817138);
	glVertex2f(28.266035256351, -0.2927814729934);
	glVertex2f(28.5312183754858, -0.4492829859254);
    glVertex2f(28.5312183754858, -1.062247244909);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(28.744821643732, -1.1798500722047);
	glVertex2f(28.744606261975, -0.5160933668745);
	glVertex2f(29.093543088272, -0.693753513149);
    glVertex2f(29.095696905842, -1.3204101146426);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(29.2361331633889, -1.390628243416);
	glVertex2f(29.2361331633889, -0.7522816182032);
	glVertex2f(29.5146844180271, -0.9147698500756);
    glVertex2f(29.5, -1.5);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(29.6479722178535, -1.5810673089358);
	glVertex2f(29.648347955136, -0.9584357255857);
	glVertex2f(29.9334319026777, -1.0934754902107);
    glVertex2f(29.9334319026777, -1.6786478035857);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(30.0934790311222, -1.7486684222801);
	glVertex2f(30.0934790311222, -1.168497581669);
	glVertex2f(30.4235762335388, -1.2535226186551);
    glVertex2f(30.4285777063027, -1.8386949320301);
    glEnd();

}

void road() {

    glBegin(GL_POLYGON);
     	glColor3f(0.5f, 0.5f, 0.5f); //gray color

    glVertex2f(-50, -40);
	glVertex2f(-49.9881650361281, -17.1895599431841);
	glVertex2f(30.6626079988763, -5.2601858034561);
    glVertex2f(35.6411321013901, -5.2966140285964);
    glVertex2f(49.9932372462904, -30.7161413705125);
	glVertex2f(50, -40);
    glEnd();

}

void road_redline(){

    glBegin(GL_POLYGON);
     	glColor3f(1.0f, 0.0f, 0.0f); //red color

    glVertex2f(-49.9692908931379, -19.7427242972926);
	glVertex2f(-49.9385659236307, -19.0974999376408);
	glVertex2f(30.1566394892226, -5.3944408916556);
    glVertex2f(30.385786805586, -5.3715261600193);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(1.0f, 0.0f, 0.0f); //red color

    glVertex2f(34, -40);
	glVertex2f(35.4222093822654, -5.5629841831438);
	glVertex2f(35.492227474899, -5.5527024760662);
    glVertex2f(40, -40);
    glEnd();

}

void window2_down() {

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(50, 12);
	glVertex2f(49.6605584211169, 14.5191024075717);
	glVertex2f(50, 15);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(47.6483209946099, 8.8400704604563);
	glVertex2f(47.5939766919506, 12.0042507777654);
	glVertex2f(48.3621165653728, 12.6017731183767);
    glVertex2f(48.4065622921966, 9.3471207000281);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(45.9857691454191, 6.6845125882454);
	glVertex2f(45.855444134811, 9.8644428470841);
	glVertex2f(46.5, 10.5);
    glVertex2f(46.6287058644193, 7.1971242966374);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(44.7764999503331, 5.7376665769919);
	glVertex2f(44.7050454732175, 8.3259065258446);
	glVertex2f(45.1972874266803, 8.8499060246921);
    glVertex2f(45.3560751536038, 6.1663934396853);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(43.6711824560899, 4.6206530111561);
	glVertex2f(43.5305972246918, 6.8231549697263);
	glVertex2f(44.0648211040046, 7.441729987878);
    glVertex2f(44.2428957304422, 5.1267598441892);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(42.698472078185, 3.5890749881478);
	glVertex2f(42.667489107078, 5.9515265350581);
	glVertex2f(43.1632166447904, 6.5092200149845);
    glVertex2f(43.1787081303439, 4.0615652975299);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(42.0901059056938, 3.0027597855276);
	glVertex2f(42.0221788224754, 5.1764264485153);
	glVertex2f(42.3872868947742, 5.685879572653);
    glVertex2f(42.4891775196017, 3.4103222848378);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(41.3931711596923, 2.4182709299277);
	glVertex2f(41.3716298013778, 4.29954955606);
	glVertex2f(41.7521937982671, 4.7231962695783);
    glVertex2f(41.8239983259821, 2.7629326629596);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(41.0071283388634, 2.1559166999432);
	glVertex2f(40.9736472236884, 3.7406894848915);
	glVertex2f(41.1863322304803, 4.0358250077434);
    glVertex2f(41.2860753628294, 2.3724440281481);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(40.5233590722541, 1.6314842196343);
	glVertex2f(40.4770767264023, 3.3027911531696);
	glVertex2f(40.7753407330025, 3.6267675741318);
    glVertex2f(40.806195630237, 1.9194632604896);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(40.0502506479918, 1.1069509666479);
	glVertex2f(39.9833983706504, 2.7165481057142);
	glVertex2f(40.250807480016, 3.0919493554005);
    glVertex2f(40.3845120346989, 1.4206424218652);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(39.6683109995155, 0.766993188392);
	glVertex2f(39.6201397623495, 2.2699357879714);
	glVertex2f(39.8417274533132, 2.5589632109674);
    glVertex2f(39.9573384225116, 1.0704719825379);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(39.3065463532058, 0.3855282293387);
	glVertex2f(39.2447892859935, 1.9336719141435);
	glVertex2f(39.4500770968735, 2.171219540263);
    glVertex2f(39.48384903656, 0.6430392694484);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(38.8343466861096, 0.0635945833694);
	glVertex2f(38.8278775439572, 1.4350527196685);
	glVertex2f(39.0737049457467, 1.7326332586768);
    glVertex2f(39.1383963672702, 0.3547059802253);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(38.3944450197495, -0.253393382096);
	glVertex2f(38.349161024683, 0.9628053425466);
	glVertex2f(38.6079267107772, 1.2539167394026);
    glVertex2f(38.6984947009101, 0.0053723039982);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(37.9092593583229, -0.6350727690849);
	glVertex2f(37.9092593583229, 0.4388048282059);
	glVertex2f(38.1874324708741, 0.8075459308901);
    glVertex2f(38.2327164659406, -0.3310230879242);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(37.5710843427352, -0.9157863981615);
	glVertex2f(37.5376083608167, -0.0193739934545);
	glVertex2f(37.7410616623617, 0.2641379900924);
    glVertex2f(37.7942575555254, -0.6814545247318);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(37.1665828945532, -1.1922980088084);
	glVertex2f(37.1170756368492, -0.4091832051279);
	glVertex2f(37.3871152243253, -0.107638999113);
    glVertex2f(37.4456238016117, -0.9807669986189);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(36.8011417220303, -1.4748985749476);
	glVertex2f(36.7264238124628, -0.7365098215746);
	glVertex2f(36.9901340815245, -0.4771947236639);
    glVertex2f(37.0692471622431, -1.2683255308492);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(36.4055763184376, -1.7605846997645);
	glVertex2f(36.317672895417, -1.0353814598446);
	glVertex2f(36.607754191385, -0.7584856773298);
    glVertex2f(36.6824721009525, -1.5540116556661);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(36.0616789867202, -1.9138485160011);
	glVertex2f(35.9828480322247, -1.2509518531979);
	glVertex2f(36.2014247696895, -1.0502912417548);
    glVertex2f(36.3196712014328, -1.7776859582361);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(35.7662013028801, -2.0076633873143);
	glVertex2f(35.7283545581505, -1.3539468874397);
	glVertex2f(35.9175882817985, -1.2404066532509);
    glVertex2f(35.9726380923142, -1.9216480583834);
    glEnd();

}

void window2_up(){

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(49.5970750511209, 32.7190812348942);
	glVertex2f(49.4242792493661, 37.9011379892815);
	glVertex2f(49.9866812876808, 38.6035535428804);
    glVertex2f(50, 33);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(47.6552691485225, 27.8105710288038);
	glVertex2f(47.5185079327941, 32.2400847041192);
	glVertex2f(48.2194281545818, 33.3265110478902);
    glVertex2f(48.3362481915465, 28.5602535397337);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(46.1374234226853, 23.9486877349798);
	glVertex2f(45.8542148136148, 27.2805537240435);
	glVertex2f(46.5372473413729, 28.6466187795596);
    glVertex2f(46.8371152803887, 25.0815221712614);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(44.6627212579354, 20.28289431913);
	glVertex2f(44.4788202833292, 23.8996134863853);
	glVertex2f(45.0305232071479, 25.2482206334975);
    glVertex2f(45.2757245066228, 21.1533589322661);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(43.6121291878691, 17.5577823944762);
	glVertex2f(43.4219526415983, 20.4502284464628);
	glVertex2f(44.0216885196297, 21.4664475731273);
    glVertex2f(44.0800830480932, 18.5372207065731);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(42.6821634889948, 15.8076666351594);
	glVertex2f(42.4997823571539, 18.4116639064428);
	glVertex2f(42.9962643271651, 19.1715852891131);
    glVertex2f(43.1583808888015, 16.5777203029319);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(42.1022623364712, 14.3700712168693);
	glVertex2f(42.0188196620644, 16.3846157846907);
	glVertex2f(42.3049088314592, 17.1713610005263);
    glVertex2f(42.4121922699822, 14.9064884094844);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(41.3942024472538, 12.5075885441891);
	glVertex2f(41.3587166291261, 14.7077092681056);
	glVertex2f(41.5952887499773, 15.4174256306593);
    glVertex2f(41.6899175983178, 13.0398758161044);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(40.976975252298, 11.5795806337591);
	glVertex2f(40.8586891918723, 13.3431182619228);
	glVertex2f(41.1275211473851, 14.0743411809175);
    glVertex2f(41.2458072078107, 12.0849847101231);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(40.5231227180023, 10.2842250994347);
	glVertex2f(40.456496109203, 11.7785647539329);
	glVertex2f(40.6754121095435, 12.3020595373558);
    glVertex2f(40.808665327142, 10.7791656219437);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(40.0480836500697, 9.4120222206078);
	glVertex2f(39.9875140057068, 10.8916521043321);
	glVertex2f(40.203834164146, 11.194500326147);
    glVertex2f(40.2903622275217, 9.7667872804481);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(39.6729938550071, 8.4104362955368);
	glVertex2f(39.6135764600084, 9.7242209182846);
	glVertex2f(39.7918286450044, 10.1863562127185);
    glVertex2f(39.9172653677793, 8.938590917747);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(39.1833315336404, 7.8455215623791);
	glVertex2f(39.188617250753, 8.8656649651191);
	glVertex2f(39.3789030668082, 9.2832366170179);
    glVertex2f(39.4423316721599, 8.1838074575882);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(38.8373183157768, 7.1756943728864);
	glVertex2f(38.8018481336336, 7.985596865157);
	glVertex2f(38.9910224383975, 8.4289741419475);
    glVertex2f(39.061962802684, 7.5895131645575);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(38.8373183157768, 7.1756943728864);
	glVertex2f(38.8018481336336, 7.985596865157);
	glVertex2f(38.9910224383975, 8.4289741419475);
    glVertex2f(39.061962802684, 7.5895131645575);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(38.4564430322485, 6.5561676283705);
	glVertex2f(38.4564430322485, 7.3078140011121);
	glVertex2f(38.6422432592183, 7.6836371874829);
    glVertex2f(38.6760251186674, 6.9404362796036);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(38.1569882060835, 5.9278706623339);
	glVertex2f(38.1346159779143, 6.6572053006489);
	glVertex2f(38.2856357890304, 7.0084096840611);
    glVertex2f(38.3538638139722, 6.2858263130407);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(37.8527259029827, 5.2119593609203);
	glVertex2f(37.8124558922782, 5.8607539778264);
	glVertex2f(37.9645870438286, 6.2858263130407);
    glVertex2f(38.0451270652376, 5.6012361310639);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(37.570899691317, 4.5356050058477);
	glVertex2f(37.525254474973, 5.3515132479953);
	glVertex2f(37.6793070801338, 5.7109693267037);
    glVertex2f(37.7477749046497, 4.980645865201);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(37.2799114371245, 3.9992737138066);
	glVertex2f(37.2399718728235, 4.8151819559542);
	glVertex2f(37.4054357820702, 5.2202832510065);
    glVertex2f(37.4624923025001, 4.4043750088589);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(37.0237899627911, 3.4252741089329);
	glVertex2f(37.1343355227728, 4.5517860058896);
	glVertex2f(37.2080325627607, 3.793759308872);
    glVertex2f(37.2080325627607, 3.793759308872);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(36.7366001958447, 2.7887225792626);
	glVertex2f(36.7223939759641, 3.4706211335311);
	glVertex2f(36.8691915813969, 3.8873369166952);
    glVertex2f(36.9449580874267, 3.1486134829043);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(36.4234893618434, 2.0909611182391);
	glVertex2f(36.3862138349385, 2.8054087172494);
	glVertex2f(36.547741118193, 3.1160381081234);
    glVertex2f(36.6036544085503, 2.3953779212956);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(36, 1.5);
	glVertex2f(35.9140571608099, 2.2587009893111);
	glVertex2f(36.1998362004141, 2.5444800289152);
    glVertex2f(36.2681746664063, 1.7803317273651);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(35.6259821359338, 0.907650292678);
	glVertex2f(35.578577418666, 1.5815289172057);
	glVertex2f(35.7898054044603, 1.9542841862545);
    glVertex2f(35.8581438704526, 1.2460491750617);
    glEnd();
}

void door(){

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(-38.2535720178162, -15.5706976124432);
	glVertex2f(-38.25487748639, 5.0099177835431);
	glVertex2f(-28.5059566564472, 4.4321502034048);
    glVertex2f(-28.5032065304716, -14.2039907649016);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(5.3081092012134, -9.0808446407614);
	glVertex2f(5.3196806610503, -1.9610111272207);
	glVertex2f(8.9347504688178, -1.9891999145131);
    glVertex2f(8.9437573499962, -8.5923032290312);
    glEnd();

    glBegin(GL_POLYGON);
     	glColor3f(0.0f, 0.0f, 0.0f); //black color

    glVertex2f(36.7533449105868, -7.3208624360003);
	glVertex2f(37.0149213622071, -3.3556374034784);
	glVertex2f(38.040292211699, -3.4413691225027);
    glVertex2f(37.7605210592833, -9.2792605029101);
    glEnd();

}

void drawCircle(float cx, float cy, float r, int segments = 100) {
    glBegin(GL_POLYGON);
    for (int i = 0; i < segments; ++i) {
        float theta = 2.0f * 3.1416f * i / segments;
        float x = r * cos(theta);
        float y = r * sin(theta);
        glVertex2f(cx + x, cy + y);
    }
    glEnd();
}

void human() {
    glPushMatrix();

    glColor3f(1.0f, 0.8f, 0.6f);

    drawCircle(0.0f, 6.0f, 1.5f);

    glColor3f(0.6f, 0.4f, 0.2f);
    glBegin(GL_POLYGON);
    glVertex2f(-1.2f, 5.0f);
    glVertex2f(1.2f, 5.0f);
    glVertex2f(1.5f, 1.5f);
    glVertex2f(-1.5f, 1.5f);
    glEnd();

    glColor3f(1.0f, 0.8f, 0.6f);
    glBegin(GL_QUADS);
    glVertex2f(-1.5f, 4.8f);
    glVertex2f(-2.2f, 2.5f);
    glVertex2f(-1.8f, 2.3f);
    glVertex2f(-1.0f, 4.6f);

    glVertex2f(1.5f, 4.8f);
    glVertex2f(2.2f, 2.5f);
    glVertex2f(1.8f, 2.3f);
    glVertex2f(1.0f, 4.6f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.8f, 1.5f);
    glVertex2f(-0.4f, -0.5f);
    glVertex2f(0.0f, -0.5f);
    glVertex2f(0.0f, 1.5f);

    glVertex2f(0.2f, 1.5f);
    glVertex2f(0.6f, -0.5f);
    glVertex2f(1.0f, -0.5f);
    glVertex2f(0.4f, 1.5f);
    glEnd();

    drawCircle(-0.3f, -0.6f, 0.2f);
    drawCircle(0.8f, -0.6f, 0.2f);

    glPopMatrix();
}


void drawSingleCloud(float x, float y) {
    glPushMatrix();
    glTranslatef(x + cloudX, y, 0.0f);
    glColor3f(1.0f, 1.0f, 1.0f);

    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; ++i) {
        float theta = i * 3.1416f / 180.0f;
        glVertex2f(2 * cos(theta), 2 * sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; ++i) {
        float theta = i * 3.1416f / 180.0f;
        glVertex2f(1.5 * cos(theta) - 2.0, 1.5 * sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; ++i) {
        float theta = i * 3.1416f / 180.0f;
        glVertex2f(1.5 * cos(theta) + 2.0, 1.5 * sin(theta));
    }
    glEnd();

    glPopMatrix();
}

void aclouds() {
    drawSingleCloud(10.0f, 35.0f);
    drawSingleCloud(25.0f, 38.0f);
    drawSingleCloud(40.0f, 36.0f);
}

void drawBird(float x, float y) {
    glPushMatrix();
    glTranslatef(x, y, 0.0f);
    glScalef(1.5f, 1.5f, 1.0f);

    glColor3f(0.55f, 0.27f, 0.07f);

    glBegin(GL_TRIANGLES);

    glVertex2f(0.0f, 0.0f);
    glVertex2f(-2.0f, 1.5f);
    glVertex2f(-1.0f, 0.5f);


    glVertex2f(0.0f, 0.0f);
    glVertex2f(2.0f, 1.5f);
    glVertex2f(1.0f, 0.5f);

    glVertex2f(-0.2f, -0.3f);
    glVertex2f(0.2f, -0.3f);
    glVertex2f(0.0f, -1.5f);
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; ++i) {
        float theta = i * 3.1416f / 180.0f;
        glVertex2f(0.6f * cos(theta), 0.6f * sin(theta));
    }
    glEnd();

    glPopMatrix();
}

void asky() {
    if (aisDay)
        glColor3f(0.53f, 0.81f, 0.92f);
    else
        glColor3f(0.05f, 0.05f, 0.2f);

    glBegin(GL_POLYGON);
    glVertex2f(30.5965, -5.3064);
    glVertex2f(30.5207, -2.4979);
    glVertex2f(31.6054, 6.3208);
    glVertex2f(30.2308, 8.2694);
    glVertex2f(17.9164, 39.9844);
    glVertex2f(41.8436, 39.7809);
    glVertex2f(35.3696, 1.5648);
    glVertex2f(35.6411, -5.2966);
    glEnd();

    if (!aisDay) {
        glColor3f(1.0, 1.0, 1.0);
        glPointSize(2.0f);
        glBegin(GL_POINTS);
        glVertex2f(30, 30);
        glVertex2f(35, 25);
        glVertex2f(20, 35);
        glVertex2f(25, 20);
        glVertex2f(40, 30);
        glEnd();

        drawBird(asteroidX, asteroidY);
    } else {
        aclouds();
    }
}


void aupdate(int value) {
    cloudX += 0.1f;
    if (cloudX > 50.0f)
        cloudX = -10.0f;

    if (!aisDay) {
        asteroidX += 0.2f;
        asteroidY -= 0.03f;

        if (asteroidX > 60.0f || asteroidY < -40.0f) {
            asteroidX = -60.0f;
            asteroidY = 35.0f;
        }
    }

    if (aisMoving) {
        double dx = targetX - posX;
        double dy = targetY - posY;
        double dist = sqrt(dx * dx + dy * dy);

        if (dist < 0.1) {
            aisMoving = false;
            posX = targetX;
            posY = targetY;
        } else {
            posX += dx / dist * speed;
            posY += dy / dist * speed;
        }
    }

    glutPostRedisplay();
    glutTimerFunc(33, aupdate, 0);
}


void displayScene4() {
    if (aisDay)
        glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    else
        glClearColor(0.02f, 0.02f, 0.08f, 1.0f);

    glClear(GL_COLOR_BUFFER_BIT);

    window1_down();
    redline();
    window1_up();
    road();
    road_redline();
    asky();
    window2_down();
    window2_up();
    door();
    glPushMatrix();
    glTranslatef(posX, posY, 0.0f);
    human();
    glPopMatrix();

    glFlush();
}


///////////////// Scene-5 (Ushmita) Functions ////////////////////

void udrawSky() {
    glBegin(GL_QUADS);
    if (uisNight)
        glColor3f(0.0f, 0.0f, 0.0f); // Night black sky
    else
        glColor3f(0.53f, 0.81f, 0.92f); // Day sky blue

    glVertex2f(-50.0f, 40.0f);
    glVertex2f(-50.0f, 10.0f);
    glVertex2f(50.0f, 10.0f);
    glVertex2f(50.0f, 40.0f);
    glEnd();
}


void udrawSun() {
    int i;
    GLfloat x = -40.0f, y = 32.0f, radius = 3.7f;
    int triangleAmount = 100;
    GLfloat twicePi = 2.0f * PI;

    if (uisNight)
        glColor3f(0.0f, 0.0f, 0.0f); // Night: sun is black
    else
        glColor3f(1.0f, 1.0f, 0.0f); // Day: yellow sun

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // Center
    for (i = 0; i <= triangleAmount; i++) {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}

//Moving cloud
void uupdateClouds() {
    cloudOffset += 0.0008f;
    if (cloudOffset > 100.0f) // Reset position when out of screen
        cloudOffset = -100.0f;

    glutPostRedisplay(); // Redraw
}


//Left cloud
void drawLeft_Cloud() {
    int i;
    int triangleAmount = 40;
    GLfloat twicePi = 2.0f * PI;
    glColor3f(1.0f, 1.0f, 1.0f);  // white color

    GLfloat x1 = -15.0f + cloudOffset, y1 = 30.0f, r1 = 5.0f;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x1, y1);
        for (i = 0; i <= triangleAmount; i++)
            glVertex2f(x1 + r1 * cos(i * twicePi / triangleAmount), y1 + r1 * sin(i * twicePi / triangleAmount));
    glEnd();

    GLfloat x2 = -19.0f + cloudOffset, y2 = 29.0f, r2 = 3.6f;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x2, y2);
        for (i = 0; i <= triangleAmount; i++)
            glVertex2f(x2 + r2 * cos(i * twicePi / triangleAmount), y2 + r2 * sin(i * twicePi / triangleAmount));
    glEnd();

    GLfloat x3 = -11.0f + cloudOffset, y3 = 29.0f, r3 = 3.6f;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x3, y3);
        for (i = 0; i <= triangleAmount; i++)
            glVertex2f(x3 + r3 * cos(i * twicePi / triangleAmount), y3 + r3 * sin(i * twicePi / triangleAmount));
    glEnd();
}


//Middle cloud
void drawMiddle_Cloud() {
    int i;
    int triangleAmount = 40;
    GLfloat twicePi = 2.0f * PI;

    GLfloat offsetX = 25.0f + cloudOffset;
    GLfloat offsetY = 0.0f;

    glColor3f(1.0f, 1.0f, 1.0f);  // white color


    GLfloat x1 = -15.0f + offsetX, y1 = 30.0f, r1 = 5.0f;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x1, y1);
        for (i = 0; i <= triangleAmount; i++)
            glVertex2f(x1 + r1 * cos(i * twicePi / triangleAmount), y1 + r1 * sin(i * twicePi / triangleAmount));
    glEnd();

    GLfloat x2 = -19.0f + offsetX, y2 = 29.0f, r2 = 3.6f;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x2, y2);
        for (i = 0; i <= triangleAmount; i++)
            glVertex2f(x2 + r2 * cos(i * twicePi / triangleAmount), y2 + r2 * sin(i * twicePi / triangleAmount));
    glEnd();

    GLfloat x3 = -11.0f + offsetX, y3 = 29.0f, r3 = 3.6f;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x3, y3);
        for (i = 0; i <= triangleAmount; i++)
            glVertex2f(x3 + r3 * cos(i * twicePi / triangleAmount), y3 + r3 * sin(i * twicePi / triangleAmount));
    glEnd();
}


//Right cloud
void drawRight_Cloud() {
    int i;
    int triangleAmount = 40;
    GLfloat twicePi = 2.0f * PI;

    GLfloat offsetX = 50.0f + cloudOffset;
    GLfloat offsetY = 0.0f;

    glColor3f(1.0f, 1.0f, 1.0f);  // white color


    GLfloat x1 = -15.0f + offsetX, y1 = 30.0f, r1 = 5.0f;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x1, y1);
        for (i = 0; i <= triangleAmount; i++)
            glVertex2f(x1 + r1 * cos(i * twicePi / triangleAmount), y1 + r1 * sin(i * twicePi / triangleAmount));
    glEnd();

    GLfloat x2 = -19.0f + offsetX, y2 = 29.0f, r2 = 3.6f;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x2, y2);
        for (i = 0; i <= triangleAmount; i++)
            glVertex2f(x2 + r2 * cos(i * twicePi / triangleAmount), y2 + r2 * sin(i * twicePi / triangleAmount));
    glEnd();

    GLfloat x3 = -11.0f + offsetX, y3 = 29.0f, r3 = 3.6f;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x3, y3);
        for (i = 0; i <= triangleAmount; i++)
            glVertex2f(x3 + r3 * cos(i * twicePi / triangleAmount), y3 + r3 * sin(i * twicePi / triangleAmount));
    glEnd();
}


// Moving boat
void updateBoat() {
    boatOffset += boatSpeed;
    if (boatOffset > 100.0f)
        boatOffset = -100.0f;

    glutPostRedisplay();
}



void drawBoat(){
    // First Boat Body
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);  // red
    glVertex2f(-12.0f + boatOffset, 7.0f);
    glVertex2f(-10.0f + boatOffset, 5.0f);
    glVertex2f(0.0f + boatOffset, 5.0f);
    glVertex2f(2.0f + boatOffset, 7.0f);
    glEnd();

    // First Sail
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.647f, 0.0f);  // orange
    glVertex2f(-5.0f + boatOffset, 10.0f);
    glVertex2f(-8.0f + boatOffset, 7.0f);
    glVertex2f(-2.0f + boatOffset, 7.0f);
    glEnd();

    // Second Boat Body
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);  // red
    glVertex2f(8.0f + boatOffset, 7.0f);
    glVertex2f(10.0f + boatOffset, 5.0f);
    glVertex2f(20.0f + boatOffset, 5.0f);
    glVertex2f(22.0f + boatOffset, 7.0f);
    glEnd();

    // Second Sail
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.647f, 0.0f);  // orange
    glVertex2f(15.0f + boatOffset, 10.0f);
    glVertex2f(12.0f + boatOffset, 7.0f);
    glVertex2f(18.0f + boatOffset, 7.0f);
    glEnd();
}


//Sea
void udrawSea(){
    glBegin(GL_QUADS);
    glColor3f(0.1f,0.3f,0.8f);  //Deep sky blue
    glVertex2f(-50.0f, 10.0f);
    glVertex2f(-50.0f, 0.0f);
    glVertex2f(50.0f, 0.0f);
    glVertex2f(50.0f, 10.0f);
    glEnd();
}


//Fild
void drawFild(){
    glBegin(GL_QUADS);
    glColor3f(0.0196f, 0.8509f, 0.0078f); //bright green color
    glVertex2f(-50.0f, 0.0f);
    glVertex2f(-50.0f, -40.0f);
    glVertex2f(50.0f, -40.0f);
    glVertex2f(50.0f, 0.0f);
    glEnd();
}


//Left_Palm_Tree
void drawLeft_Palm_Tree(){
    glBegin(GL_QUADS);
    glColor3f(0.59f, 0.44f, 0.20f);  //warm brown color
    glVertex2f(24.5f, 10.5f);
    glVertex2f(24.5f, -5.0f);
    glVertex2f(25.5f, -5.0f);
    glVertex2f(25.5f, 10.5f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f); //bright green color
    glVertex2f(25.15f, 15.0f);
    glVertex2f(23.0f, 11.0f);
    glVertex2f(27.0f, 11.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);  //bright green color
    glVertex2f(24.0f, 11.0f);
    glVertex2f(25.0f, 10.0f);
    glVertex2f(26.0f, 11.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);  //bright green color
    glVertex2f(23.0f, 11.0f);
    glVertex2f(23.0f, 10.0f);
    glVertex2f(24.0f, 11.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);   //bright green color
    glVertex2f(26.0f, 11.0f);
    glVertex2f(27.0f, 10.0f);
    glVertex2f(27.0f, 11.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);    //bright green color
    glVertex2f(25.0f, 15.0f);
    glVertex2f(29.0f, 17.0f);
    glVertex2f(29.0f, 13.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);   //bright green color
    glVertex2f(30.0f, 13.0f);
    glVertex2f(29.0f, 13.0f);
    glVertex2f(29.0f, 14.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);   //bright green color
    glVertex2f(29.0f, 14.0f);
    glVertex2f(30.0f, 15.0f);
    glVertex2f(29.0f, 16.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);  //bright green color
    glVertex2f(29.0f, 16.0f);
    glVertex2f(29.0f, 17.0f);
    glVertex2f(30.0f, 17.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);   //bright green color
    glVertex2f(25.0f, 15.0f);
    glVertex2f(23.0f, 19.0f);
    glVertex2f(27.0f, 19.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);   //bright green color
    glVertex2f(23.0f, 20.0f);
    glVertex2f(23.0f, 19.0f);
    glVertex2f(24.0f, 19.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);   //bright green color
    glVertex2f(24.0f, 19.0f);
    glVertex2f(25.0f, 20.0f);
    glVertex2f(26.0f, 19.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);   //bright green color
    glVertex2f(26.0f, 19.0f);
    glVertex2f(27.0f, 19.0f);
    glVertex2f(27.0f, 20.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);   //bright green color
    glVertex2f(25.0f, 15.0f);
    glVertex2f(21.f, 17.f);
    glVertex2f(21.0f, 13.f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);   //bright green color
    glVertex2f(21.0f, 14.0f);
    glVertex2f(21.0f, 13.0f);
    glVertex2f(20.0f, 13.f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);   //bright green color
    glVertex2f(21.0f, 14.0f);
    glVertex2f(20.0f, 15.0f);
    glVertex2f(21.0f, 16.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);   //bright green color
    glVertex2f(20.0f, 17.0f);
    glVertex2f(21.0f, 16.0f);
    glVertex2f(21.0f, 17.f);
    glEnd();
}


void drawTranslated_Left_Palm_Tree() {
    glPushMatrix();               // Save the current coordinate system
    glTranslatef(-20.0f, 0.0f, 0.0f); // Move everything drawn after this to the left by 23 units

    drawLeft_Palm_Tree();        // Call the existing palm tree drawing function

    glPopMatrix();               // Restore the original coordinate system
}


void drawTranslated_Left_Palm_Tree_2() {
    glPushMatrix();               // Save the current coordinate system
    glTranslatef(-10.0f, 0.0f, 0.0f); // Move everything drawn after this to the left by 23 units

    drawLeft_Palm_Tree();        // Call the existing palm tree drawing function

    glPopMatrix();               // Restore the original coordinate system
}


//Right_Palm_Tree
void drawRight_Palm_Tree(){
    glBegin(GL_QUADS);
    glColor3f(0.59f, 0.44f, 0.20f);  //warm brown color
    glVertex2f(44.5f, 10.5f);
    glVertex2f(44.5f, -5.0f);
    glVertex2f(45.5f, -5.0f);
    glVertex2f(45.5f, 10.5f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);  //bright green color
    glVertex2f(45.0f, 15.0f);
    glVertex2f(43.0f, 11.0f);
    glVertex2f(47.0f, 11.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);   //bright green color
    glVertex2f(43.0f, 10.0f);
    glVertex2f(43.0f, 11.0f);
    glVertex2f(44.0f, 11.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);  //bright green color
    glVertex2f(44.0f, 11.0f);
    glVertex2f(45.0f, 10.0f);
    glVertex2f(46.0f, 11.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);   //bright green color
    glVertex2f(47.0f, 10.0f);
    glVertex2f(46.0f, 11.0f);
    glVertex2f(47.0f, 11.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);   //bright green color
    glVertex2f(45.0f, 15.0f);
    glVertex2f(49.0f, 13.0f);
    glVertex2f(49.0f, 17.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);   //bright green color
    glVertex2f(50.0f, 13.0f);
    glVertex2f(49.0f, 13.0f);
    glVertex2f(49.0f, 14.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);  //bright green color
    glVertex2f(49.0f, 14.0f);
    glVertex2f(50.0f, 15.0f);
    glVertex2f(49.0f, 16.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);   //bright green color
    glVertex2f(49.0f, 16.0f);
    glVertex2f(50.0f, 17.0f);
    glVertex2f(49.0f, 17.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);  //bright green color
    glVertex2f(45.0f, 15.0f);
    glVertex2f(43.0f, 19.0f);
    glVertex2f(47.0f, 19.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);   //bright green color
    glVertex2f(43.0f, 20.0f);
    glVertex2f(43.0f, 19.0f);
    glVertex2f(44.0f, 19.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);   //bright green color
    glVertex2f(44.0f, 19.0f);
    glVertex2f(46.0f, 19.0f);
    glVertex2f(45.0f, 20.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);   //bright green color
    glVertex2f(46.0f, 19.0f);
    glVertex2f(47.0f, 19.0f);
    glVertex2f(47.0f, 20.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);   //bright green color
    glVertex2f(45.0f, 15.0f);
    glVertex2f(41.0f, 17.0f);
    glVertex2f(41.0f, 13.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);    //bright green color
    glVertex2f(41.0f, 13.0f);
    glVertex2f(40.0f, 13.0f);
    glVertex2f(41.0f, 14.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);    //bright green color
    glVertex2f(41.0f, 14.0f);
    glVertex2f(40.0f, 15.0f);
    glVertex2f(41.0f, 16.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);   //bright green color
    glVertex2f(41.0f, 16.0f);
    glVertex2f(41.0f, 17.0f);
    glVertex2f(40.0f, 17.0f);
    glEnd();
}



//Middle_Palm_Tree
void drawMiddle_Palm_Tree(){
    glBegin(GL_QUADS);
    glColor3f(0.59f, 0.44f, 0.20f);   //warm brown color
    glVertex2f(34.5f, 10.5f);
    glVertex2f(34.5f, -5.0f);
    glVertex2f(35.5f, -5.0f);
    glVertex2f(35.5f, 10.5f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);  //bright green color
    glVertex2f(35.f, 15.0f);
    glVertex2f(33.0f, 11.0f);
    glVertex2f(37.0f, 11.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);  //bright green color
    glVertex2f(33.f, 10.0f);
    glVertex2f(33.0f, 11.0f);
    glVertex2f(34.0f, 11.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);  //bright green color
    glVertex2f(34.f, 11.0f);
    glVertex2f(35.0f, 10.0f);
    glVertex2f(36.0f, 11.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);  //bright green color
    glVertex2f(36.f, 11.0f);
    glVertex2f(37.0f, 10.0f);
    glVertex2f(37.0f, 11.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);   //bright green color
    glVertex2f(35.f, 15.0f);
    glVertex2f(39.0f, 13.0f);
    glVertex2f(39.0f, 17.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);  //bright green color
    glVertex2f(39.f, 13.0f);
    glVertex2f(39.0f, 14.0f);
    glVertex2f(40.0f, 13.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);   //bright green color
    glVertex2f(39.f, 14.0f);
    glVertex2f(40.0f, 15.0f);
    glVertex2f(39.0f, 16.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);  //bright green color
    glVertex2f(39.f, 16.0f);
    glVertex2f(39.0f, 17.0f);
    glVertex2f(40.0f, 17.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);  //bright green color
    glVertex2f(35.f, 15.0f);
    glVertex2f(37.0f, 19.0f);
    glVertex2f(33.0f, 19.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);  //bright green color
    glVertex2f(33.f, 19.0f);
    glVertex2f(33.0f, 20.0f);
    glVertex2f(34.0f, 19.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);   //bright green color
    glVertex2f(34.f, 19.0f);
    glVertex2f(35.0f, 20.0f);
    glVertex2f(36.0f, 19.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);  //bright green color
    glVertex2f(36.f, 19.0f);
    glVertex2f(37.0f, 19.0f);
    glVertex2f(37.0f, 20.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);   //bright green color
    glVertex2f(35.f, 15.0f);
    glVertex2f(31.0f, 17.0f);
    glVertex2f(31.0f, 13.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);   //bright green color
    glVertex2f(30.f, 13.0f);
    glVertex2f(31.0f, 13.0f);
    glVertex2f(31.0f, 14.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);   //bright green color
    glVertex2f(31.f, 14.0f);
    glVertex2f(30.0f, 15.0f);
    glVertex2f(31.0f, 16.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0196f, 0.8509f, 0.0078f);   //bright green color
    glVertex2f(31.f, 16.0f);
    glVertex2f(31.0f, 17.0f);
    glVertex2f(30.0f, 17.0f);
    glEnd();
}


//Building
void drawBuilding(){
    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.0f, 0.5f);  //  purple color
    glVertex2f(-50.0f, -10.0f);
    glVertex2f(-30.0f, -10.0f);
    glVertex2f(-30.0f, 20.0f);
    glVertex2f(-50.0f, 20.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.00f, 0.753f, 0.796f);  // Pink color
    glVertex2f(-50.0f, 16.0f);
    glVertex2f(-50.0f, 14.0f);
    glVertex2f(-48.0f, 14.0f);
    glVertex2f(-48.0f, 16.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.00f, 0.753f, 0.796f);  // Pink color
    glVertex2f(-46.0f, 16.0f);
    glVertex2f(-46.0f, 14.0f);
    glVertex2f(-44.0f, 14.0f);
    glVertex2f(-44.0f, 16.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.00f, 0.753f, 0.796f);  // Pink color
    glVertex2f(-42.0f, 16.0f);
    glVertex2f(-42.0f, 14.0f);
    glVertex2f(-40.0f, 14.0f);
    glVertex2f(-40.0f, 16.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.00f, 0.753f, 0.796f);  // Pink color
    glVertex2f(-38.0f, 16.0f);
    glVertex2f(-38.0f, 14.0f);
    glVertex2f(-36.0f, 14.0f);
    glVertex2f(-36.0f, 16.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.00f, 0.753f, 0.796f);  // Pink color
    glVertex2f(-34.0f, 16.0f);
    glVertex2f(-34.0f, 14.0f);
    glVertex2f(-32.0f, 14.0f);
    glVertex2f(-32.0f, 16.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.00f, 0.753f, 0.796f);  // Pink color
    glVertex2f(-50.0f, 6.0f);
    glVertex2f(-50.0f, 4.0f);
    glVertex2f(-48.0f, 4.0f);
    glVertex2f(-48.0f, 6.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.00f, 0.753f, 0.796f);  // Pink color
    glVertex2f(-50.0f, 6.0f);
    glVertex2f(-50.0f, 4.0f);
    glVertex2f(-48.0f, 4.0f);
    glVertex2f(-48.0f, 6.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.00f, 0.753f, 0.796f);  // Pink color
    glVertex2f(-46.0f, 6.0f);
    glVertex2f(-46.0f, 4.0f);
    glVertex2f(-44.0f, 4.0f);
    glVertex2f(-44.0f, 6.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.00f, 0.753f, 0.796f);  // Pink color
    glVertex2f(-42.0f, 6.0f);
    glVertex2f(-42.0f, 4.0f);
    glVertex2f(-40.0f, 4.0f);
    glVertex2f(-40.0f, 6.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.00f, 0.753f, 0.796f);  // Pink color
    glVertex2f(-38.0f, 6.0f);
    glVertex2f(-38.0f, 4.0f);
    glVertex2f(-36.0f, 4.0f);
    glVertex2f(-36.0f, 6.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.00f, 0.753f, 0.796f);  // Pink color
    glVertex2f(-34.0f, 6.0f);
    glVertex2f(-34.0f, 4.0f);
    glVertex2f(-32.0f, 4.0f);
    glVertex2f(-32.0f, 6.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.00f, 0.753f, 0.796f);  // Pink color
    glVertex2f(-50.0f, -6.0f);
    glVertex2f(-50.0f, -4.0f);
    glVertex2f(-48.0f, -4.0f);
    glVertex2f(-48.0f, -6.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.00f, 0.753f, 0.796f); // Pink color
    glVertex2f(-46.0f, -6.0f);
    glVertex2f(-46.0f, -4.0f);
    glVertex2f(-44.0f, -4.0f);
    glVertex2f(-44.0f, -6.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.00f, 0.753f, 0.796f);  // Pink color
    glVertex2f(-42.0f, -6.0f);
    glVertex2f(-42.0f, -4.0f);
    glVertex2f(-40.0f, -4.0f);
    glVertex2f(-40.0f, -6.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.00f, 0.753f, 0.796f);  // Pink color
    glVertex2f(-38.0f, -6.0f);
    glVertex2f(-38.0f, -4.0f);
    glVertex2f(-36.0f, -4.0f);
    glVertex2f(-36.0f, -6.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.00f, 0.753f, 0.796f);  // Pink color
    glVertex2f(-34.0f, -6.0f);
    glVertex2f(-34.0f, -4.0f);
    glVertex2f(-32.0f, -4.0f);
    glVertex2f(-32.0f, -6.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.00f, 0.753f, 0.796f);  // Pink color
    glVertex2f(-50.0f, 10.5f);
    glVertex2f(-50.0f, 9.5f);
    glVertex2f(-29.0f, 9.5f);
    glVertex2f(-29.0f, 10.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.00f, 0.753f, 0.796f);   // Pink color
    glVertex2f(-50.f, 0.5f);
    glVertex2f(-50.f, -0.5f);
    glVertex2f(-29.0f, -0.5f);
    glVertex2f(-29.0f, 0.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.00f, 0.753f, 0.796f);  // Pink color
    glVertex2f(-50.0f, 20.5f);
    glVertex2f(-50.0f, 19.5f);
    glVertex2f(-29.0f, 19.5f);
    glVertex2f(-29.0f, 20.5f);
    glEnd();
}


//Soil
void drawSoil(){
    glBegin(GL_POLYGON);
    glColor3f(0.796f, 0.66f, 0.51f);  // light brown color
    glVertex2f(-50.0f, -30.0f);
    glVertex2f(-50.0f, -40.0f);
    glVertex2f(50.0f, -40.0f);
    glVertex2f(50.0f, -30.0f);
    glEnd();
}


//Pool
void drawPool(){

    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.3f, 0.8f);   // deep sky blue color
    glVertex2f(-20.0f, -3.0f);
    glVertex2f(-23.0f, -6.0f);
    glVertex2f(-23.0f, -9.0f);
    glVertex2f(-20.0f, -13.0f);
    glVertex2f(-15.0f, -13.0f);
    glVertex2f(-15.0f, -3.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.3f, 0.8f);   // deep sky blue color
    glVertex2f(-50.0f, -13.0f);
    glVertex2f(-50.0f, -30.0f);
    glVertex2f(0.0f, -30.0f);
    glVertex2f(0.0f, -13.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.3f, 0.8f);   // deep sky blue color
    glVertex2f(-20.0f, -3.0f);
    glVertex2f(-20.0f, -13.0f);
    glVertex2f(10.0f, -13.0f);
    glVertex2f(10.0f, -3.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.3f, 0.8f);   // deep sky blue color
    glVertex2f(10.0f, -3.0f);
    glVertex2f(13.0f, -6.0f);
    glVertex2f(13.0f, -9.0f);
    glVertex2f(10.0f, -13.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.1f, 0.3f, 0.8f);   // deep sky blue color
    glVertex2f(0.0f, -13.0f);
    glVertex2f(0.0f, -30.0f);
    glVertex2f(10.0f, -29.0f);
    glVertex2f(15.0f, -25.0f);
    glVertex2f(15.0f, -19.0f);
    glVertex2f(10.0f, -13.0f);
    glEnd();
}

void uinitRain() {
    for (int i = 0; i < MAX_RAIN; i++) {
        urainX[i] = (rand() % 100) - 50.0f;
        urainY[i] = (rand() % 80);
    }
}

void uupdateRain() {
    if (!uisRaining) return;

    for (int i = 0; i < MAX_RAIN; i++) {
        urainY[i] -= rainSpeed;
        if (urainY[i] < -40) {
            urainY[i] = 40 + rand() % 40;
            urainX[i] = (rand() % 100) - 50.0f;
        }
    }
}

void udrawRain() {
    if (!uisRaining) return;

    glColor3f(1.0f, 1.0f, 1.0f);  // white
    glBegin(GL_LINES);
    for (int i = 0; i < MAX_RAIN; i++) {
        glVertex2f(urainX[i], urainY[i]);
        glVertex2f(urainX[i], urainY[i] - 1.5f);
    }
    glEnd();
}


void displayScene5() {
    glClear(GL_COLOR_BUFFER_BIT);
    udrawSky();
    udrawSea();
    drawFild();
    drawBoat();
    updateBoat();
    drawRight_Palm_Tree();
    drawMiddle_Palm_Tree();
    drawLeft_Palm_Tree();
    drawSoil();
    udrawSun ();
    drawLeft_Cloud();
    drawTranslated_Left_Palm_Tree();
    drawTranslated_Left_Palm_Tree_2();
    drawMiddle_Cloud();
    drawRight_Cloud();
    uupdateClouds();
    drawBuilding();
    drawPool();
    udrawRain();
    uupdateRain();

    glFlush();

}

void handleKeypress(unsigned char key, int x, int y)
{
    ///////////////// Scene-1 (Farseen) Keys ////////////////////

    switch (key)
    {
        case 'n':
        case 'N':
        {
            f = 1;
            break;
        }

        case 'd':
        case 'D':
        {
            f = 0;
            break;
        }

        case 'r':
        case 'R':
        {
            rainday = true;
            Rain(rain);
            sndPlaySound("H:\\Graphics\\Final_Project\\bin\\Debug\\river-3.wav", SND_ASYNC | SND_LOOP);
            break;
        }

        case 't':
        case 'T':
        {
            rainday = false;
            sndPlaySound(NULL, SND_ASYNC);
            break;
        }

        case 'c':
        case 'C':
        {
            moveClouds = !moveClouds;
            if (moveClouds)
                glutTimerFunc(16, updateClouds, 0);
            break;
        }

        case 'z':
        case 'Z':
         {
            resetScene1();
            break;
         }

        case 'w':
        case 'W':
        {
            startRotation = !startRotation;
            if (startRotation)
                glutTimerFunc(16, updateWindmill, 0);
            break;
        }

        case 's':
        case 'S':
        {
            shipMoving = !shipMoving;
            if (shipMoving)
            {
                glutTimerFunc(16, updateShip3, 0);
            }
            else
            {
                ship3TranslationX = 0.0f;
            }
            break;
        }

        case '1':
        {
            currentScene = 1;
            glutDisplayFunc(displayScene1);
            glutPostRedisplay();
            break;
        }

        case '2':
        {
            currentScene = 2;
            glutDisplayFunc(displayScene2);
            glutPostRedisplay();
            break;
        }

        case '3':
        {
            currentScene = 3;
            glutDisplayFunc(displayScene3);
            glutPostRedisplay();
            break;
        }

        case '4':
        {
            currentScene = 4;
            glutDisplayFunc(displayScene4);
            glutPostRedisplay();
            break;
        }

        case '5':
        {
            currentScene = 5;
            glutDisplayFunc(displayScene5);
            glutPostRedisplay();
            break;
        }

        case 'p':
        case 'P':
        {
            glutDisplayFunc(displayCover);
            glutPostRedisplay();
            break;
        }

        case 'i':
        case 'I':
        {
            glutDisplayFunc(displayInstructions);
            glutPostRedisplay();
            break;
        }

        ///////////////// Scene-2 (Towfiq) Keys ////////////////////

        case 'x':
        case 'X':
        {
            shipPaused = false;

            if (currentSound != 2)
            {
                PlaySound("H:\\Graphics\\Final_Project\\bin\\Debug\\Ship.wav",
                          NULL, SND_ASYNC | SND_FILENAME | SND_LOOP);
                currentSound = 2;
            }
            break;
        }

        case 'v':
        case 'V':
        {
            shipPaused = !shipPaused;
            PlaySound(NULL, 0, 0); // Stop all sound
            currentSound = 0;
            break;
        }

        case 'k':
        case 'K':
        {
            PlaySound("H:\\Graphics\\Final_Project\\bin\\Debug\\Sea Wave.wav", NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);
            break;
        }

        case 'e':
        case 'E':
        {
            PlaySound(NULL, 0, 0); // Stop all sound
            currentSound = 0;
            break;
        }

        case 'm':
        case 'M':
        {
            helicopterStarted = true;
            helicopterPaused = false;
            if (currentSound != 1) {
                    PlaySound("H:\\Graphics\\Final_Project\\bin\\Debug\\Helicopter.wav",
                              NULL, SND_ASYNC | SND_FILENAME | SND_LOOP);
                    currentSound = 1;
                }
            glutTimerFunc(0, updateHelicopter, 0);
        }

         case 'l':
         case 'L':
         {
            miniship1Started = true;
            miniship1Paused = false;
            glutTimerFunc(0, updateMiniship1, 0);
         }

         case 'o':
         case 'O':
         {
            miniship2Started = true;
            miniship2Paused = false;
            glutTimerFunc(0, updateMiniship2, 0);
         }

         ///////////////// Scene-3 (Hachib) Keys ////////////////////

         case 'u':
         case 'U':
            hshipMoving = !hshipMoving;
            break;

        case 'q':
        case 'Q':
            hcloudMoving = !hcloudMoving;
            break;

        case 'y':
        case 'Y':
            hstartRotation = !hstartRotation;
            break;

        case 'f':
        case 'F':
            hisNightMode = !hisNightMode;
            glutPostRedisplay();
            break;

        case 'a':
        case 'A':
            isRaining = !isRaining;
            break;


        case 'g':
        case 'G':
            play();
            break;

        ///////////////// Scene-4 (Afsana) Keys ////////////////////

        case 'j':
        case 'J':
            sndPlaySound("H:\\Graphics\\Final_Project\\bin\\Debug\\sea-and-seagull-wave-5932.wav", SND_ASYNC|SND_LOOP);
            break;

         case 'b':
         case 'B':
            aisMoving = true;
            break;

        ///////////////// Scene-5 (Ushmita) Keys ////////////////////

        case 'h':
        case 'H':
            uisNight = true;
            break;

        case '0':
            uisNight = false;
            break;

        case '8':
            if (!uisRaining) {
            uisRaining = true;
            PlaySound("H:\\Graphics\\Final_Project\\bin\\Debug\\rain.wav",
                      NULL, SND_ASYNC | SND_FILENAME | SND_LOOP);
            }
            break;

         case '9':
            if (uisRaining) {
            uisRaining = false;
            PlaySound("H:\\Graphics\\Final_Project\\bin\\Debug\\sound.wav",
                      NULL, SND_ASYNC | SND_FILENAME | SND_LOOP);
            }
            break;
    }


    glutPostRedisplay();
}

void handleMouseClick(int button, int state, int x, int y)
{

    ///////////////// Scene-1 (Farseen) Mouse ////////////////////
    if (state == GLUT_DOWN)
    {
        if (currentScene == 1)
        {
            if (button == GLUT_RIGHT_BUTTON)
            {
                shipMoving = !shipMoving;
                if (shipMoving)
                {
                    glutTimerFunc(16, updateShip3, 0);
                }
                else
                {
                    shipspeed = 0.0f;
                    glutPostRedisplay();
                }
            }
        }

        ///////////////// Scene-2 (Towfiq) Mouse ////////////////////
        else if (currentScene == 2)
        {
            if (button == GLUT_LEFT_BUTTON)
            {
                miniship1Paused = false;
                miniship2Paused = false;
            }
            else if (button == GLUT_RIGHT_BUTTON)
            {
                miniship1Paused = true;
                miniship2Paused = true;
            }
        }

        ///////////////// Scene-3 (Hachib) Mouse ////////////////////

        else if (currentScene == 3)
        {
            if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
                hshipMoving = !hshipMoving;
            }
        }

        ///////////////// Scene-4 (Afsana) Mouse ////////////////////

        else if (currentScene == 4)
        {
             if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
                aisDay = !aisDay;
                glutPostRedisplay();
             }
        }

         ///////////////// Scene-5 (Ushmita) Mouse ////////////////////

        else if (currentScene == 5)
        {
            if (state == GLUT_DOWN) {
                if (button == GLUT_RIGHT_BUTTON)
                    boatSpeed += 0.004f;
                else if (button == GLUT_LEFT_BUTTON)
                    boatSpeed -= 0.003f;

                if (boatSpeed < 0.0f) boatSpeed = 0.0f;
                if (boatSpeed > 0.07f) boatSpeed = 0.07f;
            }
        }
    }
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    srand(time(NULL));
    glutCreateWindow("A Journey of Ship from Saint Martin to Singapore");
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(1400, 800);
    glutDisplayFunc(displayCover);
    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouseClick);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-50.0, 50.0, -40.0, 40.0);

    ///////////////// Scene-2 (Towfiq) ////////////////////
    glutTimerFunc(16, updateMiniship1, 0);
    glutTimerFunc(16, updateMiniship2, 0);
    glutTimerFunc(200, updateShip, 0);
    glutTimerFunc(250, updateHelicopter, 0);
    glutTimerFunc(15, updateWave, 0);
    glutTimerFunc(150, updateCloud, 0);

    ///////////////// Scene-3 (Hachib) ////////////////////

    glutTimerFunc(0, uUpdate, 0);

    ///////////////// Scene-4 (Afsana) ////////////////////

    glutTimerFunc(0, aupdate, 0);

    glutMainLoop();

    return 0;
}

