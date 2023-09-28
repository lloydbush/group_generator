_(c) Lloyd Bush 2023_\
ALL FILES RELATED TO THIS PROJECT ARE LICENSED UNDER THE _MIT License_\

THIS IS GROUP GENERATOR VERSION 0.2 FOR LINUX\
TESTED AND COMPILED IN _Linux Mint 21.1_ AND _gcc version 11.3.0_

TO RUN THE PROGRAM RUN _run.sh_ IN THE TERMINAL\
MAKE SURE THAT BOTH _run.sh_ AND group_gen_0.x HAVE PERMISSION TO BE EXECUTED AS A PROGRAM\
YOU CAN CHANGE THIS IN THE PERMISSIONS OR USING THE COMMANDLINE AND _chmod +x filename_

THE ONLY FILES YOU SHOULD EDIT ARE _names.txt_ AND ANY FILES YOU SHOULD CREATE TO STORE THE NAMES\
TO STORE NAMES IN A FILE CREATE A NEW _.txt_ OR _.csv_ FILE AND ADD THE NAMES USING FOLLOWING SYNTAX:

_name1_\
_name2_\
_name3_\
_..._

MAKE SURE THIS FILE IS IN THE SAME DIRECTORY AS THE _group_gen_0.x_ FILE\
BY DEFAULT THIS IS THE BIN DIRECTORY

####################################################################################################

CHANGELOG:
==========

CURRENT FILE NAME DEAFAULT\
    The current file name is the default when saving.

ASK BEFORE DELETING DATA\
    This ensures you don't accidentally delete any data.

CLEANED UP CODE

ADD/REMOVE STUDENTS TO/FROM STUDENT LIST\
    Removing students from an empty list will result in a crash.

SAVE/LOAD STUDENT LIST TO/FROM FILE\
    Loading a student list will clear the previous list.

CREATE FILE IF NECESSARY\
    Files of the same name will be overwritten.

LIST STUDENTS IN CURRENT STUDENT LIST

GENERATE RANDOM GROUPS BY THE NUMBER OF STUDENTS PER GROUP/THE TOTAL NUMBER OF GROUPS\
    Number greater than number of students may result in crash.

SHOW HELP MENU

EXIT PROGRAM

####################################################################################################

THIS FILE WAS LAST UPDATED ON THE (dd.mm.yyyy): _28.09.2023_
