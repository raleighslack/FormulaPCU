#include <gui/mainscr_screen/mainscrView.hpp>

mainscrView::mainscrView()
{

}

void mainscrView::setupScreen()
{
    mainscrViewBase::setupScreen();

    tickCounter = 0;
    demoCounterValue = 0;
}

void mainscrView::tearDownScreen()
{
    mainscrViewBase::tearDownScreen();
}

void mainscrView::handleTickEvent()
{
    tickCounter++;

    // Update the text box roughly every 2 seconds (120 ticks)
    if (tickCounter >= 60)
    {
        tickCounter = 0; // Reset the timer
        demoCounterValue++; // Advance your demo state/number

        // Print the changing value into the text box buffer
        touchgfx::Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", demoCounterValue);

        // Force TouchGFX to redraw the modified text box
        textArea1.invalidate();
    }
}
