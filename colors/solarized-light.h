static const char *colorname[] = {
    /* 8 normal colors */
    "#073642",
    "#dc322f",
    "#859900",
    "#b58900",
    "#268bd2",
    "#d33682",
    "#2aa198",
    "#eee8d5",

    /* 8 bright colors */
    "#002b36",
    "#cb4b16",
    "#586e75",
    "#657b83",
    "#839496",
    "#6c71c4",
    "#93a1a1",
    "#fdf6e3",

    [255] = 0,

    /* more colors can be added after 255 to use with DefaultXX */
    "#657b83", /* 256 -> cursor */
    "#555555", /* 257 -> rev cursor*/
    "#fdf6e3", /* 258 -> bg */
    "#657b83", /* 259 -> fg */
};
