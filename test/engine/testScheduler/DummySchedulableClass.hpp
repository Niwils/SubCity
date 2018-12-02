#pragma once
#include "../../../src/inc/types/defs.hpp"
#include <VSchedulableClass.hpp>
#include <GameObjectScheduler.hpp>
#include <iostream>

namespace test {
        class DummySchedulableClass : public subcity::engine::VSchedulableClass
        {
        public:
                DummySchedulableClass(scTick _tickrate, scTick _starting_tick)
                        : subcity::engine::VSchedulableClass(_tickrate, _starting_tick)
                        , mNbExecution(0)
                        {
                        }

                ~DummySchedulableClass(){}


                void execute()
                {
                        subcity::engine::VSchedulableClass::execute();
                        mNbExecution++;
                }

                scTick getNbExecution()
                {
                        return mNbExecution;
                }

        private:
                scTick mNbExecution;
        };
}