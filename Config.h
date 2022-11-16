#pragma once
#define SCREENSHOT_SAVE_DIR "C:/Users/Ethan/Documents/csgo_data/images/"     //where to save screenshots
#define LABEL_SAVE_DIR "C:/Users/Ethan/Documents/csgo_data/labels/"          //where to save labels 
#define SCREENSHOT_FILENAME_PREFIX "CSGO_"                                                 //Filename prefix
#define SCREENSHOT_FILE_TYPE ".png"                                                        //Image file format
#define SCREENSHOT_DELAY 60                                                                 //Increase this value if your screenshot has bounding box

extern int imgCnt;                    //File name begins with SCREENSHOT_FILENAME_PREFIX_imgCnt, if this is 0 then your first filename is SCREENSHOT_FILENAME_PREFIX_0, change this in dllmain

extern float boxHeightModifier;       //Currently 1.2 works fine, change this in dllmain if you wanna

extern int timer;                     //Dont change