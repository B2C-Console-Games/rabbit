/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/rabbit/basic/rabbit.bas: 
 *
                   +-+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   | | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    | | |
        Address    v v v Original BASIC statement
    -------------- --- - ------------------------------------------------------------------------------
    0x5617e54f3dd0 ---------A   01000 PRINT"DO YOU WANT INSTRUCTIONS :";
    0x5617e54f3f50 ---------A   01010 INPUT A$
    0x5617e54f4360 ---------A   01020 IF MID$(A$,1,1)="N" THEN 1220
    0x5617e54f46f0 ---------A   01030 IF MID$(A$,1,1)="n" THEN 1220
    0x5617e54f4770 ---------A   01040 PRINT
    0x5617e54f4860 ---------A   01050 PRINT
    0x5617e54f4a00 ---------A   01060 PRINT"    This is the game of RABBIT.  The object of RABBIT is"
    0x5617e54f4b40 ---------A   01070 PRINT"to come within a certian distance of the computer controlled"
    0x5617e54f8f00 ---------A   01080 PRINT"rabbit, which also moves.  "
    0x5617e54f90e0 ---------A   01090 PRINT"    The way you do this is to hop around (the rabbit hops too) "
    0x5617e54f9270 ---------A   01100 PRINT"such that your path crosses the rabbit's path at the same time"
    0x5617e54f93d0 ---------A   01110 PRINT"Or in other words you come close enough to grab the little "
    0x5617e54f9540 ---------A   01120 PRINT"booger.  "
    0x5617e54f96e0 ---------A   01130 PRINT"    Oh by the way your arms are about 20 units long.  The number"
    0x5617e54f9880 ---------A   01140 PRINT"'CLOSEST APPROACH' is the closest distance you and your bouncy"
    0x5617e54f9a20 ---------A   01150 PRINT"friend came to each other during the last hop.  The 'DISTANCE"
    0x5617e54f9bc0 ---------A   01160 PRINT"TO RABBIT' is the distance you are from the rabbit now.  The"
    0x5617e54f9e70 ---------A   01170 PRINT"rabbits 'DIRECTION' is the direction he is just about to hop,"
    0x5617e54fa000 ---------A   01180 PRINT"so keep that in mind when jumping.  The computer will prompt"
    0x5617e54fa1a0 ---------A   01190 PRINT"you for the direction you want to jump next.  Remember "
    0x5617e54fa310 ---------A   01200 PRINT"you and the rabbit don't necessarily jump at the same velocity."
    0x5617e54fa440 ---------A   01210 PRINT"   GOOD LUCK"
    0x5617e54fa4d0 ---------A T 01220 PRINT
    0x5617e54fa620 ---------A   01230 PRINT"                   TYPE 'QUIT' TO STOP."
    0x5617e54fa690 ---------A   01240 PRINT
    0x5617e54fa730 ---------A   01250 RANDOMIZE
    0x5617e54fa7d0 ---------A   01260 REM -- ( `.T` IS THE SQUARE OF THE CAPTURE DISTANCE ) --
    0x5617e54fa9d0 ---------A   01270 LET T = 400
    0x5617e54faa40 ---------A   01280 REM
    0x5617e54fab00 ---------A   01290 REM -- INITIALIZE VELOCITIES AND POSITIONS --
    0x5617e54fab80 ---------A   01300 REM
    0x5617e54fb2e0 ---------A   01310 LET V1 = INT(RND(0)*10+0.5)*10+50
    0x5617e54fb930 ---------A   01320 LET V2 = (INT(RND(0)*2+0.5)+1)*V1
    0x5617e54fc310 ---------A T 01330 LET X1 = (INT(RND(0)*400)+100)*SGN(RND(0)-0.5)
    0x5617e54fca50 ---------A   01340 LET Y1 = (INT(RND(0)*400)+100)*SGN(RND(0)-0.5)
    0x5617e54fcc10 ---------A   01350 IF Y1 = 0  THEN 1330
    0x5617e54fcdd0 ---------A   01360 IF X1 = 0 THEN 1330
    0x5617e54fcfd0 ---------A   01370 LET X2 = 0
    0x5617e54fd1d0 ---------A   01380 LET Y2 = 0
    0x5617e54fd310 ---------A   01390 PRINT"SPEEDS (UNITS/HOP):"
    0x5617e54fd620 ---------A   01400 PRINT"RABBIT -";V1,"YOU -";V2
    0x5617e54fd690 ---------A   01410 PRINT
    0x5617e54fd700 ---------A   01420 PRINT
    0x5617e54fd780 ---------A   01430 PRINT
    0x5617e54fdd60 ---------A   01440 LET C = (X2-X1)^2+(Y2-Y1)^2
    0x5617e54fe030 ---------A   01450 LET P1 = 3.14159/180
    0x5617e54fe220 ---------A   01460 LET H1 = 1
    0x5617e54fe290 ---------A   01470 REM
    0x5617e54fe320 ---------A   01480 REM -- PRINT OUT --
    0x5617e54fe3a0 ---------A   01490 REM
    0x5617e54fe750 ---------A T 01500 LET D1 = INT(RND(0)*359)
    0x5617e54fe8a0 ---------A   01510 PRINT"HOP#: ";
    0x5617e54fead0 ---------A   01520 LET Z = H
    0x5617e54feb50 ---------A   01530 GOSUB 2330
    0x5617e54fecb0 ---------A   01540 PRINT"    DISTANCE TO RABBIT: ";
    0x5617e54ff2e0 ---------A   01550 LET Z = SQR((X2-X1)^2+(Y2-Y1)^2)
    0x5617e54ff360 ---------A   01560 GOSUB 2330
    0x5617e54ff4b0 ---------A   01570 PRINT"    CLOSEST APPROACH: ";
    0x5617e54ff640 ---------A   01580 LET Z = SQR(C)
    0x5617e54ff6b0 ---------A   01590 GOSUB 2330
    0x5617e54ff730 ---------A   01600 PRINT
    0x5617e54ff890 ---------A   01610 PRINT"RABBIT   ---    POSITION:  (";
    0x5617e54ff9c0 ---------A   01620 LET Z = X1
    0x5617e54ffa30 ---------A   01630 GOSUB 2280
    0x5617e54ffb70 ---------A   01640 PRINT",";
    0x5617e55000b0 ---------A   01650 LET Z = Y1
    0x5617e5500130 ---------A   01660 GOSUB 2280
    0x5617e5500280 ---------A   01670 PRINT")     AND DIRECTION:  ";
    0x5617e55003b0 ---------A   01680 LET Z = D1
    0x5617e5500420 ---------A   01690 GOSUB 2330
    0x5617e55004a0 ---------A   01700 PRINT
    0x5617e5500600 ---------A   01710 PRINT"YOU      ---    POSITION:  (";
    0x5617e5500730 ---------A   01720 LET Z = X2
    0x5617e55007a0 ---------A   01730 GOSUB 2280
    0x5617e55008e0 ---------A   01740 PRINT",";
    0x5617e5500a10 ---------A   01750 LET Z = Y2
    0x5617e5500a90 ---------A   01760 GOSUB 2280
    0x5617e5500bd0 ---------A   01770 PRINT")     AND DIRECTION: ";
    0x5617e5500c60 ---------A   01780 GOTO 1800
    0x5617e5500db0 ---------A T 01790 PRINT "DIRECTION TO HOP (0-359 DEGREES): ";
    0x5617e5500e80 ---------A T 01800 INPUT A$
    0x5617e5501090 ---------A   01810 DIM A(15)
    0x5617e5501770 ---------A   01820 LET A(1)=A(2)=A(3)=A(4)=A(5)=D2=0
    0x5617e5501900 ---------A   01830 CHANGE A$ TO A
    0x5617e5501bc0 ---------A   01840 FOR I = 1 TO 15
    0x5617e5501df0 ---------A   01850     IF A(I) = 0 THEN 1910
    0x5617e5502020 ---------A   01859     IF A(I) =113 THEN 2240
    0x5617e5502250 ---------A   01860     IF A(I) = 81 THEN 2240
    0x5617e5502560 ---------A   01870     IF A(I)-48 < 0 THEN 1790
    0x5617e5502860 ---------A   01880     IF A(I)-48 > 9 THEN 1790
    0x5617e5502920 ---------A   01890 NEXT I
    0x5617e55029a0 ---------A   01900 GO TO 1790
    0x5617e5502cd0 ---------A T 01910 FOR J = 1 TO I-1
    0x5617e5503370 ---------A   01920     D2=D2+(A(I-J)-48)*10^(J-1)
    0x5617e5503420 ---------A   01930 NEXT J
    0x5617e5503600 ---------A   01940 IF D2 < 0 THEN 1790
    0x5617e55037c0 ---------A   01950 IF D2 >= 360 THEN 1790
    0x5617e5503840 ---------A   01960 PRINT
    0x5617e55038b0 ---------A   01970 PRINT
    0x5617e5503920 ---------A   01980 REM
    0x5617e55039e0 ---------A   01990 REM -- COMPUTE PATHS AND SEE IF THEY INTERSECT --
    0x5617e5503a60 ---------A   02000 REM
    0x5617e5503f40 ---------A   02010 LET X3 = V1*COS(D1*P1)/100
    0x5617e5504400 ---------A   02020 LET Y3 = V1*SIN(D1*P1)/100
    0x5617e5504840 ---------A   02030 LET X4 = V2*COS(D2*P1)/100
    0x5617e5504c80 ---------A   02040 LET Y4 = V2*SIN(D2*P1)/100
    0x5617e55051d0 ---------A   02050 LET C = (X2-X1)^2+(Y2-Y1)^2
    0x5617e55053e0 ---------A   02060 FOR I = 1 TO 100
    0x5617e55055c0 ---------A   02070     LET X1 = X1+X3
    0x5617e5505790 ---------A   02080     LET Y1 = Y1+Y3
    0x5617e5505960 ---------A   02090     LET X2 = X2+X4
    0x5617e5505b50 ---------A   02100     LET Y2 = Y2+Y4
    0x5617e55060f0 ---------A   02110     IF C < (X2-X1)^2+(Y2-Y1)^2 THEN 2130
    0x5617e5506650 ---------A   02120     C = (X2-X1)^2+(Y2-Y1)^2
    0x5617e5506700 ---------A T 02130 NEXT I
    0x5617e5506920 ---------A   02140 LET H = H+1
    0x5617e5506a90 ---------A   02150 IF C > T THEN 1500
    0x5617e5506b10 ---------A   02160 PRINT
    0x5617e5506b80 ---------A   02170 PRINT
    0x5617e5506cb0 ---------A   02180 PRINT"**********"
    0x5617e5506de0 ---------A   02190 PRINT"* GOT YA *"
    0x5617e5506f10 ---------A   02200 PRINT"**********"
    0x5617e5506f80 ---------A   02210 PRINT
    0x5617e5506ff0 ---------A   02220 PRINT
    0x5617e5507060 ---------A   02230 PRINT
    0x5617e55070b0 ---------A T 02240 STOP
    0x5617e5507130 ---------B   02250 REM
    0x5617e5507200 ---------B   02260 REM -- CONVERT NUMBERS TO STRINGS FOR CLEANER OUTPUT --
    0x5617e5507280 ---------B   02270 REM
    0x5617e5507c50 ---------B G 02280 IF Z < 0 THEN 2310
    0x5617e5507db0 ---------B   02290 PRINT "+";
    0x5617e5507e20 ---------B   02300 GOTO 2330
    0x5617e5507f60 ---------B T 02310 PRINT"-";
    0x5617e5508090 ---------B   02320 LET Z = -Z
    0x5617e5508310 --------CB B 02330 LET Z = INT(Z+0.5)
    0x5617e5508520 --------CB   02340 LET S$ = "0123456789"
    0x5617e5508740 --------CB   02350 FOR I = 1 TO 4
    0x5617e5508c10 --------CB   02360     LET W = INT(Z/10^(4-I))
    0x5617e5508f50 --------CB   02370     PRINT MID$(S$,W+1,1);
    0x5617e55093c0 --------CB   02380     LET Z = Z-W*10^(4-I)
    0x5617e5509470 --------CB   02390 NEXT I
    0x5617e55094d0 --------CB   02400 RETURN
    0x5617e5509530 ---------A   02410 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     01220      01020T, 01030T
     01330      01350T, 01360T
     01500      02150T
     01790      01870T, 01880T, 01900T, 01940T, 01950T
     01800      01780T
     01910      01850T
     02130      02110T
     02240      01859T, 01860T
     02280      01630G, 01660G, 01730G, 01760G
     02310      02280T
     02330      01530G, 01560G, 01590G, 01690G, 02300T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start           Target           Return             End    
  --- --------------   --------------   --------------   -------------- 
   A) 0x5617e54f3dd0   0x5617e54f3dd0   0x5617e5509530   0x5617e5509530 
   B) 0x5617e5507130   0x5617e5507c50   0x5617e55094d0   0x5617e55094d0 
   C) 0x5617e5508310   0x5617e5508310   0x5617e55094d0   0x5617e55094d0 

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine B!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     02520 - 10000    7490 

 */



/*
 *  Symbol Table Listing for '/home/alan/dev/BasicGames/source/base/rabbit/basic/rabbit.bas'
 *
    A     Array    Integer     {0,16} 
    A              Integer 
    A$             String  
    C              Integer 
    COS   Function Integer     args=1, float 
    D1             Integer 
    D2             Integer 
    H              Integer 
    H1             Integer 
    I              Integer 
    INT   Function Integer     args=1, float 
    J              Integer 
    MID$  Function String      args=2, char* int   
    P1             Float   
    RND   Function Integer     args=1, int   
    S$             String  
    SGN   Function Integer     args=1, int   
    SIN   Function Integer     args=1, float 
    SQR   Function Integer     args=1, float 
    T              Integer 
    V1             Integer 
    V2             Integer 
    W              Integer 
    X1             Integer 
    X2             Integer 
    X3             Integer 
    X4             Integer 
    Y1             Integer 
    Y2             Integer 
    Y3             Integer 
    Y4             Integer 
    Z              Integer 

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/rabbit/basic/rabbit.bas: 
 *
                   +-+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   | | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    | | |
        Address    v v v Original BASIC statement
    -------------- --- - ------------------------------------------------------------------------------
    0x5617e54f3dd0 ---------A   01000 PRINT"DO YOU WANT INSTRUCTIONS :";
    0x5617e54f3f50 ---------A   01010 INPUT A$
    0x5617e54f4360 ---------A   01020 IF MID$(A$,1,1)="N" THEN 1220
    0x5617e54f46f0 ---------A   01030 IF MID$(A$,1,1)="n" THEN 1220
    0x5617e54f4770 ---------A   01040 PRINT
    0x5617e54f4860 ---------A   01050 PRINT
    0x5617e54f4a00 ---------A   01060 PRINT"    This is the game of RABBIT.  The object of RABBIT is"
    0x5617e54f4b40 ---------A   01070 PRINT"to come within a certian distance of the computer controlled"
    0x5617e54f8f00 ---------A   01080 PRINT"rabbit, which also moves.  "
    0x5617e54f90e0 ---------A   01090 PRINT"    The way you do this is to hop around (the rabbit hops too) "
    0x5617e54f9270 ---------A   01100 PRINT"such that your path crosses the rabbit's path at the same time"
    0x5617e54f93d0 ---------A   01110 PRINT"Or in other words you come close enough to grab the little "
    0x5617e54f9540 ---------A   01120 PRINT"booger.  "
    0x5617e54f96e0 ---------A   01130 PRINT"    Oh by the way your arms are about 20 units long.  The number"
    0x5617e54f9880 ---------A   01140 PRINT"'CLOSEST APPROACH' is the closest distance you and your bouncy"
    0x5617e54f9a20 ---------A   01150 PRINT"friend came to each other during the last hop.  The 'DISTANCE"
    0x5617e54f9bc0 ---------A   01160 PRINT"TO RABBIT' is the distance you are from the rabbit now.  The"
    0x5617e54f9e70 ---------A   01170 PRINT"rabbits 'DIRECTION' is the direction he is just about to hop,"
    0x5617e54fa000 ---------A   01180 PRINT"so keep that in mind when jumping.  The computer will prompt"
    0x5617e54fa1a0 ---------A   01190 PRINT"you for the direction you want to jump next.  Remember "
    0x5617e54fa310 ---------A   01200 PRINT"you and the rabbit don't necessarily jump at the same velocity."
    0x5617e54fa440 ---------A   01210 PRINT"   GOOD LUCK"
    0x5617e54fa4d0 ---------A T 01220 PRINT
    0x5617e54fa620 ---------A   01230 PRINT"                   TYPE 'QUIT' TO STOP."
    0x5617e54fa690 ---------A   01240 PRINT
    0x5617e54fa730 ---------A   01250 RANDOMIZE
    0x5617e54fa7d0 ---------A   01260 REM -- ( `.T` IS THE SQUARE OF THE CAPTURE DISTANCE ) --
    0x5617e54fa9d0 ---------A   01270 LET T = 400
    0x5617e54faa40 ---------A   01280 REM
    0x5617e54fab00 ---------A   01290 REM -- INITIALIZE VELOCITIES AND POSITIONS --
    0x5617e54fab80 ---------A   01300 REM
    0x5617e54fb2e0 ---------A   01310 LET V1 = INT(RND(0)*10+0.5)*10+50
    0x5617e54fb930 ---------A   01320 LET V2 = (INT(RND(0)*2+0.5)+1)*V1
    0x5617e54fc310 ---------A T 01330 LET X1 = (INT(RND(0)*400)+100)*SGN(RND(0)-0.5)
    0x5617e54fca50 ---------A   01340 LET Y1 = (INT(RND(0)*400)+100)*SGN(RND(0)-0.5)
    0x5617e54fcc10 ---------A   01350 IF Y1 = 0  THEN 1330
    0x5617e54fcdd0 ---------A   01360 IF X1 = 0 THEN 1330
    0x5617e54fcfd0 ---------A   01370 LET X2 = 0
    0x5617e54fd1d0 ---------A   01380 LET Y2 = 0
    0x5617e54fd310 ---------A   01390 PRINT"SPEEDS (UNITS/HOP):"
    0x5617e54fd620 ---------A   01400 PRINT"RABBIT -";V1,"YOU -";V2
    0x5617e54fd690 ---------A   01410 PRINT
    0x5617e54fd700 ---------A   01420 PRINT
    0x5617e54fd780 ---------A   01430 PRINT
    0x5617e54fdd60 ---------A   01440 LET C = (X2-X1)^2+(Y2-Y1)^2
    0x5617e54fe030 ---------A   01450 LET P1 = 3.14159/180
    0x5617e54fe220 ---------A   01460 LET H1 = 1
    0x5617e54fe290 ---------A   01470 REM
    0x5617e54fe320 ---------A   01480 REM -- PRINT OUT --
    0x5617e54fe3a0 ---------A   01490 REM
    0x5617e54fe750 ---------A T 01500 LET D1 = INT(RND(0)*359)
    0x5617e54fe8a0 ---------A   01510 PRINT"HOP#: ";
    0x5617e54fead0 ---------A   01520 LET Z = H
    0x5617e54feb50 ---------A   01530 GOSUB 2440
    0x5617e54fecb0 ---------A   01540 PRINT"    DISTANCE TO RABBIT: ";
    0x5617e54ff2e0 ---------A   01550 LET Z = SQR((X2-X1)^2+(Y2-Y1)^2)
    0x5617e54ff360 ---------A   01560 GOSUB 2440
    0x5617e54ff4b0 ---------A   01570 PRINT"    CLOSEST APPROACH: ";
    0x5617e54ff640 ---------A   01580 LET Z = SQR(C)
    0x5617e54ff6b0 ---------A   01590 GOSUB 2440
    0x5617e54ff730 ---------A   01600 PRINT
    0x5617e54ff890 ---------A   01610 PRINT"RABBIT   ---    POSITION:  (";
    0x5617e54ff9c0 ---------A   01620 LET Z = X1
    0x5617e54ffa30 ---------A   01630 GOSUB 2270
    0x5617e54ffb70 ---------A   01640 PRINT",";
    0x5617e55000b0 ---------A   01650 LET Z = Y1
    0x5617e5500130 ---------A   01660 GOSUB 2270
    0x5617e5500280 ---------A   01670 PRINT")     AND DIRECTION:  ";
    0x5617e55003b0 ---------A   01680 LET Z = D1
    0x5617e5500420 ---------A   01690 GOSUB 2440
    0x5617e55004a0 ---------A   01700 PRINT
    0x5617e5500600 ---------A   01710 PRINT"YOU      ---    POSITION:  (";
    0x5617e5500730 ---------A   01720 LET Z = X2
    0x5617e55007a0 ---------A   01730 GOSUB 2270
    0x5617e55008e0 ---------A   01740 PRINT",";
    0x5617e5500a10 ---------A   01750 LET Z = Y2
    0x5617e5500a90 ---------A   01760 GOSUB 2270
    0x5617e5500bd0 ---------A   01770 PRINT")     AND DIRECTION: ";
    0x5617e5500c60 ---------A   01780 GOTO 1800
    0x5617e5500db0 ---------A T 01790 PRINT "DIRECTION TO HOP (0-359 DEGREES): ";
    0x5617e5500e80 ---------A T 01800 INPUT A$
    0x5617e5501090 ---------A   01810 DIM A(15)
    0x5617e5501770 ---------A   01820 LET A(1)=A(2)=A(3)=A(4)=A(5)=D2=0
    0x5617e5501900 ---------A   01830 CHANGE A$ TO A
    0x5617e5501bc0 ---------A   01840 FOR I = 1 TO 15
    0x5617e5501df0 ---------A   01850     IF A(I) = 0 THEN 1920
    0x5617e5502020 ---------A   01860     IF A(I) =113 THEN 2250
    0x5617e5502250 ---------A   01870     IF A(I) = 81 THEN 2250
    0x5617e5502560 ---------A   01880     IF A(I)-48 < 0 THEN 1790
    0x5617e5502860 ---------A   01890     IF A(I)-48 > 9 THEN 1790
    0x5617e5502920 ---------A   01900 NEXT I
    0x5617e55029a0 ---------A   01910 GO TO 1790
    0x5617e5502cd0 ---------A T 01920 FOR J = 1 TO I-1
    0x5617e5503370 ---------A   01930     D2=D2+(A(I-J)-48)*10^(J-1)
    0x5617e5503420 ---------A   01940 NEXT J
    0x5617e5503600 ---------A   01950 IF D2 < 0 THEN 1790
    0x5617e55037c0 ---------A   01960 IF D2 >= 360 THEN 1790
    0x5617e5503840 ---------A   01970 PRINT
    0x5617e55038b0 ---------A   01980 PRINT
    0x5617e5503920 ---------A   01990 REM
    0x5617e55039e0 ---------A   02000 REM -- COMPUTE PATHS AND SEE IF THEY INTERSECT --
    0x5617e5503a60 ---------A   02010 REM
    0x5617e5503f40 ---------A   02020 LET X3 = V1*COS(D1*P1)/100
    0x5617e5504400 ---------A   02030 LET Y3 = V1*SIN(D1*P1)/100
    0x5617e5504840 ---------A   02040 LET X4 = V2*COS(D2*P1)/100
    0x5617e5504c80 ---------A   02050 LET Y4 = V2*SIN(D2*P1)/100
    0x5617e55051d0 ---------A   02060 LET C = (X2-X1)^2+(Y2-Y1)^2
    0x5617e55053e0 ---------A   02070 FOR I = 1 TO 100
    0x5617e55055c0 ---------A   02080     LET X1 = X1+X3
    0x5617e5505790 ---------A   02090     LET Y1 = Y1+Y3
    0x5617e5505960 ---------A   02100     LET X2 = X2+X4
    0x5617e5505b50 ---------A   02110     LET Y2 = Y2+Y4
    0x5617e55060f0 ---------A   02120     IF C < (X2-X1)^2+(Y2-Y1)^2 THEN 2140
    0x5617e5506650 ---------A   02130     C = (X2-X1)^2+(Y2-Y1)^2
    0x5617e5506700 ---------A T 02140 NEXT I
    0x5617e5506920 ---------A   02150 LET H = H+1
    0x5617e5506a90 ---------A   02160 IF C > T THEN 1500
    0x5617e5506b10 ---------A   02170 PRINT
    0x5617e5506b80 ---------A   02180 PRINT
    0x5617e5506cb0 ---------A   02190 PRINT"**********"
    0x5617e5506de0 ---------A   02200 PRINT"* GOT YA *"
    0x5617e5506f10 ---------A   02210 PRINT"**********"
    0x5617e5506f80 ---------A   02220 PRINT
    0x5617e5506ff0 ---------A   02230 PRINT
    0x5617e5507060 ---------A   02240 PRINT
    0x5617e55070b0 ---------A T 02250 STOP
    0x5617e5509530 ---------A   02260 END
    0x5617e550d460 ---------B G 02270 GOTO 2310 (Pseudo Goto)
    0x5617e5507130 ---------B   02280 REM
    0x5617e5507200 ---------B   02290 REM -- CONVERT NUMBERS TO STRINGS FOR CLEANER OUTPUT --
    0x5617e5507280 ---------B   02300 REM
    0x5617e5507c50 ---------B T 02310 IF Z < 0 THEN 2340
    0x5617e5507db0 ---------B   02320 PRINT "+";
    0x5617e5507e20 ---------B   02330 GOTO 2360
    0x5617e5507f60 ---------B T 02340 PRINT"-";
    0x5617e5508090 ---------B   02350 LET Z = -Z
    0x5617e5509c50 ---------B T 02360 LET Z = INT(Z+0.5)
    0x5617e550a560 ---------B   02370 LET S$ = "0123456789"
    0x5617e550d740 ---------B   02380 FOR I = 1 TO 4
    0x5617e550ab50 ---------B   02390     LET W = INT(Z/10^(4-I))
    0x5617e550ab00 ---------B   02400     PRINT MID$(S$,W+1,1);
    0x5617e550a830 ---------B   02410     LET Z = Z-W*10^(4-I)
    0x5617e550d910 ---------B   02420 NEXT I
    0x5617e550d9a0 ---------B   02430 RETURN
    0x5617e5508310 ---------C G 02440 LET Z = INT(Z+0.5)
    0x5617e5508520 ---------C   02450 LET S$ = "0123456789"
    0x5617e5508740 ---------C   02460 FOR I = 1 TO 4
    0x5617e5508c10 ---------C   02470     LET W = INT(Z/10^(4-I))
    0x5617e5508f50 ---------C   02480     PRINT MID$(S$,W+1,1);
    0x5617e55093c0 ---------C   02490     LET Z = Z-W*10^(4-I)
    0x5617e5509470 ---------C   02500 NEXT I
    0x5617e55094d0 ---------C   02510 RETURN
 */

//---------------------------------------------------------------------------
// $Header$ 
//
// NOTE: This program has been automatically tranlated by b2c
//
// $Log$ 
// 
//---------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
//---------------------------------------------------------------------------
// Global data area.
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int   A_int_arr[16];// Comments?
int   A_int;        // Comments?
char* A_str;        // Comments?
int   C_int;        // Comments?
int   D1_int;       // Comments?
int   D2_int;       // Comments?
int   H_int;        // Comments?
int   H1_int;       // Comments?
int   I_int;        // Comments?
int   J_int;        // Comments?
float P1_flt;       // Comments?
char* S_str;        // Comments?
int   T_int;        // Comments?
int   V1_int;       // Comments?
int   V2_int;       // Comments?
int   W_int;        // Comments?
int   X1_int;       // Comments?
int   X2_int;       // Comments?
int   X3_int;       // Comments?
int   X4_int;       // Comments?
int   Y1_int;       // Comments?
int   Y2_int;       // Comments?
int   Y3_int;       // Comments?
int   Y4_int;       // Comments?
int   Z_int;        // Comments?
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_02270();
void Routine_02440();

//---------------------------------------------------------------------------
// Program Functions.
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
// Program Subroutines.
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Routine B
//---------------------------------------------------------------------------

void Routine_02270(){
    // 02270 GOTO 2310 (Pseudo Goto)
    goto Lbl_02310;
    // 02280 REM
    // 02290 REM -- CONVERT NUMBERS TO STRINGS FOR CLEANER OUTPUT --
    // 02300 REM

  Lbl_02310:
    // 02310 IF Z < 0 THEN 2340
    if(Z_int<0)goto Lbl_02340;
    // 02320 PRINT "+";
    b2c_fprintf(stdout,"+"); 
    // 02330 GOTO 2360
    goto Lbl_02360;

  Lbl_02340:
    // 02340 PRINT"-";
    b2c_fprintf(stdout,"-"); 
    // 02350 LET Z = -Z
    Z_int = -Z_int;

  Lbl_02360:
    // 02360 LET Z = INT(Z+0.5)
    Z_int = INT(Z_int+0.5);
    // 02370 LET S$ = "0123456789"
    GLBpStr="0123456789";
    S_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 02380 FOR I = 1 TO 4
    for(I_int=1;I_int<=4;I_int++){
        // 02390     LET W = INT(Z/10^(4-I))
        W_int = INT(Z_int/IPower(10,(4-I_int)));
        // 02400     PRINT MID$(S$,W+1,1);
        b2c_fprintf(stdout,"%s",MID(S_str,W_int+1,1)); 
        // 02410     LET Z = Z-W*10^(4-I)
        Z_int = Z_int-W_int*IPower(10,(4-I_int));
        // 02420 NEXT I
        int dummy_2420=0; // Ignore this line.
    }; // End-For(I_int)
    // 02430 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_02440(){
    // 02440 LET Z = INT(Z+0.5)
    Z_int = INT(Z_int+0.5);
    // 02450 LET S$ = "0123456789"
    GLBpStr="0123456789";
    S_str = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 02460 FOR I = 1 TO 4
    for(I_int=1;I_int<=4;I_int++){
        // 02470     LET W = INT(Z/10^(4-I))
        W_int = INT(Z_int/IPower(10,(4-I_int)));
        // 02480     PRINT MID$(S$,W+1,1);
        b2c_fprintf(stdout,"%s",MID(S_str,W_int+1,1)); 
        // 02490     LET Z = Z-W*10^(4-I)
        Z_int = Z_int-W_int*IPower(10,(4-I_int));
        // 02500 NEXT I
        int dummy_2500=0; // Ignore this line.
    }; // End-For(I_int)
    // 02510 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT"DO YOU WANT INSTRUCTIONS :";
    b2c_fprintf(stdout,"DO YOU WANT INSTRUCTIONS :"); 
    // 01010 INPUT A$
    // Start of Basic INPUT statement 01010
    printf(" ? ");
    char inpbuf_01010[100];
    if(fgets(inpbuf_01010,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01010=strtok(inpbuf_01010," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_01010==nullptr){
            A_str = "";
        }else{
            A_str = ps_01010;
        };
    }; // End of Basic INPUT statement 01010
    // 01020 IF MID$(A$,1,1)="N" THEN 1220
    if(strcmp(MID(A_str,1,1),"N")==0)goto Lbl_01220;
    // 01030 IF MID$(A$,1,1)="n" THEN 1220
    if(strcmp(MID(A_str,1,1),"n")==0)goto Lbl_01220;
    // 01040 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01050 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01060 PRINT"    This is the game of RABBIT.  The object of RABBIT is"
    b2c_fprintf(stdout,"    This is the game of RABBIT.  The object of RABBIT is"); b2c_fprintf(stdout,"\n");
    // 01070 PRINT"to come within a certian distance of the computer controlled"
    b2c_fprintf(stdout,"to come within a certian distance of the computer controlled"); b2c_fprintf(stdout,"\n");
    // 01080 PRINT"rabbit, which also moves.  "
    b2c_fprintf(stdout,"rabbit, which also moves.  "); b2c_fprintf(stdout,"\n");
    // 01090 PRINT"    The way you do this is to hop around (the rabbit hops too) "
    b2c_fprintf(stdout,"    The way you do this is to hop around (the rabbit hops too) "); b2c_fprintf(stdout,"\n");
    // 01100 PRINT"such that your path crosses the rabbit's path at the same time"
    b2c_fprintf(stdout,"such that your path crosses the rabbit's path at the same time"); b2c_fprintf(stdout,"\n");
    // 01110 PRINT"Or in other words you come close enough to grab the little "
    b2c_fprintf(stdout,"Or in other words you come close enough to grab the little "); b2c_fprintf(stdout,"\n");
    // 01120 PRINT"booger.  "
    b2c_fprintf(stdout,"booger.  "); b2c_fprintf(stdout,"\n");
    // 01130 PRINT"    Oh by the way your arms are about 20 units long.  The number"
    b2c_fprintf(stdout,"    Oh by the way your arms are about 20 units long.  The number"); b2c_fprintf(stdout,"\n");
    // 01140 PRINT"'CLOSEST APPROACH' is the closest distance you and your bouncy"
    b2c_fprintf(stdout,"'CLOSEST APPROACH' is the closest distance you and your bouncy"); b2c_fprintf(stdout,"\n");
    // 01150 PRINT"friend came to each other during the last hop.  The 'DISTANCE"
    b2c_fprintf(stdout,"friend came to each other during the last hop.  The 'DISTANCE"); b2c_fprintf(stdout,"\n");
    // 01160 PRINT"TO RABBIT' is the distance you are from the rabbit now.  The"
    b2c_fprintf(stdout,"TO RABBIT' is the distance you are from the rabbit now.  The"); b2c_fprintf(stdout,"\n");
    // 01170 PRINT"rabbits 'DIRECTION' is the direction he is just about to hop,"
    b2c_fprintf(stdout,"rabbits 'DIRECTION' is the direction he is just about to hop,"); b2c_fprintf(stdout,"\n");
    // 01180 PRINT"so keep that in mind when jumping.  The computer will prompt"
    b2c_fprintf(stdout,"so keep that in mind when jumping.  The computer will prompt"); b2c_fprintf(stdout,"\n");
    // 01190 PRINT"you for the direction you want to jump next.  Remember "
    b2c_fprintf(stdout,"you for the direction you want to jump next.  Remember "); b2c_fprintf(stdout,"\n");
    // 01200 PRINT"you and the rabbit don't necessarily jump at the same velocity."
    b2c_fprintf(stdout,"you and the rabbit don't necessarily jump at the same velocity."); b2c_fprintf(stdout,"\n");
    // 01210 PRINT"   GOOD LUCK"
    b2c_fprintf(stdout,"   GOOD LUCK"); b2c_fprintf(stdout,"\n");

  Lbl_01220:
    // 01220 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01230 PRINT"                   TYPE 'QUIT' TO STOP."
    b2c_fprintf(stdout,"                   TYPE 'QUIT' TO STOP."); b2c_fprintf(stdout,"\n");
    // 01240 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01250 RANDOMIZE
    RANDOMIZE();
    // 01260 REM -- ( `.T` IS THE SQUARE OF THE CAPTURE DISTANCE ) --
    // 01270 LET T = 400
    T_int = 400;
    // 01280 REM
    // 01290 REM -- INITIALIZE VELOCITIES AND POSITIONS --
    // 01300 REM
    // 01310 LET V1 = INT(RND(0)*10+0.5)*10+50
    V1_int = INT(RND(0)*10+0.5)*10+50;
    // 01320 LET V2 = (INT(RND(0)*2+0.5)+1)*V1
    V2_int = (INT(RND(0)*2+0.5)+1)*V1_int;

  Lbl_01330:
    // 01330 LET X1 = (INT(RND(0)*400)+100)*SGN(RND(0)-0.5)
    X1_int = (INT(RND(0)*400)+100)*SGN(RND(0)-0.5);
    // 01340 LET Y1 = (INT(RND(0)*400)+100)*SGN(RND(0)-0.5)
    Y1_int = (INT(RND(0)*400)+100)*SGN(RND(0)-0.5);
    // 01350 IF Y1 = 0  THEN 1330
    if(Y1_int==0)goto Lbl_01330;
    // 01360 IF X1 = 0 THEN 1330
    if(X1_int==0)goto Lbl_01330;
    // 01370 LET X2 = 0
    X2_int = 0;
    // 01380 LET Y2 = 0
    Y2_int = 0;
    // 01390 PRINT"SPEEDS (UNITS/HOP):"
    b2c_fprintf(stdout,"SPEEDS (UNITS/HOP):"); b2c_fprintf(stdout,"\n");
    // 01400 PRINT"RABBIT -";V1,"YOU -";V2
    b2c_fprintf(stdout,"RABBIT - %d @YOU - %d ",V1_int,V2_int); b2c_fprintf(stdout,"\n");
    // 01410 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01420 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01430 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01440 LET C = (X2-X1)^2+(Y2-Y1)^2
    C_int = IPower((X2_int-X1_int),2)+IPower((Y2_int-Y1_int),2);
    // 01450 LET P1 = 3.14159/180
    P1_flt = 3.14159/180;
    // 01460 LET H1 = 1
    H1_int = 1;
    // 01470 REM
    // 01480 REM -- PRINT OUT --
    // 01490 REM

  Lbl_01500:
    // 01500 LET D1 = INT(RND(0)*359)
    D1_int = INT(RND(0)*359);
    // 01510 PRINT"HOP#: ";
    b2c_fprintf(stdout,"HOP#: "); 
    // 01520 LET Z = H
    Z_int = H_int;
    // 01530 GOSUB 2440
    Routine_02440();
    // 01540 PRINT"    DISTANCE TO RABBIT: ";
    b2c_fprintf(stdout,"    DISTANCE TO RABBIT: "); 
    // 01550 LET Z = SQR((X2-X1)^2+(Y2-Y1)^2)
    Z_int = SQR(IPower((X2_int-X1_int),2)+IPower((Y2_int-Y1_int),2));
    // 01560 GOSUB 2440
    Routine_02440();
    // 01570 PRINT"    CLOSEST APPROACH: ";
    b2c_fprintf(stdout,"    CLOSEST APPROACH: "); 
    // 01580 LET Z = SQR(C)
    Z_int = SQR(C_int);
    // 01590 GOSUB 2440
    Routine_02440();
    // 01600 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01610 PRINT"RABBIT   ---    POSITION:  (";
    b2c_fprintf(stdout,"RABBIT   ---    POSITION:  ("); 
    // 01620 LET Z = X1
    Z_int = X1_int;
    // 01630 GOSUB 2270
    Routine_02270();
    // 01640 PRINT",";
    b2c_fprintf(stdout,","); 
    // 01650 LET Z = Y1
    Z_int = Y1_int;
    // 01660 GOSUB 2270
    Routine_02270();
    // 01670 PRINT")     AND DIRECTION:  ";
    b2c_fprintf(stdout,")     AND DIRECTION:  "); 
    // 01680 LET Z = D1
    Z_int = D1_int;
    // 01690 GOSUB 2440
    Routine_02440();
    // 01700 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01710 PRINT"YOU      ---    POSITION:  (";
    b2c_fprintf(stdout,"YOU      ---    POSITION:  ("); 
    // 01720 LET Z = X2
    Z_int = X2_int;
    // 01730 GOSUB 2270
    Routine_02270();
    // 01740 PRINT",";
    b2c_fprintf(stdout,","); 
    // 01750 LET Z = Y2
    Z_int = Y2_int;
    // 01760 GOSUB 2270
    Routine_02270();
    // 01770 PRINT")     AND DIRECTION: ";
    b2c_fprintf(stdout,")     AND DIRECTION: "); 
    // 01780 GOTO 1800
    goto Lbl_01800;

  Lbl_01790:
    // 01790 PRINT "DIRECTION TO HOP (0-359 DEGREES): ";
    b2c_fprintf(stdout,"DIRECTION TO HOP (0-359 DEGREES): "); 

  Lbl_01800:
    // 01800 INPUT A$
    // Start of Basic INPUT statement 01800
    printf(" ? ");
    char inpbuf_01800[100];
    if(fgets(inpbuf_01800,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01800=strtok(inpbuf_01800," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_01800==nullptr){
            A_str = "";
        }else{
            A_str = ps_01800;
        };
    }; // End of Basic INPUT statement 01800
    // 01810 DIM A(15)
    // 01820 LET A(1)=A(2)=A(3)=A(4)=A(5)=D2=0
    D2_int = A_int_arr[(int)5] = A_int_arr[(int)4] = A_int_arr[(int)3] = A_int_arr[(int)2] = A_int_arr[(int)1] = 0;
    // 01830 CHANGE A$ TO A
    if(A_str!=nullptr){
        for(int i=1;(i<=(int)strlen(A_str))&&(i<=16);i++){
            A_int_arr[i]=(int)A_str[i-1];
        }
    }
    // 01840 FOR I = 1 TO 15
    for(I_int=1;I_int<=15;I_int++){
        // 01850     IF A(I) = 0 THEN 1920
        if(A_int_arr[(int)I_int]==0)goto Lbl_01920;
        // 01860     IF A(I) =113 THEN 2250
        if(A_int_arr[(int)I_int]==113)goto Lbl_02250;
        // 01870     IF A(I) = 81 THEN 2250
        if(A_int_arr[(int)I_int]==81)goto Lbl_02250;
        // 01880     IF A(I)-48 < 0 THEN 1790
        if(A_int_arr[(int)I_int]-48<0)goto Lbl_01790;
        // 01890     IF A(I)-48 > 9 THEN 1790
        if(A_int_arr[(int)I_int]-48>9)goto Lbl_01790;
        // 01900 NEXT I
        int dummy_1900=0; // Ignore this line.
    }; // End-For(I_int)
    // 01910 GO TO 1790
    goto Lbl_01790;

  Lbl_01920:
    // 01920 FOR J = 1 TO I-1
    for(J_int=1;J_int<=I_int-1;J_int++){
        // 01930     D2=D2+(A(I-J)-48)*10^(J-1)
        D2_int = D2_int+(A_int_arr[(int)I_int-J_int]-48)*IPower(10,(J_int-1));
        // 01940 NEXT J
        int dummy_1940=0; // Ignore this line.
    }; // End-For(J_int)
    // 01950 IF D2 < 0 THEN 1790
    if(D2_int<0)goto Lbl_01790;
    // 01960 IF D2 >= 360 THEN 1790
    if(D2_int>=360)goto Lbl_01790;
    // 01970 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01980 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01990 REM
    // 02000 REM -- COMPUTE PATHS AND SEE IF THEY INTERSECT --
    // 02010 REM
    // 02020 LET X3 = V1*COS(D1*P1)/100
    X3_int = V1_int*COS(D1_int*P1_flt)/100;
    // 02030 LET Y3 = V1*SIN(D1*P1)/100
    Y3_int = V1_int*SIN(D1_int*P1_flt)/100;
    // 02040 LET X4 = V2*COS(D2*P1)/100
    X4_int = V2_int*COS(D2_int*P1_flt)/100;
    // 02050 LET Y4 = V2*SIN(D2*P1)/100
    Y4_int = V2_int*SIN(D2_int*P1_flt)/100;
    // 02060 LET C = (X2-X1)^2+(Y2-Y1)^2
    C_int = IPower((X2_int-X1_int),2)+IPower((Y2_int-Y1_int),2);
    // 02070 FOR I = 1 TO 100
    for(I_int=1;I_int<=100;I_int++){
        // 02080     LET X1 = X1+X3
        X1_int = X1_int+X3_int;
        // 02090     LET Y1 = Y1+Y3
        Y1_int = Y1_int+Y3_int;
        // 02100     LET X2 = X2+X4
        X2_int = X2_int+X4_int;
        // 02110     LET Y2 = Y2+Y4
        Y2_int = Y2_int+Y4_int;
        // 02120     IF C < (X2-X1)^2+(Y2-Y1)^2 THEN 2140
        if(C_int<IPower((X2_int-X1_int),2)+IPower((Y2_int-Y1_int),2))goto Lbl_02140;
        // 02130     C = (X2-X1)^2+(Y2-Y1)^2
        C_int = IPower((X2_int-X1_int),2)+IPower((Y2_int-Y1_int),2);

  Lbl_02140:
        // 02140 NEXT I
        int dummy_2140=0; // Ignore this line.
    }; // End-For(I_int)
    // 02150 LET H = H+1
    H_int = H_int+1;
    // 02160 IF C > T THEN 1500
    if(C_int>T_int)goto Lbl_01500;
    // 02170 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 02180 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 02190 PRINT"**********"
    b2c_fprintf(stdout,"**********"); b2c_fprintf(stdout,"\n");
    // 02200 PRINT"* GOT YA *"
    b2c_fprintf(stdout,"* GOT YA *"); b2c_fprintf(stdout,"\n");
    // 02210 PRINT"**********"
    b2c_fprintf(stdout,"**********"); b2c_fprintf(stdout,"\n");
    // 02220 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 02230 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 02240 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");

  Lbl_02250:
    // 02250 STOP
    exit(1);
    // 02260 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
