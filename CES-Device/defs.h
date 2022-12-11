#ifndef DEFS_H
#define DEFS_H

typedef enum {
    OFF,
    ON,
    STARTUP,
    USER,
    MAIN,
    GROUP,
    TYPE,
    ACTIVE_SESSION,
    FINISHED_SESSION,
    HISTORY,
    POWERING_OFF
} Screen;

typedef enum {
    START_SESSION,
    TREATMENT_HISTORY,
    CHANGE_USER
} MainOptions;

typedef enum {
    TWENTY_MINUTES,
    FOURTY_FIVE_MINUTES,
    USER_DESIGNATED
} SessionGroup; // aka duration

typedef enum {
    MET,
    DELTA,
    THETA,
    ALPHA
} SessionType;

typedef enum {
    NONE,
    OKAY,
    EXCELLENT
} Connection;

#endif // DEFS_H
