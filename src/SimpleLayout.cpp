/*
 * SimpleLayout.cpp
 *
 * Copyright 2000, LifeLine Networks BV (www.lifeline.nl). All rights reserved.
 * Copyright 2000, Bastiaan Bakker. All rights reserved.
 *
 * See the LICENSE file for the terms of usage and distribution.
 */

#include <strstream>
#include "log4cpp/SimpleLayout.hh"
#include "log4cpp/Priority.hh"

namespace log4cpp {

    SimpleLayout::SimpleLayout() {
    }
    
    SimpleLayout::~SimpleLayout() {
    }

    char* SimpleLayout::format(const LoggingEvent& event) {
        ostrstream message;

        const string& priorityName = Priority::getPriorityName(event.priority);
        message << priorityName << " - " << event.message << endl << '\0';

        return message.str();
    }
}
