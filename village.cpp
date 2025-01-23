#include <GL/glut.h>
#include <cmath> 

void drawHouse() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Set color to light green using glColor3f


    //river
    glColor3f(0.0f, 0.5f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-10.0f, 2.0f);
    glVertex2f(-10.0f, -2.0f);
    glVertex2f(10.0f, -2.0f);
    glVertex2f(10.0f, 2.0f);
    glEnd();
    // Green gress
    glColor3f(0.3f, 1.0f, 0.2f);
    glBegin(GL_POLYGON);
    glVertex2f(-10.0f, -2.0f);
    glVertex2f(10.0f, -2.0f);
    glVertex2f(10.0f, -10.0f);
    glVertex2f(-10.0f, -10.0f);
    glEnd();

    // Sun
    glColor3f(1.0f, 0.85f, 0.0f);
    float sunX = 1.0f, sunY = 8.0f, sunRadius = 1.0f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(sunX, sunY);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = sunRadius * cos(angle);
        float y = sunRadius * sin(angle);
        glVertex2f(sunX + x, sunY + y);
    }

    
    glEnd();
    //mountain 1
    glColor3f(0.5f, 0.5f, 0.5f);
    glBegin(GL_TRIANGLES);
    glVertex2f(10.0f, 2.0f); //right
    glVertex2f(2.0f, 2.0f); // left
    glVertex2f(6.0f, 10.0f); //top
    glEnd();
    //mountain 2
    glColor3f(0.5f, 0.5f, 0.5f);
    glBegin(GL_TRIANGLES);
    glVertex2f(2.0f, 2.0f); //right
    glVertex2f(-6.0f, 2.0f); // left
    glVertex2f(-2.0f, 10.0f); //top
    glEnd();


    //Boat part

        // Draw the tom part of the boat
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.5f, 0.2f); // Light brown for the deck
    glVertex2f(2.4f, -0.2f);
    glVertex2f(2.2f, 0.1f);
    glVertex2f(5.5f, 0.1f);
    glVertex2f(5.2f, -0.2f);
    glEnd();
    // Draw the bottom part of the boat
    glBegin(GL_POLYGON);
    glColor3f(0.55f, 0.27f, 0.07f);
    glVertex2f(2.7f, -0.6f);
    glVertex2f(2.4f, -0.2f);
    glVertex2f(5.2f, -0.2f);
    glVertex2f(4.7f, -0.6f);
    glEnd();
    // Draw the boat pal
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(4.0f, 1.0f);
    glVertex2f(4.0f, 0.1f);
    glVertex2f(4.7f, 0.4f);
    glEnd();




    // house full
    glColor3f(0.85f, 0.65f, 0.13f);
    glBegin(GL_POLYGON);
    glVertex2f(-9.0f, 2.0f);
    glVertex2f(-1.0f, 2.0f);
    glVertex2f(-1.0f, -3.0f);
    glVertex2f(-9.0f, -3.0f);
    glEnd();

    // tringle home
    glColor3f(0.6f, 0.3f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.0f, 2.0f);
    glVertex2f(-10.0f, 2.0f);
    glVertex2f(-5.0f, 6.0f);
    glEnd();

    // dorja
    glColor3f(0.95f, 0.95f, 0.95f);
    glBegin(GL_POLYGON);
    glVertex2f(-6.0f, 0.0f);
    glVertex2f(-6.0f, -3.0f);
    glVertex2f(-4.0f, -3.0f);
    glVertex2f(-4.0f, 0.0f);
    glEnd();

    //janala
    glColor3f(0.80f, 0.80f, 0.80f);
    glBegin(GL_POLYGON);
    glVertex2f(-8.5f, 0.0f);
    glVertex2f(-8.5f, -2.0f);
    glVertex2f(-7.0f, -2.0f);
    glVertex2f(-7.0f, 0.0f);
    glEnd();

    //janala
    glColor3f(0.80f, 0.80f, 0.80f);

    glBegin(GL_POLYGON);
    glVertex2f(-3.0f, 0.0f);
    glVertex2f(-1.5f, 0.0f);
    glVertex2f(-1.5f, -2.0f);
    glVertex2f(-3.0f, -2.0f);
    glEnd();





    //tree body
    glColor3f(0.36f, 0.25f, 0.20f);
    glBegin(GL_POLYGON);
    glVertex2f(-6.4f, 3.0f);
    glVertex2f(-6.2f, 3.0f);
    glVertex2f(-6.0f, -6.0f);
    glVertex2f(-6.5f, -6.0f);
    glEnd();

    //tree dale pata 1
    glColor3f(0.0f, 1.0f, 0.0f);
    float sunp = -6.3f, sunq = 3.5f, sunRadiu = -2.0f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(sunp, sunq);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = sunRadiu * cos(angle);
        float y = sunRadiu * sin(angle);
        glVertex2f(sunp + x, sunq + y);
    }
    glEnd();
    //tree dale pata 2
    glColor3f(0.0f, 1.0f, 0.0f);
    float suna = -6.3f, sunb = 5.5f, sunRadiua = -1.0f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(suna, sunb);
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = sunRadiua * cos(angle);
        float y = sunRadiua * sin(angle);
        glVertex2f(suna + x, sunb + y);
    }
    glEnd();






    glFlush();
}

void init() {
    glClearColor(0.529f, 0.808f, 0.922f, 1.0f);

    gluOrtho2D(-10, 10, -10, 10);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Simple House in OpenGL");
    glutInitWindowSize(1920, 1080);
    init();
    glutDisplayFunc(drawHouse);
    glutMainLoop();
    return 0;
}