#include"gl/glut.h"
#include"stdio.h"
#include"iostream"
#include"fstream"
#include <string>
using namespace std;

void introscreen();

float py = 76, px = 76, deltay = 1; int counter = 0;
void reshape(int width, int height)
{
    //if (height == 0) { height = 1; }
    float ratio = ((float)width / (float)height);
    glViewport(0, 0, (float)width, (float)height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    if (width >= height)
    {
        gluOrtho2D(-1.0 * ratio, 1.0 * ratio, -1.0, 1.0);
    }
    else
    {
        gluOrtho2D(-1.0, 1.0, -1.0 / ratio, 1.0 / ratio);
    }

    glClearColor(1, 1, 1, 1);
}

void display() {

    glClearColor(0.3f, 0.3f, 0.3f, 5);
    glClear(GL_COLOR_BUFFER_BIT);
    for (int j = 0; j < 450; j += 51) {
        for (int i = 0; i < 450; i += 51) {

            glBegin(GL_POLYGON);
            glColor3f(0.6, 0.6, 0.6);
            if (j == 153)j += 5;
            if (i == 153)i += 5;
            if (j == 311)j += 5;
            if (i == 311)i += 5;
            glVertex2f(i + 50, j + 50);
            glVertex2f(i + 100, j + 50);
            glVertex2f(i + 100, j + 100);
            glVertex2f(i + 50, j + 100);

            glEnd();
        }
    }


    glPointSize(30);
    glBegin(GL_POINTS);
    glColor3f(.9, .8, .8);
    glVertex2f(px, py);
    glEnd();
    glClearColor(.5, 0, 1, 0);

    for (int i = 0; i < 450; i += 51) {
        glBegin(GL_POLYGON);
        if (i == 153)i += 5;
        if (i == 311)i += 5;
        glColor3f(.6, .6, 0.6);
        glVertex2f(i + 50, 15);
        glVertex2f(i + 100, 15);
        glVertex2f(i + 100, 45);
        glVertex2f(i + 50, 45);
        glEnd();
    }


    glutPostRedisplay();
    introscreen();
    glFlush();
    glutPostRedisplay();

}

void renderbitmap(float x, float y, void* font, char* string) {
    char* c;
    glRasterPos2f(x, y);
    for (c = string; *c != '\0'; c++) {
        glutBitmapCharacter(font, *c);
    }


}
int px1 = 74, py1 = 20, r = 1, c = 0;
int px2 = 124, py2 = 20;
int px3 = 174, py3 = 20;
int px4 = 224, py4 = 20;
int px5 = 274, py5 = 20;
int px6 = 324, py6 = 20;
int px7 = 374, py7 = 20;
int px8 = 424, py8 = 20;
int px9 = 474, py9 = 20;
void introscreen() {
    int k = 74;
    int  m = 4;
    glColor3f(c, 0, 0);
    char  buf[100] = { 0 };
    {
        sprintf_s(buf, "2");
        renderbitmap(k, 74, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "8");
        renderbitmap(k + 50, 74, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "4");
        renderbitmap(k + 50 * 2, 74, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "7");
        renderbitmap(k + 50 * 3, 74, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "3");
        renderbitmap(k + 50 * 5, 74, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "6");
        renderbitmap(k + 50 * 6, 74, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "9");
        renderbitmap(k + 50 * 7, 74, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "1");
        renderbitmap(k + 50 * 8, 74, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        //
        sprintf_s(buf, "3");
        renderbitmap(k, 74 + 50, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "6");
        renderbitmap(k + 50 * 2, 74 + 50, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "2");
        renderbitmap(k + 50 * 3, 74 + 50, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "1");
        renderbitmap(k + 50 * 4, 74 + 50, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "8");
        renderbitmap(k + 50 * 5, 74 + 50, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "5");
        renderbitmap(k + 50 * 6, 74 + 50, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "4");
        renderbitmap(k + 50 * 7, 74 + 50, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "7");
        renderbitmap(k + 50 * 8, 74 + 50, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        //
        sprintf_s(buf, "1");
        renderbitmap(k, 74 + 50 * 2, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "5");
        renderbitmap(k + 50, 74 + 50 * 2, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "7");
        renderbitmap(k + 50 * 2, 74 + 50 * 2, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "4");
        renderbitmap(k + 50 * 3, 74 + 50 * 2, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "9");
        renderbitmap(k + 50 * 4, 74 + 50 * 2, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "6");
        renderbitmap(k + 50 * 5, 74 + 50 * 2, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "2");
        renderbitmap(k + 50 * 6, 74 + 50 * 2, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "8");
        renderbitmap(k + 50 * 8, 74 + 50 * 2, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        //
        sprintf_s(buf, "5");
        renderbitmap(k, 74 + 50 * 3, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "4");
        renderbitmap(k + 50, 74 + 50 * 3, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "9");
        renderbitmap(k + 50 * 2, 74 + 50 * 3, GLUT_BITMAP_TIMES_ROMAN_24, buf);

        sprintf_s(buf, "2");
        renderbitmap(k + 50 * 4, 74 + 50 * 3, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "7");
        renderbitmap(k + 50 * 5, 74 + 50 * 3, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "3");
        renderbitmap(k + 50 * 6, 74 + 50 * 3, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "1");
        renderbitmap(k + 50 * 7, 74 + 50 * 3, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "6");
        renderbitmap(k + 50 * 8, 74 + 50 * 3, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        //
        sprintf_s(buf, "8");
        renderbitmap(k, 74 + 50 * 4, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "3");
        renderbitmap(k + 50, 74 + 50 * 4, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "1");
        renderbitmap(k + 50 * 2, 74 + 50 * 4, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "6");
        renderbitmap(k + 50 * 3, 74 + 50 * 4, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "4");
        renderbitmap(k + 50 * 4, 74 + 50 * 4, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "9");
        renderbitmap(k + 50 * 5, 74 + 50 * 4, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "7");
        renderbitmap(k + 50 * 6, 74 + 50 * 4, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "5");
        renderbitmap(k + 50 * 7, 74 + 50 * 4, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "2");
        renderbitmap(k + 50 * 8, 74 + 50 * 4, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        //
        sprintf_s(buf, "6");
        renderbitmap(k, 74 + 50 * 5, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "7");
        renderbitmap(k + 50, 74 + 50 * 5, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "2");
        renderbitmap(k + 50 * 2, 74 + 50 * 5, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "5");
        renderbitmap(k + 50 * 3, 74 + 50 * 5, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "3");
        renderbitmap(k + 50 * 4, 74 + 50 * 5, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "1");
        renderbitmap(k + 50 * 5, 74 + 50 * 5, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "4");
        renderbitmap(k + 50 * 6, 74 + 50 * 5, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "8");
        renderbitmap(k + 50 * 7, 74 + 50 * 5, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "9");
        renderbitmap(k + 50 * 8, 74 + 50 * 5, GLUT_BITMAP_TIMES_ROMAN_24, buf);

        //
        sprintf_s(buf, "9");
        renderbitmap(k, 74 + 50 * 6, GLUT_BITMAP_TIMES_ROMAN_24, buf);

        sprintf_s(buf, "8");
        renderbitmap(k + 50 * 2, 74 + 50 * 6, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "3");
        renderbitmap(k + 50 * 3, 74 + 50 * 6, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "7");
        renderbitmap(k + 50 * 4, 74 + 50 * 6, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "4");
        renderbitmap(k + 50 * 5, 74 + 50 * 6, GLUT_BITMAP_TIMES_ROMAN_24, buf);

        sprintf_s(buf, "6");
        renderbitmap(k + 50 * 7, 74 + 50 * 6, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "5");
        renderbitmap(k + 50 * 8, 74 + 50 * 6, GLUT_BITMAP_TIMES_ROMAN_24, buf);

        //
        sprintf_s(buf, "4");
        renderbitmap(k, 74 + 50 * 7, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "1");
        renderbitmap(k + 50, 74 + 50 * 7, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "5");
        renderbitmap(k + 50 * 2, 74 + 50 * 7, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "9");
        renderbitmap(k + 50 * 3, 74 + 50 * 7, GLUT_BITMAP_TIMES_ROMAN_24, buf);

        sprintf_s(buf, "2");
        renderbitmap(k + 50 * 5, 74 + 50 * 7, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "8");
        renderbitmap(k + 50 * 6, 74 + 50 * 7, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "7");
        renderbitmap(k + 50 * 7, 74 + 50 * 7, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "3");
        renderbitmap(k + 50 * 8, 74 + 50 * 7, GLUT_BITMAP_TIMES_ROMAN_24, buf);

        //

        sprintf_s(buf, "6");
        renderbitmap(k + 50, 74 + 50 * 8, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "3");
        renderbitmap(k + 50 * 2, 74 + 50 * 8, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "1");
        renderbitmap(k + 50 * 3, 74 + 50 * 8, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "8");
        renderbitmap(k + 50 * 4, 74 + 50 * 8, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "5");
        renderbitmap(k + 50 * 5, 74 + 50 * 8, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "9");
        renderbitmap(k + 50 * 6, 74 + 50 * 8, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "2");
        renderbitmap(k + 50 * 7, 74 + 50 * 8, GLUT_BITMAP_TIMES_ROMAN_24, buf);
    }

    {
        sprintf_s(buf, "1");
        renderbitmap(px1, py1, GLUT_BITMAP_TIMES_ROMAN_24, buf);

        sprintf_s(buf, "2");
        renderbitmap(px2, py2, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "3");
        renderbitmap(px3, py3, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "4");
        renderbitmap(px4, py4, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "5");
        renderbitmap(px5, py5, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "6");
        renderbitmap(px6, py6, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "7");
        renderbitmap(px7, py7, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "8");
        renderbitmap(px8, py8, GLUT_BITMAP_TIMES_ROMAN_24, buf);
        sprintf_s(buf, "9");
        renderbitmap(px9, py9, GLUT_BITMAP_TIMES_ROMAN_24, buf);
    }
    glColor3f(1, 1, .5);
    if (counter == 9) {
        sprintf_s(buf, "%s", "Congraturlation");
        renderbitmap(200, 300,GLUT_BITMAP_TIMES_ROMAN_24, buf);
    }
}

void move_up() {
    if (py < 450) {
        py += 51;
    }
}void move_down() {
    if (py > 76) {
        py -= 51;
    }
}void move_left() {
    if (px > 76) {
        px -= 51;
    }
}void move_right() {
    if (px < 450) {
        px += 51;
    }
}

void keyboard1(int key, int x, int y) {
    if (key == GLUT_KEY_UP) {
        move_up();
    }
    else if (key == GLUT_KEY_DOWN) {
        move_down();
    }
    else if (key == GLUT_KEY_LEFT) {
        move_left();
    }
    else if (key == GLUT_KEY_RIGHT) {
        move_right();
    }

    if (key == GLUT_KEY_F1) {

    }
    glutPostRedisplay();
}
int xpos, player1, i;

void myKey(unsigned char key, int x, int y)
{
    if ((px == 382 && py == 382) || (px == 76 + 51 && py == 76 + 51 * 6) || (px == 76 + 51 * 7 && py == 76 + 51 * 2)
        || (px == 76 + 51 * 8 && py == 76 + 51 * 8) || (px == 76 + 51 * 4 && py == 76) || (px == 76 + 51 * 4 && py == 76 + 51 * 7)
        || (px == 76 && py == 76 + 51 * 8) || (px == 76 + 51 * 3 && py == 76 + 51 * 3) || (px == 76 + 51 && py == 76 + 51)) {
        if (key == '1') {
            counter++;
            px1 = px;
            py1 = py;
            r = 1;
            if (px1 != 382 || py1 != 382) {
                if (px1 != 74 || py1 != 20) { c = 255; }

            }
        }
        else if (key == '2') {
            counter++;
            px2 = px;
            py2 = py;
            r = 2;
            if (px2 != 76 + 51 || py2 != 76 + 51 * 6) {
                if (px2 != 74 + 51 && py2 != 20) { c = 255; }

            }
        }
        else if (key == '3') {
            counter++;
            px3 = px;
            py3 = py;
            r = 3;
            if (px3 != 76 + 51 * 7 || py3 != 76 + 51 * 2) {
                if (px3 != 74 + 51 * 2 || py3 != 20) { c = 255; }

            }
        }
        else if (key == '4') {
            counter++;
            px4 = px;
            py4 = py;
            r = 4;
            if (px4 != 76 + 51 * 8 || py4 != 76 + 51 * 8) {
                if (px4 != 74 + 51 * 3 && py4 != 20) { c = 255; }
            }

        }
        else if (key == '5') {
            counter++;
            px5 = px;
            py5 = py;
            r = 5;
            if (px5 != 76 + 51 * 4 || py5 != 76) {
                if (px5 != 74 + 51 * 4 || py5 != 20) { c = 255; }

            }
        }
        else if (key == '6') {
            counter++;
            px6 = px;
            py6 = py;
            r = 6;
            if (px6 != 76 + 51 * 4 || py6 != 76 + 51 * 7) {
                if (px6 != 74 + 51 * 5 || py6 != 20) { c = 255; }
            }

        }
        else if (key == '7') {
            counter++;
            px7 = px;
            py7 = py;
            r = 7;
            if (px7 != 76 || py7 != 76 + 51 * 8) {
                if (px7 != 74 + 51 * 6 || py7 != 20) { c = 255; }

            }
        }
        else if (key == '8') {
            counter++;
            px8 = px;
            py8 = py;
            r = 8;
            if (px8 != 76 + 51 * 3 || py8 != 76 + 51 * 3) {
                if (px8 != 74 + 51 * 7 || py8 != 20) { c = 255; }

            }
        }
        else if (key == '9') {
            counter++;
            cout << counter;
            px9 = px;
            py9 = py;
            r = 9;
            if (px9 != 76 + 51 || py9 != 76 + 51) {
                if (px9 != 74 + 51 * 8 || py9 != 20) { c = 255; }

            }
        }
    }
    if (key == 'd' && r==1) {
        px1 = 74;
        py1 = 20;
        counter--;
        c = 0;
    }
    if (key == 'd' && r==2) {
        px2 = 74 + 50;
        py2 = 20;
        counter--;
        c = 0;
    }
    if (key == 'd' && r==3) {
        px3 = 74 + 50 * 2;
        py3 = 20;
        counter--;
        c = 0;
    }
    if (key == 'd' && r==4) {
        px4 = 74 + 50 * 3;
        py4 = 20;
        counter--;
        c = 0;
    }
    if (key == 'd' && r == 5) {
        px5 = 74 + 50 * 4;
        py5 = 20;
        counter--;
        c = 0;
    }
    if (key == 'd' && r == 6) {
        px6 = 74 + 50 * 5;
        py6 = 20; 
        counter--;
        c = 0;
    }
    if (key == 'd' && r == 7) {
        px7 = 74 + 50 * 6;
        py7 = 20;
        counter--;
        c = 0;
    }
    if (key == 'd' && r == 8) {
        px8 = 74 + 50 * 7;
        py8 = 20;
        counter--;
        c = 0;
    }
    if (key == 'd' && r == 9) {
        px9 = 74 + 50 * 8;
        py9 = 20;
        counter--;
        c = 0;
    }
    
    glFlush();

}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(600, 600);
    glutCreateWindow("SUDOKU");
    gluOrtho2D(0, 550, 0, 550);
    glutSpecialFunc(keyboard1);
    glutKeyboardFunc(myKey);
       glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    glutIdleFunc(display);
  


    glutMainLoop();
}