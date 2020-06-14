//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCColorGradient, NSArray, NSDate, NSDictionary, NSString;

@interface FCTopStoriesOperationResult : NSObject
{
    NSArray *_mandatoryHeadlines;
    NSArray *_optionalHeadlines;
    NSDate *_publishDate;
    NSDictionary *_topStoriesMetadataByArticleID;
    FCColorGradient *_backgroundColorGradient;
    NSString *_subtitle;
}

@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) FCColorGradient *backgroundColorGradient; // @synthesize backgroundColorGradient=_backgroundColorGradient;
@property(copy) NSDictionary *topStoriesMetadataByArticleID; // @synthesize topStoriesMetadataByArticleID=_topStoriesMetadataByArticleID;
@property(copy) NSDate *publishDate; // @synthesize publishDate=_publishDate;
@property(copy) NSArray *optionalHeadlines; // @synthesize optionalHeadlines=_optionalHeadlines;
@property(copy) NSArray *mandatoryHeadlines; // @synthesize mandatoryHeadlines=_mandatoryHeadlines;
- (void).cxx_destruct;
- (id)initWithTopStoriesGroupConfig:(id)arg1 mandatoryHeadlines:(id)arg2 optionalHeadlines:(id)arg3 topStoriesMetadataByArticleID:(id)arg4 publishDate:(id)arg5 subtitle:(id)arg6;

@end

