//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCollectionNode.h>

@interface NTKTickCollectionNode : NTKCollectionNode
{
    unsigned int _ticks;
    unsigned int _l1mod;
    unsigned int _l2mod;
    double _smallColor;
    double _largeColor;
    double _smallFilterWidth;
    double _largeFilterWidth;
    struct CGSize _smallSizeInPoints;
    struct CGSize _largeSizeInPoints;
}

@property(nonatomic) unsigned int l2mod; // @synthesize l2mod=_l2mod;
@property(nonatomic) unsigned int l1mod; // @synthesize l1mod=_l1mod;
@property(nonatomic) double largeFilterWidth; // @synthesize largeFilterWidth=_largeFilterWidth;
@property(nonatomic) double smallFilterWidth; // @synthesize smallFilterWidth=_smallFilterWidth;
@property(nonatomic) struct CGSize largeSizeInPoints; // @synthesize largeSizeInPoints=_largeSizeInPoints;
@property(nonatomic) struct CGSize smallSizeInPoints; // @synthesize smallSizeInPoints=_smallSizeInPoints;
@property(nonatomic) double largeColor; // @synthesize largeColor=_largeColor;
@property(nonatomic) double smallColor; // @synthesize smallColor=_smallColor;
@property(nonatomic) unsigned int ticks; // @synthesize ticks=_ticks;
- (void)colorizeBackground:(id)arg1;
- (void)colorizeWithTickColor:(id)arg1 alternateTickColor:(id)arg2;
- (void)createSubNodes;

@end

