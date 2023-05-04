#ifndef TAG_APP_HEADERS
#define TAG_APP_HEADERS

#include <furi.h>

#include "tag_ir.h"

/* generated by fbt from .png files in images folder */
#include <tag_game_icons.h>

extern char* TAG;

typedef enum { AppUninitialised, AppReady, AppPlaying, AppFinished } TagAppMode;

typedef struct {
    TagAppMode app_mode;
} TagAppState;

TagAppState* tag_app_state_get();

#endif