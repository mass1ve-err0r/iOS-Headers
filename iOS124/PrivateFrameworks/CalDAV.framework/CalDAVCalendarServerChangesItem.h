//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVCalendarServerChangesItem : CoreDAVItem
{
    NSMutableSet *_changedProperties;
}

@property(retain, nonatomic) NSMutableSet *changedProperties; // @synthesize changedProperties=_changedProperties;
- (void).cxx_destruct;
- (id)copyParseRules;
- (void)addChangedProperty:(id)arg1;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)init;

@end

