
#include "i51KitAde.h"
#include "Hello3D.h"
#include "GL.h"
#include "glut.h"

i51KIT_STATIC_KIT_DEF(Adapter);
extern void glMatrixAdd ( GLint model ,  GLfloat x , GLfloat y , GLfloat z ) ;
extern void glVertex3f (float,float,float) ;

iKIT iBOOL i51KitMain ( iS32 aid , iU32 message , void* parameter )
{

	//	TODO :	��Ϣѭ��

	switch ( message )
	{
		case i51_MSG_PAINT :

		break ;
	
		case i51_MSG_RUN :
		break ;
		
		case i51_MSG_INIT :
		{

			iU32* panel = 0 ;
			
			i51KIT_STATIC_KIT_SET(Adapter,parameter);
			i51KIT_STATIC_KIT_ASSERT(Adapter);

			panel = i51AdeMmiGetPanel () ;
			glutInit ( 0 , 0 ) ;
			glClearColor ( 1.0 , 0.0 , 0.0 , 1.0 ) ;
			glutSetPanel ( (void*)panel[1] ) ;
			glViewport ( 0 , 0 , 240 , 320 ) ;
			gluOrtho2D ( -240.0 , 240.0 , -320.0 , 320.0 ) ;
			gluPerspective ( 0 , 1 , -1 , -100 ) ;
			glColor3f ( 0.0 , 1.0 , 0.0 ) ;
			glClear ( GL_COLOR_BUFFER_BIT ) ;

			glBegin ( GL_LINES ) ;
			glVertex3f ( 0.0 , 0.0 , -1.0 ) ;
			glVertex3f ( 240.0 , 320.0 , -1.0 ) ;
			glEnd () ;
			glFlush () ;

		}
		break ;
		
		case i51_MSG_PAUSE :
		break ;

		case i51_MSG_EXIT :
		break ;
		

	}

	

	return iTRUE ;

}

iKIT iU32* i51KitPort ()
{

	//	TODO : Initialize API Port for external layer
	
	//	i51KIT_DYNAMIC_KIT_MAPING_BEGIN(DlDemo)
	//	i51KIT_DYNAMIC_KIT_MAPING_END 

	//	return i51KIT_DYNAMIC_KIT_GET_MAPING(DlDemo) ;

	return 0 ;

}
