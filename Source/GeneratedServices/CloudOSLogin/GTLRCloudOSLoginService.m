// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud OS Login API (oslogin/v1)
// Description:
//   Manages OS login configuration for Google account users.
// Documentation:
//   https://cloud.google.com/compute/docs/oslogin/

#import "GTLRCloudOSLogin.h"

// ----------------------------------------------------------------------------
// Authorization scopes

NSString * const kGTLRAuthScopeCloudOSLoginCloudPlatform = @"https://www.googleapis.com/auth/cloud-platform";
NSString * const kGTLRAuthScopeCloudOSLoginCompute       = @"https://www.googleapis.com/auth/compute";

// ----------------------------------------------------------------------------
//   GTLRCloudOSLoginService
//

@implementation GTLRCloudOSLoginService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://oslogin.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

@end
