#include <wiringPi.h>
#include "Midi.h"
#include "FloppyPlayer.h"
#include <iostream>

int main()
{
    if ( -1 == wiringPiSetupGpio() ) {
        std::cout << "Could not setup GPIO!" << std::endl;
        return 0;
    }
    midiEvent event = {69, NOTE_DOWN, 0};
    std::vector<midiEvent> events;
    events.push_back( event );
    //event = {69, NOTE_UP, 1000000}
    //events.push_back(event);
    events.push_back( {69, NOTE_UP, 1000000} );
    FloppyPlayer player( {4, 17} );
    player.Play( &events );
    return 0;
}
