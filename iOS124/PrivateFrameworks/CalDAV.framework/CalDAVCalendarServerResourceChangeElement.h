//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItemWithHrefChildItem.h>

@class CalDAVUpdateOwnerItem, NSURL;

@interface CalDAVCalendarServerResourceChangeElement : CoreDAVItemWithHrefChildItem
{
    CalDAVUpdateOwnerItem *_changedBy;
}

@property(retain, nonatomic) CalDAVUpdateOwnerItem *changedBy; // @synthesize changedBy=_changedBy;
- (void).cxx_destruct;
- (id)copyParseRules;
@property(readonly, nonatomic) NSURL *fullHrefURL;
- (id)init;

@end

