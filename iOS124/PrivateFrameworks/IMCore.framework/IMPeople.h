//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface IMPeople : NSObject
{
    NSMutableArray *_people;
    int _coalesceCount;
    _Bool _hidePeople;
}

@property(nonatomic, setter=setShouldHidePeople:) _Bool hidePeople; // @synthesize hidePeople=_hidePeople;
- (void).cxx_destruct;
- (void)imHandle:(id)arg1 buddyStatusChanged:(_Bool)arg2;
- (_Bool)addPeopleFromArray:(id)arg1;
- (_Bool)addPeopleFromArray:(id)arg1 skipMe:(_Bool)arg2;
- (_Bool)removePeopleFromArray:(id)arg1;
- (_Bool)removeIMHandle:(id)arg1;
- (_Bool)addIMHandle:(id)arg1;
@property(readonly, nonatomic) _Bool coalescingChanges;
- (void)endCoalescedChanges;
- (void)beginCoalescedChanges;
- (void)removedIMHandle:(id)arg1;
- (void)_addedPeople:(id)arg1;
- (void)addedIMHandle:(id)arg1;
@property(readonly, nonatomic) NSArray *people;
@property(readonly, nonatomic) NSArray *groups;
- (_Bool)containsIMHandle:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (void)addNotificationObserver:(id)arg1 selector:(SEL)arg2;
- (void)removeNotificationObserver:(id)arg1;
- (void)dealloc;

@end

