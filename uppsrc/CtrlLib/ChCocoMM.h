#ifndef _CtrlLib_ChMacMM_h_
#define _CtrlLib_ChMacMM_h_

enum ChCocoControlTypes {
	COCO_BUTTON,
	COCO_CHECKBOX,
	COCO_RADIOBUTTON,
	COCO_SCROLLTHUMB,
	COCO_SCROLLTRACK,
	COCO_BRUSH,
	COCO_NSCOLOR,
};

enum ChCocoNSColor {
	COCO_TEXT,
	COCO_PAPER,
	COCO_SELECTEDTEXT,
	COCO_SELECTEDPAPER,
	COCO_DISABLED,
};
	
void Coco_ThemePaint(void *cgcontext, const Upp::Rect& where, int type,
                     int value, int status, bool focus);

int  Coco_Metric(int k);

#endif