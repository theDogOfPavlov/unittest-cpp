#ifndef UNITTEST_JUNITXMLTESTREPORTER_H
#define UNITTEST_JUNITXMLTESTREPORTER_H

#include "TestReporter.h"

namespace UnitTest {

   class UNITTEST_LINKAGE JUnitXmlTestReporter : public TestReporter
   {
   private:
      virtual void ReportTestStart(TestDetails const& test);
      virtual void ReportFailure(TestDetails const& test, char const* failure);
      virtual void ReportTestFinish(TestDetails const& test, float secondsElapsed);
      virtual void ReportSummary(int totalTestCount, int failedTestCount, int failureCount, float secondsElapsed);
   };

}

#endif
