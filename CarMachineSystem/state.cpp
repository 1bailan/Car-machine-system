#include "state.h"

Context::Context(State *state) : state(state)
{

}

Context::~Context()
{
    delete state;
}

void Context::setState(State *state)
{
    delete this->state;
    this->state = state;
}

void Context::request(MainWindow *mainWindow)
{
    state->handle(mainWindow);
}

State *Context::getState() const
{
    return state;
}
