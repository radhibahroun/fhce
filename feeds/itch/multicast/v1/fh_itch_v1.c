/*
 * Copyright (C) 2008, 2009, 2010 The Collaborative Software Foundation.
 *
 * This file is part of FeedHandlers (FH).
 *
 * FH is free software: you can redistribute it and/or modify it under the terms of the
 * GNU Lesser General Public License as published by the Free Software Foundation, either version 3
 * of the License, or (at your option) any later version.
 *
 * FH is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without
 * even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with FH.  If not, see <http://www.gnu.org/licenses/>.
 */

// FH ITCH headers
#include "fh_itch.h"

/*! \brief Main function for the ITCH feed handler application
 *
 *  \param argc number of command line arguments
 *  \param argv array of command line arguments
 *  \return application's exit code
 */
int main(int argc, char **argv)
{
    // start an ITCH feed handler with version = 1
    return fh_itch_main(argc, argv, 1);
}
