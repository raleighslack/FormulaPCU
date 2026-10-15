#ifndef MAINSCRVIEW_HPP
#define MAINSCRVIEW_HPP

#include <gui_generated/mainscr_screen/mainscrViewBase.hpp>
#include <gui/mainscr_screen/mainscrPresenter.hpp>

class mainscrView : public mainscrViewBase
{
public:
    mainscrView();
    virtual ~mainscrView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void handleTickEvent();
protected:
    int tickCounter;
    int demoCounterValue;
};

#endif // MAINSCRVIEW_HPP
