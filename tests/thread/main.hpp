#pragma once

#include <utki/debug.hpp>

#include "tests.hpp"



inline void TestTingThread(){
//	TRACE(<< "running TestManyThreads..." << std::endl)
	TestManyThreads::Run();

//	TRACE(<< "running TestJoinBeforeAndAfterThreadHasFinished" << std::endl)
	TestJoinBeforeAndAfterThreadHasFinished::Run();

//	TRACE(<< "running TestImmediateExitThread" << std::endl)
	TestImmediateExitThread::Run();

//	TRACE(<< "running TestNestedJoin" << std::endl)
	TestNestedJoin::Run();
}
