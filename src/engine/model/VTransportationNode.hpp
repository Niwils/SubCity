/**
*   VTransportationNode class .
*	This class is used to represent, as a graph,
*	the transportation infrastructure.
*	Transportation carriers shall be seen as tokens,
*	transported over the graph.
*							
*-------- CHANGELOG --------
*
* 25.11.2018 - v 1.0 - Niels
* Initial draft.
*
*------- LICENSE -------
*
* TODO
*
*/

#include <VSurface.h>

namespace subcity {
	namespace engine {
		class VTransportationNode : public VSurface
		{
		public:
			VTransportationNode(scUINT8 _nbMaxConnections)
				: VGameElement()
				, mNbMaxConnections(_nbMaxConnections)
				{

				}

			virtual ~VTransportationNode();

			VTransportationNode* getConnections(scUuid _from);

		protected:
			VTransportationNode *mConnections;
			static scUINT8 mNbMaxConnections;
		};
	}
}