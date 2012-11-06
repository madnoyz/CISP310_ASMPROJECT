###CISP310_ASMPROJECT
==================

#Project: Racer X - Go Go ASM Speed Racer!

###Description:
This hub will document our progress and contain the Source Code for *CISP 310 Final Group Project*.
We are students at Folsom Lake College for the 2012 Fall Semester. CISP 310 is an assembly language class
with Professor Caleb Fowler. Email us at flcf12cisp [at] outlook [dot] com for any questions.

###Group Members: 
James Daley , Henway Fong, Clyde Pabro, Sang Pham

###Updates:
* Oct.2.2012 - Group decided on the **Texas Instrument MSP430** micro controller for this project. [cp] 
* Oct.9.2012 - The project we have chosen to work on is a self driven radio controlled car utilizing the MSP430. [cp]
* Oct.16.2012 - Found great source of information for the MSP430: [MSP430 Wiki Source](http://processors.wiki.ti.com/index.php/MSP430_LaunchPad_%28MSP-EXP430G2%29)  [cp]
* Oct..23.2012 - James wired up the MSP430 to the microcontroller of the remote controlled car.
* Oct.30.2012 - Presented our Project to the Class. James showcased his prototype.
* Nov 6, 2012 - Configure infrared sensors, finish coding basic movements to MSP430

##Project Notes
###Tasks to be completed
Install infrared sensors to MSP430  
Code basic movements - frwd, back, right, left  
Establish diagram for registers/pins with usage  
Convert source code to assembly  

###Programs Used
ENERGIA  
Assembler  

###Assembly Notes
ARM (Advanced RISC Machines Ltd.) processor used for MSP430 requires conversion  
Reference to ARM: Assembly Language Programming by Peter Knaggs and Stephen Welsh [SOURCE] (http://www.eng.auburn.edu/~nelson/courses/elec5260_6260/ARM_AssyLang.pdf) [cp]  
One significant change from x86 to ARM is register calls: eax vs r1  
General purpose registers ( R0 - R7 )  
General registers with no special use ( R8 - R12 )  
Special purpose registers ( R13 - R15 )  
*R13 is Stack Pointer (SP) - store contents of any register, a function to use on the stack on entry of a subroutine  
*R14 is Link Register (LR) - holds the return address for a subroutine  
*R15 is Program Counter (PC) or instruction pointer - performs next instruction  
   
CPSR : Current Processor Status Registers  
	>  31     30     29     28     27  . . . . . . 8     7     6      5        4 . . . 0   
	>|  N   |   Z   |   C  |   V   |        SBZ         |  I   |  F  | SBZ |  MODE  |  


####Flags
Negative : (N)  
Zero : (Z)  
Carry: (C)  
####System control
Overflow: (V)   
I bit : if Interrupts (I)  
F bit : Fast Interrupts (F)  
  
ARM instruction set divided into six broad classes: Data Movement, Arithmetic, Memory Access, Logical and Bit Manipulation, Flow control, and System Control/ Privileged
  
Instruction Mnemonics  
	+---------------------------------------------------------+--------------------------------------------------------+  
	|   Operation                                                   |   Operation                                                 |  
	|   Mnemonic        meaning                           |   Mnemonic               meaning                  |   
	+---------------------------------------------------------+--------------------------------------------------------+  
	     ADC             Add with carry                               MVN                  Logical NOT           
	     ADD
	     AND
	     BAL
	     B(cc)
	     BIC
	     BLAL
 	    BL(cc)
	     CMP
 	    EOR
	     LDM
	     LDR
	     LDRB
	     MLA
	     MOV
	     MRS
	     MSR
	     MUL

Conditional code (cc) Mnemonics  
CS Carry Set
 



