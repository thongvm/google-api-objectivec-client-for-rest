// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Job Discovery (jobs/v2)
// Description:
//   Cloud Job Discovery provides the capability to create, read, update, and
//   delete job postings, as well as search jobs based on keywords and filters.
// Documentation:
//   https://cloud.google.com/job-discovery/docs

#import "GTLRJobService.h"

// ----------------------------------------------------------------------------
// Authorization scopes

NSString * const kGTLRAuthScopeJobService              = @"https://www.googleapis.com/auth/jobs";
NSString * const kGTLRAuthScopeJobServiceCloudPlatform = @"https://www.googleapis.com/auth/cloud-platform";

// ----------------------------------------------------------------------------
//   GTLRJobServiceService
//

@implementation GTLRJobServiceService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://jobs.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

@end