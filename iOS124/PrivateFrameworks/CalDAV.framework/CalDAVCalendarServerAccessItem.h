//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerAccessItem : CoreDAVItem
{
    CoreDAVItemWithNoChildren *_accessLevel;
}

@property(retain, nonatomic) CoreDAVItemWithNoChildren *accessLevel; // @synthesize accessLevel=_accessLevel;
- (void).cxx_destruct;
- (id)copyParseRules;
- (id)initWithAccess:(int)arg1;
- (id)init;

@end

