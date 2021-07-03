                                                  /*Anyone is free to copy, modify, publish, use, compile or
                                                    distribute this software, either in source code form or as a compiled
                                                    binary, for non-commercial use only. (i.e. YOU MAY NOT SELL IT)
                                                    John B 03/07/2021

                                                    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
                                                    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
                                                    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
                                                    IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
                                                    OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
                                                    ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
                                                    OTHER DEALINGS IN THE SOFTWARE.*/


//GLCD FontName : San_Diego18x24
//GLCD FontSize : 18 x 24

const unsigned short Number_Font[] = {
        0x80, 0xFF, 0x01, 0xF0, 0xFF, 0x0F, 0xFC, 0xFF, 0x3F, 0xFE, 0xFF, 0x7F, 0xFE, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 0xC0, 0x01, 0x00, 0x80, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0x03, 0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0x7F, 0xFE, 0xFF, 0x7F, 0xFC, 0xFF, 0x3F, 0xF0, 0xFF, 0x0F, 0x80, 0xFF, 0x01, 0x00, 0x00, 0x00,  // Code for char 0
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x60, 0x0E, 0x00, 0x60, 0xFE, 0xFF, 0x7F, 0xFE, 0xFF, 0x7F, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x60, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 1
        0x78, 0x00, 0x70, 0xFC, 0x01, 0x78, 0xFE, 0x01, 0x38, 0xFE, 0x01, 0x3D, 0xFF, 0x81, 0x3D, 0xFF, 0xC1, 0x3C, 0xF1, 0xE0, 0x3C, 0x01, 0x70, 0x7C, 0x00, 0x78, 0x7C, 0x03, 0x7E, 0xF8, 0xFF, 0x3F, 0xF8, 0xFF, 0x3F, 0xF8, 0xFE, 0x1F, 0xF8, 0xFE, 0x1F, 0xF8, 0xFC, 0x0F, 0x78, 0xF0, 0x03, 0x3E, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00,  // Code for char 2
        0x78, 0x00, 0x0F, 0xFC, 0x80, 0x3F, 0xFE, 0x81, 0x7F, 0xFE, 0x81, 0x7F, 0xFF, 0x81, 0xFF, 0xFF, 0x01, 0xFF, 0xF1, 0x00, 0x9E, 0x00, 0x08, 0x00, 0x02, 0x18, 0x80, 0x01, 0x1C, 0x80, 0x03, 0x3C, 0xC0, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFE, 0xF7, 0x7F, 0xFE, 0xF7, 0x7F, 0xFC, 0xE3, 0x3F, 0xF0, 0x81, 0x0F, 0x00, 0x00, 0x00,  // Code for char 3
        0x00, 0x80, 0x03, 0x00, 0xE0, 0x03, 0x00, 0x70, 0x03, 0x00, 0x3C, 0x03, 0x00, 0x0E, 0x03, 0x00, 0x07, 0x03, 0x80, 0x01, 0x63, 0x00, 0x00, 0x70, 0xF0, 0xFF, 0x7F, 0xFC, 0xFF, 0x7F, 0xFE, 0xFF, 0x7F, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x63, 0x00, 0x00, 0x63, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 4
        0x00, 0x00, 0x1E, 0x38, 0x3F, 0x3F, 0x3E, 0x3F, 0x7F, 0x3E, 0x1C, 0x7F, 0x3E, 0x0C, 0xFF, 0x3E, 0x06, 0xDF, 0x3E, 0x06, 0xCE, 0x3E, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x3E, 0x06, 0x80, 0x3E, 0x0E, 0xC0, 0x3C, 0xFE, 0xFF, 0x1C, 0xFC, 0x7F, 0x1E, 0xFC, 0x7F, 0x0E, 0xF8, 0x3F, 0x00, 0xF0, 0x1F, 0x00, 0xC0, 0x07, 0x00, 0x00, 0x00,  // Code for char 5
        0x80, 0xFF, 0x01, 0xF0, 0xFF, 0x0F, 0xFC, 0xFF, 0x3F, 0xFE, 0xFF, 0x7F, 0xFE, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 0xC0, 0x01, 0x08, 0x80, 0x00, 0x0C, 0x00, 0x01, 0x0C, 0x80, 0x79, 0x1C, 0xC0, 0xFF, 0xFC, 0xFF, 0xFF, 0xFD, 0xFF, 0xFE, 0xF9, 0x7F, 0xFC, 0xF8, 0x7F, 0x78, 0xF0, 0x3F, 0x00, 0xC0, 0x0F, 0x00, 0x00, 0x00,  // Code for char 6
        0xC0, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x1F, 0x00, 0x3E, 0x3F, 0xC0, 0x7F, 0x3F, 0xE0, 0xFF, 0x3F, 0xF0, 0xFF, 0x7F, 0xF8, 0xFF, 0x7E, 0xFC, 0xFF, 0x7E, 0x3C, 0x78, 0x7C, 0x0E, 0x00, 0x7C, 0x02, 0x00, 0x7C, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x02, 0x00, 0x00,  // Code for char 7
        0xF0, 0x81, 0x0F, 0xFC, 0xE3, 0x3F, 0xFE, 0xF7, 0x7F, 0xFE, 0xF7, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x18, 0xC0, 0x01, 0x18, 0x80, 0x00, 0x00, 0x00, 0x01, 0x18, 0x80, 0x03, 0x18, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xF7, 0x7F, 0xFE, 0xF7, 0x7F, 0xFC, 0xE3, 0x3F, 0xF0, 0x81, 0x0F, 0x00, 0x00, 0x00,  // Code for char 8
        0xF0, 0x03, 0x00, 0xF8, 0x0F, 0x1E, 0xFE, 0x1F, 0x7F, 0xFE, 0x1F, 0x7F, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F, 0xFF, 0x07, 0x38, 0xDE, 0x03, 0x30, 0xC0, 0x00, 0x30, 0x00, 0x03, 0x10, 0xC0, 0x07, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0x7F, 0xFE, 0xFF, 0x7F, 0xFC, 0xFF, 0x3F, 0xF0, 0xFF, 0x0F, 0x80, 0xFF, 0x01, 0x00, 0x00, 0x00   // Code for char 9
        };


const unsigned char Number_Font_Start = 0;
const unsigned char Number_Font_Length_Bytes = 54;
const unsigned char Number_Font_Width = 18;
const unsigned char Number_Font_Height = 24;
const unsigned char Font_Page_Size =  Number_Font_Height /8;
const unsigned char Number_Font_Spacing = 1;

/*//GLCD FontName : San_Diego14x16
//GLCD FontSize : 14 x 16
const unsigned short Number_Font[] = {
         0xF0, 0x0F, 0xFC, 0x3F, 0xFE, 0x7F, 0xFE, 0x7F, 0xFF, 0xFF, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0xFF, 0xFF, 0xFE, 0x7F, 0xFE, 0x7F, 0xFC, 0x3F, 0xF0, 0x0F,  // Code for char 0
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x80, 0x02, 0xC0, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xC0, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 1
         0x00, 0xE0, 0x1C, 0xF0, 0x3E, 0x78, 0x3F, 0x7C, 0x3F, 0x7A, 0x1D, 0x7B, 0x80, 0xF9, 0xC1, 0xF9, 0xFF, 0xF1, 0xFF, 0xF0, 0xFE, 0xF0, 0x7E, 0x78, 0x3C, 0x38, 0x00, 0x00,  // Code for char 2
         0x00, 0x38, 0x1C, 0x7C, 0x3E, 0xFC, 0x3F, 0xFC, 0x3F, 0xB8, 0x1D, 0x80, 0x80, 0x00, 0x81, 0x81, 0xFF, 0xFF, 0xFF, 0xFF, 0x7E, 0x7F, 0x3C, 0x7E, 0x00, 0x3C, 0x00, 0x00,  // Code for char 3
         0x00, 0x00, 0x00, 0x0E, 0x00, 0x0F, 0x80, 0x0D, 0x60, 0x0C, 0x30, 0x8C, 0x00, 0x80, 0xFC, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x8C, 0x00, 0x8C, 0x00, 0x00,  // Code for char 4
         0x00, 0x00, 0x00, 0x38, 0xFF, 0x7D, 0xCF, 0xFC, 0x6F, 0xFC, 0x6F, 0xB8, 0x0F, 0x00, 0x6F, 0x80, 0xEF, 0xFF, 0xE7, 0xFF, 0xC7, 0x7F, 0x81, 0x3F, 0x00, 0x1F, 0x00, 0x00,  // Code for char 5
         0xF0, 0x0F, 0xFC, 0x3F, 0xFE, 0x7F, 0xFE, 0x7F, 0xFF, 0xFF, 0x01, 0x80, 0x80, 0x00, 0xC1, 0x80, 0xDD, 0x80, 0xDF, 0xFF, 0xDF, 0xFF, 0x9E, 0x7F, 0x8C, 0x3F, 0x00, 0x1F,  // Code for char 6
         0x00, 0x00, 0x1F, 0x00, 0x0E, 0x00, 0x0F, 0x00, 0x0F, 0x7C, 0x0F, 0xFF, 0x8F, 0xFF, 0xCF, 0xFF, 0xEE, 0x70, 0x3E, 0x00, 0x0E, 0x00, 0x06, 0x00, 0x03, 0x00, 0x00, 0x00,  // Code for char 7
         0x00, 0x3C, 0x3C, 0x7E, 0x7E, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0x81, 0x81, 0x00, 0x00, 0x00, 0x00, 0x81, 0x81, 0xFF, 0xFF, 0xFF, 0xFF, 0x7E, 0x7F, 0x3C, 0x7E, 0x00, 0x3C,  // Code for char 8
         0xF8, 0x00, 0xFC, 0x39, 0xFE, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0xBB, 0x00, 0x03, 0x01, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x7F, 0xFC, 0x3F, 0xF0, 0x0F, 0x00, 0x00   // Code for char 9
        };


const unsigned char Number_Font_Start = 0;
const unsigned char Number_Font_Length_Bytes = 28;
const unsigned char Number_Font_Width = 14;
const unsigned char Number_Font_Height = 16;
const unsigned char Font_Page_Size =  Number_Font_Height /8;
const unsigned char Number_Font_Spacing = 1;*/


//GLCD FontName : San_Diego34x35
//GLCD FontSize : 34 x 35

const unsigned short San_Diego34x35[] = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x80, 0x03, 0x1E, 0x00, 0x00, 0xC0, 0x03, 0x3E, 0xC0, 0xFF, 0xFF, 0x03, 0xFE, 0x81, 0xFF, 0xFF, 0x03, 0xFE, 0x07, 0xFC, 0xFF, 0x03, 
        0xFE, 0x3F, 0xE0, 0xFF, 0x03, 0xFE, 0xFF, 0x01, 0xC0, 0x03, 0xFE, 0xFF, 0x07, 0x80, 0x03, 0xFE, 0xFF, 0x3F, 0x00, 0x00, 0xFE, 0xFF, 0xFF, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0x07, 0x00, 
        0xC0, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0xFE, 0xFF, 0xFF, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0x03, 0x00, 0xC0, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0xFF, 0x3F, 0x00, 
        0x00, 0xE0, 0xFF, 0x07, 0x00, 0x00, 0xFC, 0xFF, 0x00, 0x00, 0x00, 0xFC, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0xC0, 0x03, 0xFE, 0xFF, 0xFF, 0xFF, 0x03, 
        0xFE, 0xFF, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0xFF, 0x03, 
        0xFE, 0xFF, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0xFF, 0x03, 0x1E, 0x00, 0x00, 0xC0, 0x03, 0x0E, 0x00, 0x00, 0x80, 0x03,  // Code for char LARGE M  170
        };


//GLCD FontName : San_Diego25x27
//GLCD FontSize : 25 x 27

const unsigned short San_Diego25x27[] = {
        0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x80, 0x03, 0x00, 0x00, 0xE0, 0x03, 0x00, 0x00, 0xFC, 0x03, 0x00, 0x80, 0xFF, 0x03, 0x00, 0xF8, 0xBF, 0x03, 0x80, 0xFF, 0x0F, 0x03, 0x00, 0x7F, 
        0x0E, 0x00, 0x1E, 0x00, 0x0E, 0x00, 0xFE, 0x00, 0x0E, 0x00, 0xFE, 0x0F, 0x0C, 0x00, 0xFE, 0x7F, 0x00, 0x00, 0xFE, 0xFF, 0x03, 0x03, 0xFE, 0xFF, 0xBF, 0x03, 0xFC, 0xFF, 0xFF, 0x03, 
        0xE0, 0xFF, 0xFF, 0x03, 0x00, 0xFE, 0xFF, 0x03, 0x00, 0xF0, 0xFF, 0x03, 0x00, 0x80, 0xFF, 0x03, 0x00, 0x00, 0xF8, 0x03, 0x00, 0x00, 0xC0, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 
        0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char A   100
        0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x03, 0x0E, 0x00, 0x80, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 
        0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x30, 0x80, 0x03, 0x1E, 0x78, 0xC0, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 
        0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0xFC, 0xCF, 0xFF, 0x01, 0xFC, 0xCF, 0xFF, 0x00, 0xF8, 0x87, 0xFF, 0x00, 0xE0, 0x01, 0x3E, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char B    200

        0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x03, 0x0E, 0x00, 0x80, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 
        0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x80, 0x03, 0x1E, 0x00, 0xC0, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 
        0xFC, 0xFF, 0xFF, 0x01, 0xFC, 0xFF, 0xFF, 0x01, 0xF8, 0xFF, 0xFF, 0x00, 0xF0, 0xFF, 0x7F, 0x00, 0xE0, 0xFF, 0x3F, 0x00, 0xC0, 0xFF, 0x1F, 0x00, 0x00, 0xFE, 0x03, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char D 300

        0x06, 0x00, 0x00, 0x03, 0x0E, 0x00, 0x80, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 
        0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0x0E, 0x00, 0x80, 0x03, 0x06, 0x00, 0x00, 0x03, 0x00, 0x70, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x06, 0x70, 0x00, 0x03, 0x0E, 0x70, 0x80, 0x03, 
        0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0x0E, 0x00, 
        0x80, 0x03, 0x06, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00,  // Code for char H  400
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x03, 0x0E, 0x00, 
        0x80, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 
        0x0E, 0x00, 0x80, 0x03, 0x06, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char I 500
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x80, 0xFF, 0x00, 0x00, 0x80, 0xFF, 0x01, 0x00, 0xC0, 0xFF, 0x03, 0x00, 0xC0, 0xFF, 0x07, 0x00, 0xC0, 
        0xFF, 0x07, 0x00, 0xC0, 0x3F, 0x07, 0x00, 0x80, 0x1F, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x00, 0x00, 0x06, 0x0E, 0x00, 0x00, 0x07, 0xFE, 0xFF, 0xFF, 0x07, 
        0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x01, 0xFE, 0xFF, 0xFF, 0x01, 0xFE, 0xFF, 0xFF, 0x00, 0xFE, 0xFF, 0x3F, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x06, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char J  600

        0x06, 0x00, 0x00, 0x03, 0x0E, 0x00, 0x80, 0x03, 0x1E, 0xFC, 0xFF, 0x03, 0xFE, 0xE0, 0xFF, 0x03, 0xFE, 0x83, 0xFF, 0x03, 0xFE, 0x1F, 0x80, 0x03, 0xFE, 0xFF, 0x00, 0x03, 0xFE, 0xFF, 
        0x03, 0x00, 0xF8, 0xFF, 0x1F, 0x00, 0xC0, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x03, 0x00, 0xF8, 0xFF, 0x03, 0x00, 0xE0, 0xFF, 0x00, 0x00, 0xFC, 0x1F, 0x00, 0x80, 0xFF, 0x01, 0x00, 
        0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x80, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 
        0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0x0E, 0x00, 0x80, 0x03,  // Code for char M 700
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x03, 0x0E, 0x00, 0x80, 0x03, 0x1E, 0xFE, 0xFF, 0x03, 0x3E, 0xFC, 0xFF, 0x03, 0xFE, 0xF0, 0xFF, 0x03, 0xFE, 0x03, 
        0x80, 0x03, 0xFE, 0x0F, 0x00, 0x03, 0xFE, 0x3F, 0x00, 0x00, 0xFC, 0x7F, 0x00, 0x00, 0xF0, 0xFF, 0x01, 0x00, 0xC0, 0xFF, 0x07, 0x00, 0x00, 0xFF, 0x1F, 0x00, 0x00, 0xFE, 0x3F, 0x00, 
        0x00, 0xF8, 0xFF, 0x00, 0x06, 0xE0, 0xFF, 0x03, 0x0E, 0xC0, 0xFF, 0x07, 0xFE, 0x1F, 0xFF, 0x07, 0xFE, 0x3F, 0xFC, 0x07, 0xFE, 0xFF, 0xF0, 0x07, 0x0E, 0x00, 0x00, 0x00, 0x06, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char N 800
        0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x03, 0x00, 0xC0, 0xFF, 0x1F, 0x00, 0xF0, 0xFF, 0x7F, 0x00, 0xF8, 0xFF, 0xFF, 0x00, 0xFC, 0xFF, 0xFF, 0x01, 0xFC, 0xFF, 0xFF, 0x01, 0xFE, 0xFF, 
        0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0x07, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x07, 0x03, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x06, 
        0x07, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x07, 0xFE, 0xFF, 0xFF, 0x03, 0xFE, 0xFF, 0xFF, 0x03, 0xFC, 0xFF, 0xFF, 0x01, 0xFC, 0xFF, 0xFF, 0x01, 0xF8, 0xFF, 0xFF, 0x00, 0xF0, 0xFF, 
        0x7F, 0x00, 0xC0, 0xFF, 0x1F, 0x00, 0x00, 0xFE, 0x03, 0x00,  // Code for char O 900

        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x07, 0xFC, 0x03, 0xF8, 0x1F, 0xFC, 0x03, 0xFC, 0x3F, 0xF8, 0x03, 0xFE, 0x7F, 
        0xC0, 0x03, 0xFF, 0xFF, 0x00, 0x07, 0x87, 0xFF, 0x00, 0x06, 0x03, 0xFF, 0x01, 0x06, 0x03, 0xFF, 0x03, 0x00, 0x00, 0xFE, 0x03, 0x02, 0x07, 0xFE, 0x07, 0x06, 0x07, 0xFC, 0x0F, 0x07, 
        0x07, 0xF8, 0xFF, 0x07, 0x1E, 0xF8, 0xFF, 0x03, 0xFE, 0xF0, 0xFF, 0x01, 0xFE, 0xE0, 0xFF, 0x00, 0xFE, 0x80, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00   // Code for char S 1000
        };


const unsigned char Letter_Font_Start = 0;
const unsigned char Letter_Font_Length_Bytes = 170;
const unsigned char Letter_Font_Width = 34;
const unsigned char Letter_Font_Height = 36;
const unsigned char Letter_Page_Size = 5;
const unsigned char Letter_Font_Spacing = 2;

// TFT display connections
unsigned char TFT_DataPort at PORTB;
sbit TFT_WR at LATA4_bit;       //25-WR_RA4
sbit TFT_RD at LATA3_bit;       //24-RD_RA3
sbit TFT_RS at LATA2_bit;       //This Is The #DC Pin  26-DC/RS_RA2
sbit TFT_CS at LATA1_bit;       //27-CS_RA1
sbit TFT_RST at LATA0_bit;      //28-RST_RA0

unsigned char TFT_DataPort_Direction at TRISB;
sbit TFT_WR_Direction at TRISA4_bit;      //25-WR_RA4
sbit TFT_RD_Direction at TRISA3_bit;      //24-RD_RA3
sbit TFT_RS_Direction at TRISA2_bit;      //D/C# BIT 26-DC/RS_RA2
sbit TFT_CS_Direction at TRISA1_bit;      //27-CS_RA1
sbit TFT_RST_Direction at TRISA0_bit;     //28-RST_RA0

void Write_Command_ST7565P(unsigned char cmd) {
  TFT_CS = 0;
  TFT_RS = 0;
  TFT_DataPort = cmd;
  TFT_WR = 0;     //write is active low
 // asm nop;      //Signals on D[7:0] will be latched at the rising edge of /WR signal.
  TFT_WR = 1;     //Writes On Rising Edge Of Write
  TFT_CS = 1;
}

void Write_Data_ST7565P(unsigned int _data) {
  TFT_CS = 0;
  TFT_RS = 1;
  TFT_DataPort = _data;
  TFT_WR = 0;    //write is active low
//  asm nop;     //Signals on D[7:0] will be latched at the rising edge of /WR signal.
  TFT_WR = 1;    //Writes On Rising Edge Of Write
  TFT_CS = 1;
}


// PCA9633 4-bit Fm+ I2C-bus LED driver  I2C   I2C-bus address = 0010 101x.
#define ADDRESS 0b11000100    //same as 0xC4  - 0xC4 = WRITE 0XC5 = READ
#define Start_Line_Bits 0b01000000
#define Page_Start_Bits 0b10110000

void Clear_Screen_Slow(){
     unsigned char x = 0;
     unsigned char y = 0;
     unsigned char Page_Number = 0;

     for (y=0; y<7; y++){
     Write_command_ST7565P(Page_Start_Bits | Page_Number);      //page address
     Write_command_ST7565P(0b00010000);      // 0 0 0 1 X7 X6 X5 X4 Set column address (MSB)
     Write_command_ST7565P(0b00000000);      //0 0 0 0 X3 X2 X1 X0 Set column address (LSB)

      for (x=0; x<128; x++){
       Write_Data_ST7565P(0x00);
       Delay_us(100);
      }
      Page_Number++;
     }
}


void Clear_Screen(){
     unsigned char x = 0;
     unsigned char y = 0;
     unsigned char Page_Number = 0;

     for (y=0; y<8; y++){
     Write_command_ST7565P(Page_Start_Bits | Page_Number);      //page address
     Write_command_ST7565P(0b00010000);      // 0 0 0 1 X7 X6 X5 X4 Set column address (MSB)
     Write_command_ST7565P(0b00000000);      //0 0 0 0 X3 X2 X1 X0 Set column address (LSB)

      for (x=0; x<128; x++){
       Write_Data_ST7565P(0x00);
      }
      Page_Number++;
     }
}


//      Initialise ST7565
//==================================
void Initialise_ST7565P(){

       Write_command_ST7565P(0xAE);  //Display OFF

       Write_command_ST7565P(0xE2);  //Software Reset
       Delay_ms(10);
   
       Write_command_ST7565P(0xA3);  //Bias Select: 1/7 duty
       Write_command_ST7565P(0xA1);  //SEG Direction: 0xA0 = normal; 0xA1 = reverse A1 = Scans Left To Right, Cable At Top
       Write_command_ST7565P(0xC0);  //COM Direction: 0xC0 = normal; 0xC8 = reverse C0 = Normal = Scans Top To Bottom Cable At Top
   
       Write_command_ST7565P(0x25);  //Regulation Ratio: R2/R0    affects contrast

       Write_command_ST7565P(0x81);  //Set Voltage Ref. Mode
       Write_command_ST7565P(26);   //Level Adjust To Suit Your Capacitors, Lower Value Id You Can See An Empty Square. ZERO TO 63
      
       Write_command_ST7565P(0x2F);  //Power Control - All ON (VB=VR=VF=1)
       
       Write_command_ST7565P(0xF8);  //BOOSTER LEVEL SET
       Write_command_ST7565P(0x00);  // TIMES 4
       
       Write_command_ST7565P(Start_Line_Bits | 0 );  //start line
       
       Clear_Screen();               // Serves As A Delay Whilst Also Clearing The Display Memory
       
       Write_command_ST7565P(0xA4);  //Normal Display
      
       Write_command_ST7565P(0xAF);  //Set Display ON   1 0 1 0 1 1 1 D

   //  Write_command_ST7565P(0xA7);     //1 0 1 0 0 1 1 INVINV =1, Invert Display

   //  Write_command_ST7565P(0xA5);        // 1 0 1 0 0 1 0 1 AP AP=1, SET ALL PIXEL ON
}

void Set_Column_Address(unsigned char Column_Address){

     Write_command_ST7565P(0b00010000 | (Column_Address)>>4);      // 0 0 0 1 X7 X6 X5 X4 Set column address (MSB)
     Write_command_ST7565P(0b00000000 | Column_Address &0x0F);      //0 0 0 0 X3 X2 X1 X0 Set column address (LSB)
}

void Set_Page(unsigned char Page){

    Write_command_ST7565P(Page_Start_Bits | Page);  //page address
     
}

  unsigned int line = 128;
  unsigned int Data = 128;
  signed short Page = 7;
  unsigned char x = 0;
  unsigned char y = 0;
  unsigned char Column_Address = 0;
  unsigned char Col = 0;

void Box_Display(){
unsigned char random = 0;


    for (y=0; y<7; y++){
    Set_Page(Page);
    Set_Column_Address(col);

    for (x=0; x<8; x++){
     Write_Data_ST7565P(Line);
    }
    Delay_us(30);
     random = Rand()%7;
    Line = Data + (Line>>1);

    if (Line>=255){
    
    Page = Page - 1;
      
    if (Page<random){ Page = 7;
      Col = Col + 10;
     }
    Line = 128; }

    if (Col >120){
     Col = 0;
     Clear_Screen_Slow();
     }
                               }
}

 unsigned int jj = 0;
 unsigned char i = 0;
 unsigned char Page_Start = 0;
 unsigned char Dataout = 0;
 unsigned char Column = 0;


void Write_Number_Zero(unsigned char Page_Start, unsigned char Column){

       Set_Page(Page_Start);
       Set_Column_Address(Column);
       i = Page_Start;

     for (jj=Number_Font_Start; jj<Number_Font_Length_Bytes; jj++){

         Dataout = Number_Font[jj];

         Set_Page(Page_Start);

         Set_Column_Address(Column);

         Write_Data_ST7565P(Dataout);

         Page_Start++;

         if (Page_Start>(Font_Page_Size-1) + i){
           Page_Start = i;
           Column++;
          }
     }
}


void Write_Number_One(unsigned char Page_Start, unsigned char Column){

       Set_Page(Page_Start);
       Set_Column_Address(Column);
       i = Page_Start;

     for (jj=Number_Font_Length_Bytes; jj<Number_Font_Length_Bytes*2; jj++){

         Dataout = Number_Font[jj];

         Set_Page(Page_Start);

         Set_Column_Address(Column);

         Write_Data_ST7565P(Dataout);

         Page_Start++;

         if (Page_Start>(Font_Page_Size-1) + i){
           Page_Start = i;
           Column++;
          }
     }
}



void Write_Number_Two(unsigned char Page_Start, unsigned char Column){

       Set_Page(Page_Start);
       Set_Column_Address(Column);
       i = Page_Start;

     for (jj=Number_Font_Length_Bytes*2; jj<Number_Font_Length_Bytes*3; jj++){

         Dataout = Number_Font[jj];

         Set_Page(Page_Start);

         Set_Column_Address(Column);

         Write_Data_ST7565P(Dataout);

         Page_Start++;

         if (Page_Start>(Font_Page_Size-1) + i){
           Page_Start = i;
           Column++;
          }
     }
}



void Write_Number_Three(unsigned char Page_Start, unsigned char Column){

       Set_Page(Page_Start);
       Set_Column_Address(Column);
       i = Page_Start;

     for (jj=Number_Font_Length_Bytes*3; jj<Number_Font_Length_Bytes*4; jj++){

         Dataout = Number_Font[jj];

         Set_Page(Page_Start);

         Set_Column_Address(Column);

         Write_Data_ST7565P(Dataout);

         Page_Start++;

         if (Page_Start>(Font_Page_Size-1) + i){
           Page_Start = i;
           Column++;
          }
     }
}



void Write_Number_Four(unsigned char Page_Start, unsigned char Column){

       Set_Page(Page_Start);
       Set_Column_Address(Column);
       i = Page_Start;

     for (jj=Number_Font_Length_Bytes*4; jj<Number_Font_Length_Bytes*5; jj++){

         Dataout = Number_Font[jj];

         Set_Page(Page_Start);

         Set_Column_Address(Column);

         Write_Data_ST7565P(Dataout);

         Page_Start++;

         if (Page_Start>(Font_Page_Size-1) + i){
           Page_Start = i;
           Column++;
          }
     }
}



void Write_Number_Five(unsigned char Page_Start, unsigned char Column){

       Set_Page(Page_Start);
       Set_Column_Address(Column);
       i = Page_Start;

     for (jj=Number_Font_Length_Bytes*5; jj<Number_Font_Length_Bytes*6; jj++){

         Dataout = Number_Font[jj];

         Set_Page(Page_Start);

         Set_Column_Address(Column);

         Write_Data_ST7565P(Dataout);

         Page_Start++;

         if (Page_Start>(Font_Page_Size-1) + i){
           Page_Start = i;
           Column++;
          }
     }
}


void Write_Number_Six(unsigned char Page_Start, unsigned char Column){

       Set_Page(Page_Start);
       Set_Column_Address(Column);
       i = Page_Start;

     for (jj=Number_Font_Length_Bytes*6; jj<Number_Font_Length_Bytes*7; jj++){

         Dataout = Number_Font[jj];

         Set_Page(Page_Start);

         Set_Column_Address(Column);

         Write_Data_ST7565P(Dataout);

         Page_Start++;

         if (Page_Start>(Font_Page_Size-1) + i){
           Page_Start = i;
           Column++;
          }
     }
}


void Write_Number_Seven(unsigned char Page_Start, unsigned char Column){

       Set_Page(Page_Start);
       Set_Column_Address(Column);
       i = Page_Start;

     for (jj=Number_Font_Length_Bytes*7; jj<Number_Font_Length_Bytes*8; jj++){

         Dataout = Number_Font[jj];

         Set_Page(Page_Start);

         Set_Column_Address(Column);

         Write_Data_ST7565P(Dataout);

         Page_Start++;

         if (Page_Start>(Font_Page_Size-1) + i){
           Page_Start = i;
           Column++;
          }
     }
}



void Write_Number_Eight(unsigned char Page_Start, unsigned char Column){

       Set_Page(Page_Start);
       Set_Column_Address(Column);
       i = Page_Start;

     for (jj=Number_Font_Length_Bytes*8; jj<Number_Font_Length_Bytes*9; jj++){

         Dataout = Number_Font[jj];

         Set_Page(Page_Start);

         Set_Column_Address(Column);

         Write_Data_ST7565P(Dataout);

         Page_Start++;

         if (Page_Start>(Font_Page_Size-1) + i){
           Page_Start = i;
           Column++;
          }
     }
}


void Write_Number_Nine(unsigned char Page_Start, unsigned char Column){

       Set_Page(Page_Start);
       Set_Column_Address(Column);
       i = Page_Start;

     for (jj=Number_Font_Length_Bytes*9; jj<Number_Font_Length_Bytes*10; jj++){

         Dataout = Number_Font[jj];

         Set_Page(Page_Start);

         Set_Column_Address(Column);

         Write_Data_ST7565P(Dataout);

         Page_Start++;

         if (Page_Start>(Font_Page_Size-1) + i){
           Page_Start = i;
           Column++;
          }
     }
}


void Write_Number_Space(unsigned char Page_Start, unsigned char Column){

       Set_Page(Page_Start);
       Set_Column_Address(Column);
       i = Page_Start;

     for (jj=Number_Font_Length_Bytes; jj<Number_Font_Length_Bytes*2; jj++){

         Dataout = 0x00;

         Set_Page(Page_Start);

         Set_Column_Address(Column);

         Write_Data_ST7565P(Dataout);

         Page_Start++;

         if (Page_Start>(Font_Page_Size-1) + i){
           Page_Start = i;
           Column++;
          }
     }
}

   unsigned char DoneOne   = 1;
   unsigned char DoneTwo   = 1;
   unsigned char DoneThree = 1;
   unsigned char DoneFour  = 1;
   unsigned char DoneFive  = 1;
   unsigned char DoneSix   = 1;
   unsigned char DoneSeven = 1;
   unsigned char DoneEight = 1;
   unsigned char DoneNine  = 1;
   unsigned char  ValidEight = 0, ValidSeven = 0, ValidSix = 0, ValidFive = 0, ValidFour = 0, ValidThree = 0, ValidTwo = 0, ValidOne = 0, ValidZero = 0;

void Write_Number(unsigned long num, unsigned char Page, unsigned char X_Position) {

   unsigned char Font_Width;
   unsigned int units_start;
   unsigned int tens_start;
   unsigned int hundreds_start;
   unsigned int thousands_start;
   unsigned int ten_thousands_start;
   unsigned int hundred_thousands_start;
   unsigned int million_start;
   unsigned int ten_million_start;
   unsigned int hundred_million_start;


   static unsigned char numberstring[14];
   Font_Width = Number_Font_Width + Number_Font_Spacing;
   
    if (num <=9){
      units_start = X_Position;
     }

   if (num >=10 && num<=99){
       DoneOne = 0;
       ValidEight = 1;
       units_start = X_Position +Font_Width*1;
       tens_start= X_Position;
      }

    if (num >=100 && num<=999){
       DoneTwo = 0;
       ValidSeven = 1;
       ValidEight = 1;
       units_start = X_Position + Font_Width *2;
       tens_start = X_Position + Font_Width*1;
       hundreds_start = X_Position;
      }

      if (num >=1000 && num<=9999){             //thousand
       DoneThree = 0;
       ValidSix = 1;
       ValidSeven = 1;
       ValidEight = 1;
       units_start = X_Position +Font_Width *3;
       tens_start = X_Position + Font_Width *2;
       hundreds_start = X_Position + Font_Width*1;
       thousands_start = X_Position;
       }

       if (num >=10000 && num<=99999){            //ten thousand to 99 thousand
       DoneFour = 0;
       ValidFive = 1;
       ValidSix = 1;
       ValidSeven = 1;
       ValidEight = 1;
       units_start = X_Position + Font_Width *4;
       tens_start = X_Position +Font_Width *3;
       hundreds_start = X_Position + Font_Width *2;
       thousands_start = X_Position + Font_Width*1;
       ten_thousands_start = X_Position;
       }

       if (num >=100000 && num<=999999){         //100 thousand  to 999 thousand
       DoneFive = 0;
       ValidFour = 1;
       ValidFive = 1;
       ValidSix = 1;
       ValidSeven = 1;
       ValidEight = 1;
       units_start = X_Position + Font_Width *5;
       tens_start = X_Position + Font_Width *4;
       hundreds_start = X_Position + Font_Width *3;
       thousands_start = X_Position+ Font_Width *2;
       ten_thousands_start = X_Position + Font_Width*1;
       hundred_thousands_start = X_Position;
       }

       if (num >=1000000 && num<=9999999){         // 1 million  to 9'999'999
       DoneSix = 0;
       ValidThree = 1;
       ValidFour = 1;
       ValidFive = 1;
       ValidSix = 1;
       ValidSeven = 1;
       ValidEight = 1;
       units_start = X_Position+ Font_Width *6;
       tens_start = X_Position + Font_Width *5;
       hundreds_start = X_Position +Font_Width *4;
       thousands_start = X_Position+ Font_Width *3;
       ten_thousands_start = X_Position+ Font_Width *2;
       hundred_thousands_start = X_Position+ Font_Width*1;
       million_start = X_Position;
       }

       if (num >=10000000 && num<=99999999){       //ten million to 99 million
       DoneSeven = 0;
       ValidTwo = 1;
       ValidThree = 1;
       ValidFour = 1;
       ValidFive = 1;
       ValidSix = 1;
       ValidSeven = 1;
       ValidEight = 1;
       units_start = X_Position+ Font_Width *7;
       tens_start = X_Position + Font_Width *6;
       hundreds_start = X_Position + Font_Width *5;
       thousands_start = X_Position+ Font_Width *4;
       ten_thousands_start = X_Position+ Font_Width *3;
       hundred_thousands_start = X_Position+ Font_Width *2;
       million_start = X_Position+ Font_Width*1;
       ten_million_start = X_position;
       }

       if (num >=100000000 && num<=999999999){       //humdred million
       DoneEight = 0;
       ValidOne = 1;
       ValidTwo = 1;
       ValidThree = 1;
       ValidFour = 1;
       ValidFive = 1;
       ValidSix = 1;
       ValidSeven = 1;
       ValidEight = 1;
       units_start = X_Position+ Font_Width *8;
       tens_start = X_Position + Font_Width *7;
       hundreds_start = X_Position + Font_Width *6;
       thousands_start = X_Position+ Font_Width *5;
       ten_thousands_start = X_Position+ Font_Width *4;
       hundred_thousands_start = X_Position+ Font_Width *3;
       million_start = X_Position+ Font_Width*2;
       ten_million_start = X_position+Font_Width;
       hundred_million_start = X_Position;
       }


       LongWordTostr(num,numberstring);     // Converts input unsigned long integer number to a string

       if (num<10 && DoneOne !=1){               //Clears The Tens Position Once
        Write_Number_Space(Page, X_Position + Font_Width);
        DoneOne = 1;
        ValidEight = 0;
       }

       if (num<100 && DoneTwo !=1){             //Clears The Hundreds Position Once
        Write_Number_Space(Page,X_Position + Font_Width *2);
        DoneTwo = 1;
        ValidSeven = 0;
       }

       if (num<1000 && DoneThree !=1){          //Clears The Thousands Position Once
        Write_Number_Space(Page,X_Position + Font_Width *3);
        DoneThree = 1;
        ValidSix = 0;
       }

       if (num<10000 && DoneFour !=1){         //Clears The Ten Thousands Position Once
        Write_Number_Space(Page,X_Position + Font_Width *4);
        DoneFour = 1;
        ValidFive = 0;
       }


       if (num<100000 && DoneFive !=1){        //Clears The Hundred Thousands Position Once
         Write_Number_Space(Page,X_Position + Font_Width *5);
         DoneFive = 1;
         ValidFour = 0;
        }

       if (num<1000000 && DoneSix !=1){     //Clears The million Position Once
         Write_Number_Space(Page,X_Position + Font_Width *6);
         DoneSix = 1;
         ValidThree = 0;
        }

        if (num<10000000 && DoneSeven !=1){     //Clears Ten million Position Once
         Write_Number_Space(Page,X_Position + Font_Width *7);
         DoneSeven = 1;
         ValidTwo = 0;
        }

        if (num<100000000 && DoneEight !=1){     //Clears Hundred Million Position Once
          Write_Number_Space(Page,X_Position + Font_Width *8);
          DoneEight = 1;
          ValidOne = 0;
         }

        if (num<1000000000 && DoneNine !=1){     //Clears One Billion Position Once
          Write_Number_Space(Page,X_Position + Font_Width *9);
          DoneNine = 1;
          ValidZero = 0;
         }


     switch (numberstring[9])  {                          //units position

     case 48:    X_Position = units_start;
                 Write_Number_Zero(Page,X_Position);
                 break;
     case 49:    X_Position = units_start;
                 Write_Number_One(Page,X_Position);
                 break;
     case 50:    X_Position = units_start;
                 Write_Number_Two(Page,X_Position);
                 break;
     case 51:    X_Position = units_start;
                 Write_Number_Three(Page,X_Position);
                 break;
     case 52:    X_Position = units_start;
                 Write_Number_Four(Page,X_Position);
                 break;
     case 53:    X_Position = units_start;
                 Write_Number_Five(Page,X_Position);
                 break;
     case 54:    X_Position = units_start;
                 Write_Number_Six(Page,X_Position);
                 break;
     case 55:    X_Position = units_start;
                 Write_Number_Seven(Page,X_Position);
                 break;
     case 56:    X_Position = units_start;
                 Write_Number_Eight(Page,X_Position);
                 break;
     case 57:    X_Position = units_start;
                 Write_Number_Nine(Page,X_Position);
                 break;
     default:    break;
    }


  if (ValidEight){
     switch (numberstring[8])  {                         //tens position

     case 48:    X_Position = tens_start;
                 Write_Number_Zero(Page,X_Position);
                 break;
     case 49:    X_Position = tens_start;
                 Write_Number_One(Page,X_Position);
                 break;
     case 50:    X_Position = tens_start;
                 Write_Number_Two(Page,X_Position);
                 break;
     case 51:    X_Position = tens_start;
                 Write_Number_Three(Page,X_Position);
                 break;
     case 52:    X_Position = tens_start;
                 Write_Number_Four(Page,X_Position);
                 break;
     case 53:    X_Position = tens_start;
                 Write_Number_Five(Page,X_Position);
                 break;
     case 54:    X_Position = tens_start;
                 Write_Number_Six(Page,X_Position);
                 break;
     case 55:    X_Position = tens_start;
                 Write_Number_Seven(Page,X_Position);
                 break;
     case 56:    X_Position = tens_start;
                 Write_Number_Eight(Page,X_Position);
                 break;
     case 57:    X_Position = tens_start;
                 Write_Number_Nine(Page,X_Position);
                 break;
     default:    break;
    }}


    if (ValidSeven){
     switch (numberstring[7])  {                   //hundreds position

     case 48:    X_Position = hundreds_start;
                 Write_Number_Zero(Page,X_Position);
                 break;
     case 49:    X_Position = hundreds_start;
                 Write_Number_One(Page,X_Position);
                 break;
     case 50:    X_Position = hundreds_start;
                 Write_Number_Two(Page,X_Position);
                 break;
     case 51:    X_Position = hundreds_start;
                 Write_Number_Three(Page,X_Position);
                 break;
     case 52:    X_Position = hundreds_start;
                 Write_Number_Four(Page,X_Position);
                 break;
     case 53:    X_Position = hundreds_start;
                 Write_Number_Five(Page,X_Position);
                 break;
     case 54:    X_Position = hundreds_start;
                 Write_Number_Six(Page,X_Position);
                 break;
     case 55:    X_Position = hundreds_start;
                 Write_Number_Seven(Page,X_Position);
                 break;
     case 56:    X_Position = hundreds_start;
                 Write_Number_Eight(Page,X_Position);
                 break;
     case 57:    X_Position = hundreds_start;
                 Write_Number_Nine(Page,X_Position);
                 break;
     default:    break;
    } }

    if (ValidSix){
     switch (numberstring[6])  {                   //thousands position

     case 48:    X_Position = thousands_start;
                 Write_Number_Zero(Page,X_Position);
                 break;
     case 49:    X_Position = thousands_start;
                 Write_Number_One(Page,X_Position);
                 break;
     case 50:    X_Position = thousands_start;
                 Write_Number_Two(Page,X_Position);
                 break;
     case 51:    X_Position = thousands_start;
                 Write_Number_Three(Page,X_Position);
                 break;
     case 52:    X_Position = thousands_start;
                 Write_Number_Four(Page,X_Position);
                 break;
     case 53:    X_Position = thousands_start;
                 Write_Number_Five(Page,X_Position);
                 break;
     case 54:    X_Position = thousands_start;
                 Write_Number_Six(Page,X_Position);
                 break;
     case 55:    X_Position = thousands_start;
                 Write_Number_Seven(Page,X_Position);
                 break;
     case 56:    X_Position = thousands_start;
                 Write_Number_Eight(Page,X_Position);
                 break;
     case 57:    X_Position = thousands_start;
                 Write_Number_Nine(Page,X_Position);
                 break;
     default:    break;
    }}


    if (ValidFive){
     switch (numberstring[5])  {            //ten thousands position

     case 48:    X_Position = ten_thousands_start;
                 Write_Number_Zero(Page,X_Position);
                 break;
     case 49:    X_Position = ten_thousands_start;
                 Write_Number_One(Page,X_Position);
                 break;
     case 50:    X_Position = ten_thousands_start;
                 Write_Number_Two(Page,X_Position);
                 break;
     case 51:    X_Position = ten_thousands_start;
                 Write_Number_Three(Page,X_Position);
                 break;
     case 52:    X_Position = ten_thousands_start;
                 Write_Number_Four(Page,X_Position);
                 break;
     case 53:    X_Position = ten_thousands_start;
                 Write_Number_Five(Page,X_Position);
                 break;
     case 54:    X_Position = ten_thousands_start;
                 Write_Number_Six(Page,X_Position);
                 break;
     case 55:    X_Position = ten_thousands_start;
                 Write_Number_Seven(Page,X_Position);
                 break;
     case 56:    X_Position = ten_thousands_start;
                 Write_Number_Eight(Page,X_Position);
                 break;
     case 57:    X_Position = ten_thousands_start;
                 Write_Number_Nine(Page,X_Position);
                 break;
     default:    break;
    }}

   if (ValidFour){
     switch (numberstring[4])  {          //hundred thousands position

     case 48:    X_Position = hundred_thousands_start;
                 Write_Number_Zero(Page,X_Position);
                 break;
     case 49:    X_Position = hundred_thousands_start;
                 Write_Number_One(Page,X_Position);
                 break;
     case 50:    X_Position = hundred_thousands_start;
                 Write_Number_Two(Page,X_Position);
                 break;
     case 51:    X_Position = hundred_thousands_start;
                 Write_Number_Three(Page,X_Position);
                 break;
     case 52:    X_Position = hundred_thousands_start;
                 Write_Number_Four(Page,X_Position);
                 break;
     case 53:    X_Position = hundred_thousands_start;
                 Write_Number_Five(Page,X_Position);
                 break;
     case 54:    X_Position = hundred_thousands_start;
                 Write_Number_Six(Page,X_Position);
                 break;
     case 55:    X_Position = hundred_thousands_start;
                 Write_Number_Seven(Page,X_Position);
                 break;
     case 56:    X_Position = hundred_thousands_start;
                 Write_Number_Eight(Page,X_Position);
                 break;
     case 57:    X_Position = hundred_thousands_start;
                 Write_Number_Nine(Page,X_Position);
                 break;
     default:    break;
    }}

     if (ValidThree){
     switch (numberstring[3])  {                  //1 million position

     case 48:    X_Position = million_start;
                 Write_Number_Zero(Page,X_Position);
                 break;
     case 49:    X_Position = million_start;
                 Write_Number_One(Page,X_Position);
                 break;
     case 50:    X_Position = million_start;
                 Write_Number_Two(Page,X_Position);
                 break;
     case 51:    X_Position = million_start;
                 Write_Number_Three(Page,X_Position);
                 break;
     case 52:    X_Position = million_start;
                 Write_Number_Four(Page,X_Position);
                 break;
     case 53:    X_Position = million_start;
                 Write_Number_Five(Page,X_Position);
                 break;
     case 54:    X_Position = million_start;
                 Write_Number_Six(Page,X_Position);
                 break;
     case 55:    X_Position = million_start;
                 Write_Number_Seven(Page,X_Position);
                 break;
     case 56:    X_Position = million_start;
                 Write_Number_Eight(Page,X_Position);
                 break;
     case 57:    X_Position = million_start;
                 Write_Number_Nine(Page,X_Position);
                 break;
     default:    break;
    }}


     if (ValidTwo){
     switch (numberstring[2])  {                //10 million position

     case 48:    X_Position = ten_million_start;
                 Write_Number_Zero(Page,X_Position);
                 break;
     case 49:    X_Position = ten_million_start;
                 Write_Number_One(Page,X_Position);
                 break;
     case 50:    X_Position = ten_million_start;
                 Write_Number_Two(Page,X_Position);
                 break;
     case 51:    X_Position = ten_million_start;
                 Write_Number_Three(Page,X_Position);
                 break;
     case 52:    X_Position = ten_million_start;
                 Write_Number_Four(Page,X_Position);
                 break;
     case 53:    X_Position = ten_million_start;
                 Write_Number_Five(Page,X_Position);
                 break;
     case 54:    X_Position = ten_million_start;
                 Write_Number_Six(Page,X_Position);
                 break;
     case 55:    X_Position = ten_million_start;
                 Write_Number_Seven(Page,X_Position);
                 break;
     case 56:    X_Position = ten_million_start;
                 Write_Number_Eight(Page,X_Position);
                 break;
     case 57:    X_Position = ten_million_start;
                 Write_Number_Nine(Page,X_Position);
                 break;
     default:    break;
    }}

      if (ValidOne){
     switch (numberstring[1])  {              //100 million position

     case 48:    X_Position = hundred_million_start;
                 Write_Number_Zero(Page,X_Position);
                 break;
     case 49:    X_Position = hundred_million_start;
                 Write_Number_One(Page,X_Position);
                 break;
     case 50:    X_Position = hundred_million_start;
                 Write_Number_Two(Page,X_Position);
                 break;
     case 51:    X_Position = hundred_million_start;
                 Write_Number_Three(Page,X_Position);
                 break;
     case 52:    X_Position = hundred_million_start;
                 Write_Number_Four(Page,X_Position);
                 break;
     case 53:    X_Position = hundred_million_start;
                 Write_Number_Five(Page,X_Position);
                 break;
     case 54:    X_Position = hundred_million_start;
                 Write_Number_Six(Page,X_Position);
                 break;
     case 55:    X_Position = hundred_million_start;
                 Write_Number_Seven(Page,X_Position);
                 break;
     case 56:    X_Position = hundred_million_start;
                 Write_Number_Eight(Page,X_Position);
                 break;
     case 57:    X_Position = hundred_million_start;
                 Write_Number_Nine(Page,X_Position);
                 break;
     default:    break;
    }}
}

// ------------------------------------------------------
// GLCD Picture name: house.bmp
// GLCD Model: KS0108 128x64
// ------------------------------------------------------

const code char house[1024] = {
  0,   0,   0,   0,   4,  10,  58,  62, 122, 210, 208, 208, 208, 208, 208,  48, 188,  60, 172, 172, 246, 247, 255, 110, 254, 190, 126, 126,  92, 152,  96,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 128, 128, 128, 128,   0, 129, 129, 141, 143, 136, 192,  80, 208, 200,   8,   8, 140,  12,  58,  58,  71, 130, 135,   0, 161, 208, 112, 240, 160, 166, 166, 153, 139, 142, 141, 143,  15,  27,  23,  23,  27,  15,  15, 143, 190, 187, 191, 159, 204, 140, 143, 246, 246, 246, 230, 189, 255, 177, 189, 238, 195,  76,   0,   0,
  0,   0,   0,   0,   0,   0,   0,  24,  28, 222, 126, 123,  57,  63, 125, 120,  15,  15,   3,   3,  65, 193, 225, 193, 192, 192,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  98,  99,  29, 153, 192,  66, 199, 132, 132, 133, 135,   0,   0, 128,  80, 120,  81, 113, 118, 126,  63,  31,  22, 227, 253, 248, 224, 192, 193, 194, 194, 194, 195, 129,   0,   1, 131, 131, 191, 191, 230, 234, 234, 188, 248, 241, 195,  66,  71, 129, 133, 133, 174, 255, 255, 247, 255, 255, 254, 254, 255, 251, 253, 210, 208,   0,   0,
  0,   0,   0,   0,  32,  60,  52, 247, 254, 241, 245, 239, 255, 188, 182, 254, 252, 230, 243, 233, 247, 151, 153, 255, 247, 243, 223, 221, 252, 120, 120, 248, 104, 120, 248, 112, 112,  48,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  17,  17,  17,  17,  16,  16,  16,  16,  16,  16,  16,  16,  16,  31,  31,  31,  31,  17,  17,  17,  17,  17,  17,  17,  18,  18,  25,  25,  44,  15,  31,  63,  63, 111, 127,  58,  63, 119, 119, 255, 191,  53,  22,  31,  11,  31,  31,  47,  63,  63, 255, 207, 255, 255,  47,  37,   0,
  0,   0,   0,   0,   0,   0,  32, 251, 255, 255, 255, 255, 255, 131, 129, 193, 227, 227,  51,  55, 229, 199,   7,  15,  11,  27,  31,  28,  56, 240,  96,  96,  97,  97,  97,  97,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96, 224,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  96,  97,  99,  98, 102, 108, 248, 240,  96,  96,   0, 255, 255, 255, 255,   0,   0,   0,
  0,   0,   0,   0,   2,  23,  29,  33,  33, 255, 255, 255, 255, 167, 167,  58,  24, 120, 248, 232, 121, 123, 122, 158, 144,   0, 252, 158, 159, 127,  96, 128,  14,  10,  10,  10,  10,  10,  10,  14,   0,   0,   0,  14,  10,  10,  10,  10,  10,  14,  14,   0,   0, 128, 255, 248, 232, 192, 192, 254, 254, 254,  34,  34,  34,  34,  34,  34, 254,  34,  34,  34,  34,  34,  34,  34, 254, 254, 254,  50,   0,   0,   0, 254, 130, 186,  58,  58,  98,  98,  98,  98,   2, 254,   0,   0,   0, 254, 254, 254, 254,  34,  34,  34,  34, 254, 254,  34,  34,  34,  34,  34, 254, 254, 254, 224, 127, 255, 194, 222, 126, 255, 255, 255, 255,   0,   0,   0,
  0,   0,   0,   0,   0, 128, 128, 128,  96, 191, 255, 127, 255, 255, 225, 195, 207, 140, 137,   8,   8,   8,   8,  25,  63,  59,  11,  79,  79,  73, 233, 254, 168, 160, 160,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  60,  63,  39,  47,  63,  63, 125,  73,   9, 225,  64,  72, 120, 120, 120, 121,  73,  65,  77,  81,  25, 121,  73, 121,  49, 113,  73,  73, 200, 200, 120, 127,  80,  81,  64,  64,  64,  80,  80, 240, 224, 127,  24, 152, 144, 201, 233, 249, 249,  56, 136,   8, 144, 241, 121, 120, 160, 248, 240, 112,   9, 121,  63, 127, 120, 104,  77,  76, 124, 255, 255, 255, 255, 248,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   1,   3,   3,   3,   6,   6,  12,  12,  24,  24,  16,  48,  32,  96,  96, 192, 192, 128, 128,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   2,   2,   6,   6,   0,   0,   4,   0,   0,   2,   2,  34,  98,  98, 208, 209, 145, 145,  16,  16,  16,   8,   8,   8,   4,   6,   2,   1,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 128, 128, 192, 192, 224, 224, 248, 231, 239, 255, 119,  67,   0,   0,
  0,   0,   0,   0,   0,   0,   0, 128, 128,   0, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  96,  64,  64,  65,  65,  99,  99,  98, 102, 102, 108, 108, 120, 120, 120, 112, 112,  32,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   1,   1,   3,   2,   6,   6,  12,  12,  24,  24,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  16,  16,   0,   0,   0,   0,   0,   0
};

// ------------------------------------------------------
// GLCD Picture name: BicycleTree128x64BMP.bmp
// GLCD Model: KS0108 128x64
// ------------------------------------------------------

const code char BicycleTree128x64BMP[1024] = {
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 128, 128, 128, 128, 128,   0,   0,   0,   0,   0,   0,   0, 128, 128, 128, 192, 192,  64,  64,   0,  64, 192, 128, 128, 128, 128,  64,  64,  64,  64, 192, 128, 128, 128, 128, 128, 128,   0,  64,  64,  64,  64,  96,  32,  16,  24,   8,   8,   8,  12,   0,   0,   0,   0,   0,   0,   0,   0,  48,  16,  88, 152,  56, 218,  30, 159, 159,  30, 218,  56, 152,  80,  16,  48,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 240,  80, 104, 104,  60,  60,  60,  44,  42,  34,  39,  36,  36, 100,  68,  69, 197, 133, 132, 132, 128, 128, 130, 162,  35,  33,  65, 192, 192,  64,  66,  66,  64,  32,  32,  32,  32,  32,  32,  32, 160, 192, 192,  32,  96,   0,   0,  32, 160,   0,   0, 129, 129, 129,   3,   2,   2,   2,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  96,  96,  32,   0,  64,  96,   3,  68, 111,  76, 255, 255,  76,  79,  64,   3,  96,  64,   0,  32,  96,  96,   0,   0,   0,   0,   0,   2,   4,   6,   6,   6,   0,   0,
  7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   3,   3,   3,   3,  51,  35,  51,  39,  39,  39,   7,  15,  28,  60,  40,  40,  40, 104,  88, 216, 144,  16,  16,  16,  16,  32, 128,  32,  32,  32,   0,  32,  32,  33,  96,  96,  96, 224, 160, 160, 224,  64,  64,  64,  64,  64,  64,  64,  64,  64,  64,  65,   1,  64,  32,  32,   0,  32,  32,  32,  32,  32,  32,  32,  32,  32,   1,   1,  64,  65,  65,  65,  65,  64,  64,  64,  64,  64,  16,  48,  48,  48,  48,  16,   8,  40,  32,  32,   0,   0,   0, 250, 255, 255, 250,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   3,   6,   4,  12,   8,  24,  48,  32,  32,   0,   0,  64,  64,  64,  64,  64,  64,   0,   0,   0,   0,   0,   1,   1,   2,   0,   0,   0,   0,   0,   0,   0,   0,  10,   2,   2,   0,   0,   0,   0,   0,   2,   0,   0,   0,   0,   0,   4,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 255, 255, 255, 255,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  32, 144, 128, 128, 128,   0, 128,   0, 128, 136,  24, 152,  88, 248,  56,  24,  40,   8,   0,   0,   0,  16,  16, 144,  16,  16,  16,  16,  20,  28,  28,  24,  24,  24,  16,  16,   0,  64,  64, 192, 192, 224, 224, 224, 224,  96,  96,  96,  64,  64,  64,   0,   0, 246, 255, 255, 255, 255, 255, 254, 214,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 128, 128, 128, 128, 128, 128, 128, 128, 192, 192, 192, 192, 192, 192, 192, 192, 192, 207, 207, 207, 143, 207, 207, 206, 254, 254,  30,  30,  30,  62,  60,  63,  62,  94,  94,  94, 182, 182, 230,  70,  70, 194, 130, 130, 130,   2,   3,   3,   3,   3,   3,   1,   1,   1,   1,   1, 193, 240, 188, 206, 199, 100, 120,  56,  52,  84,  92, 188, 156,  76, 255, 255, 255, 255, 255, 255, 255, 255, 110,  46,  26,  10,  30,  18,  48, 240, 224, 192,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 192, 224, 224, 112,  56,  24,  24,  12,  12,   6,   6,  10,   2,  19,   3,   1,  33,   1,  65,   0, 128, 144, 128, 128, 219, 192, 192, 208, 232, 224,  80,  88,  44,  38,  23,  25,  12,   7,   3,   1,   1,   3,   3,   3,   7,  14, 254, 252, 248, 112,   0,   0,   0,   0,   1,   1,   1,   1,   2,   3,   3,   7,  31,  31,  29,  93, 125, 125, 124,  30,  31,  31,  63, 127, 127, 206, 206, 142, 142, 142, 142, 142, 150, 159, 255, 255, 255, 255, 255, 255, 255, 255, 255, 254, 216, 160, 160,  16,  24,  12,  15,   3,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,   7,  15,  31,  28,  56,  48,  96,  96,  72,  64,  64, 200, 192, 192, 128, 132, 128, 128, 128, 130, 128, 161, 129, 129, 132, 145, 193, 192,  64,  66,  64,  64,  65,  96,  32,  34,  48,  48,  20,  24,  24,   8,  12,   6,   6,   3,   1,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};


                             
void Draw_House(){
       unsigned int jj = 0;
       unsigned char Data_Out = 0;
       unsigned char Column = 0;
       unsigned char Page_Start = 0;
       Set_Page(Page_Start);
       Set_Column_Address(Column);

     for (jj=0; jj<1024; jj++){

         Data_Out = House[jj];

         Set_Page(Page_Start);

         Set_Column_Address(Column);

         Write_Data_ST7565P(Data_Out);

         Column = Column + 1;

         if (Column>127){
            Page_Start = Page_Start +1;
            Column = 0;
          }

         Delay_ms(7);
     }
}



void Draw_Bicycle(){
       unsigned int jj = 0;
       unsigned char Data_Out = 0;
       unsigned char Column = 0;
       unsigned char Page_Start = 0;
       Set_Page(Page_Start);
       Set_Column_Address(Column);

     for (jj=0; jj<1024; jj++){

         Data_Out = BicycleTree128x64BMP[jj];

         Set_Page(Page_Start);

         Set_Column_Address(Column);

         Write_Data_ST7565P(Data_Out);

         Column = Column + 1;

         if (Column>127){
            Page_Start = Page_Start +1;
            Column = 0;
          }
        // Delay_ms(2);
     }
}

void Write_Midas(){
       unsigned int Column = 0;
       unsigned int jj = 0;
       unsigned int Dataout = 0;
       unsigned char Page_Start = 0;

       Page_Start = 1;
       Set_Page(Page_Start);
       Column = 2;

     for (jj=0; jj<170; jj++){        //  Letter M

         Delay_ms(2);

         Dataout = San_Diego34x35[jj];

         Set_Page(Page_Start);

         Set_Column_Address(Column);

         Write_Data_ST7565P(Dataout);

         Page_Start++;

         if (Page_Start>5){
           Page_Start = 1;
           Column++;
          }
     }

       Page_Start = 2;
       Set_Page(Page_Start);
       Column = 34;

     for (jj=400; jj<500; jj++){        //Letter I
     
          Delay_ms(2);

         Dataout = San_Diego25x27[jj];

         Set_Page(Page_Start);

         Set_Column_Address(Column);

         Write_Data_ST7565P(Dataout);

         Page_Start++;

         if (Page_Start>5){
           Page_Start = 2;
           Column++;
          }
     }

       Page_Start = 2;
       Set_Page(Page_Start);
       Column = 55;

     for (jj=200; jj<300; jj++){        //Letter D
     
          Delay_ms(2);

         Dataout = San_Diego25x27[jj];

         Set_Page(Page_Start);

         Set_Column_Address(Column);

         Write_Data_ST7565P(Dataout);

         Page_Start++;

         if (Page_Start>5){
           Page_Start = 2;
           Column++;
          }
     }

       Page_Start = 2;
       Set_Page(Page_Start);
       Column = 79;

     for (jj=0; jj<100; jj++){        //Letter A
     
          Delay_ms(2);

         Dataout = San_Diego25x27[jj];

         Set_Page(Page_Start);

         Set_Column_Address(Column);

         Write_Data_ST7565P(Dataout);

         Page_Start++;

         if (Page_Start>5){
           Page_Start = 2;
           Column++;
          }
     }

       Page_Start = 2;
       Set_Page(Page_Start);
       Column =101;

     for (jj=900; jj<1000; jj++){        //Letter S
     
          Delay_ms(2);

         Dataout = San_Diego25x27[jj];

         Set_Page(Page_Start);

         Set_Column_Address(Column);

         Write_Data_ST7565P(Dataout);

         Page_Start++;

         if (Page_Start>5){
           Page_Start = 2;
           Column++;
          }
     }
}


void Write_JohnB(){
       unsigned int Column = 0;
       unsigned int jj = 0;
       unsigned int Dataout = 0;
       unsigned char Page_Start = 0;

       Page_Start = 2;
       Set_Page(Page_Start);
       Column = 0;

     for (jj=500; jj<600; jj++){        //  Letter J

         Delay_ms(2);

          Dataout = San_Diego25x27[jj];

         Set_Page(Page_Start);

         Set_Column_Address(Column);

         Write_Data_ST7565P(Dataout);

         Page_Start++;

         if (Page_Start>5){
           Page_Start = 2;
           Column++;
          }
     }

       Page_Start = 2;
       Set_Page(Page_Start);
       Column = 27;

     for (jj=800; jj<900; jj++){        //Letter O

          Delay_ms(2);

         Dataout = San_Diego25x27[jj];

         Set_Page(Page_Start);

         Set_Column_Address(Column);

         Write_Data_ST7565P(Dataout);

         Page_Start++;

         if (Page_Start>5){
           Page_Start = 2;
           Column++;
          }
     }

       Page_Start = 2;
       Set_Page(Page_Start);
       Column = 54;

     for (jj=300; jj<400; jj++){        //Letter H

          Delay_ms(2);

         Dataout = San_Diego25x27[jj];

         Set_Page(Page_Start);

         Set_Column_Address(Column);

         Write_Data_ST7565P(Dataout);

         Page_Start++;

         if (Page_Start>5){
           Page_Start = 2;
           Column++;
          }
     }

       Page_Start = 2;
       Set_Page(Page_Start);
       Column = 81;

     for (jj=700; jj<800; jj++){        //Letter N

          Delay_ms(2);

         Dataout = San_Diego25x27[jj];

         Set_Page(Page_Start);

         Set_Column_Address(Column);

         Write_Data_ST7565P(Dataout);

         Page_Start++;

         if (Page_Start>5){
           Page_Start = 2;
           Column++;
          }
     }

       Page_Start = 2;
       Set_Page(Page_Start);
       Column =106;

     for (jj=100; jj<200; jj++){        //Letter B

          Delay_ms(2);

         Dataout = San_Diego25x27[jj];

         Set_Page(Page_Start);

         Set_Column_Address(Column);

         Write_Data_ST7565P(Dataout);

         Page_Start++;

         if (Page_Start>5){
           Page_Start = 2;
           Column++;
          }
     }
}

void main() {
       unsigned int Column = 0;
       unsigned int x = 0;
       unsigned int y = 0;
       unsigned int jj = 0;
       unsigned int Data_Out = 0;
       unsigned int yy = 0;
       unsigned char Counter = 0;
       OSCCON =  0b01100000;        //PIC18F26K22  8 MHz
     //  OSCTUNE.PLLEN = 1;        //page 35

       TRISA = 0;
       TRISB = 0;
       TRISC = 0;
       TRISC4_bit = 1;   //Serial Data In
       TRISE = 0;
       PORTA = 0;
       PORTB = 0;
       PORTC = 0;
       PORTE = 0;
       ANSELA = 0;
       ANSELB = 0;
       ANSELC = 0;
       TFT_RST = 0;

       TFT_WR = 1;  //Write Is Active Low
       TFT_RD = 1;  //Read Is Active Low
       TFT_RST = 1;
       Initialise_ST7565P();
    
       I2C1_Init(100000);

          /*I2C_Start();
           I2C_Write(ADDRESS);
           I2C_Write(0b00000110);      //  The reserved SOFTWARE RESET I2C-bus address ‘0000 011’ with the R/W bit set to 0 (write
           I2C_Write(0xA5);
           I2C_Write(0xA5);
           I2C_Stop();*/
           
           
           I2C_Start();
           I2C_Write(0xE0);
           I2C_Write(8);
           I2C_Write(0b11111111);   //page 14   LED output state
           I2C_Stop();


           I2C_Start();
           I2C_Write(ADDRESS);
           I2C_Write(0);            //00h 0 0 0 0 MODE1 read/write Mode register 1
           I2C_Write(0b00001001);   //PCA9633 does not respond to I2C-bus subaddress CALLS, ONLY ALL CALL
           I2C_Stop();

           I2C_Start();
           I2C_Write(0xE2);         //ALL CALL ADDRESS    0XE0
           I2C_Write(1);            //MODE2 - Mode register 2 (address 01h)  page 12
           I2C_Write(0b00000101);   //5 DMBLNK R/W 0* Group control = dimming   1 Group control = blinking
           I2C_Stop();              // BIT 5 IS BLINKING BIT, 1 = BLINKING, ZERO = DIMMING
                                    // BIT 3 IS OUTPUT CHANGES ON STOP OR ACKKNOWLEDGE
                                    // BIT 4 IS INVERT BIT
                                    // BIT 2 IS OUTPUT DRIVE, OPEN DRAIN OR TOTEM POLE / PUSH PULL  1 = TOTEM POLE
                                    // BIT 1 & 0 ARE 01 FOR 16 PIN CHIP WITH OE
      //-----------------------------------------------------------------------------------------------------
           I2C_Start();
           I2C_Write(ADDRESS);
           I2C_Write(2);   //RED        //02h PWM0 7:0 IDC1[7:0] R/W 0000 0000* PWM1 Individual Duty Cycle
           I2C_Write(0);
           I2C_Stop();

           I2C_Start();
           I2C_Write(ADDRESS);
           I2C_Write(3);       //03h PWM1 7:0 IDC1[7:0] R/W 0000 0000* PWM1 Individual Duty Cycle
           I2C_Write(0);    //GREEN
           I2C_Stop();

           I2C_Start();
           I2C_Write(ADDRESS);
           I2C_Write(4);       //04h PWM2 7:0 IDC1[7:0] R/W 0000 0000* PWM1 Individual Duty Cycle
           I2C_Write(0);      //BLUE
           I2C_Stop();

          /*I2C_Start();
           I2C_Write(ADDRESS);
           I2C_Write(5);       //05h PWM2 7:0 IDC1[7:0] R/W 0000 0000* PWM1 Individual Duty Cycle
           I2C_Write(0);  //MY GREEN LED
           I2C_Stop();*/
     //=====================================================================================================================

           I2C_Start();
           I2C_Write(ADDRESS);
           I2C_Write(7);             //GRPFREQ - Group Frequency register (address 07h)
           I2C_Write(0b00011110);    //DIVIDE BY ...
           I2C_Stop();
     
           for(x= 0; x<10000; x++){
           Box_Display();    }
           
           Clear_Screen();

           Write_Number_Zero(4,0);

           Write_Number_One(1,110);

           Write_Number_Two(2,30);

           Write_Number_Three(5,40);

           Write_Number_Four(3,50);

           Write_Number_Five(5,98);

           Write_Number_Six(0,9);

           Write_Number_Seven(6,70);

           Write_Number_Eight(2,90);

           Write_Number_Nine(1,65);
          
           Delay_ms(900);
           Clear_Screen();
           Delay_ms(20);

          
           for (x=0; x<2000; x++){
           Write_Number(x,2,10);
           }

           Delay_ms(900);
      
           Write_Midas();
      
           Delay_ms(900);
      
           Clear_Screen();


          Delay_ms(90);

          Draw_House();
          Delay_ms(1900);
          Draw_Bicycle();
          Delay_ms(1900);

         I2C_Start();
         I2C_Write(ADDRESS);
         I2C_Write(2);
         I2C_Write(255);       // red full off
         I2C_Stop();

         I2C_Start();
         I2C_Write(ADDRESS);
         I2C_Write(3);
         I2C_Write(255);       // green full off
         I2C_Stop();

         I2C_Start();
         I2C_Write(ADDRESS);
         I2C_Write(4);
         I2C_Write(255);       // BLUE full off
         I2C_Stop();

         I2C_Start();
         I2C_Write(ADDRESS);
         I2C_Write(2);
         I2C_Write(0);       // red full on
         I2C_Stop();

         Delay_ms(1900);

         I2C_Start();
         I2C_Write(ADDRESS);
         I2C_Write(2);
         I2C_Write(255);       // red full off
         I2C_Stop();

         Delay_ms(90);

         I2C_Start();
         I2C_Write(ADDRESS);
         I2C_Write(3);
         I2C_Write(0);       // green full on
         I2C_Stop();

         Delay_ms(1900);

         I2C_Start();
         I2C_Write(ADDRESS);
         I2C_Write(3);
         I2C_Write(255);       // green full off
         I2C_Stop();

         Delay_ms(90);

         I2C_Start();
         I2C_Write(ADDRESS);
         I2C_Write(4);
         I2C_Write(0);       // BLUE full on
         I2C_Stop();

         Delay_ms(1900);

         I2C_Start();
         I2C_Write(ADDRESS);
         I2C_Write(4);
         I2C_Write(255);       // BLUE full off
         I2C_Stop();

         Delay_ms(90);
       
         I2C_Start();
         I2C_Write(ADDRESS);
         I2C_Write(2);   //RED        //02h PWM0 7:0 IDC1[7:0] R/W 0000 0000* PWM1 Individual Duty Cycle
         I2C_Write(0);
         I2C_Stop();

         I2C_Start();
         I2C_Write(ADDRESS);
         I2C_Write(3);       //03h PWM1 7:0 IDC1[7:0] R/W 0000 0000* PWM1 Individual Duty Cycle
         I2C_Write(100);    //GREEN
         I2C_Stop();

         I2C_Start();
         I2C_Write(ADDRESS);
         I2C_Write(4);       //04h PWM2 7:0 IDC1[7:0] R/W 0000 0000* PWM1 Individual Duty Cycle
         I2C_Write(255);      //BLUE
         I2C_Stop();
   
         I2C_Start();
         I2C_Write(ADDRESS);
         I2C_Write(6);
         I2C_Write(128);        //GROUP PWM   group duty cycle control
         I2C_Stop();
   
   
         I2C_Start();
         I2C_Write(ADDRESS);
         I2C_Write(1);
         I2C_Write(0x25);   //blinking on  1 Group control = blinking
         I2C_Stop();
         
         Delay_ms(9000);
         
         I2C_Start();
         I2C_Write(ADDRESS);
         I2C_Write(1);
         I2C_Write(0x05);        //blinking off
         I2C_Stop();
         
         I2C_Start();
         I2C_Write(ADDRESS);
         I2C_Write(6);
         I2C_Write(255);        //GROUP PWM   group duty cycle control
         I2C_Stop();
             
         I2C_Start();
         I2C_Write(ADDRESS);
         I2C_Write(2);
         I2C_Write(255);       // red full off
         I2C_Stop();

         I2C_Start();
         I2C_Write(ADDRESS);
         I2C_Write(3);
         I2C_Write(255);       // green full off
         I2C_Stop();

         I2C_Start();
         I2C_Write(ADDRESS);
         I2C_Write(4);
         I2C_Write(255);       // BLUE full off
         I2C_Stop();
             
             
  while(1){

        Counter++;

       for (x=255; x>0; x--){
       I2C_Start();
       I2C_Write(ADDRESS);
       I2C_Write(2);       //02h PWM0 7:0 IDC0[7:0] R/W 0000 0000* PWM0 Individual Duty Cycle
       I2C_Write(x);       //red  turns on
       I2C_Stop();
       Delay_ms(14);
       }

       y=0;
       for (x=255; x>0; x--){
       I2C_Start();
       I2C_Write(ADDRESS);
       I2C_Write(3);       //03h PWM0 7:0 IDC0[7:0] R/W 0000 0000* PWM0 Individual Duty Cycle
       I2C_Write(x);       // green   turns on
       I2C_Stop();

        I2C_Start();
       I2C_Write(ADDRESS);
       I2C_Write(4);       //04h PWM0 7:0 IDC0[7:0] R/W 0000 0000* PWM0 Individual Duty Cycle
       I2C_Write(y);       // blue  turns off
       I2C_Stop();
        Delay_ms(14);
         y++;
       }

        y=0;
       for (x=255; x>0; x--){
       I2C_Start();
       I2C_Write(ADDRESS);
       I2C_Write(5);
       I2C_Write(x);
       I2C_Stop();          // led comes on

        I2C_Start();
       I2C_Write(ADDRESS);
       I2C_Write(3);
       I2C_Write(y);       // green turns off
       I2C_Stop();
        Delay_ms(14);
         y++;
       }

           y=0;
       for (x=255; x>1; x--){
       I2C_Start();
       I2C_Write(ADDRESS);
       I2C_Write(4);
       I2C_Write(x);
       I2C_Stop();          //blue comes on

       I2C_Start();
       I2C_Write(ADDRESS);
       I2C_Write(2);
       I2C_Write(y);       //red turns off
       I2C_Stop();
        Delay_ms(14);
         y++;
       }

       y=0;
       for (x=255; x>1; x--){
       I2C_Start();
       I2C_Write(ADDRESS);
       I2C_Write(3);
       I2C_Write(x);       //green turns on
       I2C_Stop();

       I2C_Start();
       I2C_Write(ADDRESS);
       I2C_Write(4);
       I2C_Write(y);
       I2C_Stop();          //blue turns off
       Delay_ms(14);
       y++;
       }

        y=0;
       for (x=255; x>1; x--){
       I2C_Start();
       I2C_Write(ADDRESS);
       I2C_Write(2);
       I2C_Write(x);       //red turns on
       I2C_Stop();

       I2C_Start();
       I2C_Write(ADDRESS);
       I2C_Write(3);
       I2C_Write(y);
       I2C_Stop();          //green turns off
       Delay_ms(14);
       y++;
       }

         y=0;
       for (x=255; x>1; x--){
       I2C_Start();
       I2C_Write(ADDRESS);
       I2C_Write(4);
       I2C_Write(x);       //blue turns on
       I2C_Stop();

       I2C_Start();
       I2C_Write(ADDRESS);
       I2C_Write(2);
       I2C_Write(y);
       I2C_Stop();          //red turns off
       Delay_ms(14);
       y++;
       }
       
       if (Counter==1){
        Write_Midas();  }
        
       if (Counter==2){
          Draw_House();  }

       if (Counter==3){
          Write_JohnB();  }

       if (Counter==4){
         Clear_Screen();
         Write_Midas();  }

       if (Counter==5){
         Draw_Bicycle();
         Counter = 0;
         }
       
 }


}