(c) Lloyd Bush 2023
ALL FILES RELATED TO THIS PROJECT ARE LICENSED UNDER THE MIT License

THIS IS GROUP GENERATOR VERSION 0.2 FOR LINUX
TESTED AND COMPILED IN Linux Mint 21.1 AND gcc version 11.3.0

TO RUN THE PROGRAM RUN run.sh IN THE TERMINAL
MAKE SURE THAT BOTH run.sh AND group_gen_0.x HAVE PERMISSION TO BE EXECUTED AS A PROGRAM
YOU CAN CHANGE THIS IN THE PERMISSIONS OR USING THE COMMANDLINE AND "chmod +x filename"

THE ONLY FILES YOU SHOULD EDIT ARE names.txt AND ANY FILES YOU SHOULD CREATE TO STORE THE NAMES
TO STORE NAMES IN A FILE CREATE A NEW TEXT (.txt) OR CSV (.csv) FILE AND ADD THE NAMES USING FOLLOWING SYNTAX:

name1
name2
name3
...

MAKE SURE THIS FILE IS IN THE SAME DIRECTORY AS THE group_gen_0.x FILE
BY DEFAULT THIS IS THE BIN DIRECTORY

####################################################################################################
CHANGELOG:
==========

CURRENT FILE NAME DEAFAULT
    The current file name is the default when saving.

ASK BEFORE DELETING DATA
    This ensures you don't accidentally delete any data.

CLEANED UP CODE

ADD/REMOVE STUDENTS TO/FROM STUDENT LIST
    Removing students from an empty list will result in a crash.

SAVE/LOAD STUDENT LIST TO/FROM FILE
    Loading a student list will clear the previous list.

CREATE FILE IF NECESSARY
    Files of the same name will be overwritten.

LIST STUDENTS IN CURRENT STUDENT LIST

GENERATE RANDOM GROUPS BY THE NUMBER OF STUDENTS PER GROUP/THE TOTAL NUMBER OF GROUPS
    Number greter than number of students may result in crash.

SHOW HELP MENU

EXIT PROGRAM
####################################################################################################

THIS FILE WAS LAST UPDATED (dd.mm.yyyy): 28.09.2023
