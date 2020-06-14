//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSMutableSet, UIColor;

__attribute__((visibility("hidden")))
@interface _UIFocusRegionMapEntry : NSObject <NSCopying>
{
    _UIFocusRegionMapEntry *_originalEntry;
    _UIFocusRegionMapEntry *_parentEntry;
    NSMutableSet *_occludingFrames;
    struct CGRect _frame;
    struct CGRect _originalRegionFrame;
}

@property(retain, nonatomic) NSMutableSet *occludingFrames; // @synthesize occludingFrames=_occludingFrames;
@property(retain, nonatomic) _UIFocusRegionMapEntry *parentEntry; // @synthesize parentEntry=_parentEntry;
@property(retain, nonatomic) _UIFocusRegionMapEntry *originalEntry; // @synthesize originalEntry=_originalEntry;
@property(nonatomic) struct CGRect originalRegionFrame; // @synthesize originalRegionFrame=_originalRegionFrame;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) long long visualRepresentationPatternType;
@property(readonly, copy, nonatomic) UIColor *visualRepresentationColor;
- (id)_uniqueElementFromArray:(id)arg1 forKey:(id)arg2;
- (void)_wasOccludedByFrame:(struct CGRect)arg1;
- (id)sliceWithFrame:(struct CGRect)arg1;
- (id)_mapEntriesByOccludingWithFrame:(struct CGRect)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFrame:(struct CGRect)arg1 originalRegionFrame:(struct CGRect)arg2;

@end

