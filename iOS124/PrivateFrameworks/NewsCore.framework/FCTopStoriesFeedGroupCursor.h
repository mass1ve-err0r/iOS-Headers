//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCFeedGroupEmittingCursor.h>

@class NSArray, NSDate;

@interface FCTopStoriesFeedGroupCursor : FCFeedGroupEmittingCursor
{
    _Bool _collapsed;
    NSDate *_publishDate;
    NSArray *_articleIDs;
    NSDate *_optionalStoriesLastRefreshDate;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=isCollapsed) _Bool collapsed; // @synthesize collapsed=_collapsed;
@property(copy, nonatomic) NSDate *optionalStoriesLastRefreshDate; // @synthesize optionalStoriesLastRefreshDate=_optionalStoriesLastRefreshDate;
@property(copy, nonatomic) NSArray *articleIDs; // @synthesize articleIDs=_articleIDs;
@property(copy, nonatomic) NSDate *publishDate; // @synthesize publishDate=_publishDate;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

