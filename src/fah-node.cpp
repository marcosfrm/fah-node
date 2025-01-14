/******************************************************************************\

                   This file is part of FoldingAtHome/fah-node

        The fah-node enables secure remote access to Folding@home clients.
                      Copyright (c) 2023, foldingathome.org
                               All rights reserved.

       This program is free software; you can redistribute it and/or modify
       it under the terms of the GNU General Public License as published by
        the Free Software Foundation; either version 3 of the License, or
                       (at your option) any later version.

         This program is distributed in the hope that it will be useful,
          but WITHOUT ANY WARRANTY; without even the implied warranty of
          MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
                   GNU General Public License for more details.

     You should have received a copy of the GNU General Public License along
     with this program; if not, write to the Free Software Foundation, Inc.,
           51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

                  For information regarding this software email:
                                 Joseph Coffland
                          joseph@cauldrondevelopment.com

\******************************************************************************/

#include <fah/node/App.h>

#include <cbang/ApplicationMain.h>
#include <cbang/event/Event.h>
#include <cbang/event/Base.h>

#include <event2/thread.h>


int main(int argc, char *argv[]) {
#ifdef DEBUG
  cb::Event::Event::enableDebugMode();
#endif

  evthread_use_pthreads();
  cb::Event::Base::enableThreads();

  return cb::doApplication<FAH::Node::App>(argc, argv);
}
