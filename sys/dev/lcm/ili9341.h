#ifndef	__ILI9341_h__
#define	__ILI9341_h__
//	write your header here
#define LCD_X_MAX			240-1			//��Ļ��X���������
#define LCD_Y_MAX			320-1			//��Ļ��Y���������
			
#define LCD_XY_SWITCH		0				//��ʾʱX���Y�ɽ���
#define LCD_X_REV			0				//��ʾʱX�ᷴת
#define LCD_Y_REV			0				//��ʾʱY�ᷴת

#if LCD_XY_SWITCH == 0
	#define DIS_X_MAX		LCD_X_MAX
	#define DIS_Y_MAX		LCD_Y_MAX	
#endif

#if LCD_XY_SWITCH == 1
	#define DIS_X_MAX		LCD_Y_MAX
	#define DIS_Y_MAX		LCD_X_MAX	
#endif

#define LCD_INITIAL_COLOR	0x0000			//����LCD����ʼ��ʱ�ı���ɫ

#endif
