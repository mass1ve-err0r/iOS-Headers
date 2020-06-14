//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, _DKEvent;

@interface _DKSyncWindow : NSObject
{
    _DKEvent *_event;
    NSDate *_startDate;
    NSDate *_endDate;
}

+ (id)linearDescriptionOfSortedWindows:(id)arg1;
+ (id)unionOfSortedSyncWindows:(id)arg1;
+ (id)redundantWindowsFromSortedWindows:(id)arg1 olderThanDate:(id)arg2;
+ (id)lastWindowMissingFromSortedWindows:(id)arg1 windowMinimumDate:(id)arg2 windowMaximumDate:(id)arg3;
+ (id)windowsThatOverlapWithWindowMinimumDate:(id)arg1 windowMaximumDate:(id)arg2 sortedSyncWindows:(id)arg3;
+ (id)syncWindowWithStartDate:(id)arg1 endDate:(id)arg2;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) _DKEvent *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (long long)compare:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToWindow:(id)arg1;
- (unsigned long long)hash;
- (id)unionWithSyncWindow:(id)arg1;
- (id)initWithEvent:(id)arg1;

@end

