/*═════════════════════════════════════════════════════════════╗
├──────────────────────────────────────────────────────────────┤
			 _ __ ___   ___   __| |_   _| | ___  | |__  
			| '_ ` _ \ / _ \ / _` | | | | |/ _ \ | '_ \ 
			| | | | | | (_) | (_| | |_| | |  __/_| | | |
			|_| |_| |_|\___/ \__,_|\__,_|_|\___(_)_| |_|
├──────────────────────────────────────────────────────────────┤
		This header file contains the function prototypes for the
		core modules used within the ExOEx program.
├──────────────────────────────────────────────────────────────┤
╚═════════════════════════════════════════════════════════════*/


//── CONDITIONAL ──────────────────────────────────────────────┤
#ifndef module
#define module


//── FUNCTION PROTOTYPES ──────────────────────────────────────┤
void input(Planet*,Particle*);
void photonLoop(int,Particle*,Planet*);
void extraction(Particle*,Datasystem*);
void output(Datasystem*,Planet*);


//── CONDITIONAL ──────────────────────────────────────────────┤
#endif