//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, NTKFaceColorScheme;

@interface NTKActivityDialSegment : NSObject
{
    double _alpha;
    NTKFaceColorScheme *_colorScheme;
    CALayer *_arcLayer;
    CALayer *_tickLayer;
    double _tickRotation;
    double _tickScale;
}

@property(nonatomic) double tickScale; // @synthesize tickScale=_tickScale;
@property(nonatomic) double tickRotation; // @synthesize tickRotation=_tickRotation;
@property(retain, nonatomic) CALayer *tickLayer; // @synthesize tickLayer=_tickLayer;
@property(retain, nonatomic) CALayer *arcLayer; // @synthesize arcLayer=_arcLayer;
@property(retain, nonatomic) NTKFaceColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
- (void).cxx_destruct;
- (void)_updateTransform;
- (id)initWithHourIndex:(long long)arg1;

@end

