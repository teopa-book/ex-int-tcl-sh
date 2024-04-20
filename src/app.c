#include <tcl.h>

#include <stdio.h>
#include <stdlib.h>

int Tcl_AppInit(Tcl_Interp *interp)
{
    return TCL_OK;
}


int main(int argc, char *argv[])
{
    Tcl_Main(argc, argv, Tcl_AppInit);
    return EXIT_SUCCESS;
}
