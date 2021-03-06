// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Abusive Experience Report API (abusiveexperiencereport/v1)
// Description:
//   Views Abusive Experience Report data, and gets a list of sites that have a
//   significant number of abusive experiences.
// Documentation:
//   https://developers.google.com/abusive-experience-report/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Abusive Experience Report query classes.
 */
@interface GTLRAbusiveExperienceReportQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Gets a summary of the abusive experience rating of a site.
 *
 *  Method: abusiveexperiencereport.sites.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAbusiveExperienceReportXapiZoo
 */
@interface GTLRAbusiveExperienceReportQuery_SitesGet : GTLRAbusiveExperienceReportQuery
// Previous library name was
//   +[GTLQueryAbusiveExperienceReport queryForSitesGetWithname:]

/**
 *  The required site name. This is the site property whose abusive
 *  experiences have been reviewed, and it must be URL-encoded. For example,
 *  sites/https%3A%2F%2Fwww.google.com. The server will return an error of
 *  BAD_REQUEST if this field is not filled in. Note that if the site property
 *  is not yet verified in Search Console, the reportUrl field
 *  returned by the API will lead to the verification page, prompting the user
 *  to go through that process before they can gain access to the Abusive
 *  Experience Report.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRAbusiveExperienceReport_SiteSummaryResponse.
 *
 *  Gets a summary of the abusive experience rating of a site.
 *
 *  @param name The required site name. This is the site property whose abusive
 *    experiences have been reviewed, and it must be URL-encoded. For example,
 *    sites/https%3A%2F%2Fwww.google.com. The server will return an error of
 *    BAD_REQUEST if this field is not filled in. Note that if the site property
 *    is not yet verified in Search Console, the reportUrl field
 *    returned by the API will lead to the verification page, prompting the user
 *    to go through that process before they can gain access to the Abusive
 *    Experience Report.
 *
 *  @return GTLRAbusiveExperienceReportQuery_SitesGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists sites with Abusive Experience Report statuses of "Failing".
 *
 *  Method: abusiveexperiencereport.violatingSites.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAbusiveExperienceReportXapiZoo
 */
@interface GTLRAbusiveExperienceReportQuery_ViolatingSitesList : GTLRAbusiveExperienceReportQuery
// Previous library name was
//   +[GTLQueryAbusiveExperienceReport queryForViolatingSitesList]

/**
 *  Fetches a @c GTLRAbusiveExperienceReport_ViolatingSitesResponse.
 *
 *  Lists sites with Abusive Experience Report statuses of "Failing".
 *
 *  @return GTLRAbusiveExperienceReportQuery_ViolatingSitesList
 */
+ (instancetype)query;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
