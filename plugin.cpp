// Evoplex <https://evoplex.org>

#include "plugin.h"

namespace evoplex {


bool MinimalGraph::reset()
{
    return false;
}


} // evoplex
REGISTER_PLUGIN(MinimalGraph)
#include "plugin.moc"
