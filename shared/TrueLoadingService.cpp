//
// Created by Kai Gonzalez on 5/6/21.
//

#include "TrueLoadingService.h"

#include <libc.h>


void KD_TrueLoadingServiceBegin()
{
    //request the loading latency.
    extern unsigned KD_LoadingLatency;
    KD_LoadingLatency += 1; // estimated time (in SECONDS) that this will take for the program to include this file.
    KD_PrintScreen("Pre-Loading Services . . .");
    sleep(KD_LoadingLatency);//sleep depending on the dynamic loading latency
    KD_PrintScreen("Finished loading services.\n");
}