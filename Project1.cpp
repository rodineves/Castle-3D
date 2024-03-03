
#include<GL\glut.h>
#include <GL\glu.h>
#include <iostream>

double eyeX=0.0, eyeY=5.0, eyeZ=-10.0, refX = 0, refY=0,refZ=0;
double angle = 0;
GLfloat x=0.1, y=0.55, z=-140;

void quadradinhos(){
	
	/////// coluna_frente_esquerda//////////
	glPushMatrix();
		glColor3f(0.5, 0.5, 0.5);
		glScalef(0.12, 0.12, 0.12);
		glTranslatef(10.9, 9.4, -57.7);
		glutSolidCube(1.0);
	glPopMatrix();
	
	glPushMatrix();
		glColor3f(0.5, 0.5, 0.5);
		glScalef(0.12, 0.12, 0.12);
		glTranslatef(13, 9.4, -57.7);
		glutSolidCube(1.0);
	glPopMatrix();
	
	glPushMatrix();
		glColor3f(0.5, 0.5, 0.5);
		glScalef(0.12, 0.12, 0.12);
		glTranslatef(13, 9.4, -59.49);
		glutSolidCube(1.0);
	glPopMatrix();
	
	glPushMatrix();
		glColor3f(0.5, 0.5, 0.5);
		glScalef(0.12, 0.12, 0.12);
		glTranslatef(10.9, 9.4, -59.49);
		glutSolidCube(1.0);
	glPopMatrix();
	
	/////// coluna_atras_esquerda//////////
	glPushMatrix();
		glColor3f(0.5, 0.5, 0.5);
		glScalef(0.12, 0.12, 0.12);
		glTranslatef(10.9, 9.4, -34);
		glutSolidCube(1.0);
	glPopMatrix();
	
	glPushMatrix();
		glColor3f(0.5, 0.5, 0.5);
		glScalef(0.12, 0.12, 0.12);
		glTranslatef(13, 9.4, -34);
		glutSolidCube(1.0);
	glPopMatrix();
	
	glPushMatrix();
		glColor3f(0.5, 0.5, 0.5);
		glScalef(0.12, 0.12, 0.12);
		glTranslatef(13, 9.4, -36);
		glutSolidCube(1.0);
	glPopMatrix();
	
	glPushMatrix();
		glColor3f(0.5, 0.5, 0.5);
		glScalef(0.12, 0.12, 0.12);
		glTranslatef(10.9, 9.4, -36);
		glutSolidCube(1.0);
	glPopMatrix();
	
	/////// coluna_atras_direita//////////
	
	glPushMatrix();
		glColor3f(0.5, 0.5, 0.5);
		glScalef(0.12, 0.12, 0.12);
		glTranslatef(-13, 9.4, -57.7);
		glutSolidCube(1.0);
	glPopMatrix();
	
	glPushMatrix();
		glColor3f(0.5, 0.5, 0.5);
		glScalef(0.12, 0.12, 0.12);
		glTranslatef(-11, 9.4, -57.7);
		glutSolidCube(1.0);
	glPopMatrix();
	
	glPushMatrix();
		glColor3f(0.5, 0.5, 0.5);
		glScalef(0.12, 0.12, 0.12);
		glTranslatef(-13, 9.4, -36);
		glutSolidCube(1.0);
	glPopMatrix();
	
	glPushMatrix();
		glColor3f(0.5, 0.5, 0.5);
		glScalef(0.12, 0.12, 0.12);
		glTranslatef(-11, 9.4, -36);
		glutSolidCube(1.0);
	glPopMatrix();
	
	/////// coluna_frente_direita//////////
	
	glPushMatrix();
		glColor3f(0.5, 0.5, 0.5);
		glScalef(0.12, 0.12, 0.12);
		glTranslatef(-13, 9.4, -34.7);
		glutSolidCube(1.0);
	glPopMatrix();
	
	glPushMatrix();
		glColor3f(0.5, 0.5, 0.5);
		glScalef(0.12, 0.12, 0.12);
		glTranslatef(-11, 9.4, -34.7);
		glutSolidCube(1.0);
	glPopMatrix();
	
	glPushMatrix();
		glColor3f(0.5, 0.5, 0.5);
		glScalef(0.12, 0.12, 0.12);
		glTranslatef(-13, 9.4, -59.49);
		glutSolidCube(1.0);
	glPopMatrix();
	
	glPushMatrix();
		glColor3f(0.5, 0.5, 0.5);
		glScalef(0.12, 0.12, 0.12);
		glTranslatef(-11, 9.4, -59.49);
		glutSolidCube(1.0);
	glPopMatrix();
}

void display() {
	
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(eyeX,eyeY,eyeZ,  refX,refY,refZ,  0,1,0);
	
	//chão
	glPushMatrix();
		glScalef(10, 0.010, 10);
		glTranslatef(0, 0, -0.5);
		glColor3f(0, 1, 0);
    	glutSolidCube(1.0);
    glPopMatrix();
	
	//parede_esquerda
	glPushMatrix();
		glColor3f(0.5, 0.5, 0.5);
		glScalef(0.15, 1.0, 2.8);
		glTranslatef(10, 0.2, -2);
		glutSolidCube(1.0);
	glPopMatrix();
	
	//parede_atras
	glPushMatrix();
		glColor3f(0.5, 0.5, 0.5);
		glRotatef(90, 0.0, 1.0, 0.0);
		glScalef(0.15, 1.0, 2.8);
		glTranslatef(27.5, 0.2, 0.01);
		glutSolidCube(1.0);
	glPopMatrix();
	
	//parede_direita
	glPushMatrix();
		glColor3f(0.5, 0.5, 0.5);
		glScalef(0.15, 1.0, 2.8);
		glTranslatef(-9.64, 0.2, -2);
		glutSolidCube(1.0);
	glPopMatrix();
	
	//parede_frente_esquerda
	glPushMatrix();
		glColor3f(0.5, 0.5, 0.5);
		glRotatef(90, 0.0, 1.0, 0.0);
		glScalef(0.15, 1.0, 1.2);
		glTranslatef(46, 0.2, 0.8);
		glutSolidCube(1.0);
	glPopMatrix();
	
	//parede_frente_direita
	glPushMatrix();
		glColor3f(0.5, 0.5, 0.5);
		glRotatef(90, 0.0, 1.0, 0.0);
		glScalef(0.15, 1.0, 1.2);
		glTranslatef(46, 0.2, -0.7);
		glutSolidCube(1.0);
	glPopMatrix();
	
	//parede_frente_cima
	glPushMatrix();
		glColor3f(0.5, 0.5, 0.5);
		glRotatef(90, 0.0, 1.0, 0.0);
		glScalef(0.15, 0.2, 1.2);
		glTranslatef(46, 3.16, 0.03);
		glutSolidCube(1.0);
	glPopMatrix();
	
	//coluna_frente_esquerda
	glPushMatrix();
		glColor3f(0.5, 0.5, 0.5);
		glScalef(0.4, 2.2, 0.4);
		glTranslatef(3.6, 0, -17.5);
		glutSolidCube(1.0);
	glPopMatrix();
	
	//coluna_frente_direita
	glPushMatrix();
		glColor3f(0.5, 0.5, 0.5);
		glScalef(0.4, 2.2, 0.4);
		glTranslatef(-3.6, 0, -17.5);
		glutSolidCube(1.0);
	glPopMatrix();
	
	//coluna_atras_direita
	glPushMatrix();
		glColor3f(0.5, 0.5, 0.5);
		glScalef(0.4, 2.2, 0.4);
		glTranslatef(-3.6, 0, -10.5);
		glutSolidCube(1.0);
	glPopMatrix();

	//coluna_atras_esquerda
	glPushMatrix();
		glColor3f(0.5, 0.5, 0.5);
		glScalef(0.4, 2.2, 0.4);
		glTranslatef(3.6, 0, -10.5);
		glutSolidCube(1.0);
	glPopMatrix();
	
	//quadradinhos em cima das colunas
	quadradinhos();
	
	//base_castelo
	glPushMatrix();;
		glColor3f(1, 0, 0);
		glScalef(1.5, 0.7, 1.4);
		glTranslatef(0, 0.5, -4);
		glutSolidCube(1.0);
	glPopMatrix();
	
	//coluna_castelo_esquerda
	glPushMatrix();;
		glColor3f(1, 1, 0);
		glScalef(0.4, 1.4, 0.4);
		glTranslatef(1.3, 0.5, -15.2);
		glutSolidCube(1.0);
	glPopMatrix();
	
	//coluna_castelo_direita
	glPushMatrix();;
		glColor3f(1, 1, 0);
		glScalef(0.4, 1.4, 0.4);
		glTranslatef(-1.3, 0.5, -15.2);
		glutSolidCube(1.0);
	glPopMatrix();
	
	//coluna_castelo_meio
	glPushMatrix();;
		glColor3f(1, 1, 0);
		glScalef(0.4, 2.3, 0.4);
		glTranslatef(0, 0.5, -13.2);
		glutSolidCube(1.0);
	glPopMatrix();
	
	//cone_esquerda
	glPushMatrix();;
		glColor3f(0, 1, 1);
		glRotatef(-90, 1, 0, 0);
		glScalef(0.7, 0.7, 0.7);
		glTranslatef(0.8, 8.6, 2);
		glutSolidCone(0.5, 1.0, 20, 20);
	glPopMatrix();
	
	//conedireita
	glPushMatrix();;
		glColor3f(0, 1, 1);
		glRotatef(-90, 1, 0, 0);
		glScalef(0.7, 0.7, 0.7);
		glTranslatef(-0.8, 8.6, 2);
		glutSolidCone(0.5, 1.0, 20, 20);
	glPopMatrix();
	
	//cone_meio
	glPushMatrix();;
		glColor3f(0, 1, 1);
		glRotatef(-90, 1, 0, 0);
		glScalef(0.7, 0.7, 0.7);
		glTranslatef(0, 7.5, 3.2);
		glutSolidCone(0.5, 1.0, 20, 20);
	glPopMatrix();
	
	//porta
	glPushMatrix();
		glColor3f(0.545, 0.27, 0.075);
		glRotatef(angle, 1, 0, 0);
		glScalef(0.5, 0.5, 0.05);
		//glTranslatef(0.1, 0.55, -140);
		glTranslatef(x, y, z);
		glutSolidCube(1.0);
	glPopMatrix();
	
	
	glutSwapBuffers();
}

void timer(int value)
{
	glutPostRedisplay();
	glutTimerFunc(1, timer, 0);
}

void reshape(GLsizei width, GLsizei height)
{
	if (height == 0){
		height = 1;
	}
		
	GLfloat aspect = (GLfloat)width / (GLfloat)height;
	glViewport(0, 0, width, height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0f, aspect, 0.1f, 100.0f); 
}

void keyboard(unsigned char key, int x, int y)
{
	switch (key) {
		case 'w': 
            eyeY+=0.1;
            break;
	    case 's': 
	        eyeY-=0.1;
	        break;
	    case 'd': 
	        eyeX-=0.1;
	        break;
	    case 'a': 
	        eyeX+=0.1;
	        break;
	    case 'o':  
	        eyeZ-=0.1;
	        break;
	    case 'i': 
	        eyeZ+=0.1;
	        break;
	}
	
	glutPostRedisplay();
}

void inicializa() { 

	GLfloat luzAmbiente[4]={0.2,0.2,0.2,1.0}; 
	GLfloat luzDifusa[4]={0.7,0.7,0.7,1.0};	   
	
	GLfloat posicaoLuz[4]={-30.0, -70.0, 50.0, 1.0};

	GLint especMaterial = 40;

	glClearColor(0.08f, 0.16f, 0.18f, 1.0f);
	
	glShadeModel(GL_SMOOTH);

	glMateriali(GL_FRONT,GL_SHININESS,especMaterial);

	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, luzAmbiente);

	glLightfv(GL_LIGHT0, GL_AMBIENT, luzAmbiente); 
	glLightfv(GL_LIGHT0, GL_DIFFUSE, luzDifusa );
	glLightfv(GL_LIGHT0, GL_POSITION, posicaoLuz );


	glEnable(GL_COLOR_MATERIAL);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_DEPTH_TEST);
}

int main(int argc, char **argv) {
	
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE);
	glutInitWindowSize(700, 540);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("CASTLE 3D");
	
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyboard);
	
	glClearDepth(1.0f);
	glDepthFunc(GL_LEQUAL);
	inicializa();
	
	glutMainLoop();
	return 0;
}

