package ifile

/*
#include "write.h"
*/
import "C"

//GetTextGo gets a string from a text file
//export GetTextGo
func GetTextGo(filename string) string {
	return string(C.GoString(C.getTextFromFile(C.CString(filename))))
}
