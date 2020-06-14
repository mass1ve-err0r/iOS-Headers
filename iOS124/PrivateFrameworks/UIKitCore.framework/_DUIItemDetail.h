//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSArray;

@interface _DUIItemDetail : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _scalable;
    _Bool _rotatable;
    double _scale;
    double _rotationAngle;
    NSArray *_lastKnownImageComponents;
    struct CGPoint _anchorPoint;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *lastKnownImageComponents; // @synthesize lastKnownImageComponents=_lastKnownImageComponents;
@property(nonatomic) double rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) _Bool rotatable; // @synthesize rotatable=_rotatable;
@property(nonatomic) _Bool scalable; // @synthesize scalable=_scalable;
@property(nonatomic) struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

