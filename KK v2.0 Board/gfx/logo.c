/*
 * logo.c
 *
 * Created: 15.08.2012 20:19:04
 *  Author: OliverS
 *
 * $Id: logo.c 28 2012-08-15 18:28:26Z olischulz24@googlemail.com $
 */ 

#include "../Include/Glyphs.h"

const glyph_t glyLogo PROGMEM = { 64, 64,
{
	//                                                                 
	//                           #####                                 
	//                         ########                                
	//                       ###########                               
	//                      #############                              
	//                     ##############                 #######      
	//      ############################# #########################    
	//     ############################## ##########################   
	//     ##            ################             ############# #  
	//     ##           #################            ################  
	//     ##           ####### #########           ################   
	//     ##          #######   ########           ################   
	//     ##          #######   #######           #################   
	//     ##          ######## ########          ##################   
	//     ##          #################          #######  ######## #  
	//     ##         #################           #######  ######## #  
	//     ##          ###############           ########  ######## #  
	//     ##          ###############           ################# ##  
	//     ##          ##############            ################# ##  
	//     ##          ############# #           ################  ##  
	//     ##           ##########  ###          ################  ##  
	//     ##            ######## ####           ###############   ##  
	//     ##             ####   ######        ################    ##  
	//     ##                   #######       ################     ##  
	//     ##                   #######     #################      ##  
	//     ##                    #######  #################        ##  
	//     ##                    ####### ###########  #            ##  
	//     ##                    ##################                ##  
	//     ##                    ################                  ##  
	//     ##                    ##############                    ##  
	//     ##                     ############                     ##  
	//     ##                    ###########                       ##  
	//     ##                    ##########                        ##  
	//     ##                   ##########                         ##  
	//     ##                  ############                        ##  
	//     ##                  ###########                         ##  
	//     ##         #      ##############                        ##  
	//     ##      #######  ###############                        ##  
	//     ##    ###########################                       ##  
	//     ##  ####################  #######                       ##  
	//     ##  ##################    #######    #                  ##  
	//     ## #################       ##############               ##  
	//     ##################         ###############              ##  
	//     #################          ################             ##  
	//     ##################         ################             ##  
	//     ####### #########           ###############             ##  
	//     ######   ########           ###############             ##  
	//     ######   ########          #################            ##  
	//    ######## ########           ################             ##  
	//    #################          #################             ##  
	//    #################          ######   ########             ##  
	//    ################          #######   ########             ##  
	//    ###############           #######  ########              ##  
	//    ###############           #################              ##  
	//    ##############            #################              ##  
	//     ############            #################               ##  
	//     ##########               ###############                ##  
	//     #########                ###############                ##  
	//     ##  #                    #############                  ##  
	//     ##########################################################  
	//      ###################################  ###################   
	//                                ########                         
	//                                   #                             
	//                                                                 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x07, 0x0F, 0x1F, 0x1F, 0x3F, 0x3F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x3F, 0x1F, 0x0F, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x1F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0xC3, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFC, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7C, 0xC3, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xF8, 0xFC, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0xFC, 0xFD, 0xFB, 0xF7, 0xF7, 0xEF, 0xDF, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0xF8, 0xE0, 0x80, 0x7F, 0xFF, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x1F, 0x3F, 0x7F, 0x7F, 0xFE, 0xFE, 0xFC, 0xF8, 0xF8, 0xF0, 0xF0, 0xE0, 0xC0, 0xC0, 0xE0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x01, 0x01, 0x03, 0x03, 0x07, 0x07, 0x07, 0x0F, 0x07, 0x07, 0x07, 0x03, 0x03, 0x07, 0x0F, 0x0F, 0x3F, 0x7F, 0xFF, 0xFF, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x3F, 0x7F, 0xFF, 0xFF, 0xFC, 0xF8, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE8, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0x7F, 0x7F, 0xFF, 0x7F, 0x7F, 0x7F, 0x3F, 0x1F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x1F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC7, 0xC7, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xF0, 0xF8, 0xD8, 0xD8, 0xF8, 0xD8, 0xD8, 0xD8, 0xD8, 0x98, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xF8, 0xF8, 0xFC, 0xFC, 0xFC, 0xFE, 0xFC, 0xFC, 0xFC, 0xFC, 0xF8, 0xF0, 0xF0, 0xD8, 0xD8, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xF8, 0xF0, 0x00, 0x00, 
} };
