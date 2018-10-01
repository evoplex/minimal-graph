// Evoplex <https://evoplex.org>

#ifndef MINIMAL_GRAPH_H
#define MINIMAL_GRAPH_H

#include <plugininterface.h>

namespace evoplex {
class MinimalGraph: public AbstractGraph
{
public:
    /** [OPTIONAL]
     * @brief Initializes the plugin.
     * This method is called when the plugin is created and
     * is mainly used to validate inputs and set the environment.
     * The default implementation does nothing.
     * @return true if successful
     */
    //bool init() override;

    /** [MANDATORY]
     * @brief Resets the graph object to the original state.
     * This method is triggered after a successful AbstractPlugin::init().
     * @returns true if successful.
     */
    bool reset() override;
};
} // evoplex
#endif // MINIMAL_GRAPH_H
