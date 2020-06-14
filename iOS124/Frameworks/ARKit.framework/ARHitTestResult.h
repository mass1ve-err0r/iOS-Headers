//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ARAnchor;

@interface ARHitTestResult : NSObject
{
    unsigned long long _type;
    double _distance;
    ARAnchor *_anchor;
    CDStruct_14d5dc5e _localTransform;
    CDStruct_14d5dc5e _worldTransform;
}

@property(retain, nonatomic) ARAnchor *anchor; // @synthesize anchor=_anchor;
@property(nonatomic) CDStruct_14d5dc5e worldTransform; // @synthesize worldTransform=_worldTransform;
@property(nonatomic) CDStruct_14d5dc5e localTransform; // @synthesize localTransform=_localTransform;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)debugQuickLookObject;
- (id)description;
- (id)_description:(_Bool)arg1;
- (id)initWithType:(unsigned long long)arg1;

@end

