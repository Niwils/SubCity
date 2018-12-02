#ifndef _TEST_SCHEDULER_HPP_
#define _TEST_SCHEDULER_HPP_
/**
*   Test for Scheduler and VSchedulableObject classes.
*							
*-------- CHANGELOG --------
*
* 01.12.2018 - v 1.0 - Niels
* Initial draft.
*
*------- LICENSE -------
*
* TODO
*
*/
#include "DummySchedulableClass.hpp"
#include <GameObjectScheduler.hpp>
#include <cxxtest/TestSuite.h>

namespace subcity { namespace test { class TestScheduler; }}

class subcity::test::TestScheduler : public CxxTest::TestSuite
{
        public:
                TestScheduler();
                ~TestScheduler();

                void testScheduler();

        private:
                subcity::engine::GameObjectScheduler *mGameScheduler;
                ::test::DummySchedulableClass *mDummySchedulableObject;
};

#endif