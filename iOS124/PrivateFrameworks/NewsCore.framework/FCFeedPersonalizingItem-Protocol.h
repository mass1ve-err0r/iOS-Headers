//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, NSArray, NSDate, NSString;

@protocol FCFeedPersonalizingItem <NSObject>
@property(readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *publisherCohorts;
@property(readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts;
@property(readonly, nonatomic, getter=isHiddenFromAutoFavorites) _Bool hiddenFromAutoFavorites;
@property(readonly, nonatomic) _Bool hasVideo;
@property(readonly, nonatomic, getter=isPaid) _Bool paid;
@property(readonly, nonatomic, getter=isANF) _Bool anf;
@property(readonly, nonatomic) _Bool hasGlobalUserFeedback;
@property(readonly, nonatomic) double globalUserFeedback;
@property(readonly, copy, nonatomic) NSArray *topicIDs;
@property(readonly, copy, nonatomic) NSString *publisherID;
@property(readonly, nonatomic) unsigned long long halfLife;
@property(readonly, copy, nonatomic) NSDate *publishDate;
@property(readonly, copy, nonatomic) NSString *itemID;
@property(readonly, copy, nonatomic) NSString *sourceFeedID;
- (void)enumerateTopicCohortsWithBlock:(void (^)(NSString *, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *))arg1;

@optional
@property(readonly, nonatomic, getter=isBundlePaid) _Bool bundlePaid;
@end

