#include <stdio.h>
#include "archivos.h"
#include "procesamiento.h"
#include "defs.h"

int main(int argc, char const *argv[])
{
	float seno[MUESTRAS];

	genera_seno(seno);
	guarda_datos(seno);
	
	return 0;
}