//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/NSSecureCoding-Protocol.h>

@interface ARCameraParameters : NSObject <NSSecureCoding>
{
    struct CGSize _imageResolution;
    struct CGPoint _focalLength;
    struct CGPoint _principalPoint;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) struct CGPoint principalPoint; // @synthesize principalPoint=_principalPoint;
@property(readonly, nonatomic) struct CGPoint focalLength; // @synthesize focalLength=_focalLength;
@property(readonly, nonatomic) struct CGSize imageResolution; // @synthesize imageResolution=_imageResolution;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFocalLength:(struct CGPoint)arg1 imageResolution:(struct CGSize)arg2 principalPoint:(struct CGPoint)arg3;

@end

