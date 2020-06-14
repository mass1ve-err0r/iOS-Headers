//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKHourLabelCollectionNode.h>

@class NSArray;

@interface NTKZeusHourLabelCollectionNode : NTKHourLabelCollectionNode
{
    unsigned long long _bleed;
    struct CGPoint _childrenDefaultPositions[12];
    struct CGPoint _childrenStatusPositions[12];
    unsigned long long _density;
    NSArray *_visibleNodesForCurrentDensity;
}

+ (id)hours12ZeusWithFont:(long long)arg1 bleed:(unsigned long long)arg2 forDevice:(id)arg3;
@property(retain, nonatomic) NSArray *visibleNodesForCurrentDensity; // @synthesize visibleNodesForCurrentDensity=_visibleNodesForCurrentDensity;
@property(nonatomic) unsigned long long density; // @synthesize density=_density;
- (void).cxx_destruct;
- (_Bool)_hourNumberAtIndex:(unsigned long long)arg1 isVisibleWithDensity:(unsigned long long)arg2;
- (void)applyTransitionFraction:(double)arg1 fromDensity:(unsigned long long)arg2 toDensity:(unsigned long long)arg3;
- (struct CGPoint)childStatusPositionForIndex:(long long)arg1;
- (struct CGPoint)childDefaultPositionForIndex:(long long)arg1;
- (void)_setupPositions;
- (void)createSubNodes;
- (id)initWithFont:(long long)arg1 bleed:(unsigned long long)arg2 forDevice:(id)arg3;

@end

